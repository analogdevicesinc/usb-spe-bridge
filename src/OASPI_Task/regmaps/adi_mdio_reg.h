/**
 * Copyright © 2026 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/******************************************************************************
*   @file   adi_mdio_reg.h
*   @brief  Definitions for IEEE 802.3 Clause 22/45 MDIO management interface.
******************************************************************************/

#ifndef ADI_MDIO_REG_H
#define ADI_MDIO_REG_H

/* ========================================================================== */
/* MDIO Transaction Operation Codes (IEEE 802.3 Clause 22/45)                 */
/* ========================================================================== */

/* MDIO Opcode table:
 * +=======+==========================+===================================+
 * | Value | Name                     | Description                       |
 * +=======+==========================+===================================+
 * | 0     | C45_ADDRESS              | Clause 45 address operation       |
 * +-------+--------------------------+-----------------------------------+
 * | 1     | C22_WRITE / C45_WRITE    | Write operation                   |
 * +-------+--------------------------+-----------------------------------+
 * | 2     | C22_READ / C45_READ_INC  | Read / Post-read-increment-addr   |
 * +-------+--------------------------+-----------------------------------+
 * | 3     | C45_READ                 | Clause 45 read operation          |
 * +-------+--------------------------+-----------------------------------+
 */

#define ENUM_MDIO_OP_C22_WRITE                                    (1u)
#define ENUM_MDIO_OP_C22_READ                                     (2u)
#define ENUM_MDIO_OP_C45_ADDRESS                                  (0u)
#define ENUM_MDIO_OP_C45_WRITE                                    (1u)
#define ENUM_MDIO_OP_C45_READ_INC                                 (2u)
#define ENUM_MDIO_OP_C45_READ                                     (3u)

/* ========================================================================== */
/* MDIO Manageable Device (MMD) Addresses                                     */
/* ========================================================================== */

/* MMD Address table:
 * +=======+==========================+===================================+
 * | Value | Name                     | Description                       |
 * +=======+==========================+===================================+
 * | 0x01  | PMAPMD                   | Physical Medium Attach / Depend   |
 * +-------+--------------------------+-----------------------------------+
 * | 0x02  | WIS                      | WAN Interface Sublayer            |
 * +-------+--------------------------+-----------------------------------+
 * | 0x03  | PCS                      | Physical Coding Sublayer          |
 * +-------+--------------------------+-----------------------------------+
 * | 0x04  | PHYXS                    | PHY Extender Sublayer             |
 * +-------+--------------------------+-----------------------------------+
 * | 0x05  | DTEXS                    | DTE Extender Sublayer             |
 * +-------+--------------------------+-----------------------------------+
 * | 0x06  | TC                       | Transmission Convergence          |
 * +-------+--------------------------+-----------------------------------+
 * | 0x07  | AN                       | Auto-Negotiation                  |
 * +-------+--------------------------+-----------------------------------+
 * | 0x08  | SEPARATED_PMA1           | Separated PMA (1)                 |
 * +-------+--------------------------+-----------------------------------+
 * | 0x09  | SEPARATED_PMA2           | Separated PMA (2)                 |
 * +-------+--------------------------+-----------------------------------+
 * | 0x0A  | SEPARATED_PMA3           | Separated PMA (3)                 |
 * +-------+--------------------------+-----------------------------------+
 * | 0x0B  | SEPARATED_PMA4           | Separated PMA (4)                 |
 * +-------+--------------------------+-----------------------------------+
 * | 0x1D  | C22EXT                   | Clause 22 Extension               |
 * +-------+--------------------------+-----------------------------------+
 * | 0x1E  | VENDOR_SPECIFIC1         | Vendor Specific 1                 |
 * +-------+--------------------------+-----------------------------------+
 * | 0x1F  | VENDOR_SPECIFIC2         | Vendor Specific 2                 |
 * +-------+--------------------------+-----------------------------------+
 */

