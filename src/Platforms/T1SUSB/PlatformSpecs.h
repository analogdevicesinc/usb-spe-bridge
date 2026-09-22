/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __PLATFORM_SPECS_H__
#define __PLATFORM_SPECS_H__

#define PLATFORM_NUM_I2CS       2
#define PLATFORM_NUM_LEDS       (4 + 7) //4 single colors + 1 3-color
#define PLATFORM_NUM_BUTTONS    2

//Helper to get the LED number based on RGB 3-color configuration
#define PLATFORM_RGB_TO_LEDNUM(r, g, b) (((r ? 1 : 0) | (g ? 2 : 0) | (b ? 4 : 0)) + 4)

#define PLATFORM_BOOT_BTN_NUM       0
#define PLATFORM_USER_BTN_NUM       1

#define PLATFORM_T1S_ACT_LED_NUM    1                               //LED2
#define PLATFORM_USB_ACT_LED_NUM    3                               //LED4
#define PLATFORM_STATUS1_LED_NUM    PLATFORM_RGB_TO_LEDNUM(0, 1, 0) //Tri-color Green
#define PLATFORM_STATUS2_LED_NUM    PLATFORM_RGB_TO_LEDNUM(0, 0, 1) //Tri-color Blue

#endif
