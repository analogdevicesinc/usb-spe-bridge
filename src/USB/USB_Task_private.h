/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef __USB_TASK_PRIVATE_H__
#define __USB_TASK_PRIVATE_H__

#include "USB_Task.h"

/* Define the VIDs and PIDs used by the USB descriptors */
#define ADI_USB_VID     0x0456
#define ADI_PLUTO_PID   0xB678
#define ADI_NCM_PID     0x1140
#define ADI_CDC_PID     0x4001

typedef enum { USB_NET = 0, USB_NET_CDC, USB_CDC } usb_mode_t;

usb_mode_t USB_GetMode(void);

/**
 * Initializes the USB Network interface (queue and state).
 *
 * @param net_cfg - Configuration for the Network interface
 */
void USB_NetworkInit(usb_net_init_cfg_t *net_cfg);

/**
 * Drains the TX queue into the NCM stack. Must be called from the USBD task
 * context to ensure single-threaded access to TinyUSB's NCM driver state.
 */
void USB_NetworkDrainTxQueue(void);

/**
 * Notifies the USBD task that there is work to do (e.g. packets queued).
 * @param in_isr - True if this is called from an ISR context
 */
void USB_TaskNotify(bool in_isr);


void CDC_TaskInit(void);
#endif