#define MDIO_MMD_PMAPMD                                           (0x01u)
#define MDIO_MMD_WIS                                              (0x02u)
#define MDIO_MMD_PCS                                              (0x03u)
#define MDIO_MMD_PHYXS                                            (0x04u)
#define MDIO_MMD_DTEXS                                            (0x05u)
#define MDIO_MMD_TC                                               (0x06u)
#define MDIO_MMD_AN                                               (0x07u)
#define MDIO_MMD_SEPARATED_PMA1                                   (0x08u)
#define MDIO_MMD_SEPARATED_PMA2                                   (0x09u)
#define MDIO_MMD_SEPARATED_PMA3                                   (0x0Au)
#define MDIO_MMD_SEPARATED_PMA4                                   (0x0Bu)
#define MDIO_MMD_C22EXT                                           (0x1Du)
#define MDIO_MMD_VENDOR_SPECIFIC1                                 (0x1Eu)
#define MDIO_MMD_VENDOR_SPECIFIC2                                 (0x1Fu)

/* ========================================================================== */
/* MDIO Generic Registers                                                     */
/* ========================================================================== */

/* Register Name        : CTRL1
 * Register Addr        : 0x0000
 * Description          : Control 1
 */

#define MDIO_CTRL1_ADDR                                           (0x0000u)

/* -------------------------------------------------------------------------- */
/* Register Name        : STAT1
 * Register Addr        : 0x0001
 * Description          : Status 1
 */

#define MDIO_STAT1_ADDR                                           (0x0001u)

/* -------------------------------------------------------------------------- */
/* Register Name        : DEVID1
 * Register Addr        : 0x0002
 * Description          : Device Identifier (1)
 */

#define MDIO_DEVID1_ADDR                                          (0x0002u)

/* -------------------------------------------------------------------------- */
/* Register Name        : DEVID2
 * Register Addr        : 0x0003
 * Description          : Device Identifier (2)
 */

#define MDIO_DEVID2_ADDR                                          (0x0003u)

/* -------------------------------------------------------------------------- */
/* Register Name        : SPEED
 * Register Addr        : 0x0004
 * Description          : Speed Ability
 */

#define MDIO_SPEED_ADDR                                           (0x0004u)

/* -------------------------------------------------------------------------- */
/* Register Name        : DEVS1
 * Register Addr        : 0x0005
 * Description          : Devices in Package (1)
 */

#define MDIO_DEVS1_ADDR                                           (0x0005u)

/* -------------------------------------------------------------------------- */
/* Register Name        : DEVS2
 * Register Addr        : 0x0006
 * Description          : Devices in Package (2)
 */

#define MDIO_DEVS2_ADDR                                           (0x0006u)

/* -------------------------------------------------------------------------- */
/* Register Name        : CTRL2
 * Register Addr        : 0x0007
 * Description          : Control 2
 */

#define MDIO_CTRL2_ADDR                                           (0x0007u)

/* -------------------------------------------------------------------------- */
/* Register Name        : STAT2
 * Register Addr        : 0x0008
 * Description          : Status 2
 */

#define MDIO_STAT2_ADDR                                           (0x0008u)

/* -------------------------------------------------------------------------- */
/* Register Name        : PKGID1
 * Register Addr        : 0x000E
 * Description          : Package Identifier (1)
 */

#define MDIO_PKGID1_ADDR                                          (0x000Eu)

/* -------------------------------------------------------------------------- */
/* Register Name        : PKGID2
 * Register Addr        : 0x000F
 * Description          : Package Identifier (2)
 */

#define MDIO_PKGID2_ADDR                                          (0x000Fu)

/* -------------------------------------------------------------------------- */
/* Register Name        : PCS_EEE_CAP
 * Register Addr        : 0x0014
 * Description          : PCS EEE Capability Register
 */

#define MDIO_PCS_EEE_CAP_ADDR                                     (0x0014u)

/* -------------------------------------------------------------------------- */
/* Register Name        : AN_EEE_ADV
 * Register Addr        : 0x003C
 * Description          : Auto-Negotiation EEE Advertisement Register
 */

