/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef __AD3306_PLATFORM_H__
#define __AD3306_PLATFORM_H__

#include <stdint.h>
#include <stdbool.h>

/**
 * Initializes the Hardware (MCU) platform
 */
void AD3306_PlatformInit(void);

/**
 * Does a SPI transaction over the MCU
 */
bool AD3306_PlatformSPI(uint8_t *txBuf, uint8_t *rxBuf, uint32_t xferSize);

/**
 * Enable/Disable external interrupts with the platform
 */
void AD3306_PlatformEnableInterrupts(bool en);

/**
 * The platform calls this when an external interrupt occurs
 */
void AD3306_OnIRQ(void);

/**
 * The platform calls this when SPI is completed
 */
void AD3306_OnSPI_Complete(void);

#endif
