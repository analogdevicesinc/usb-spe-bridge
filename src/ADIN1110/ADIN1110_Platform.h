/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __ADIN1110_PLATFORM_H__
#define __ADIN1110_PLATFORM_H__

#include <stdint.h>
#include <stdbool.h>

/**
 * Initializes the Platform (MCU)
 */
void ADIN1110_PlatformInit(void);

/**
 * Do a SPI transfer over the platform
 */
bool ADIN1110_PlatformSPI(uint8_t *txBuf, uint8_t *rxBuf, uint32_t xferSize);

/**
 * Perform a hardware reset
 */
void ADIN1110_PlatformReset(void);

/**
 * Enable/Disable external interrupts with the platform
 */
void ADIN1110_PlatformEnableInterrupts(bool en);

/**
 * Platform calls this on an external interrupt
 */
void ADIN1110_OnIRQ(void);

/**
 * Platform calls this when SPI is done
 */
void ADIN1110_OnSPI_Complete(void);

#endif
