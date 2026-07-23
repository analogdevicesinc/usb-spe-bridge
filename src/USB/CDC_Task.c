/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "USB_Task.h"
#include "USB_Task_private.h"
#include "TaskPriorities.h"
#include "Logging.h"

#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"
#include "queue.h"
#include "stream_buffer.h"

#include "bsp/board_api.h"
#include "tusb.h"

#include "mxc_device.h"
#include "mcr_regs.h"
#include "mxc_sys.h"
#include "nvic_table.h"

#include <assert.h>

/* Have a timeout to periodically check the CDC buffers */
#define CDC_TIMEOUT_MS          50

/* Flags to wake up the CDC task on different events */
#define CDC_TASK_FLAG_TXDONE    (0x1UL << 0)
#define CDC_TASK_FLAG_RXREADY   (0x1UL << 1)
#define CDC_TASK_FLAG_TOSEND    (0x1UL << 2)
#define CDC_TASK_FLAG_RXTAKEN   (0x1UL << 3)

/* Sizes of the data buffers, adjust as necessary */
#define CDC_RX_STREAMBUFF_SIZE  128
#define CDC_TX_STREAMBUFF_SIZE  1024

/* Set this to echo characters back to the user */
#define CDC_DO_ECHO     0

/* Buffer is the size of the TinyUSB CDC Buffer */
#define CDC_TEMP_BUFF_SIZE  TU_MAX(CFG_TUD_CDC_RX_BUFSIZE, CDC_TX_STREAMBUFF_SIZE)

static TaskHandle_t cdcTask;

/* Use static allocation for these stream buffers since the size can vary */
static StreamBufferHandle_t cdcRxStreamBuff;
static StaticStreamBuffer_t cdcRxStreamBuffStruct;
static uint8_t cdcRxStreamBuffStorage[CDC_RX_STREAMBUFF_SIZE + 1];             //+1 per documentation

static StreamBufferHandle_t cdcTxStreamBuff;
static StaticStreamBuffer_t cdcTxStreamBuffStruct;
static uint8_t cdcTxStreamBuffStorage[CDC_TX_STREAMBUFF_SIZE + 1];             //+1 per documentation

/* The FreeRTOS stream buffers assume only 1 task will be accessing the
 * stream buffers in each direction.  Its possible, especially in a console
 * context that multiple tasks may want to tx or less likely rx. Wrap accesses
 * to these buffers with a mutex
 */
static SemaphoreHandle_t rxStreamLock;
static SemaphoreHandle_t txStreamLock;

/* Temp buffer off the stack for doing tx/rx transfers */
static char tempBuff[CDC_TEMP_BUFF_SIZE];

/* Local prototypes */
static void CDC_TaskBody(void *pvParameters);

/* Flag to make sure things are initialized before running */
static bool isInitialized = false;

void CDC_TaskInit( )
{
    rxStreamLock = xSemaphoreCreateMutex();
    txStreamLock = xSemaphoreCreateMutex();
    cdcRxStreamBuff = xStreamBufferCreateStatic(CDC_RX_STREAMBUFF_SIZE, 1,
                                                cdcRxStreamBuffStorage, &cdcRxStreamBuffStruct);
    cdcTxStreamBuff = xStreamBufferCreateStatic(CDC_TX_STREAMBUFF_SIZE, 1,
                                                cdcTxStreamBuffStorage, &cdcTxStreamBuffStruct);
    xTaskCreate(CDC_TaskBody, (const char *)"CDC",
                256, NULL, TASK_PRIO_CDC,
                &cdcTask);
    isInitialized = true;
}

/**
 * Transmit task body.
 */
