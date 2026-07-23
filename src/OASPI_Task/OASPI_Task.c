/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include "OASPI_Task.h"
#include "TaskPriorities.h"
#include "Logging.h"
#include "ConfigMenuTask.h"
#include "Platform.h"

#include "oa_tc6.h"
#include "no_os_mutex.h"

#include "FreeRTOS.h"
#include "semphr.h"
#include "event_groups.h"
#include "queue.h"
#include "task.h"

#include <assert.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

//Size of the outgoing packet queue
#define RX_DESC_COUNT   32
#define TX_DESC_COUNT   32

//Length of the task name buffers
#define MAX_TASK_NAME   10

/* Flags to notify the util task */
#define UTIL_FLAG_READ_STATUS 0x1   //Need to read status reg
#define UTIL_FLAG_TX          0x2   //Need to transmit a packet

/* Register Event flags */
#define REG_EVENT_OK        0x1 //Reg read successful
#define REG_EVENT_ERR       0x2 //Reg read failed

//Pseudo-OOP using task structure for the data
struct oaspi_task_inst_t {
    //Reference to OASPI instance
    struct oa_tc6_desc *            tc6Inst;
    struct oa_tc6_init_param        initParams;
    struct no_os_spi_desc           spiDesc;
    struct no_os_spi_platform_ops   spiPlatformOps;
    struct no_os_spibus_desc        busDesc;

    //Callback/Handler functions
    PacketHandler                   pktHandler;
    OASPI_TaskSPI_Xfer              spiHandler;
    SemaphoreHandle_t               spiCompleteSem;

    //Register access data
    SemaphoreHandle_t               regAccessLock;

    //Tx data
    QueueHandle_t                   txQueue;

    //Task Data
    TaskHandle_t                    mainTask;
    TaskHandle_t                    utilTask;
    char                            mainTaskName[MAX_TASK_NAME];
    char                            utilTaskName[MAX_TASK_NAME];

    //Stats
    net_stats_t                     stats;
};

/* Actual instances of the multiple tasks' data */
static oaspi_task_inst_t oaspiTaskInsts[NUM_OASPI_INST];
static uint8_t oaspiNextInst = 0;


/* Local Prototypes */
static void OASPI_TaskBody(void *param);
static void OASPI_UtilTaskBody(void *param);
static bool OASPI_TaskRegAccess(oaspi_task_inst_t *inst, uint8_t mms, uint16_t startAddr, uint8_t numRegs, uint32_t *regBuf, bool isWrite);
static inline void OASPI_NotifyMainTask(oaspi_task_inst_t *inst, bool isr);
static int32_t OASPI_NoOs_Transfer(struct no_os_spi_desc *, struct no_os_spi_msg *msgs, uint32_t len);

oaspi_task_inst_t * OASPI_TaskCreateInstance( )
{
    oaspi_task_inst_t *inst;
    int8_t thisIdx = -1;

    taskENTER_CRITICAL();
    if (oaspiNextInst < NUM_OASPI_INST) {
        thisIdx = oaspiNextInst;
        oaspiNextInst++;
    }
    taskEXIT_CRITICAL();

    //No instance is available.
    if (thisIdx < 0) {
        return NULL;
    }

    inst = &(oaspiTaskInsts[thisIdx]);

    snprintf(inst->mainTaskName, MAX_TASK_NAME, "OASPI%d", thisIdx);
    snprintf(inst->utilTaskName, MAX_TASK_NAME, "OASPI_U%d", thisIdx);
    return inst;
}

/**
 * Initializes the OASPI task instance
 */
void OASPI_TaskInit(oaspi_task_inst_t * inst,
                    PacketHandler       pktHandler,
                    OASPI_TaskSPI_Xfer  spiHandler)
{
    assert(spiHandler);

    inst->pktHandler = pktHandler;
    inst->spiHandler = spiHandler;
    inst->spiCompleteSem = xSemaphoreCreateBinary();
    xSemaphoreGive(inst->spiCompleteSem);
    inst->regAccessLock = xSemaphoreCreateMutex();

    memset(&inst->stats, 0, sizeof(net_stats_t));
    inst->txQueue = xQueueCreate(TX_DESC_COUNT, sizeof(net_pkt_t *));

    //Setup the No-Os platform hooks.
    // Rather than using the No-Os platform layer, hook into our own SPI calls
    // to ensure the desired functionality
    inst->initParams.comm_desc = &inst->spiDesc;
    inst->initParams.prote_spi = true; //Use protected SPI
    inst->spiDesc.platform_ops = &inst->spiPlatformOps;
    inst->spiDesc.bus = &inst->busDesc;
    inst->spiDesc.extra = inst;  //Use the extra pointer to track the inst
    inst->spiPlatformOps.transfer = OASPI_NoOs_Transfer;
    no_os_mutex_init(&inst->busDesc.mutex);

    if (oa_tc6_init(&inst->tc6Inst, &inst->initParams) != 0) {
        LOG_MSG_ERR(OASPI, "Error creating OA_TC6 Instance");
        return;
    }

    xTaskCreate(OASPI_TaskBody, (const char *)inst->mainTaskName,
                768, inst, TASK_PRIO_OASPI_RT,
                &inst->mainTask);
}

