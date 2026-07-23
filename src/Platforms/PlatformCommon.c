/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <string.h>
#include "Platform.h"
#include "PlatformCommon.h"

#include "mxc_device.h"
#include "mxc_delay.h"
#include "mxc_sys.h"
#include "mcr_regs.h"
#include "nvic_table.h"
#include "dma.h"
#include "flc.h"
#include "icc.h"
#include "i2c.h"
#include "spi.h"
#include "spi_reva1.h"

static void MAX_DMA_Handler(void);
static void MAX_GPIO0_Handler(void);
static void MAX_GPIO1_Handler(void);
static void MAX_GPIO2_Handler(void);
static void MAX_GPIO3_Handler(void);

void PlatformCommonInit( )
{
    int i;

    MXC_SYS_ClockEnable(MXC_SYS_PERIPH_CLOCK_GPIO0);
    MXC_SYS_ClockEnable(MXC_SYS_PERIPH_CLOCK_GPIO1);
    MXC_SYS_ClockEnable(MXC_SYS_PERIPH_CLOCK_GPIO2);
    MXC_SYS_ClockEnable(MXC_SYS_PERIPH_CLOCK_GPIO3);

    /* Configure all DMA channels. */
    for (i = 0; i < MXC_DMA_CHANNELS / 2; i++) {
#if MXC_DMA_INSTANCES == 1
        MXC_NVIC_SetVector(MXC_DMA_CH_GET_IRQ(i), MAX_DMA_Handler);
        NVIC_SetPriority(MXC_DMA_CH_GET_IRQ(i), 7);//Play nice with FreeRTOS
#else
#error "Unsupported DMA instance count"
#endif
    }

    MXC_NVIC_SetVector(GPIO0_IRQn, MAX_GPIO0_Handler);
    NVIC_SetPriority(GPIO0_IRQn, 7); //Compatible with FreeRTOS
    NVIC_EnableIRQ(GPIO0_IRQn);

    MXC_NVIC_SetVector(GPIO1_IRQn, MAX_GPIO1_Handler);
    NVIC_SetPriority(GPIO1_IRQn, 7); //Compatible with FreeRTOS
    NVIC_EnableIRQ(GPIO1_IRQn);

    MXC_NVIC_SetVector(GPIO2_IRQn, MAX_GPIO2_Handler);
    NVIC_SetPriority(GPIO2_IRQn, 7); //Compatible with FreeRTOS
    NVIC_EnableIRQ(GPIO2_IRQn);

    MXC_NVIC_SetVector(GPIO3_IRQn, MAX_GPIO3_Handler);
    NVIC_SetPriority(GPIO3_IRQn, 7); //Compatible with FreeRTOS
    NVIC_EnableIRQ(GPIO3_IRQn);
}

void PlatformCommonGpioInit(const mxc_gpio_cfg_t *gpioCfg, mxc_gpio_callback_fn callback,
                            void *cbdata, mxc_gpio_int_pol_t pol)
{
    MXC_GPIO_Config(gpioCfg);

    if (callback) {
        //Configure the external interrupt GPIO
        MXC_GPIO_RegisterCallback(gpioCfg, callback, cbdata);
        MXC_GPIO_IntConfig(gpioCfg, pol);
        MXC_GPIO_EnableInt(gpioCfg->port, gpioCfg->mask);
    }
}

void PlatformCommonI2cInit(i2c_inst_data_t *inst)
{
    MXC_I2C_Init(inst->i2cInst, 1, 0);
    MXC_I2C_SetFrequency(inst->i2cInst, 100000);
}

bool PlatformCommonI2cWriteRead(i2c_inst_data_t *inst, uint8_t nBusAddr,
                                uint8_t *pWrBuf, uint32_t nWrLen,
                                uint8_t *pRdBuf, uint32_t nRdLen,
                                bool bRepeatStart)
{
    bool result = false;
    mxc_i2c_req_t reqMaster;

    xSemaphoreTake(inst->busLock, portMAX_DELAY);
    reqMaster.i2c = inst->i2cInst;
    reqMaster.addr = nBusAddr;
    reqMaster.tx_buf = pWrBuf;
    reqMaster.tx_len = nWrLen;
    reqMaster.rx_buf = pRdBuf;
    reqMaster.rx_len = nRdLen;
    reqMaster.restart = bRepeatStart ? 1 : 0;

    if (MXC_I2C_MasterTransaction(&reqMaster) == 0) {
        result = true;
    } else {
        result = false;
    }
    xSemaphoreGive(inst->busLock);
    return result;
}