#define MDIO_AN_EEE_ADV_ADDR                                      (0x003Cu)

/* Bit field description table:
 * +=======+==========================+===================================+
 * | Bits  | Bit Field                | Description                       |
 * +=======+==========================+===================================+
 * | 2     | 1000T                    | Advertise 1000BASE-T capability   |
 * +-------+--------------------------+-----------------------------------+
 * | 1     | 100TX                    | Advertise 100BASE-TX capability   |
 * +-------+--------------------------+-----------------------------------+
 */

#define BITP_MDIO_AN_EEE_ADV_1000T                                (2u)
#define BITL_MDIO_AN_EEE_ADV_1000T                                (1u)
#define BITM_MDIO_AN_EEE_ADV_1000T                                (0x04u)

#define BITP_MDIO_AN_EEE_ADV_100TX                                (1u)
#define BITL_MDIO_AN_EEE_ADV_100TX                                (1u)
#define BITM_MDIO_AN_EEE_ADV_100TX                                (0x02u)

/* ========================================================================== */
/* BASE-T1 Registers                                                          */
/* ========================================================================== */

/* Register Name        : AN_T1_CTRL
 * Register Addr        : 0x0200
 * Description          : BASE-T1 Auto-Negotiation Control
 */

#define MDIO_AN_T1_CTRL_ADDR                                      (0x0200u)

/* Bit field description table:
 * +=======+==========================+===================================+
 * | Bits  | Bit Field                | Description                       |
 * +=======+==========================+===================================+
 * | 12    | EN                       | Auto-Negotiation Enable           |
 * +-------+--------------------------+-----------------------------------+
 * | 9     | RESTART                  | Auto-Negotiation Restart          |
 * +-------+--------------------------+-----------------------------------+
 */

#define BITP_MDIO_AN_T1_CTRL_EN                                   (12u)
#define BITL_MDIO_AN_T1_CTRL_EN                                   (1u)
#define BITM_MDIO_AN_T1_CTRL_EN                                   (0x1000u)

#define BITP_MDIO_AN_T1_CTRL_RESTART                              (9u)
#define BITL_MDIO_AN_T1_CTRL_RESTART                              (1u)
#define BITM_MDIO_AN_T1_CTRL_RESTART                              (0x0200u)

/* -------------------------------------------------------------------------- */
/* Register Name        : AN_T1_STAT
 * Register Addr        : 0x0201
 * Description          : BASE-T1 Auto-Negotiation Status
 */

#define MDIO_AN_T1_STAT_ADDR                                      (0x0201u)

/* Bit field description table:
 * +=======+==========================+===================================+
 * | Bits  | Bit Field                | Description                       |
 * +=======+==========================+===================================+
 * | 6     | PAGE_RX                  | Page Received                     |
 * +-------+--------------------------+-----------------------------------+
 * | 5     | COMPLETE                 | Auto-Negotiation Complete         |
 * +-------+--------------------------+-----------------------------------+
 * | 4     | REMOTE_FAULT             | Auto-Negotiation Remote Fault     |
 * +-------+--------------------------+-----------------------------------+
 * | 3     | ABLE                     | Auto-Negotiation Ability          |
 * +-------+--------------------------+-----------------------------------+
 * | 2     | LINK_STATUS              | Link Status                       |
 * +-------+--------------------------+-----------------------------------+
 */

#define BITP_MDIO_AN_T1_STAT_PAGE_RX                              (6u)
#define BITL_MDIO_AN_T1_STAT_PAGE_RX                              (1u)
#define BITM_MDIO_AN_T1_STAT_PAGE_RX                              (0x40u)

#define BITP_MDIO_AN_T1_STAT_COMPLETE                             (5u)
#define BITL_MDIO_AN_T1_STAT_COMPLETE                             (1u)
#define BITM_MDIO_AN_T1_STAT_COMPLETE                             (0x20u)