static void CDC_TaskBody(void *pvParameters)
{
    uint32_t bytesRead;
    uint32_t bytesWritten;
    uint32_t bytesAvail;
    uint32_t flags;
    bool didWork;

    while (1) {
        //Assume no work was performed
        didWork = false;

        //Do RX First. The strategy here is that the CDC will always receive the
        //data and the stream buffer is the gate keeper of whether data gets
        //dropped. The application needs to empty the stream buffer in a timely
        //manner otherwise it'll just get thrown away.
        bytesAvail = tud_cdc_available();
        if (bytesAvail) {
            didWork = true;
            bytesRead = tud_cdc_read(tempBuff, CDC_TEMP_BUFF_SIZE);
#if CDC_DO_ECHO
            tud_cdc_write(tempBuff, bytesRead);
            tud_cdc_write_flush();
#endif

            if ((bytesWritten = xStreamBufferSend(cdcRxStreamBuff, tempBuff, bytesRead, 0)) != bytesRead) {
                LOG_MSG_WARN(CDC, "RX Data Dropped (%d/%d)", bytesRead, bytesWritten);
            }
        }

        //Now do TX
        //The strategy here again is the stream buffer is what throttles the
        //interface. The task will write data from the stream buffer to CDC as
        //fast as it can. If the user tries to push too much data into the stream
        //buffer, it can either block (during the CDC_WriteBytes call), or
        //just get a report of how many bytes were actually written.
        bytesAvail = tud_cdc_write_available();
        if (bytesAvail) {
            bytesRead = xStreamBufferReceive(cdcTxStreamBuff, tempBuff, bytesAvail, 0);
            if (bytesRead) {
                didWork = true;
                tud_cdc_write(tempBuff, bytesRead);
                tud_cdc_write_flush();
            }
        }

        //Only sleep if no additional work to do
        if (!didWork) {
            xTaskNotifyWait(0x0, 0xFFFFFFFF, &flags, pdMS_TO_TICKS(CDC_TIMEOUT_MS));
        }
    }
}

uint32_t CDC_WriteBytes(char *buf, uint32_t numBytes, TickType_t timeout)
{
    uint32_t bytesWritten = 0;

    assert(isInitialized);
    if (xSemaphoreTake(txStreamLock, timeout) == pdPASS) {
        // NOTE: Due to FreeRTOS calls, the timeout may be inaccurate since it
        // is supplied both to xSemaphoreTake and xStreamBufferSend.
        bytesWritten = xStreamBufferSend(cdcTxStreamBuff, buf, numBytes, timeout);
        if (bytesWritten) {
            //Wake up the task if its sleeping
            xTaskNotify(cdcTask, CDC_TASK_FLAG_TOSEND, eSetBits);
        }
        xSemaphoreGive(txStreamLock);
    }

    return bytesWritten;
}

uint32_t CDC_ReadBytes(char *buf, uint32_t numBytes, TickType_t timeout)
{
    uint32_t bytesRead = 0;

    assert(isInitialized);
    if (xSemaphoreTake(rxStreamLock, timeout) == pdPASS) {
        // NOTE: Due to FreeRTOS calls, the timeout may be inaccurate since it
        // is supplied both to xSemaphoreTake and xStreamBufferSend.
        xStreamBufferSetTriggerLevel(cdcRxStreamBuff, numBytes);
        bytesRead = xStreamBufferReceive(cdcRxStreamBuff, buf, numBytes, timeout);
        if (bytesRead) {
            //Wake up the task if its sleeping
            xTaskNotify(cdcTask, CDC_TASK_FLAG_RXTAKEN, eSetBits);
        }
        xSemaphoreGive(rxStreamLock);
    }

    return bytesRead;
}

/* Callback from TinyUSB on new data available */
void tud_cdc_rx_cb(uint8_t itf)
{
    xTaskNotify(cdcTask, CDC_TASK_FLAG_RXREADY, eSetBits);
}

/* Callback from TinyUSB when transmit is done */
void tud_cdc_tx_complete_cb(uint8_t itf)
{
    xTaskNotify(cdcTask, CDC_TASK_FLAG_TXDONE, eSetBits);
}