void PlatformCommonSpiInit(spi_inst_data_t *inst)
{
    MXC_SPI_Init(inst->spiInst, 1, 0, 1, 0, 15000000, inst->csPins);
    MXC_SPI_SetWidth(inst->spiInst, SPI_WIDTH_STANDARD);
    MXC_SPI_SetDataSize(inst->spiInst, 8);
    MXC_SPI_SetMode(inst->spiInst, SPI_MODE_0);
    MXC_SPI_RevA1_SetMTMode((mxc_spi_reva_regs_t *)inst->spiInst, 1);
    xSemaphoreGive(inst->busLock);
}


bool PlatformCommonSpiTransfer(spi_inst_data_t *inst, uint8_t *txBuf, uint8_t *rxBuf, uint32_t xferSize, mxc_spi_callback_t completeCB)
{
    int result;

    xSemaphoreTake(inst->busLock, portMAX_DELAY);

    inst->spiReq.spi = inst->spiInst;
    inst->spiReq.ssIdx = inst->csIdx;
    inst->spiReq.ssDeassert = 1;
    inst->spiReq.rxData = rxBuf;
    inst->spiReq.txData = txBuf;
    inst->spiReq.txCnt = 0;
    inst->spiReq.rxCnt = 0;
    inst->spiReq.txLen = xferSize;
    inst->spiReq.rxLen = xferSize;
    inst->spiReq.completeCB = completeCB;

    /* There is a bug in the MSDK SPI Rev A V1 driver which can potentially
     * cause a bus lockup if the interrupt from a different SPI bus occurs
     * while MasterTransactionDMA is in process. For now disable interrupts
     * until the fix is included in the release CFS/MSDK
     * See: https://github.com/analogdevicesinc/msdk/pull/1358
     */
    MXC_SYS_Crit_Enter();
    result = MXC_SPI_MasterTransactionDMA(&inst->spiReq);
    MXC_SYS_Crit_Exit();

    //By default, the TX Threshold is 1 when doing DMA transactions. This
    //causes gaps in the traffic, not making full use of the DMA and clock
    //speed.  Increase to 2 to create a continuous bit stream out of SPI
    MXC_SPI_SetTXThreshold(inst->spiInst, 2);

    if (result != E_NO_ERROR) {
        xSemaphoreGive(inst->busLock);
        return false;
    } else {
        return true;
    }
}

uint32_t PlatformGetUID( )
{
    uint8_t hwId[MXC_SYS_USN_CHECKSUM_LEN]; //USN Buffer
    uint32_t *dataPtr = (uint32_t *)hwId;

    /* 2nd parameter is optional checkum buffer */
    MXC_SYS_GetUSN(hwId, NULL);
    //Make the UID word a little more robust (in theory) since a lot of parts
    //may have common UID fields in the 16-byte field
    return dataPtr[0] ^ dataPtr[1] ^ dataPtr[2] ^ dataPtr[3];
}

#ifdef HAS_BOOTLOADER
//This is defined in the linker and is reserved memory used for bootloader state
extern uint32_t _board_dfu_dbl_tap[];
#endif

void PlatformReboot(bool toBootloader)
{
#ifdef HAS_BOOTLOADER
    if (toBootloader) {
        //This magic number was taken from the TinyUF2 board_api.h file. Due to
        //the buildsystem and include baggage associated with including that file,
        //it made more sense to hard code it here versus integrating all of that
        //into the application project for a constant and a global register.
        _board_dfu_dbl_tap[0] = 0xf01669ef;
    }
#else
    //Avoid compiler warnings when HAS_BOOTLOADER is not defined.
    (void)toBootloader;
#endif
    NVIC_SystemReset();
}


static void MAX_GPIO0_Handler()
{
    MXC_GPIO_Handler(MXC_GPIO_GET_IDX(MXC_GPIO0));
}