#define BITP_MDIO_AN_T1_STAT_REMOTE_FAULT                         (4u)
#define BITL_MDIO_AN_T1_STAT_REMOTE_FAULT                         (1u)
#define BITM_MDIO_AN_T1_STAT_REMOTE_FAULT                         (0x10u)

#define BITP_MDIO_AN_T1_STAT_ABLE                                 (3u)
#define BITL_MDIO_AN_T1_STAT_ABLE                                 (1u)
#define BITM_MDIO_AN_T1_STAT_ABLE                                 (0x08u)

#define BITP_MDIO_AN_T1_STAT_LINK_STATUS                          (2u)
#define BITL_MDIO_AN_T1_STAT_LINK_STATUS                          (1u)
#define BITM_MDIO_AN_T1_STAT_LINK_STATUS                          (0x04u)

/* -------------------------------------------------------------------------- */
/* Register Name        : AN_T1_ADV_L
 * Register Addr        : 0x0202
 * Description          : BASE-T1 Auto-Negotiation Advertisement [15:0]
 */

#define MDIO_AN_T1_ADV_L_ADDR                                     (0x0202u)

/* Bit field description table:
 * +=======+==========================+===================================+
 * | Bits  | Bit Field                | Description                       |
 * +=======+==========================+===================================+
 * | 15    | NEXT_PAGE_REQ            | Next Page Request                 |
 * +-------+--------------------------+-----------------------------------+
 * | 14    | ACK                      | Acknowledge                       |
 * +-------+--------------------------+-----------------------------------+
 * | 13    | REMOTE_FAULT             | Remote Fault                      |
 * +-------+--------------------------+-----------------------------------+
 * | 12    | FORCE_MS                 | Force Master/Slave Configuration  |
 * +-------+--------------------------+-----------------------------------+
 * | 11    | PAUSE_ASYM               | Asymmetric Pause Ability          |
 * +-------+--------------------------+-----------------------------------+
 * | 10    | PAUSE_CAP                | Pause Ability                     |
 * +-------+--------------------------+-----------------------------------+
 */

#define BITP_MDIO_AN_T1_ADV_L_NEXT_PAGE_REQ                       (15u)
#define BITL_MDIO_AN_T1_ADV_L_NEXT_PAGE_REQ                       (1u)
#define BITM_MDIO_AN_T1_ADV_L_NEXT_PAGE_REQ                       (0x8000u)

#define BITP_MDIO_AN_T1_ADV_L_ACK                                 (14u)
#define BITL_MDIO_AN_T1_ADV_L_ACK                                 (1u)
#define BITM_MDIO_AN_T1_ADV_L_ACK                                 (0x4000u)

#define BITP_MDIO_AN_T1_ADV_L_REMOTE_FAULT                        (13u)
#define BITL_MDIO_AN_T1_ADV_L_REMOTE_FAULT                        (1u)
#define BITM_MDIO_AN_T1_ADV_L_REMOTE_FAULT                        (0x2000u)

#define BITP_MDIO_AN_T1_ADV_L_FORCE_MS                            (12u)
#define BITL_MDIO_AN_T1_ADV_L_FORCE_MS                            (1u)
#define BITM_MDIO_AN_T1_ADV_L_FORCE_MS                            (0x1000u)

#define BITP_MDIO_AN_T1_ADV_L_PAUSE_ASYM                          (11u)
#define BITL_MDIO_AN_T1_ADV_L_PAUSE_ASYM                          (1u)
#define BITM_MDIO_AN_T1_ADV_L_PAUSE_ASYM                          (0x0800u)

#define BITP_MDIO_AN_T1_ADV_L_PAUSE_CAP                           (10u)
#define BITL_MDIO_AN_T1_ADV_L_PAUSE_CAP                           (1u)
#define BITM_MDIO_AN_T1_ADV_L_PAUSE_CAP                           (0x0400u)