/**
 * This is our implementation of the No-Os's SPI platform call. This takes
 * possibly multiple SPI messages, so loop through them. The No-Os implementation
 * currently does blocking calls, but given how much SPI traffic the OASPI could
 * be using, convert this to non-blocking:
 *   - Kick off the SPI transaction
 *   - Wait on the completion semaphore
 *   - The SPI HAL/PAL should call into the SPI completed callback, which then
 *     gives the sempahore, causing this task to wake up.
 */
static int32_t OASPI_NoOs_Transfer(struct no_os_spi_desc *  desc,
                                   struct no_os_spi_msg *   msgs,
                                   uint32_t                 len)
{
    int i = 0;
    oaspi_task_inst_t *inst = (oaspi_task_inst_t *)desc->extra;

    for (i = 0; i < len; i++) {
        xSemaphoreGive(inst->spiCompleteSem);                           //Reset the semaphore
        xSemaphoreTake(inst->spiCompleteSem, 0);                        //TODO: error check this
        if (msgs[i].bytes_number) {                                     //Make sure the buffer has > 0 bytes to send
            if (inst->spiHandler(msgs[i].tx_buff, msgs[i].rx_buff, msgs[i].bytes_number)) {
                xSemaphoreTake(inst->spiCompleteSem, portMAX_DELAY);    // Wait for OASPI
            } else {
                LOG_MSG_ERR(OASPI, "Error performing SPI Xfer");
            }
        }
    }
    return 0;
}

/**
 * External notification of an interrupt
 */
void OASPI_TaskNotifyIRQ(oaspi_task_inst_t *inst)
{
    assert(inst);
    //Just wake up the main task
    OASPI_NotifyMainTask(inst, true);
}

/**
 * External notification of SPI completion
 */
void OASPI_TaskNotifySPI_Complete(oaspi_task_inst_t *inst)
{
    BaseType_t higherPriorityTask;

    assert(inst);

    //Notify the SPI task waiting on completion.
    xSemaphoreGiveFromISR(inst->spiCompleteSem, &higherPriorityTask);
    portYIELD_FROM_ISR(higherPriorityTask);
}

/**
 * Allows outside tasks to read register(s)
 */
bool OASPI_TaskReadReg(oaspi_task_inst_t *inst, uint8_t mms, uint16_t startAddr,
                       uint8_t numReads, uint32_t *readBuf)
{
    return OASPI_TaskRegAccess(inst, mms, startAddr, numReads, readBuf, false);
}

/**
 * Allows outside tasks to write register(s)
 */
bool OASPI_TaskWriteReg(oaspi_task_inst_t *inst, uint8_t mms, uint16_t startAddr,
                        uint8_t numWrites, uint32_t *writeBuf)
{
    return OASPI_TaskRegAccess(inst, mms, startAddr, numWrites, writeBuf, true);
}

/**
 * Allows outside tasks to send a packet
 */
bool OASPI_TaskSendPacket(oaspi_task_inst_t *inst, net_pkt_t *pkt)
{
    bool result;

    assert(inst);
    assert(pkt);

    net_pkt_pool_add_ref(pkt);
    if (xQueueSend(inst->txQueue, &pkt, 0) != pdTRUE) {
        //Queue is full, drop the packet
        ATOMIC_INC(inst->stats.tx_drop);
        net_pkt_pool_unref(pkt);
        result = false;
    } else {
        //Success. Notify the main task in case it's sleeping
        OASPI_NotifyMainTask(inst, false);
        result = true;
    }

    return result;
}

/**
 * Allows outside task to get stats
 */
void OASPI_TaskGetStats(oaspi_task_inst_t *inst, net_stats_t *stats)
{
    assert(inst);
    assert(stats);

    //Stats are updated atomically. No protection needed here.
    memcpy(stats, &inst->stats, sizeof(net_stats_t));
}

void OASPI_TaskSetSync(oaspi_task_inst_t *inst, bool sync)
{
    assert(inst);
    //TODO:
    //adi_oaspi_SetSync(inst->instNum, true);
}

/**
 * Loads the oa_tc6 driver with incoming frame(s) should there be any and the
 * driver has room
 */
