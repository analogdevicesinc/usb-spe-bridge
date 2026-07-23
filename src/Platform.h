/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __PLATFORM_H__
#define __PLATFORM_H__

#include <stdint.h>
#include <stdbool.h>

#include "PlatformSpecs.h"

/* Number of I2C instances the platform has */
#ifndef PLATFORM_NUM_I2CS
#error "Platform needs to define PLATFORM_NUM_I2CS"
#endif

#ifndef PLATFORM_NUM_LEDS
#error "Platform needs to define PLATFORM_NUM_I2CS"
#endif

#ifndef PLATFORM_NUM_BUTTONS
#error "Platform needs to define PLATFORM_NUM_BUTTONS"
#endif

//Used as dummy values for platforms not supporting a function
#define PLATFORM_BTN_NUM_INVALID    255
#define PLATFORM_LED_NUM_INVALID    255
#define PLATFORM_I2C_NUM_INVALID    255

/**
 * Define helper macros for incrementing data atomically. If the compiler/arch
 * supports atomic operations, use those, otherwise critical enter/exit
 */
#if defined(__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4)
#define ATOMIC_INC(ptr) __atomic_fetch_add((&ptr), 1, __ATOMIC_RELAXED)
#else
#define ATOMIC_INC(ptr) do { \
            taskENTER_CRITICAL(); \
            (*(ptr))++; \
            taskEXIT_CRITICAL(); \
} while (0)
#endif

/**
 * Initializes the Platform
 */
void PlatformInit(void);

/**
 * Gets the 32-bit unique identifier for the platform
 * @returns UID
 */
uint32_t PlatformGetUID(void);

/**
 * Gets the states of the configuration switches as a packed bit field
 *
 * @returns Configuration switch states
 */
uint32_t PlatformGetConfigSwitches(void);

/**
 * Performs an I2C transaction on the specified bus.
 * Note: If write and read are both performed, the write will occur
 * first, followed by a repeat start, then a read.   The
 * bRepeatStart flag is only used to determine if the whole
 * transaction should not include a stop condition at the end.
 *
 * @param i2c_dev      Which physical bus to use
 * @param nBusAddr     7-bit address of the device
 * @param pWrBuf       Write buffer, or NULL if read only
 * @param nWrLen       Number of bytes to write, or 0
 * @param pRdBuf       Read buffer, or NULL if write only
 * @param nRdLen       Number of bytes to read, or 0
 * @param bRepeatStart If true, does not end the transaction with a stop
 * @returns 0 on Success, negative on error
 */
int PlatformI2cWriteRead(uint8_t i2c_dev, uint8_t nBusAddr, uint8_t *pWrBuf, uint32_t nWrLen, uint8_t *pRdBuf, uint32_t nRdLen, bool bRepeatStart);

/**
 * Reads the specified number of bytes from the Nonvolatile offset
 *
 * @param offset - Starting byte offset in memory
 * @param dest_ptr - Buffer to store the results
 * @param count - Number of bytes to read
 * @returns 0 on success, negative on error
 */
int PlatformNonVolatileRead(uint16_t offset, uint8_t *dest_ptr, uint16_t count);

/**
 * Writes data to the Nonvolatile device starting at the defined offset
 *
 * @param offset - Starting byte offset in memory
 * @param dest_ptr - Buffer to write from
 * @param count - Number of bytes to write
 * @returns 0 on success, negative on error
 */
int PlatformNonVolatileWrite(uint16_t offset, uint8_t *src, uint16_t count);

/**
 * Sets the LED number on or off
 * @param led_num - LED Number to set
 * @param on - True to set LED on
 */
void PlatformSetLED(uint8_t led_num, bool on);

/**
 * Returns the current state of the specified button
 * @param button_num - Button number
 * @returns Button state
 */
bool PlatformGetButtonState(uint8_t button_num);

#ifdef PLATFORM_BUTTON_INTERRUPTS
/**
 * Callback from the platform layer on a button state change. It should be
 * assumed by the application that this is occurring in an interrupt context.
 * The application code needs to implement this.
 * @param button_num - Button number
 * @param state - Captured state
 */
void PlatformOnButtonStateISR(uint8_t button_num, bool state);
#endif


/**
 * Reboots the MCU directly.
 * @param toBootloader - Boot into the bootloader versus a soft reset
 */
void PlatformReboot(bool toBootloader);

#endif