/* -------------------------------------------------------------------------- */
/* Register Name        : AN_T1_ADV_M
 * Register Addr        : 0x0203
 * Description          : BASE-T1 Auto-Negotiation Advertisement [31:16]
 */

#define MDIO_AN_T1_ADV_M_ADDR                                     (0x0203u)

/* Bit field description table:
 * +=======+==========================+===================================+
 * | Bits  | Bit Field                | Description                       |
 * +=======+==========================+===================================+
 * | 14    | B10L                     | 10BASE-T1L Ability                |
 * +-------+--------------------------+-----------------------------------+
 * | 4     | MST                      | Master/Slave Configuration        |
 * +-------+--------------------------+-----------------------------------+
 */

#define BITP_MDIO_AN_T1_ADV_M_B10L                                (14u)
#define BITL_MDIO_AN_T1_ADV_M_B10L                                (1u)
#define BITM_MDIO_AN_T1_ADV_M_B10L                                (0x4000u)

#define BITP_MDIO_AN_T1_ADV_M_MST                                 (4u)
#define BITL_MDIO_AN_T1_ADV_M_MST                                 (1u)
#define BITM_MDIO_AN_T1_ADV_M_MST                                 (0x10u)

/* -------------------------------------------------------------------------- */
/* Register Name        : AN_T1_ADV_H
 * Register Addr        : 0x0204
 * Description          : BASE-T1 Auto-Negotiation Advertisement [47:32]
 */

#define MDIO_AN_T1_ADV_H_ADDR                                     (0x0204u)

/* Bit field description table:
 * +=======+==========================+===================================+
 * | Bits  | Bit Field                | Description                       |
 * +=======+==========================+===================================+
 * | 13    | 10L_TX_HI                | 10BASE-T1L High Level TX Ability  |
 * +-------+--------------------------+-----------------------------------+
 * | 12    | 10L_TX_HI_REQ            | 10BASE-T1L High Level TX Request  |
 * +-------+--------------------------+-----------------------------------+
 */

#define BITP_MDIO_AN_T1_ADV_H_10L_TX_HI                           (13u)
#define BITL_MDIO_AN_T1_ADV_H_10L_TX_HI                           (1u)
#define BITM_MDIO_AN_T1_ADV_H_10L_TX_HI                           (0x2000u)

#define BITP_MDIO_AN_T1_ADV_H_10L_TX_HI_REQ                       (12u)
#define BITL_MDIO_AN_T1_ADV_H_10L_TX_HI_REQ                       (1u)
#define BITM_MDIO_AN_T1_ADV_H_10L_TX_HI_REQ                       (0x1000u)

/* -------------------------------------------------------------------------- */
/* Register Name        : PMA_PMD_BT1_CTRL
 * Register Addr        : 0x0834
 * Description          : BASE-T1 PMA/PMD Control
 */

#define MDIO_PMA_PMD_BT1_CTRL_ADDR                                (0x0834u)

/* Bit field description table:
 * +=======+==========================+===================================+
 * | Bits  | Bit Field                | Description                       |
 * +=======+==========================+===================================+
 * | 14    | CFG_MST                  | Master/Slave Configuration        |
 * +-------+--------------------------+-----------------------------------+
 */

#define BITP_MDIO_PMA_PMD_BT1_CTRL_CFG_MST                        (14u)
#define BITL_MDIO_PMA_PMD_BT1_CTRL_CFG_MST                        (1u)
#define BITM_MDIO_PMA_PMD_BT1_CTRL_CFG_MST                        (0x4000u)

/* ========================================================================== */
/* 10BASE-T1L Registers                                                       */
/* ========================================================================== */

/* Register Name        : PMA_B10L_CTRL
 * Register Addr        : 0x08F6
 * Description          : 10BASE-T1L PMA Control
 */

#define MDIO_PMA_B10L_CTRL_ADDR                                   (0x08F6u)

