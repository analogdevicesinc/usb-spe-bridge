/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __AD3306_H__
#define __AD3306_H__

#include "ConfigMenuTask.h"

#include "NetPkt.h"
#include "NetStats.h"

#include <stdbool.h>

/* ORDER HERE MATTERS! This is the same order the registers appear in the
 * register map of the AD3306. The data gets loaded directly from SPI, so
 * don't change this around!!
 */
typedef struct {
    /* RX frame stat counters */
    uint32_t    nRxFrmCnt;              /*!< RX Frame count */
    uint32_t    nRxBroadcastFrmCnt;     /*!< RX Broadcast Frame count */
    uint32_t    nRxMulticastFrmCnt;     /*!< RX Multicast Frame count */
    uint32_t    nRxUnicastFrmCnt;       /*!< RX Unicast Frame count */

    /* RX frame error counters */
    uint32_t    nRxCRCErrFrmCnt;        /*!< RX CRC Errored Frame count */
    uint32_t    nRxAlignErrFrmCnt;      /*!< RX Align Error count */
    uint32_t    nRxPreambleErrCnt;      /*!< RX Preamble Error Count */
    uint32_t    nRxShortErrCnt;         /*!< RX short frame error count */
    uint32_t    nRxLongErrFrmCnt;       /*!< RX Long Frame Error count */
    uint32_t    nRxPhyErrFrmCnt;        /*!< RX PHY Error count */

    uint32_t    nRxDropHostFullCnt;     /*!< RX Frames Dropped Due to Host FIFO full count */
    uint32_t    nRxDropPortFullCnt;     /*!< RX Frames Dropped Due to Port FIFO full count */
    uint32_t    nRxDropFilterTableCnt;  /*!< RX Frames Dropped Due to filtering count */
    uint32_t    nRxInterFrameGapErrCnt; /*!< RX IFG Error Counter for Port 1 count */

    uint32_t    reserved1;
    uint32_t    reserved2;

    /* TX frame stat counters */
    uint32_t    nTxFrmCnt;              /*!< TX Frame count */
    uint32_t    nTxBroadcastFrmCnt;     /*!< TX Broadcast Frame count */
    uint32_t    nTxMulticastFrmCnt;     /*!< TX Multicast Frame count */
    uint32_t    nTxUnicastFrmCnt;       /*!< TX Unicast Frame count */

    /* TX frame error counters */
    uint32_t    nTxSingleColCnt;        /*!< TX Single collision count */
    uint32_t    nTxMultipleColCnt;      /*!< TX Multiple collision count */
    uint32_t    nTxDeferredXmitCnt;     /*!< TX deferred transmission count */
    uint32_t    nTxLateColCnt;          /*!< TX Late collision count */
    uint32_t    nTxExcessColCnt;        /*!< TX excess collision count */
    uint32_t    nTxUnrCnt;              /*!< TX Frames That Were Dropped due to Under Run count */

    /***** PLCA STATUS STARTS HERE. This order doesn't matter */
    bool        bPlcaStatus;            /*!< PLCA Status */
    bool        bBeaconRcvdBeforeTO;    /*!< Beacon received before node's transmit opportunity */
    bool        bUnexpBeaconRcvd;       /*!< Unexpected Beacon Received */
    bool        bRxInTO;                /*!< Reception occurred in local node's transmit opportunity */
    uint8_t     nPlcaNodeId;            /*!< PLCA Node ID */
    uint8_t     nPlcaNodeCnt;           /*!< PLCA Node Count */
    uint8_t     nPlcaTOTimer;           /*!< PLCA Transmit Opportunity Timer */
    uint8_t     nPlcaBurstTimer;        /*!< PLCA Burst Timer */
    uint8_t     nPlcaMaxBurstCnt;       /*!< PLCA Maximum Burst Count */
} ad3306_ext_stats_t;

/**
 * Initializes the AD3306 Instance and starts any tasks
 * @param handler - New packet handler for this interface
 */
void AD3306_Init(PacketHandler handler);

/**
 * Gets the network stats for this interface
 * @param stats - Storage location
 */
void AD3306_GetStats(net_stats_t *stats);

/**
 * Sends a packet to the network. A positive result indicates the packet
 * was successfully queued, not necessarily transmitted
 * @param pkt - Packet to send
 * @returns True on success, false otherwise
 */
bool AD3306_SendPacket(net_pkt_t *pkt);

/**
 * Sets the Networks PLCA configuration
 * @param en - PLCA Enabled
 * @param nodeId - PLCA Node ID
 * @param nodeCount - Number of network nodes
 */
void AD3306_SetPLCA(bool en, uint8_t nodeId, uint8_t nodeCount);

/**
 * Sets the PLCA Transmit Opportunity value
 * @param plcaTO - PLCA TO
 */
void AD3306_SetPLCA_TO(uint8_t plcaTO);

/**
 * Sets the PLCA Burst mode parameters.
 * @param burstCt - Burst count value
 * @param burstTmr - Burst timer value (in units of 100ns)
 */
void AD3306_SetBurstMode(uint8_t burstCt, uint8_t burstTmr);

/**
 * Sets the VLAN Filter parameters
 * @param en - Enable VLAN filtering
 * @param blockMode - When true, matching VLANs are blocked, when false they are allowed
 * @param entry1 - Filter entry 1
 * @param entry2 - Filter entry 2
 */
void AD3306_SetVLAN_Filter(bool en, bool blockMode, uint16_t entry1, uint16_t entry2);


/**
 * Sets the ETHTYPE Filter parameters
 * @param en - Enable ETHTYPE filtering
 * @param blockMode - When true, matching ETHTYPEs are blocked, when false they are allowed
 * @param entry1 - Filter entry 1
 * @param entry2 - Filter entry 2
 */
void AD3306_SetETHTYPE_Filter(bool en, bool blockMode, uint16_t entry1, uint16_t entry2);

/**
 * Requests the extended stats that are specific to the AD3306 device. This will
 * be a blocking call based on the availability of the SPI & Register interface
 * in the task.
 *
 * @param stats - Location to store the stats data
 */
void AD3306_GetExtendedStats(ad3306_ext_stats_t *stats);

/**
 * Gets the config menu information for the AD3306 module.
 * @returns config_menu_t data pointing to the drivers debug menu
 */
config_menu_t AD3306_GetDebugMenu(void);

#endif