static void MAX_GPIO1_Handler()
{
    MXC_GPIO_Handler(MXC_GPIO_GET_IDX(MXC_GPIO1));
}

static void MAX_GPIO2_Handler()
{
    MXC_GPIO_Handler(MXC_GPIO_GET_IDX(MXC_GPIO2));
}

static void MAX_GPIO3_Handler()
{
    MXC_GPIO_Handler(MXC_GPIO_GET_IDX(MXC_GPIO3));
}

static void MAX_DMA_Handler()
{
    MXC_DMA_Handler();
}

#ifdef USE_FLASH_CONFIG

#if ((CONFIG_DATA_ADDR < MXC_FLASH0_MEM_BASE) || \
    (CONFIG_DATA_ADDR >= (MXC_FLASH0_MEM_BASE + MXC_FLASH0_MEM_SIZE)))
#error "Expected CONFIG_DATA_ADDR to be in FLASH0"
#endif

#if ((CONFIG_DATA_ADDR % MXC_FLASH0_PAGE_SIZE) != 0)
#error "CONFIG_DATA_ADDR should be page aligned"
#endif

#if ((CONFIG_DATA_SIZE % MXC_FLASH0_PAGE_SIZE) != 0)
#error "CONFIG_DATA_SIZE should be page multiples"
#endif

#if ((CONFIG_DATA_ADDR + CONFIG_DATA_SIZE) != (MXC_FLASH0_MEM_BASE + MXC_FLASH0_MEM_SIZE))
#error "CONFIG_DATA should be the last page(s) in Flash0"
#endif

#define CONFIG_NUM_PAGES    (CONFIG_DATA_SIZE / MXC_FLASH0_PAGE_SIZE)

/* Linker-provided symbols for section */
extern uint8_t __config_data_start[];
static uint8_t configDataCopy[CONFIG_DATA_SIZE];

int PlatformNonVolatileRead(uint16_t offset, uint8_t *dest_ptr, uint16_t count)
{
    if ((offset + count) > CONFIG_DATA_SIZE) {
        return -1;
    }

    memcpy(dest_ptr, __config_data_start + offset, count);
    return 0;
}

/**
 * Per the datasheet, flash is good for 10,000 cycles.  We'll probably be OK,
 * however in the future look at doing wear leveling or EEPROM emulation
 * using all bytes in a page before re-erasing.
 *
 * Note, this is a blocking call which will spin-wait for completion prior to
 * returning. Ensure the calling thread is an appropriate priority or the
 * system is in a non-critical state where a delay is acceptable.
 *
 * Estimated completion time is based on the following:
 *  - 20 ms per page, erase - The default setup is 1 page for NV configuration
 *  - 42 us per word, write.
 *
 * Assume a 256 byte configuration structure, the blocking time will be:
 *  20 ms + (42us * 64 words) = 22.68ms
 *
 * For a full 16K page write, the blocking time will be:
 *  20 ms + (42us * 4096 words) = 192ms
 *
 */
int PlatformNonVolatileWrite(uint16_t offset, uint8_t *src, uint16_t count)
{
    int err = 0;
    int i;

    if ((offset + count) > CONFIG_DATA_SIZE) {
        return -1;
    }

    //Read all of the data since we could just be updating a piece
    err = PlatformNonVolatileRead(0, configDataCopy, CONFIG_DATA_SIZE);
    if (err) {
        return -1;
    }

    //Move the new data into the copy
    memcpy(&configDataCopy[offset], src, count);

    //Per the user's guide, disable ICC before doing flash operations
    MXC_ICC_Disable(MXC_ICC0);

    for (i = 0; i < CONFIG_NUM_PAGES; i++) {
        err = MXC_FLC_PageErase(CONFIG_DATA_ADDR + (i * MXC_FLASH0_PAGE_SIZE));
        if (err) {
            break;
        }
    }

    //Erase was successful, write the entire data area
    if (err == 0) {
        err = MXC_FLC_Write(CONFIG_DATA_ADDR, CONFIG_DATA_SIZE, (uint32_t *)configDataCopy);
    }

    //Re-enable ICC
    MXC_ICC_Enable(MXC_ICC0);

    return err;
}
#endif
