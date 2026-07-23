/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __ADIN1110_H__
#define __ADIN1110_H__

#include "NetPkt.h"
#include "NetStats.h"

#include <stdbool.h>

/**
 * ADIN1110 TODOs:
 *  - Link status checking/handling
 */

/**
 * Initializes the ADIN1110 and kicks off the OASPI tasking
 * @param handler - New packet handler for the ADIN1110
 */
void ADIN1110_Init(PacketHandler handler);

/**
 * Gets the network statistics for this interface
 * @param stats - Stats storage location
 */
void ADIN1110_GetStats(net_stats_t *stats);

/**
 * Sends a packet to the network. A positive result indicates the packet
 * was successfully queued, not necessarily transmitted
 * @param pkt - Packet to send
 * @returns True on success, false otherwise
 */
bool ADIN1110_SendPacket(net_pkt_t *pkt);

/**
 * Helper to just read/poke the status registers for the MACPHY
 * NOTE: This is probably for debug only an can be removed.
 */
void ADIN1110_PokeStatus(void);

#endif