/* Bit field description table:
 * +=======+==========================+===================================+
 * | Bits  | Bit Field                | Description                       |
 * +=======+==========================+===================================+
 * | 14    | TX_DIS_MODE_EN           | Transmit Disable Mode             |
 * +-------+--------------------------+-----------------------------------+
 * | 12    | TX_LVL_HI                | Transmit Voltage Amplitude Ctrl   |
 * +-------+--------------------------+-----------------------------------+
 * | 10    | EEE                      | EEE Enable                        |
 * +-------+--------------------------+-----------------------------------+
 * | 0     | LB_PMA_LOC_EN            | PMA Loopback Enable               |
 * +-------+--------------------------+-----------------------------------+
 */

#define BITP_MDIO_PMA_B10L_CTRL_TX_DIS_MODE_EN                    (14u)
#define BITL_MDIO_PMA_B10L_CTRL_TX_DIS_MODE_EN                    (1u)
#define BITM_MDIO_PMA_B10L_CTRL_TX_DIS_MODE_EN                    (0x4000u)

#define BITP_MDIO_PMA_B10L_CTRL_TX_LVL_HI                         (12u)
#define BITL_MDIO_PMA_B10L_CTRL_TX_LVL_HI                         (1u)
#define BITM_MDIO_PMA_B10L_CTRL_TX_LVL_HI                         (0x1000u)

#define BITP_MDIO_PMA_B10L_CTRL_EEE                               (10u)
#define BITL_MDIO_PMA_B10L_CTRL_EEE                               (1u)
#define BITM_MDIO_PMA_B10L_CTRL_EEE                               (0x0400u)

#define BITP_MDIO_PMA_B10L_CTRL_LB_PMA_LOC_EN                     (0u)
#define BITL_MDIO_PMA_B10L_CTRL_LB_PMA_LOC_EN                     (1u)
#define BITM_MDIO_PMA_B10L_CTRL_LB_PMA_LOC_EN                     (0x01u)

/* -------------------------------------------------------------------------- */
/* Register Name        : PMA_B10L_STAT
 * Register Addr        : 0x08F7
 * Description          : 10BASE-T1L PMA Status
 */

#define MDIO_PMA_B10L_STAT_ADDR                                   (0x08F7u)

/* Bit field description table:
 * +=======+==========================+===================================+
 * | Bits  | Bit Field                | Description                       |
 * +=======+==========================+===================================+
 * | 13    | LB_ABLE                  | PHY has loopback ability          |
 * +-------+--------------------------+-----------------------------------+
 * | 12    | 2V4_ABLE                 | PHY has 2.4 Vpp mode ability      |
 * +-------+--------------------------+-----------------------------------+
 * | 11    | LOW_POWER                | PMA has low-power ability         |
 * +-------+--------------------------+-----------------------------------+
 * | 10    | EEE                      | PHY has EEE ability               |
 * +-------+--------------------------+-----------------------------------+
 * | 9     | RECV_FAULT               | Able to detect receive fault      |
 * +-------+--------------------------+-----------------------------------+
 * | 2     | POLARITY                 | Receive polarity is reversed      |
 * +-------+--------------------------+-----------------------------------+
 * | 1     | FAULT                    | Fault condition detected          |
 * +-------+--------------------------+-----------------------------------+
 * | 0     | LINK                     | PMA receive link up               |
 * +-------+--------------------------+-----------------------------------+
 */

#define BITP_MDIO_PMA_B10L_STAT_LB_ABLE                           (13u)
#define BITL_MDIO_PMA_B10L_STAT_LB_ABLE                           (1u)
#define BITM_MDIO_PMA_B10L_STAT_LB_ABLE                           (0x2000u)

#define BITP_MDIO_PMA_B10L_STAT_2V4_ABLE                          (12u)
#define BITL_MDIO_PMA_B10L_STAT_2V4_ABLE                          (1u)
#define BITM_MDIO_PMA_B10L_STAT_2V4_ABLE                          (0x1000u)