static bool OASPI_TaskLoadTx(oaspi_task_inst_t *inst)
{
    bool loaded = false;
    struct oa_tc6_frame_buffer *tempBuff;
    net_pkt_t *tempPkt;

    //Loop as long as there are frames to send
    while (!xQueueIsQueueEmptyFromISR(inst->txQueue)) {
        /* Get a frame buffer which can be filled and submitted for transmission */
        if (oa_tc6_get_tx_frame(inst->tc6Inst, &tempBuff) == 0) {
            if (xQueueReceive(inst->txQueue, &tempPkt, 0) == pdTRUE) {
                memcpy(tempBuff->data, tempPkt->data_ptr, tempPkt->bytes_used);
                //Minimum of 64 bytes required
                tempBuff->len = tempPkt->bytes_used;
                if (tempBuff->len < 64) {
                    tempBuff->len = 64;
                }

                //Nothing vendor specific right now
                tempBuff->vs = 0;
                ATOMIC_INC(inst->stats.tx);
                oa_tc6_put_tx_frame(inst->tc6Inst, tempBuff);
                net_pkt_pool_unref(tempPkt);
                loaded = true;
            }
        } else {
            //No more room in the oa_tc6. Exit the loop
            break;
        }
    }

    return loaded;
}


/**
 * Unloads frames from the oa_tc6, converts them to net_pkt_t and notifies the
 * handler
 */
static void OASPI_TaskUnloadRx(oaspi_task_inst_t *inst)
{
    struct oa_tc6_frame_buffer *tempBuff;
    net_pkt_t *tempPkt;

    while (oa_tc6_get_rx_frame(inst->tc6Inst, &tempBuff) == 0) {
        if (tempBuff->frame_drop) {
            ATOMIC_INC(inst->stats.rx_drop);
        } else {
            tempPkt = net_pkt_pool_get();
            if (tempPkt) {
                //Less 4 to discard the FCS at the end of the frame
                if (tempBuff->len >= 4) {
                    memcpy(tempPkt->data_ptr, tempBuff->data, tempBuff->len);
                    tempPkt->bytes_used = tempBuff->len - 4;
                    if (inst->pktHandler) {
                        inst->pktHandler(tempPkt);
                    }
                    ATOMIC_INC(inst->stats.rx);
                } else {
                    //Dropped since the frame wasn't even long enough to hold FCS
                    ATOMIC_INC(inst->stats.rx_drop);
                }
                net_pkt_pool_unref(tempPkt);
            } else {
                //Dropped
                ATOMIC_INC(inst->stats.rx_drop);
            }
        }

        //Return the frame to the oa_tc6 for future processing
        oa_tc6_put_rx_frame(inst->tc6Inst, tempBuff);
    }
}

/**
 * Task body for the main OASPI Task. This task is responsible for running the
 * main OASPI driver loop that sends, receives and handles chunks.
 * @param param - Pointer to the instance
 */
static void OASPI_TaskBody(void *param)
{
    oaspi_task_inst_t *inst = (oaspi_task_inst_t *)param;
    struct oa_tc6_flags xfer_flags;
    int ret;
    bool tx_loaded = false;

    xTaskCreate(OASPI_UtilTaskBody, inst->utilTaskName,
                256, inst, TASK_PRIO_OASPI_UTIL,
                &inst->utilTask);
    while (1) {
        tx_loaded = OASPI_TaskLoadTx(inst);

        /* Keep the task running if there is work to be done */
        if ((tx_loaded) || (inst->tc6Inst->data_rx_credit) ||
            (inst->tc6Inst->ctrl_rx_credit) || (inst->tc6Inst->ctrl_tx_credit)) {
            OASPI_NotifyMainTask(inst, false);
        }

        /* Use a count of events that need handling */
        ulTaskNotifyTake(pdFALSE, portMAX_DELAY);

        xSemaphoreTake(inst->regAccessLock, portMAX_DELAY);
        ret = oa_tc6_thread(inst->tc6Inst);
        if (ret) {
            LOG_MSG_ERR(OASPI, "TC6 error return %d", ret);
        }
        xSemaphoreGive(inst->regAccessLock);

        OASPI_TaskUnloadRx(inst);

        if (oa_tc6_get_xfer_flags(inst->tc6Inst, &xfer_flags, true) == 0) {
            if (xfer_flags.flags_valid && xfer_flags.exst) {
                xTaskNotify(inst->utilTask, UTIL_FLAG_READ_STATUS, eSetBits);
            }
        }
    }
}

/**
 * Task body for the utility task. This task is responsible for reading status
 * registers in the event of an error.
 * @param param - Instance pointer
 */
