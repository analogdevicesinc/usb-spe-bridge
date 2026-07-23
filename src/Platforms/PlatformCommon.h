/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __PLATFORM_COMMON_H__
#define __PLATFORM_COMMON_H__
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "FreeRTOS.h"
#include "semphr.h"

#include "gpio.h"
#include "i2c.h"
#include "spi.h"

/**
 * Struct defining a Platform I2c Instance
 */
typedef struct {
    mxc_i2c_regs_t *    i2cInst;
    SemaphoreHandle_t   busLock;
} i2c_inst_data_t;

/**
 * Struct defining a Platform SPI instance
 */
typedef struct {
    mxc_spi_regs_t *    spiInst;
    SemaphoreHandle_t   busLock;
    mxc_spi_req_t       spiReq; /**< Spi requests need to be persistent due to DMA */
    mxc_spi_pins_t      csPins;
    uint8_t             csIdx;
} spi_inst_data_t;

/**
 * Initializes the common platform components. This sets up all aspects of the
 * MAX32690 drivers which are common regardless of the board such as enabling
 * GPIO banks, DMA interrupt handlers, etc.
 */
void PlatformCommonInit(void);

/**
 * Initializes the I2C instance specified by inst. It is required that the
 * mxc_i2c instance is already assigned and the Semaphore has been created prior
 * to calling this.  This will configure the actual MXC driver
 * @param inst - Platform I2C instance pointer
 */
void PlatformCommonI2cInit(i2c_inst_data_t *inst);

/**
 * Performs a platform I2C transaction on the specified bus. This supports
 * reads, writes and write-reads.  If either pWrBuf or pRdBuf are null, just
 * a read or write is performed. If both are provided, the write is performed
 * first, then the read with no stop and a repeat start. The bRepeatStart flag
 * determines if a stop condition is issued at the end of the *whole*
 * transaction.
 * Note: The instance semaphore will be taken and released within this function
 * to protect the bus
 * @param inst - Instance to transact on
 * @param nBusAddr - Device bus address
 * @param pWrBuf - Transmit buffer
 * @param nWrLen - Number of transmit bytes
 * @param pRdBuf - Read buffer
 * @param nRdLen - Number of read bytes
 * @param bRepeatStart - If true, don't issue a stop at the end of the transaction.
 * @returns  True on success, failure otherwise.
 */
bool PlatformCommonI2cWriteRead(i2c_inst_data_t *inst, uint8_t nBusAddr, uint8_t *pWrBuf, uint32_t nWrLen, uint8_t *pRdBuf, uint32_t nRdLen, bool bRepeatStart);

/**
 * Initializes a GPIO optionally configuring and interrupt and callback. If
 * callback is NULL, it is assumed interrupts are not used for this pin and
 * just a standard GPIO.  If Callback is provided, the interrupt is configured
 * with the callback userdata and interrupt polarity.
 * @param gpioCfg - GPIO configuration
 * @param callback - Callback for interrupt operation, or NULL for no interrupts
 * @param cbdata - User callback data for interrupt operation
 * @param pol - Polarity for interrupt operation
 */
void PlatformCommonGpioInit(const mxc_gpio_cfg_t *gpioCfg, mxc_gpio_callback_fn callback, void *cbdata, mxc_gpio_int_pol_t pol);

/**
 * Initializes the SPI instance specified by inst. It is required that the
 * spi_inst_data_t is completely populated, including creation of the semaphore
 * prior to calling this function.
 * @param inst - Platform SPI instance pointer
 */
void PlatformCommonSpiInit(spi_inst_data_t *inst);

/**
 * Performs a SPI transaction on the specified instance. All transactions are
 * done with DMA and are asynchronous. A completeCB must be provided to handle
 * the completion of the transfer.
 *
 * IMPORTANT!! The callback must release the instance semaphore in order to free
 * up the bus on completion! This is due to a limitation in the MXC SPI driver
 * which does not provide a userdata option for SPI callbacks, preventing this
 * platform driver from having knowledge of which instance the callback was
 * from.
 * @param inst - SPI instance
 * @param txBuf - Transmit buffer
 * @param rxBuf - Receive buffer
 * @param xferSize - Number of bytes to transfer
 * @param completeCB - Completion Callback
 * @returns True on success, failure otherwise
 */
bool PlatformCommonSpiTransfer(spi_inst_data_t *inst, uint8_t *txBuf, uint8_t *rxBuf, uint32_t xferSize, mxc_spi_callback_t completeCB);

#endif