#define BITP_MDIO_PMA_B10L_STAT_LOW_POWER                         (11u)
#define BITL_MDIO_PMA_B10L_STAT_LOW_POWER                         (1u)
#define BITM_MDIO_PMA_B10L_STAT_LOW_POWER                         (0x0800u)

#define BITP_MDIO_PMA_B10L_STAT_EEE                               (10u)
#define BITL_MDIO_PMA_B10L_STAT_EEE                               (1u)
#define BITM_MDIO_PMA_B10L_STAT_EEE                               (0x0400u)

#define BITP_MDIO_PMA_B10L_STAT_RECV_FAULT                        (9u)
#define BITL_MDIO_PMA_B10L_STAT_RECV_FAULT                        (1u)
#define BITM_MDIO_PMA_B10L_STAT_RECV_FAULT                        (0x0200u)

#define BITP_MDIO_PMA_B10L_STAT_POLARITY                          (2u)
#define BITL_MDIO_PMA_B10L_STAT_POLARITY                          (1u)
#define BITM_MDIO_PMA_B10L_STAT_POLARITY                          (0x04u)

#define BITP_MDIO_PMA_B10L_STAT_FAULT                             (1u)
#define BITL_MDIO_PMA_B10L_STAT_FAULT                             (1u)
#define BITM_MDIO_PMA_B10L_STAT_FAULT                             (0x02u)

#define BITP_MDIO_PMA_B10L_STAT_LINK                              (0u)
#define BITL_MDIO_PMA_B10L_STAT_LINK                              (1u)
#define BITM_MDIO_PMA_B10L_STAT_LINK                              (0x01u)

/* -------------------------------------------------------------------------- */
/* Register Name        : PMA_B10L_LINK_STAT
 * Register Addr        : 0x8302
 * Description          : 10BASE-T1L PMA Link Status
 */

#define MDIO_PMA_B10L_LINK_STAT_ADDR                              (0x8302u)

/* Bit field description table:
 * +=======+==========================+===================================+
 * | Bits  | Bit Field                | Description                       |
 * +=======+==========================+===================================+
 * | 9     | REM_RCVR_STAT_OK_LL      | Remote Receiver Status OK LL      |
 * +-------+--------------------------+-----------------------------------+
 * | 8     | REM_RCVR_STAT_OK         | Remote Receiver Status OK         |
 * +-------+--------------------------+-----------------------------------+
 * | 7     | LOC_RCVR_STAT_OK_LL      | Local Receiver Status OK LL       |
 * +-------+--------------------------+-----------------------------------+
 * | 6     | LOC_RCVR_STAT_OK         | Local Receiver Status OK          |
 * +-------+--------------------------+-----------------------------------+
 * | 5     | DSCR_STAT_OK_LL          | Descrambler Status OK Latch Low   |
 * +-------+--------------------------+-----------------------------------+
 * | 4     | DSCR_STAT_OK             | Descrambler Status OK             |
 * +-------+--------------------------+-----------------------------------+
 * | 1     | LINK_STAT_OK_LL          | Link Status OK Latch Low          |
 * +-------+--------------------------+-----------------------------------+
 * | 0     | LINK_STAT_OK             | Link Status OK                    |
 * +-------+--------------------------+-----------------------------------+
 */

#define BITP_MDIO_PMA_B10L_LINK_STAT_REM_RCVR_STAT_OK_LL          (9u)
#define BITL_MDIO_PMA_B10L_LINK_STAT_REM_RCVR_STAT_OK_LL          (1u)
#define BITM_MDIO_PMA_B10L_LINK_STAT_REM_RCVR_STAT_OK_LL          (0x0200u)

#define BITP_MDIO_PMA_B10L_LINK_STAT_REM_RCVR_STAT_OK             (8u)
#define BITL_MDIO_PMA_B10L_LINK_STAT_REM_RCVR_STAT_OK             (1u)
#define BITM_MDIO_PMA_B10L_LINK_STAT_REM_RCVR_STAT_OK             (0x0100u)

