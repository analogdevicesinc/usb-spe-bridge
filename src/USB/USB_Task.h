/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef __USB_TASK_H__
#define __USB_TASK_H__

#include <stdint.h>
#include <stdbool.h>

#include "FreeRTOS.h"

#include "NetPkt.h"
#include "NetStats.h"

/**
 * Structure defining the Network interface configuration parameters
 */
typedef struct {
    PacketHandler   handler;    /**< Callback for new incoming packets */
    uint8_t         macAddr[6]; /**< Device MAC Address */
} usb_net_init_cfg_t;

/**
 * Initializes and starts the USB Task
 * @param netCfg - Configuration for the Network USB Device. If NULL, Network is
 *                    not included in the USB configuration
 * @param cdcEn    - True if CDC (Serial) should be enabled
 */
void USB_TaskInit(usb_net_init_cfg_t *netCfg, bool cdcEn);

/**
 * Sends a packet via USB Network
 * @param pkt - Packet to send
 */
bool USB_NetworkSendPacket(net_pkt_t *pkt);

/**
 * Gets the Network stats for the interface
 * @param stats
 */
void USB_NetworkGetStats(net_stats_t *stats);

/**
 * Writes data to the CDC serial port.  The underlying mechanism for this is
 * a streambuffer.
 * @param buf - Data buffer to write
 * @param numBytes - Number of bytes to write
 * @param timeout - FreeRTOS timeout (or portMAX_DELAY) to try to write the data
 * @returns Number of bytes written to the stream buffer. If timeout was
 * portMAX_DELAY this should always equal numBytes. Otherwise may be different
 * based on CDC loading and timeout.
 */
uint32_t CDC_WriteBytes(char *buf, uint32_t numBytes, TickType_t timeout);

/**
 * Reads data from the CDC serial port.  The underlying mechanism for this is
 * a streambuffer.
 * @param buf - Data buffer to read to
 * @param numBytes - Number of bytes to read
 * @param timeout - FreeRTOS timeout (or portMAX_DELAY) to try to read the data
 * @returns Number of bytes read from the stream buffer. If timeout was
 * portMAX_DELAY this should always equal numBytes. Otherwise may be different
 * based on CDC loading and timeout.
 */
uint32_t CDC_ReadBytes(char *buf, uint32_t numBytes, TickType_t timeout);

#endif
