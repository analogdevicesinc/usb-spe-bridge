/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef __BOARD_H__
#define __BOARD_H__

#include "max32690.h"

/**
 * The board.h file is required by the TinyUF2 implementation and is
 * specific to the target MCU, in this case the MAX32690. This will
 * define some USB parameters, as well as UART and LED configuration
 */

/**
 * Number of neopixels. The T1SUSB board has a neopixel, but the control for it
 * isn't implemented (yet) in the TinyUF2 port. Just set the count to 0 for
 * all boards
 */
#define NEOPIXEL_NUMBER       0

/**
 * These are the common USB parameters. Note: the VID and PID are common among
 * all the MAX32 implementations using TinyUF2. This is critical for IT rules,
 * etc.
 */
#define USB_VID           0x0456    //ADI
#define USB_PID           0xA010    //MAX32 TinyUF2
#define USB_MANUFACTURER  "Analog Devices"

#if defined(TINYUF2_T1SUSB)
#define LED_PORT              MXC_GPIO1
#define LED_PIN               MXC_GPIO_PIN_12
#define LED_VDDIO             MXC_GPIO_VSSEL_VDDIOH
#define LED_STATE_ON          0
#define USB_PRODUCT           "T1SUSB"
#define UF2_BOARD_ID          "T1SUSB"
#define UF2_VOLUME_LABEL      "T1SUSB"
#define UF2_INDEX_URL         "https://www.analog.com/en/products/ad3306.html"
#define UART_NUM              0
#elif defined(TINYUF2_ADIN1140)
#define LED_PORT              MXC_GPIO2
#define LED_PIN               MXC_GPIO_PIN_9
#define LED_VDDIO             MXC_GPIO_VSSEL_VDDIO
#define LED_STATE_ON          0
#define USB_PRODUCT           "ADIN1140"
#define UF2_BOARD_ID          "ADIN1140"
#define UF2_VOLUME_LABEL      "ADIN1140"
#define UF2_INDEX_URL         "https://www.analog.com/en/products/adin1110.html"
#define UART_NUM               0
#else
#error "Platform not defined, or not supported"
#endif

#define UF2_PRODUCT_NAME  USB_MANUFACTURER " " USB_PRODUCT

#endif
