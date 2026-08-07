/**
 * Copyright © 2026 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __APPLICATION_H__
#define __APPLICATION_H__

#include <stdint.h>
#include <stdbool.h>

#include "ConfigMenuTask.h"

/**
 * Enumeration of all the available interfaces the application can use
 */
typedef enum {
    IFACE_T1L = 0,
    IFACE_USB,
    IFACE_COUNT //Don't use, last for total count
} net_iface_t;

/**
 * Enumeration of the different modes each interface could be in
 */
typedef enum {
    IFACE_MODE_OFF = 0,
    IFACE_MODE_RXONLY, //Allows acting like a sniffer
    IFACE_MODE_TXRX,
} net_iface_mode_t;

/**
 * Structure to hold the application configuration. Either populated static at
 * compile time, or via HW config switches.
 * The structure is packed to utilize the least amount of EEPROM space, however
 * for correct operation with pointers, 16- and 32-bit entries must be explicitly
 * aligned with __attribute__((aligned(2))) to ensure they are accessible on
 * word boundaries in our configuration menu.
 */
typedef struct __attribute__((packed)) {
    //Must be first in struct!
    uint32_t configMagic;

    bool autoMac;
    uint8_t macAddr[6];
    bool usbSniffer;

    //Must be last in struct!
    uint8_t configChecksum;
} app_config_t;

void AppConfigInit(void);
void AppConfigGet(app_config_t *cfg);
void AppConfigPrint(app_config_t *cfg);
config_menu_t AppConfigGetMenu(void);
void AppStartCLI(void);
void AppInfoCLI_Callback(void *unused);
void AppStatsCLI_Callback(void *unused);

#endif