static void OASPI_UtilTaskBody(void *param)
{
    oaspi_task_inst_t *inst = (oaspi_task_inst_t *)param;
    uint32_t flags;
    uint32_t statusRegs[2];

    while (1) {
        //TODO: change to queue set
        xTaskNotifyWait(0x0, 0xFFFFFFFF, &flags, portMAX_DELAY);

        if (flags & UTIL_FLAG_READ_STATUS) {
            OASPI_TaskReadReg(inst, 0, 8, 2, statusRegs);
            LOG_MSG_DBG(OASPI, "Status 0x%08X | 0x%08X", statusRegs[0], statusRegs[1]);
            //TODO: Take action on the status results!
            OASPI_TaskWriteReg(inst, 0, 8, 2, statusRegs);
        }
    }
}

/**
 * Helper function to wake up the main task.
 * @param inst - Instance to wake up
 * @param isr - Flag if being called from an ISR
 */
static inline void OASPI_NotifyMainTask(oaspi_task_inst_t *inst, bool isr)
{
    BaseType_t xHigherPriorityTaskWoken;

    if (isr) {
        vTaskNotifyGiveFromISR(inst->mainTask, &xHigherPriorityTaskWoken);
        portYIELD_FROM_ISR(xHigherPriorityTaskWoken);
    } else {
        xTaskNotifyGive(inst->mainTask);
    }
}

/**
 * Generic register access function. Supports both reads and writes. Registers
 * can only be accessed 1 task at a time, so this will block if another task
 * is currently accessing them
 * @param inst - Instance pointer
 * @param mms - Register MMS
 * @param startAddr - First address in the access
 * @param numRegs - Number of registers to access
 * @param regBuf - Buffer with write data, or to read into
 * @param isWrite - True if a write, false if a read
 * @returns True on success, false otherwise
 */
static bool OASPI_TaskRegAccess(oaspi_task_inst_t *inst, uint8_t mms, uint16_t startAddr,
                                uint8_t numRegs, uint32_t *regBuf, bool isWrite)
{
    int i = 0;

    assert(inst);
    assert(regBuf);
    assert(numRegs <= OASPI_TASK_MAX_REG_ACCESS);


    for (i = 0; i < numRegs; i++) {
        xSemaphoreTake(inst->regAccessLock, portMAX_DELAY);
        if (isWrite) {
            oa_tc6_reg_write(inst->tc6Inst, OA_MMS_REG(mms, startAddr + i), regBuf[i]);
        } else {
            oa_tc6_reg_read(inst->tc6Inst, OA_MMS_REG(mms, startAddr + i), &regBuf[i]);
        }
        xSemaphoreGive(inst->regAccessLock);
    }

    OASPI_NotifyMainTask(inst, false);

    //TODO: Real error checking
    return true;
}

static int OASPI_TaskTokenizeUInts(char *str, uint32_t *arr, uint32_t max_ct)
{
    char *tok, *saveptr;
    int count = 0;

    if (str == NULL) {
        return 0;
    }

    tok = strtok_r(str, " ", &saveptr);
    for (count = 0; (count < max_ct) && (tok != NULL); count++) {
        arr[count] = (uint32_t)strtoul(tok, NULL, 0);
        tok = strtok_r(NULL, " ", &saveptr);
    }
    return count;
}

void OASPI_TaskCLI_ReadHandler(void *inst, char *args)
{
    char debugStr[32];
    uint32_t params[3];
    uint32_t count;
    uint32_t i;
    uint32_t readCt = 1;
    uint32_t regVal;
    uint32_t regAddr;

    assert(inst);

    count = OASPI_TaskTokenizeUInts(args, params, 3);
    if (count < 2) {
        ConfigMenuWriteLine("Not enough arguments provided.", 1, false);
        return;
    }

    if (count == 3) {
        readCt = params[2];
    }

    for (i = 0, regAddr = params[1]; i < readCt; i++, regAddr++) {
        snprintf(debugStr, sizeof(debugStr), "0x%02X:0x%04X - ", params[0], regAddr);
        ConfigMenuWriteLine(debugStr, 0, false);
        if (OASPI_TaskReadReg((oaspi_task_inst_t *)inst, params[0], regAddr, 1, &regVal)) {
            snprintf(debugStr, sizeof(debugStr), "0x%08X", regVal);
        } else {
            snprintf(debugStr, sizeof(debugStr), "Read Fail");
        }
        ConfigMenuWriteLine(debugStr, 1, false);
    }
}

void OASPI_TaskCLI_WriteHandler(void *inst, char *args)
{
    uint32_t params[3];
    uint32_t count;

    assert(inst);

    count = OASPI_TaskTokenizeUInts(args, params, 3);
    if (count < 3) {
        ConfigMenuWriteLine("Not enough arguments provided.", 1, false);
        return;
    }

    if (OASPI_TaskWriteReg((oaspi_task_inst_t *)inst, params[0], params[1], 1, &params[2])) {
        ConfigMenuWriteLine("Write OK.", 1, false);
    } else {
        ConfigMenuWriteLine("Write Fail.", 1, false);
    }
}