#define BITP_MDIO_PMA_B10L_LINK_STAT_LOC_RCVR_STAT_OK_LL          (7u)
#define BITL_MDIO_PMA_B10L_LINK_STAT_LOC_RCVR_STAT_OK_LL          (1u)
#define BITM_MDIO_PMA_B10L_LINK_STAT_LOC_RCVR_STAT_OK_LL          (0x80u)

#define BITP_MDIO_PMA_B10L_LINK_STAT_LOC_RCVR_STAT_OK             (6u)
#define BITL_MDIO_PMA_B10L_LINK_STAT_LOC_RCVR_STAT_OK             (1u)
#define BITM_MDIO_PMA_B10L_LINK_STAT_LOC_RCVR_STAT_OK             (0x40u)

#define BITP_MDIO_PMA_B10L_LINK_STAT_DSCR_STAT_OK_LL              (5u)
#define BITL_MDIO_PMA_B10L_LINK_STAT_DSCR_STAT_OK_LL              (1u)
#define BITM_MDIO_PMA_B10L_LINK_STAT_DSCR_STAT_OK_LL              (0x20u)

#define BITP_MDIO_PMA_B10L_LINK_STAT_DSCR_STAT_OK                 (4u)
#define BITL_MDIO_PMA_B10L_LINK_STAT_DSCR_STAT_OK                 (1u)
#define BITM_MDIO_PMA_B10L_LINK_STAT_DSCR_STAT_OK                 (0x10u)

#define BITP_MDIO_PMA_B10L_LINK_STAT_LINK_STAT_OK_LL              (1u)
#define BITL_MDIO_PMA_B10L_LINK_STAT_LINK_STAT_OK_LL              (1u)
#define BITM_MDIO_PMA_B10L_LINK_STAT_LINK_STAT_OK_LL              (0x02u)

#define BITP_MDIO_PMA_B10L_LINK_STAT_LINK_STAT_OK                 (0u)
#define BITL_MDIO_PMA_B10L_LINK_STAT_LINK_STAT_OK                 (1u)
#define BITM_MDIO_PMA_B10L_LINK_STAT_LINK_STAT_OK                 (0x01u)

/* -------------------------------------------------------------------------- */
/* Register Name        : PCS_B10L_CTRL
 * Register Addr        : 0x08E6
 * Description          : 10BASE-T1L PCS Control
 */

#define MDIO_PCS_B10L_CTRL_ADDR                                   (0x08E6u)

/* Bit field description table:
 * +=======+==========================+===================================+
 * | Bits  | Bit Field                | Description                       |
 * +=======+==========================+===================================+
 * | 14    | LB_PCS_EN                | PCS Loopback Enable               |
 * +-------+--------------------------+-----------------------------------+
 */

#define BITP_MDIO_PCS_B10L_CTRL_LB_PCS_EN                         (14u)
#define BITL_MDIO_PCS_B10L_CTRL_LB_PCS_EN                         (1u)
#define BITM_MDIO_PCS_B10L_CTRL_LB_PCS_EN                         (0x4000u)

/* -------------------------------------------------------------------------- */
/* Register Name        : PCS_B10L_STAT
 * Register Addr        : 0x08E7
 * Description          : 10BASE-T1L PCS Status
 */

#define MDIO_PCS_B10L_STAT_ADDR                                   (0x08E7u)

/* Bit field description table:
 * +=======+==========================+===================================+
 * | Bits  | Bit Field                | Description                       |
 * +=======+==========================+===================================+
 * | 2     | DSCR_STAT_OK_LL          | PCS Descrambler Status Latch Low  |
 * +-------+--------------------------+-----------------------------------+
 */

#define BITP_MDIO_PCS_B10L_STAT_DSCR_STAT_OK_LL                   (2u)
#define BITL_MDIO_PCS_B10L_STAT_DSCR_STAT_OK_LL                   (1u)
#define BITM_MDIO_PCS_B10L_STAT_DSCR_STAT_OK_LL                   (0x04u)

#endif /* ADI_MDIO_REG_H */
