/**
 * Copyright © 2026 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/********************************************************************
 *   @file   adi_macphy_reg.h
 *   @brief  This header file provides register descriptions for the
 *           MAC PHY.
 *******************************************************************/

#ifndef ADI_MACPHY_REG_H
#define ADI_MACPHY_REG_H

#define MACPHY_NUM_REGS                                (125u)

/* Register Name        : IDVER
 * Register Addr        : 0x0000u
 * Register Reset Value : 0x00000011u
 * Register MMS         : 0u
 */

#define MAC_IDVER_ADDR                                 (0x0000u)
#define MAC_IDVER_RESET_VAL                            (0x00000011u)
#define MAC_IDVER_MMS                                  (0u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 03-00 | MINVER                   | OA Minor Version.                 | 0x00000001  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 07-04 | MAJVER                   | OA Major Version.                 | 0x00000001  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_IDVER_MINVER                          (0u)
#define BITL_MAC_IDVER_MINVER                          (4u)
#define BITM_MAC_IDVER_MINVER                          (0x0000000Fu)

#define BITP_MAC_IDVER_MAJVER                          (4u)
#define BITL_MAC_IDVER_MAJVER                          (4u)
#define BITM_MAC_IDVER_MAJVER                          (0x000000F0u)

/* Register Name        : PHYID
 * Register Addr        : 0x0001u
 * Register Reset Value : 0x001D1000u
 * Register MMS         : 0u
 */

#define MAC_PHYID_ADDR                                 (0x0001u)
#define MAC_PHYID_RESET_VAL                            (0x001D1000u)
#define MAC_PHYID_MMS                                  (0u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 03-00 | REVISION                 | Manufacturers Revision Number.    | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 09-04 | MODEL                    | Manufacturers Model Number.       | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 31-10 | OUI                      | Organizationally Unique           | 0x00000744  |
 * |       |                          | Identifier (Bits 2:23).           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_PHYID_REVISION                        (0u)
#define BITL_MAC_PHYID_REVISION                        (4u)
#define BITM_MAC_PHYID_REVISION                        (0x0000000Fu)

#define BITP_MAC_PHYID_MODEL                           (4u)
#define BITL_MAC_PHYID_MODEL                           (6u)
#define BITM_MAC_PHYID_MODEL                           (0x000003F0u)

#define BITP_MAC_PHYID_OUI                             (10u)
#define BITL_MAC_PHYID_OUI                             (22u)
#define BITM_MAC_PHYID_OUI                             (0xFFFFFC00u)

/* Register Name        : CAPABILITY
 * Register Addr        : 0x0002u
 * Register Reset Value : 0x00000583u
 * Register MMS         : 0u
 */

#define MAC_CAPABILITY_ADDR                            (0x0002u)
#define MAC_CAPABILITY_RESET_VAL                       (0x00000583u)
#define MAC_CAPABILITY_MMS                             (0u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 02-00 | MINCPS                   | Minimum Supported Chunk Payload   | 0x00000003  |
 * |       |                          | Size.                             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 4     | SEQC                     | TX Data Chunk Sequence and Retry  | 0x00000000  |
 * |       |                          | Capability.                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 5     | AIDC                     | Address Increment Disable         | 0x00000000  |
 * |       |                          | Capability.                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 6     | FTSC                     | Frame Timestamp Capability.       | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 7     | CTC                      | Cut-Through Capability.           | 0x00000001  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 8     | DPRAC                    | Direct PHY Register Access        | 0x00000001  |
 * |       |                          | Capability.                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 9     | IPRAC                    | Indirect PHY Register Access      | 0x00000000  |
 * |       |                          | Capability.                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 10    | TXFCSVC                  | Transmit Frame Check Sequence     | 0x00000001  |
 * |       |                          | Validation Capability.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_CAPABILITY_MINCPS                     (0u)
#define BITL_MAC_CAPABILITY_MINCPS                     (3u)
#define BITM_MAC_CAPABILITY_MINCPS                     (0x00000007u)
#define ENUM_MAC_CAPABILITY_MINCPS_CPS64               (0x00000006u)
#define ENUM_MAC_CAPABILITY_MINCPS_CPS32               (0x00000005u)
#define ENUM_MAC_CAPABILITY_MINCPS_CPS16               (0x00000004u)
#define ENUM_MAC_CAPABILITY_MINCPS_CPS8                (0x00000003u)

#define BITP_MAC_CAPABILITY_SEQC                       (4u)
#define BITL_MAC_CAPABILITY_SEQC                       (1u)
#define BITM_MAC_CAPABILITY_SEQC                       (0x10u)
#define ENUM_MAC_CAPABILITY_SEQC_SEQC_1                (0x00000001u)
#define ENUM_MAC_CAPABILITY_SEQC_SEQC_0                (0x00000000u)

#define BITP_MAC_CAPABILITY_AIDC                       (5u)
#define BITL_MAC_CAPABILITY_AIDC                       (1u)
#define BITM_MAC_CAPABILITY_AIDC                       (0x20u)
#define ENUM_MAC_CAPABILITY_AIDC_AIDC_0                (0x00000000u)
#define ENUM_MAC_CAPABILITY_AIDC_AIDC_1                (0x00000001u)

#define BITP_MAC_CAPABILITY_FTSC                       (6u)
#define BITL_MAC_CAPABILITY_FTSC                       (1u)
#define BITM_MAC_CAPABILITY_FTSC                       (0x40u)
#define ENUM_MAC_CAPABILITY_FTSC_FTSC_1                (0x00000001u)
#define ENUM_MAC_CAPABILITY_FTSC_FTSC_0                (0x00000000u)

#define BITP_MAC_CAPABILITY_CTC                        (7u)
#define BITL_MAC_CAPABILITY_CTC                        (1u)
#define BITM_MAC_CAPABILITY_CTC                        (0x80u)
#define ENUM_MAC_CAPABILITY_CTC_CTC_0                  (0x00000000u)
#define ENUM_MAC_CAPABILITY_CTC_CTC_1                  (0x00000001u)

#define BITP_MAC_CAPABILITY_DPRAC                      (8u)
#define BITL_MAC_CAPABILITY_DPRAC                      (1u)
#define BITM_MAC_CAPABILITY_DPRAC                      (0x0100u)
#define ENUM_MAC_CAPABILITY_DPRAC_DPRAC_0              (0x00000000u)
#define ENUM_MAC_CAPABILITY_DPRAC_DPRAC_1              (0x00000001u)

#define BITP_MAC_CAPABILITY_IPRAC                      (9u)
#define BITL_MAC_CAPABILITY_IPRAC                      (1u)
#define BITM_MAC_CAPABILITY_IPRAC                      (0x0200u)
#define ENUM_MAC_CAPABILITY_IPRAC_IPRAC_0              (0x00000000u)
#define ENUM_MAC_CAPABILITY_IPRAC_IPRAC_1              (0x00000001u)

#define BITP_MAC_CAPABILITY_TXFCSVC                    (10u)
#define BITL_MAC_CAPABILITY_TXFCSVC                    (1u)
#define BITM_MAC_CAPABILITY_TXFCSVC                    (0x0400u)
#define ENUM_MAC_CAPABILITY_TXFCSVC_TXFCSVC_0          (0x00000000u)
#define ENUM_MAC_CAPABILITY_TXFCSVC_TXFCSVC_1          (0x00000001u)

/* Register Name        : RESET
 * Register Addr        : 0x0003u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0u
 */

#define MAC_RESET_ADDR                                 (0x0003u)
#define MAC_RESET_RESET_VAL                            (0x00000000u)
#define MAC_RESET_MMS                                  (0u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | SWRESET                  | Software Reset.                   | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_RESET_SWRESET                         (0u)
#define BITL_MAC_RESET_SWRESET                         (1u)
#define BITM_MAC_RESET_SWRESET                         (0x01u)

/* Register Name        : CONFIG0
 * Register Addr        : 0x0004u
 * Register Reset Value : 0x00000026u
 * Register MMS         : 0u
 */

#define MAC_CONFIG0_ADDR                               (0x0004u)
#define MAC_CONFIG0_RESET_VAL                          (0x00000026u)
#define MAC_CONFIG0_MMS                                (0u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 02-00 | CPS                      | Chunk Payload Selector (N).       | 0x00000006  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 4     | SEQE                     | Enable TX Data Chunk Sequence     | 0x00000000  |
 * |       |                          | and Retry.                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 5     | PROTE                    | Enable Control Data Read Write    | 0x00000001  |
 * |       |                          | Protection.                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 6     | FTSS                     | Receive Frame Timestamp Select.   | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 7     | FTSE                     | Frame Timestamp Enable.           | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 8     | RXCTE                    | Receive Cut-Through Enable.       | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 9     | TXCTE                    | Transmit Cut-Through Enable.      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11-10 | TXCTHRESH                | Transmit Credit Threshold.        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12    | ZARFE                    | Zero-Align Receive Frame Enable.  | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13    | CSARFE                   | CSn Align Receive Frame Enable.   | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14    | TXFCSVE                  | Transmit Frame Check Sequence     | 0x00000000  |
 * |       |                          | Validation Enable.                |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15    | SYNC                     | Configuration Synchronization.    | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_CONFIG0_CPS                           (0u)
#define BITL_MAC_CONFIG0_CPS                           (3u)
#define BITM_MAC_CONFIG0_CPS                           (0x00000007u)
#define ENUM_MAC_CONFIG0_CPS_CHUNK_8BYTE               (0x00000003u)
#define ENUM_MAC_CONFIG0_CPS_CHUNK_16BYTE              (0x00000004u)
#define ENUM_MAC_CONFIG0_CPS_CHUNK_32BYTE              (0x00000005u)
#define ENUM_MAC_CONFIG0_CPS_CHUNK_64BYTE              (0x00000006u)

#define BITP_MAC_CONFIG0_SEQE                          (4u)
#define BITL_MAC_CONFIG0_SEQE                          (1u)
#define BITM_MAC_CONFIG0_SEQE                          (0x10u)
#define ENUM_MAC_CONFIG0_SEQE_DISABLE                  (0x00000000u)
#define ENUM_MAC_CONFIG0_SEQE_ENABLE                   (0x00000001u)

#define BITP_MAC_CONFIG0_PROTE                         (5u)
#define BITL_MAC_CONFIG0_PROTE                         (1u)
#define BITM_MAC_CONFIG0_PROTE                         (0x20u)
#define ENUM_MAC_CONFIG0_PROTE_DISABLE                 (0x00000000u)
#define ENUM_MAC_CONFIG0_PROTE_ENABLE                  (0x00000001u)

#define BITP_MAC_CONFIG0_FTSS                          (6u)
#define BITL_MAC_CONFIG0_FTSS                          (1u)
#define BITM_MAC_CONFIG0_FTSS                          (0x40u)
#define ENUM_MAC_CONFIG0_FTSS_FTSS_0                   (0x00000000u)
#define ENUM_MAC_CONFIG0_FTSS_FTSS_1                   (0x00000001u)

#define BITP_MAC_CONFIG0_FTSE                          (7u)
#define BITL_MAC_CONFIG0_FTSE                          (1u)
#define BITM_MAC_CONFIG0_FTSE                          (0x80u)
#define ENUM_MAC_CONFIG0_FTSE_DISABLE                  (0x00000000u)
#define ENUM_MAC_CONFIG0_FTSE_ENABLE                   (0x00000001u)

#define BITP_MAC_CONFIG0_RXCTE                         (8u)
#define BITL_MAC_CONFIG0_RXCTE                         (1u)
#define BITM_MAC_CONFIG0_RXCTE                         (0x0100u)
#define ENUM_MAC_CONFIG0_RXCTE_DISABLE                 (0x00000000u)
#define ENUM_MAC_CONFIG0_RXCTE_ENABLE                  (0x00000001u)

#define BITP_MAC_CONFIG0_TXCTE                         (9u)
#define BITL_MAC_CONFIG0_TXCTE                         (1u)
#define BITM_MAC_CONFIG0_TXCTE                         (0x0200u)
#define ENUM_MAC_CONFIG0_TXCTE_DISABLE                 (0x00000000u)
#define ENUM_MAC_CONFIG0_TXCTE_ENABLE                  (0x00000001u)

#define BITP_MAC_CONFIG0_TXCTHRESH                     (10u)
#define BITL_MAC_CONFIG0_TXCTHRESH                     (2u)
#define BITM_MAC_CONFIG0_TXCTHRESH                     (0x00000C00u)
#define ENUM_MAC_CONFIG0_TXCTHRESH_CREDIT_1            (0x00000000u)
#define ENUM_MAC_CONFIG0_TXCTHRESH_CREDIT_4            (0x00000001u)
#define ENUM_MAC_CONFIG0_TXCTHRESH_CREDIT_8            (0x00000002u)
#define ENUM_MAC_CONFIG0_TXCTHRESH_CREDIT_16           (0x00000003u)

#define BITP_MAC_CONFIG0_ZARFE                         (12u)
#define BITL_MAC_CONFIG0_ZARFE                         (1u)
#define BITM_MAC_CONFIG0_ZARFE                         (0x1000u)
#define ENUM_MAC_CONFIG0_ZARFE_DISABLE                 (0x00000000u)
#define ENUM_MAC_CONFIG0_ZARFE_ENABLE                  (0x00000001u)

#define BITP_MAC_CONFIG0_CSARFE                        (13u)
#define BITL_MAC_CONFIG0_CSARFE                        (1u)
#define BITM_MAC_CONFIG0_CSARFE                        (0x2000u)
#define ENUM_MAC_CONFIG0_CSARFE_DISABLE                (0x00000000u)
#define ENUM_MAC_CONFIG0_CSARFE_ENABLE                 (0x00000001u)

#define BITP_MAC_CONFIG0_TXFCSVE                       (14u)
#define BITL_MAC_CONFIG0_TXFCSVE                       (1u)
#define BITM_MAC_CONFIG0_TXFCSVE                       (0x4000u)
#define ENUM_MAC_CONFIG0_TXFCSVE_DISABLE               (0x00000000u)
#define ENUM_MAC_CONFIG0_TXFCSVE_ENABLE                (0x00000001u)

#define BITP_MAC_CONFIG0_SYNC                          (15u)
#define BITL_MAC_CONFIG0_SYNC                          (1u)
#define BITM_MAC_CONFIG0_SYNC                          (0x8000u)
#define ENUM_MAC_CONFIG0_SYNC_NOT_CONFIGURED           (0x00000000u)
#define ENUM_MAC_CONFIG0_SYNC_CONFIGURED               (0x00000001u)

/* Register Name        : CONFIG2
 * Register Addr        : 0x0006u
 * Register Reset Value : 0x005C2020u
 * Register MMS         : 0u
 */

#define MAC_CONFIG2_ADDR                               (0x0006u)
#define MAC_CONFIG2_RESET_VAL                          (0x005C2020u)
#define MAC_CONFIG2_MMS                                (0u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 2     | FWD_UNK2HOST             | Forward Frames Not Matching Any   | 0x00000000  |
 * |       |                          | MAC Address to the Host.          |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 4     | RCV_IFG_ERR_FRM          | Admit Frames with IFG Errors.     | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 5     | HOST_CRC_APPEND          | Enable CRC Append for Frames      | 0x00000001  |
 * |       |                          | Coming in from the Host.          |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 6     | STATS_CLR_ON_RD          | Statistics Clear on Reading.      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 7     | SFD_DETECT_SRC           | Determines If the SFD is          | 0x00000000  |
 * |       |                          | Detected in the PHY or MAC.       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 8     | TX_RDY_ON_EMPTY          | Assert TX_RDY When the Tx FIFO    | 0x00000000  |
 * |       |                          | is Empty.                         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13    | FWD_UNK2LCE              | Forward Frames Not Matching a     | 0x00000001  |
 * |       |                          | MAC Addr to LCE                   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 17    | LO_PRIO_FIFO_CRC_APPEND  | Enable CRC Append for Frames      | 0x00000000  |
 * |       |                          | Coming in from the Other Queue.   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 21    | RX_LENGTH_FIELD_CHK_EN   | Checks the Length Field and       | 0x00000000  |
 * |       |                          | Dumps the Frame If Incorrect.     |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 22    | TX_IFG_PART2_EN          | Enables the Part1/Part2 Optional  | 0x00000001  |
 * |       |                          | IFG Feature.                      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 23    | TX_BACK_OFF_DIS          | Disables the Transmit Back off.   | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_CONFIG2_FWD_UNK2HOST                  (2u)
#define BITL_MAC_CONFIG2_FWD_UNK2HOST                  (1u)
#define BITM_MAC_CONFIG2_FWD_UNK2HOST                  (0x04u)
#define ENUM_MAC_CONFIG2_FWD_UNK2HOST_DISABLE          (0x00000000u)
#define ENUM_MAC_CONFIG2_FWD_UNK2HOST_ENABLE           (0x00000001u)

#define BITP_MAC_CONFIG2_RCV_IFG_ERR_FRM               (4u)
#define BITL_MAC_CONFIG2_RCV_IFG_ERR_FRM               (1u)
#define BITM_MAC_CONFIG2_RCV_IFG_ERR_FRM               (0x10u)
#define ENUM_MAC_CONFIG2_RCV_IFG_ERR_FRM_DISABLE       (0x00000000u)
#define ENUM_MAC_CONFIG2_RCV_IFG_ERR_FRM_ENABLE        (0x00000001u)

#define BITP_MAC_CONFIG2_HOST_CRC_APPEND               (5u)
#define BITL_MAC_CONFIG2_HOST_CRC_APPEND               (1u)
#define BITM_MAC_CONFIG2_HOST_CRC_APPEND               (0x20u)
#define ENUM_MAC_CONFIG2_HOST_CRC_APPEND_DISABLE       (0x00000000u)
#define ENUM_MAC_CONFIG2_HOST_CRC_APPEND_ENABLE        (0x00000001u)

#define BITP_MAC_CONFIG2_STATS_CLR_ON_RD               (6u)
#define BITL_MAC_CONFIG2_STATS_CLR_ON_RD               (1u)
#define BITM_MAC_CONFIG2_STATS_CLR_ON_RD               (0x40u)
#define ENUM_MAC_CONFIG2_STATS_CLR_ON_RD_HOLD_STAT     (0x00000000u)
#define ENUM_MAC_CONFIG2_STATS_CLR_ON_RD_CLR_STAT      (0x00000001u)

#define BITP_MAC_CONFIG2_SFD_DETECT_SRC                (7u)
#define BITL_MAC_CONFIG2_SFD_DETECT_SRC                (1u)
#define BITM_MAC_CONFIG2_SFD_DETECT_SRC                (0x80u)
#define ENUM_MAC_CONFIG2_SFD_DETECT_SRC_PHY            (0x00000000u)
#define ENUM_MAC_CONFIG2_SFD_DETECT_SRC_MAC            (0x00000001u)

#define BITP_MAC_CONFIG2_TX_RDY_ON_EMPTY               (8u)
#define BITL_MAC_CONFIG2_TX_RDY_ON_EMPTY               (1u)
#define BITM_MAC_CONFIG2_TX_RDY_ON_EMPTY               (0x0100u)
#define ENUM_MAC_CONFIG2_TX_RDY_ON_EMPTY_TX_RDY_ON_TRANS (0x00000000u)
#define ENUM_MAC_CONFIG2_TX_RDY_ON_EMPTY_TX_RDY_ON_EMPTY (0x00000001u)

#define BITP_MAC_CONFIG2_FWD_UNK2LCE                  (13u)
#define BITL_MAC_CONFIG2_FWD_UNK2LCE                  (1u)
#define BITM_MAC_CONFIG2_FWD_UNK2LCE                  (0x2000u)
#define ENUM_MAC_CONFIG2_FWD_UNK2LCE_DISABLE          (0x00000000u)
#define ENUM_MAC_CONFIG2_FWD_UNK2LCE_ENABLE           (0x00000001u)

#define BITP_MAC_CONFIG2_LO_PRIO_FIFO_CRC_APPEND       (17u)
#define BITL_MAC_CONFIG2_LO_PRIO_FIFO_CRC_APPEND       (1u)
#define BITM_MAC_CONFIG2_LO_PRIO_FIFO_CRC_APPEND       (0x00020000u)
#define ENUM_MAC_CONFIG2_LO_PRIO_FIFO_CRC_APPEND_DISABLE (0x00000000u)
#define ENUM_MAC_CONFIG2_LO_PRIO_FIFO_CRC_APPEND_ENABLE (0x00000001u)

#define BITP_MAC_CONFIG2_RX_LENGTH_FIELD_CHK_EN        (21u)
#define BITL_MAC_CONFIG2_RX_LENGTH_FIELD_CHK_EN        (1u)
#define BITM_MAC_CONFIG2_RX_LENGTH_FIELD_CHK_EN        (0x00200000u)
#define ENUM_MAC_CONFIG2_RX_LENGTH_FIELD_CHK_EN_DISABLE (0x00000000u)
#define ENUM_MAC_CONFIG2_RX_LENGTH_FIELD_CHK_EN_ENABLE (0x00000001u)

#define BITP_MAC_CONFIG2_TX_IFG_PART2_EN               (22u)
#define BITL_MAC_CONFIG2_TX_IFG_PART2_EN               (1u)
#define BITM_MAC_CONFIG2_TX_IFG_PART2_EN               (0x00400000u)
#define ENUM_MAC_CONFIG2_TX_IFG_PART2_EN_DISABLE       (0x00000000u)
#define ENUM_MAC_CONFIG2_TX_IFG_PART2_EN_ENABLE        (0x00000001u)

#define BITP_MAC_CONFIG2_TX_BACK_OFF_DIS               (23u)
#define BITL_MAC_CONFIG2_TX_BACK_OFF_DIS               (1u)
#define BITM_MAC_CONFIG2_TX_BACK_OFF_DIS               (0x00800000u)
#define ENUM_MAC_CONFIG2_TX_BACK_OFF_DIS_TX_BACK_OFF_ENABLE (0x00000000u)
#define ENUM_MAC_CONFIG2_TX_BACK_OFF_DIS_TX_BACK_OFF_DISABLE (0x00000001u)

/* Register Name        : STATUS0
 * Register Addr        : 0x0008u
 * Register Reset Value : 0x00000040u
 * Register MMS         : 0u
 */

#define MAC_STATUS0_ADDR                               (0x0008u)
#define MAC_STATUS0_RESET_VAL                          (0x00000040u)
#define MAC_STATUS0_MMS                                (0u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | TXPE                     | Transmit Protocol Error.          | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | TXBOE                    | Host Tx FIFO Overflow.            | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 2     | TXBUE                    | Host Tx FIFO Underrun Error.      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 3     | RXBOE                    | Receive Buffer Overflow Error.    | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 4     | LOFE                     | Loss of Frame Error.              | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 5     | HDRE                     | Header Error.                     | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 6     | RESETC                   | Reset Complete.                   | 0x00000001  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 7     | PHYINT                   | PHY Interrupt for Port1.          | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 8     | TTSCAA                   | Transmit Timestamp Capture        | 0x00000000  |
 * |       |                          | Available A.                      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 9     | TTSCAB                   | Transmit Timestamp Capture        | 0x00000000  |
 * |       |                          | Available B.                      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 10    | TTSCAC                   | Transmit Timestamp Capture        | 0x00000000  |
 * |       |                          | Available C.                      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11    | TXFCSE                   | Transmit Frame Check Sequence     | 0x00000000  |
 * |       |                          | Error.                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12    | CDPE                     | Control Data Protection Error.    | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_STATUS0_TXPE                          (0u)
#define BITL_MAC_STATUS0_TXPE                          (1u)
#define BITM_MAC_STATUS0_TXPE                          (0x01u)

#define BITP_MAC_STATUS0_TXBOE                         (1u)
#define BITL_MAC_STATUS0_TXBOE                         (1u)
#define BITM_MAC_STATUS0_TXBOE                         (0x02u)

#define BITP_MAC_STATUS0_TXBUE                         (2u)
#define BITL_MAC_STATUS0_TXBUE                         (1u)
#define BITM_MAC_STATUS0_TXBUE                         (0x04u)

#define BITP_MAC_STATUS0_RXBOE                         (3u)
#define BITL_MAC_STATUS0_RXBOE                         (1u)
#define BITM_MAC_STATUS0_RXBOE                         (0x08u)

#define BITP_MAC_STATUS0_LOFE                          (4u)
#define BITL_MAC_STATUS0_LOFE                          (1u)
#define BITM_MAC_STATUS0_LOFE                          (0x10u)

#define BITP_MAC_STATUS0_HDRE                          (5u)
#define BITL_MAC_STATUS0_HDRE                          (1u)
#define BITM_MAC_STATUS0_HDRE                          (0x20u)

#define BITP_MAC_STATUS0_RESETC                        (6u)
#define BITL_MAC_STATUS0_RESETC                        (1u)
#define BITM_MAC_STATUS0_RESETC                        (0x40u)

#define BITP_MAC_STATUS0_PHYINT                        (7u)
#define BITL_MAC_STATUS0_PHYINT                        (1u)
#define BITM_MAC_STATUS0_PHYINT                        (0x80u)

#define BITP_MAC_STATUS0_TTSCAA                        (8u)
#define BITL_MAC_STATUS0_TTSCAA                        (1u)
#define BITM_MAC_STATUS0_TTSCAA                        (0x0100u)

#define BITP_MAC_STATUS0_TTSCAB                        (9u)
#define BITL_MAC_STATUS0_TTSCAB                        (1u)
#define BITM_MAC_STATUS0_TTSCAB                        (0x0200u)

#define BITP_MAC_STATUS0_TTSCAC                        (10u)
#define BITL_MAC_STATUS0_TTSCAC                        (1u)
#define BITM_MAC_STATUS0_TTSCAC                        (0x0400u)

#define BITP_MAC_STATUS0_TXFCSE                        (11u)
#define BITL_MAC_STATUS0_TXFCSE                        (1u)
#define BITM_MAC_STATUS0_TXFCSE                        (0x0800u)

#define BITP_MAC_STATUS0_CDPE                          (12u)
#define BITL_MAC_STATUS0_CDPE                          (1u)
#define BITM_MAC_STATUS0_CDPE                          (0x1000u)

/* Register Name        : STATUS1
 * Register Addr        : 0x0009u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0u
 */

#define MAC_STATUS1_ADDR                               (0x0009u)
#define MAC_STATUS1_RESET_VAL                          (0x00000000u)
#define MAC_STATUS1_MMS                                (0u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | LINK_STATUS              | PHY Link Status.                  | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 3     | TX_RDY                   | Tx Ready.                         | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 4     | RX_RDY                   | Rx FIFO Contains Data.            | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 6     | VS_INT                   | Transaction Interrupt Controller  | 0x00000000  |
 * |       |                          | Interrupt                         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 8     | RX_IFG_ERR               | Rx MAC Inter Frame Gap Error.     | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 9     | MAX_RR_ERR               | Transmit Max Collision Retry      | 0x00000000  |
 * |       |                          | Reached.                          |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11    | RX_ECC_ERR               | ECC Error on Reading the Frame    | 0x00000000  |
 * |       |                          | Size from an Rx FIFO.             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12    | TX_ECC_ERR               | ECC Error on Reading the Frame    | 0x00000000  |
 * |       |                          | Size from a Tx FIFO.              |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 30    | RD_ACC_ERR               | Read Access Error.                | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_STATUS1_LINK_STATUS                   (0u)
#define BITL_MAC_STATUS1_LINK_STATUS                   (1u)
#define BITM_MAC_STATUS1_LINK_STATUS                   (0x01u)
#define ENUM_MAC_STATUS1_LINK_STATUS_DOWN              (0x00000000u)
#define ENUM_MAC_STATUS1_LINK_STATUS_UP                (0x00000001u)

#define BITP_MAC_STATUS1_TX_RDY                        (3u)
#define BITL_MAC_STATUS1_TX_RDY                        (1u)
#define BITM_MAC_STATUS1_TX_RDY                        (0x08u)

#define BITP_MAC_STATUS1_RX_RDY                        (4u)
#define BITL_MAC_STATUS1_RX_RDY                        (1u)
#define BITM_MAC_STATUS1_RX_RDY                        (0x10u)

#define BITP_MAC_STATUS1_VS_INT                        (6u)
#define BITL_MAC_STATUS1_VS_INT                        (1u)
#define BITM_MAC_STATUS1_VS_INT                        (0x40u)

#define BITP_MAC_STATUS1_RX_IFG_ERR                    (8u)
#define BITL_MAC_STATUS1_RX_IFG_ERR                    (1u)
#define BITM_MAC_STATUS1_RX_IFG_ERR                    (0x0100u)

#define BITP_MAC_STATUS1_MAX_RR_ERR                    (9u)
#define BITL_MAC_STATUS1_MAX_RR_ERR                    (1u)
#define BITM_MAC_STATUS1_MAX_RR_ERR                    (0x0200u)

#define BITP_MAC_STATUS1_RX_ECC_ERR                    (11u)
#define BITL_MAC_STATUS1_RX_ECC_ERR                    (1u)
#define BITM_MAC_STATUS1_RX_ECC_ERR                    (0x0800u)

#define BITP_MAC_STATUS1_TX_ECC_ERR                    (12u)
#define BITL_MAC_STATUS1_TX_ECC_ERR                    (1u)
#define BITM_MAC_STATUS1_TX_ECC_ERR                    (0x1000u)

#define BITP_MAC_STATUS1_RD_ACC_ERR                    (30u)
#define BITL_MAC_STATUS1_RD_ACC_ERR                    (1u)
#define BITM_MAC_STATUS1_RD_ACC_ERR                    (0x40000000u)

/* Register Name        : BUFSTS
 * Register Addr        : 0x000Bu
 * Register Reset Value : 0x00003B00u
 * Register MMS         : 0u
 */

#define MAC_BUFSTS_ADDR                                (0x000Bu)
#define MAC_BUFSTS_RESET_VAL                           (0x00003B00u)
#define MAC_BUFSTS_MMS                                 (0u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | RCA                      | Receive Chunks Available.         | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-08 | TXC                      | Transmit Credits Available.       | 0x0000003b  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_BUFSTS_RCA                            (0u)
#define BITL_MAC_BUFSTS_RCA                            (8u)
#define BITM_MAC_BUFSTS_RCA                            (0x000000FFu)

#define BITP_MAC_BUFSTS_TXC                            (8u)
#define BITL_MAC_BUFSTS_TXC                            (8u)
#define BITM_MAC_BUFSTS_TXC                            (0x0000FF00u)

/* Register Name        : IMASK0
 * Register Addr        : 0x000Cu
 * Register Reset Value : 0x00001FBFu
 * Register MMS         : 0u
 */

#define MAC_IMASK0_ADDR                                (0x000Cu)
#define MAC_IMASK0_RESET_VAL                           (0x00001FBFu)
#define MAC_IMASK0_MMS                                 (0u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | TXPEM                    | Transmit Protocol Error Mask.     | 0x00000001  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | TXBOEM                   | Transmit Buffer Overflow Error    | 0x00000001  |
 * |       |                          | Mask.                             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 2     | TXBUEM                   | Transmit Buffer Underflow Error   | 0x00000001  |
 * |       |                          | Mask.                             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 3     | RXBOEM                   | Receive Buffer Overflow Error     | 0x00000001  |
 * |       |                          | Mask.                             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 4     | LOFEM                    | Loss of Frame Error Mask.         | 0x00000001  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 5     | HDREM                    | Header Error Mask.                | 0x00000001  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 6     | RESETCM                  | RESET Complete Mask.              | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 7     | PHYINTM                  | Physical Layer Interrupt Mask.    | 0x00000001  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 8     | TTSCAAM                  | Transmit Timestamp Capture        | 0x00000001  |
 * |       |                          | Available A Mask.                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 9     | TTSCABM                  | Transmit Timestamp Capture        | 0x00000001  |
 * |       |                          | Available B Mask.                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 10    | TTSCACM                  | Transmit Timestamp Capture        | 0x00000001  |
 * |       |                          | Available C Mask.                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11    | TXFCSEM                  | Transmit Frame Check Sequence     | 0x00000001  |
 * |       |                          | Error Mask.                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12    | CDPEM                    | Control Data Protection Error     | 0x00000001  |
 * |       |                          | Mask.                             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_IMASK0_TXPEM                          (0u)
#define BITL_MAC_IMASK0_TXPEM                          (1u)
#define BITM_MAC_IMASK0_TXPEM                          (0x01u)

#define BITP_MAC_IMASK0_TXBOEM                         (1u)
#define BITL_MAC_IMASK0_TXBOEM                         (1u)
#define BITM_MAC_IMASK0_TXBOEM                         (0x02u)

#define BITP_MAC_IMASK0_TXBUEM                         (2u)
#define BITL_MAC_IMASK0_TXBUEM                         (1u)
#define BITM_MAC_IMASK0_TXBUEM                         (0x04u)

#define BITP_MAC_IMASK0_RXBOEM                         (3u)
#define BITL_MAC_IMASK0_RXBOEM                         (1u)
#define BITM_MAC_IMASK0_RXBOEM                         (0x08u)

#define BITP_MAC_IMASK0_LOFEM                          (4u)
#define BITL_MAC_IMASK0_LOFEM                          (1u)
#define BITM_MAC_IMASK0_LOFEM                          (0x10u)

#define BITP_MAC_IMASK0_HDREM                          (5u)
#define BITL_MAC_IMASK0_HDREM                          (1u)
#define BITM_MAC_IMASK0_HDREM                          (0x20u)

#define BITP_MAC_IMASK0_RESETCM                        (6u)
#define BITL_MAC_IMASK0_RESETCM                        (1u)
#define BITM_MAC_IMASK0_RESETCM                        (0x40u)

#define BITP_MAC_IMASK0_PHYINTM                        (7u)
#define BITL_MAC_IMASK0_PHYINTM                        (1u)
#define BITM_MAC_IMASK0_PHYINTM                        (0x80u)

#define BITP_MAC_IMASK0_TTSCAAM                        (8u)
#define BITL_MAC_IMASK0_TTSCAAM                        (1u)
#define BITM_MAC_IMASK0_TTSCAAM                        (0x0100u)

#define BITP_MAC_IMASK0_TTSCABM                        (9u)
#define BITL_MAC_IMASK0_TTSCABM                        (1u)
#define BITM_MAC_IMASK0_TTSCABM                        (0x0200u)

#define BITP_MAC_IMASK0_TTSCACM                        (10u)
#define BITL_MAC_IMASK0_TTSCACM                        (1u)
#define BITM_MAC_IMASK0_TTSCACM                        (0x0400u)

#define BITP_MAC_IMASK0_TXFCSEM                        (11u)
#define BITL_MAC_IMASK0_TXFCSEM                        (1u)
#define BITM_MAC_IMASK0_TXFCSEM                        (0x0800u)

#define BITP_MAC_IMASK0_CDPEM                          (12u)
#define BITL_MAC_IMASK0_CDPEM                          (1u)
#define BITM_MAC_IMASK0_CDPEM                          (0x1000u)

/* Register Name        : IMASK1
 * Register Addr        : 0x000Du
 * Register Reset Value : 0x43FA1F5Au
 * Register MMS         : 0u
 */

#define MAC_IMASK1_ADDR                                (0x000Du)
#define MAC_IMASK1_RESET_VAL                           (0x43FA1F5Au)
#define MAC_IMASK1_MMS                                 (0u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 1     | LINK_CHANGE_MASK         | Mask Bit for LINK_CHANGE.         | 0x00000001  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 3     | TX_RDY_MASK              | Mask Bit for TX_FRM_DONE.         | 0x00000001  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 6     | VS_INT_MASK              | Mask Bit for VS_INT.              | 0x00000001  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 8     | RX_IFG_ERR_MASK          | Mask Bit for RX_IFG_ERR.          | 0x00000001  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 9     | MAX_RR_ERR_MASK          | Mask Bit for MAX_RR_ERR.          | 0x00000001  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11    | RX_ECC_ERR_MASK          | Mask Bit for RXF_ECC_ERR.         | 0x00000001  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12    | TX_ECC_ERR_MASK          | Mask Bit for TXF_ECC_ERR.         | 0x00000001  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 30    | RD_ACC_ERR_MASK          | Mask Bit for RD_ACC_ERR.          | 0x00000001  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_IMASK1_LINK_CHANGE_MASK               (1u)
#define BITL_MAC_IMASK1_LINK_CHANGE_MASK               (1u)
#define BITM_MAC_IMASK1_LINK_CHANGE_MASK               (0x02u)

#define BITP_MAC_IMASK1_TX_RDY_MASK                    (3u)
#define BITL_MAC_IMASK1_TX_RDY_MASK                    (1u)
#define BITM_MAC_IMASK1_TX_RDY_MASK                    (0x08u)

#define BITP_MAC_IMASK1_VS_INT_MASK                    (6u)
#define BITL_MAC_IMASK1_VS_INT_MASK                    (1u)
#define BITM_MAC_IMASK1_VS_INT_MASK                    (0x40u)

#define BITP_MAC_IMASK1_RX_IFG_ERR_MASK                (8u)
#define BITL_MAC_IMASK1_RX_IFG_ERR_MASK                (1u)
#define BITM_MAC_IMASK1_RX_IFG_ERR_MASK                (0x0100u)

#define BITP_MAC_IMASK1_MAX_RR_ERR_MASK                (9u)
#define BITL_MAC_IMASK1_MAX_RR_ERR_MASK                (1u)
#define BITM_MAC_IMASK1_MAX_RR_ERR_MASK                (0x0200u)

#define BITP_MAC_IMASK1_RX_ECC_ERR_MASK                (11u)
#define BITL_MAC_IMASK1_RX_ECC_ERR_MASK                (1u)
#define BITM_MAC_IMASK1_RX_ECC_ERR_MASK                (0x0800u)

#define BITP_MAC_IMASK1_TX_ECC_ERR_MASK                (12u)
#define BITL_MAC_IMASK1_TX_ECC_ERR_MASK                (1u)
#define BITM_MAC_IMASK1_TX_ECC_ERR_MASK                (0x1000u)

#define BITP_MAC_IMASK1_RD_ACC_ERR_MASK                (30u)
#define BITL_MAC_IMASK1_RD_ACC_ERR_MASK                (1u)
#define BITM_MAC_IMASK1_RD_ACC_ERR_MASK                (0x40000000u)

/* Register Name        : TTSCAH
 * Register Addr        : 0x0010u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0u
 */

#define MAC_TTSCAH_ADDR                                (0x0010u)
#define MAC_TTSCAH_RESET_VAL                           (0x00000000u)
#define MAC_TTSCAH_MMS                                 (0u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | TTSCH_A                  | Transmit Timestamp A Bits 63-32   | 0x00000000  |
 * |       |                          | (Seconds).                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TTSCAH_TTSCH_A                        (0u)
#define BITL_MAC_TTSCAH_TTSCH_A                        (32u)
#define BITM_MAC_TTSCAH_TTSCH_A                        (0xFFFFFFFFu)

/* Register Name        : TTSCAL
 * Register Addr        : 0x0011u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0u
 */

#define MAC_TTSCAL_ADDR                                (0x0011u)
#define MAC_TTSCAL_RESET_VAL                           (0x00000000u)
#define MAC_TTSCAL_MMS                                 (0u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | TTSCL_A                  | Transmit Timestamp A Bits 31-0    | 0x00000000  |
 * |       |                          | (NanoSeconds).                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TTSCAL_TTSCL_A                        (0u)
#define BITL_MAC_TTSCAL_TTSCL_A                        (32u)
#define BITM_MAC_TTSCAL_TTSCL_A                        (0xFFFFFFFFu)

/* Register Name        : TTSCBH
 * Register Addr        : 0x0012u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0u
 */

#define MAC_TTSCBH_ADDR                                (0x0012u)
#define MAC_TTSCBH_RESET_VAL                           (0x00000000u)
#define MAC_TTSCBH_MMS                                 (0u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | TTSCH_B                  | Transmit Timestamp B Bits 63-32   | 0x00000000  |
 * |       |                          | (Seconds).                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TTSCBH_TTSCH_B                        (0u)
#define BITL_MAC_TTSCBH_TTSCH_B                        (32u)
#define BITM_MAC_TTSCBH_TTSCH_B                        (0xFFFFFFFFu)

/* Register Name        : TTSCBL
 * Register Addr        : 0x0013u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0u
 */

#define MAC_TTSCBL_ADDR                                (0x0013u)
#define MAC_TTSCBL_RESET_VAL                           (0x00000000u)
#define MAC_TTSCBL_MMS                                 (0u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | TTSCL_B                  | Transmit Timestamp B Bits 31-0    | 0x00000000  |
 * |       |                          | (NanoSeconds).                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TTSCBL_TTSCL_B                        (0u)
#define BITL_MAC_TTSCBL_TTSCL_B                        (32u)
#define BITM_MAC_TTSCBL_TTSCL_B                        (0xFFFFFFFFu)

/* Register Name        : TTSCCH
 * Register Addr        : 0x0014u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0u
 */

#define MAC_TTSCCH_ADDR                                (0x0014u)
#define MAC_TTSCCH_RESET_VAL                           (0x00000000u)
#define MAC_TTSCCH_MMS                                 (0u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | TTSCH_C                  | Transmit Timestamp C Bits 63-32   | 0x00000000  |
 * |       |                          | (Seconds).                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TTSCCH_TTSCH_C                        (0u)
#define BITL_MAC_TTSCCH_TTSCH_C                        (32u)
#define BITM_MAC_TTSCCH_TTSCH_C                        (0xFFFFFFFFu)

/* Register Name        : TTSCCL
 * Register Addr        : 0x0015u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0u
 */

#define MAC_TTSCCL_ADDR                                (0x0015u)
#define MAC_TTSCCL_RESET_VAL                           (0x00000000u)
#define MAC_TTSCCL_MMS                                 (0u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | TTSCL_C                  | Transmit Timestamp C Bits 31-0    | 0x00000000  |
 * |       |                          | (NanoSeconds).                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TTSCCL_TTSCL_C                        (0u)
#define BITL_MAC_TTSCCL_TTSCL_C                        (32u)
#define BITM_MAC_TTSCCL_TTSCL_C                        (0xFFFFFFFFu)

/* Register Name        : TX_SPACE
 * Register Addr        : 0x0032u
 * Register Reset Value : 0x000007FFu
 * Register MMS         : 1u
 */

#define MAC_TX_SPACE_ADDR                              (0x0032u)
#define MAC_TX_SPACE_RESET_VAL                         (0x000007FFu)
#define MAC_TX_SPACE_MMS                               (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 13-00 | TX_SPACE                 | Transmit FIFO Space Available in  | 0x000007ff  |
 * |       |                          | Half Words (16 Bits).             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TX_SPACE_TX_SPACE                     (0u)
#define BITL_MAC_TX_SPACE_TX_SPACE                     (14u)
#define BITM_MAC_TX_SPACE_TX_SPACE                     (0x00003FFFu)

/* Register Name        : RX_THRESH
 * Register Addr        : 0x0033u
 * Register Reset Value : 0x00000004u
 * Register MMS         : 1u
 */

#define MAC_RX_THRESH_ADDR                             (0x0033u)
#define MAC_RX_THRESH_RESET_VAL                        (0x00000004u)
#define MAC_RX_THRESH_MMS                              (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 05-00 | RX_THRESH                | Receive Threshold in Cut          | 0x00000004  |
 * |       |                          | Through.                          |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_RX_THRESH_RX_THRESH                   (0u)
#define BITL_MAC_RX_THRESH_RX_THRESH                   (6u)
#define BITM_MAC_RX_THRESH_RX_THRESH                   (0x0000003Fu)

/* Register Name        : TX_THRESH
 * Register Addr        : 0x0034u
 * Register Reset Value : 0x00000041u
 * Register MMS         : 1u
 */

#define MAC_TX_THRESH_ADDR                             (0x0034u)
#define MAC_TX_THRESH_RESET_VAL                        (0x00000041u)
#define MAC_TX_THRESH_MMS                              (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 05-00 | HOST_TX_THRESH           | Host Transmit Start Threshold in  | 0x00000001  |
 * |       |                          | Cut Through.                      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TX_THRESH_HOST_TX_THRESH              (0u)
#define BITL_MAC_TX_THRESH_HOST_TX_THRESH              (6u)
#define BITM_MAC_TX_THRESH_HOST_TX_THRESH              (0x0000003Fu)

/* Register Name        : FIFO_CLR
 * Register Addr        : 0x0036u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_FIFO_CLR_ADDR                              (0x0036u)
#define MAC_FIFO_CLR_RESET_VAL                         (0x00000000u)
#define MAC_FIFO_CLR_MMS                               (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | MAC_RXF_CLR              | Clear the Receive FIFO(s).        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 2     | ALL_FIFOS_CLR            | Clear All FIFOs.                  | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_FIFO_CLR_MAC_RXF_CLR                  (0u)
#define BITL_MAC_FIFO_CLR_MAC_RXF_CLR                  (1u)
#define BITM_MAC_FIFO_CLR_MAC_RXF_CLR                  (0x01u)

#define BITP_MAC_FIFO_CLR_ALL_FIFOS_CLR                (2u)
#define BITL_MAC_FIFO_CLR_ALL_FIFOS_CLR                (1u)
#define BITM_MAC_FIFO_CLR_ALL_FIFOS_CLR                (0x04u)

/* Register Name        : SCRATCH_0
 * Register Addr        : 0x0037u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_SCRATCH_0_ADDR                             (0x0037u)
#define MAC_SCRATCH_0_RESET_VAL                        (0x00000000u)
#define MAC_SCRATCH_0_MMS                              (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | SCRATCH_DATA             | Scratch Data.                     | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_SCRATCH_0_SCRATCH_DATA                (0u)
#define BITL_MAC_SCRATCH_0_SCRATCH_DATA                (32u)
#define BITM_MAC_SCRATCH_0_SCRATCH_DATA                (0xFFFFFFFFu)

/* Register Name        : SCRATCH_1
 * Register Addr        : 0x0038u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_SCRATCH_1_ADDR                             (0x0038u)
#define MAC_SCRATCH_1_RESET_VAL                        (0x00000000u)
#define MAC_SCRATCH_1_MMS                              (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | SCRATCH_DATA             | Scratch Data.                     | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_SCRATCH_1_SCRATCH_DATA                (0u)
#define BITL_MAC_SCRATCH_1_SCRATCH_DATA                (32u)
#define BITM_MAC_SCRATCH_1_SCRATCH_DATA                (0xFFFFFFFFu)

/* Register Name        : SCRATCH_2
 * Register Addr        : 0x0039u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_SCRATCH_2_ADDR                             (0x0039u)
#define MAC_SCRATCH_2_RESET_VAL                        (0x00000000u)
#define MAC_SCRATCH_2_MMS                              (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | SCRATCH_DATA             | Scratch Data.                     | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_SCRATCH_2_SCRATCH_DATA                (0u)
#define BITL_MAC_SCRATCH_2_SCRATCH_DATA                (32u)
#define BITM_MAC_SCRATCH_2_SCRATCH_DATA                (0xFFFFFFFFu)

/* Register Name        : SCRATCH_3
 * Register Addr        : 0x003Au
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_SCRATCH_3_ADDR                             (0x003Au)
#define MAC_SCRATCH_3_RESET_VAL                        (0x00000000u)
#define MAC_SCRATCH_3_MMS                              (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | SCRATCH_DATA             | Scratch Data.                     | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_SCRATCH_3_SCRATCH_DATA                (0u)
#define BITL_MAC_SCRATCH_3_SCRATCH_DATA                (32u)
#define BITM_MAC_SCRATCH_3_SCRATCH_DATA                (0xFFFFFFFFu)

/* Register Name        : SPI_INJ_ERR
 * Register Addr        : 0x003Du
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_SPI_INJ_ERR_ADDR                           (0x003Du)
#define MAC_SPI_INJ_ERR_RESET_VAL                      (0x00000000u)
#define MAC_SPI_INJ_ERR_MMS                            (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | TEST_SPI_INJ_ERR         | Inject an Error on the SPI MISO   | 0x00000000  |
 * |       |                          | Path.                             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_SPI_INJ_ERR_TEST_SPI_INJ_ERR          (0u)
#define BITL_MAC_SPI_INJ_ERR_TEST_SPI_INJ_ERR          (1u)
#define BITM_MAC_SPI_INJ_ERR_TEST_SPI_INJ_ERR          (0x01u)

/* Register Name        : FIFO_SIZE
 * Register Addr        : 0x003Eu
 * Register Reset Value : 0x01102022u
 * Register MMS         : 1u
 */

#define MAC_FIFO_SIZE_ADDR                             (0x003Eu)
#define MAC_FIFO_SIZE_RESET_VAL                        (0x01102022u)
#define MAC_FIFO_SIZE_MMS                              (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 03-00 | HIGH_TX_FIFO_SIZE        | HOST to T1S High Priority FIFO    | 0x00000002  |
 * |       |                          | Size                              |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 07-04 | T1S_2_HOST_SIZE          | T1S to HOST FIFO Size             | 0x00000002  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 23-20 | LOW_TX_FIFO_SIZE         | HOST to T1S Low Priority FIFO     | 0x00000001  |
 * |       |                          | Size                              |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 27-24 | T1S_2_PTP_SIZE           | T1S to GPTP FIFO Size             | 0x00000001  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_FIFO_SIZE_HIGH_TX_FIFO_SIZE           (0u)
#define BITL_MAC_FIFO_SIZE_HIGH_TX_FIFO_SIZE           (4u)
#define BITM_MAC_FIFO_SIZE_HIGH_TX_FIFO_SIZE           (0x0000000Fu)
#define ENUM_MAC_FIFO_SIZE_HIGH_TX_FIFO_SIZE_TXSIZE_0K (0x00000000u)
#define ENUM_MAC_FIFO_SIZE_HIGH_TX_FIFO_SIZE_TXSIZE_2K (0x00000001u)
#define ENUM_MAC_FIFO_SIZE_HIGH_TX_FIFO_SIZE_TXSIZE_4K (0x00000002u)
#define ENUM_MAC_FIFO_SIZE_HIGH_TX_FIFO_SIZE_TXSIZE_6K (0x00000003u)
#define ENUM_MAC_FIFO_SIZE_HIGH_TX_FIFO_SIZE_TXSIZE_8K (0x00000004u)
#define ENUM_MAC_FIFO_SIZE_HIGH_TX_FIFO_SIZE_TXSIZE_10K (0x00000005u)
#define ENUM_MAC_FIFO_SIZE_HIGH_TX_FIFO_SIZE_TXSIZE_12K (0x00000006u)
#define ENUM_MAC_FIFO_SIZE_HIGH_TX_FIFO_SIZE_TXSIZE_14K (0x00000007u)
#define ENUM_MAC_FIFO_SIZE_HIGH_TX_FIFO_SIZE_TXSIZE_16K (0x00000008u)

#define BITP_MAC_FIFO_SIZE_T1S_2_HOST_SIZE             (4u)
#define BITL_MAC_FIFO_SIZE_T1S_2_HOST_SIZE             (4u)
#define BITM_MAC_FIFO_SIZE_T1S_2_HOST_SIZE             (0x000000F0u)
#define ENUM_MAC_FIFO_SIZE_T1S_2_HOST_SIZE_RXSIZE_0K   (0x00000000u)
#define ENUM_MAC_FIFO_SIZE_T1S_2_HOST_SIZE_RXSIZE_2K   (0x00000001u)
#define ENUM_MAC_FIFO_SIZE_T1S_2_HOST_SIZE_RXSIZE_4K   (0x00000002u)
#define ENUM_MAC_FIFO_SIZE_T1S_2_HOST_SIZE_RXSIZE_6K   (0x00000003u)
#define ENUM_MAC_FIFO_SIZE_T1S_2_HOST_SIZE_RXSIZE_8K   (0x00000004u)
#define ENUM_MAC_FIFO_SIZE_T1S_2_HOST_SIZE_RXSIZE_10K  (0x00000005u)
#define ENUM_MAC_FIFO_SIZE_T1S_2_HOST_SIZE_RXSIZE_12K  (0x00000006u)
#define ENUM_MAC_FIFO_SIZE_T1S_2_HOST_SIZE_RXSIZE_14K  (0x00000007u)
#define ENUM_MAC_FIFO_SIZE_T1S_2_HOST_SIZE_RXSIZE_16K  (0x00000008u)

#define BITP_MAC_FIFO_SIZE_LOW_TX_FIFO_SIZE            (20u)
#define BITL_MAC_FIFO_SIZE_LOW_TX_FIFO_SIZE            (4u)
#define BITM_MAC_FIFO_SIZE_LOW_TX_FIFO_SIZE            (0x00F00000u)
#define ENUM_MAC_FIFO_SIZE_LOW_TX_FIFO_SIZE_TXSIZE_0K  (0x00000000u)
#define ENUM_MAC_FIFO_SIZE_LOW_TX_FIFO_SIZE_TXSIZE_2K  (0x00000001u)
#define ENUM_MAC_FIFO_SIZE_LOW_TX_FIFO_SIZE_TXSIZE_4K  (0x00000002u)
#define ENUM_MAC_FIFO_SIZE_LOW_TX_FIFO_SIZE_TXSIZE_6K  (0x00000003u)
#define ENUM_MAC_FIFO_SIZE_LOW_TX_FIFO_SIZE_TXSIZE_8K  (0x00000004u)
#define ENUM_MAC_FIFO_SIZE_LOW_TX_FIFO_SIZE_TXSIZE_10K (0x00000005u)
#define ENUM_MAC_FIFO_SIZE_LOW_TX_FIFO_SIZE_TXSIZE_12K (0x00000006u)
#define ENUM_MAC_FIFO_SIZE_LOW_TX_FIFO_SIZE_TXSIZE_14K (0x00000007u)
#define ENUM_MAC_FIFO_SIZE_LOW_TX_FIFO_SIZE_TXSIZE_16K (0x00000008u)

#define BITP_MAC_FIFO_SIZE_T1S_2_PTP_SIZE              (24u)
#define BITL_MAC_FIFO_SIZE_T1S_2_PTP_SIZE              (4u)
#define BITM_MAC_FIFO_SIZE_T1S_2_PTP_SIZE              (0x0F000000u)
#define ENUM_MAC_FIFO_SIZE_T1S_2_PTP_SIZE_TXSIZE_0K    (0x00000000u)
#define ENUM_MAC_FIFO_SIZE_T1S_2_PTP_SIZE_TXSIZE_2K    (0x00000001u)

/* Register Name        : TFC
 * Register Addr        : 0x003Fu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_TFC_ADDR                                   (0x003Fu)
#define MAC_TFC_RESET_VAL                              (0x00000000u)
#define MAC_TFC_MMS                                    (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 08-00 | TFC                      | Number of Frames in the Tx FIFO.  | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TFC_TFC                               (0u)
#define BITL_MAC_TFC_TFC                               (9u)
#define BITM_MAC_TFC_TFC                               (0x000001FFu)

/* Register Name        : TXSIZE
 * Register Addr        : 0x0040u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_TXSIZE_ADDR                                (0x0040u)
#define MAC_TXSIZE_RESET_VAL                           (0x00000000u)
#define MAC_TXSIZE_MMS                                 (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 13-00 | TX_SIZE                  | Data in the Tx FIFO. Number of    | 0x00000000  |
 * |       |                          | Half Words (16 Bit).              |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TXSIZE_TX_SIZE                        (0u)
#define BITL_MAC_TXSIZE_TX_SIZE                        (14u)
#define BITM_MAC_TXSIZE_TX_SIZE                        (0x00003FFFu)

/* Register Name        : HTX_OVF_FRM_CNT
 * Register Addr        : 0x0041u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_HTX_OVF_FRM_CNT_ADDR                       (0x0041u)
#define MAC_HTX_OVF_FRM_CNT_RESET_VAL                  (0x00000000u)
#define MAC_HTX_OVF_FRM_CNT_MMS                        (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 23-00 | HTX_OVF_FRM_CNT          | Counts Host Tx Frames Dropped     | 0x00000000  |
 * |       |                          | Due to FIFO Overflow.             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_HTX_OVF_FRM_CNT_HTX_OVF_FRM_CNT       (0u)
#define BITL_MAC_HTX_OVF_FRM_CNT_HTX_OVF_FRM_CNT       (24u)
#define BITM_MAC_HTX_OVF_FRM_CNT_HTX_OVF_FRM_CNT       (0x00FFFFFFu)

/* Register Name        : MECC_ERR_ADDR
 * Register Addr        : 0x0042u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_MECC_ERR_ADDR_ADDR                         (0x0042u)
#define MAC_MECC_ERR_ADDR_RESET_VAL                    (0x00000000u)
#define MAC_MECC_ERR_ADDR_MMS                          (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 13-00 | MECC_ERR_ADDR            | Address of an Uncorrectable ECC   | 0x00000000  |
 * |       |                          | Error in Memory.                  |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_MECC_ERR_ADDR_MECC_ERR_ADDR           (0u)
#define BITL_MAC_MECC_ERR_ADDR_MECC_ERR_ADDR           (14u)
#define BITM_MAC_MECC_ERR_ADDR_MECC_ERR_ADDR           (0x00003FFFu)

/* Register Name        : CECC_ERR_0
 * Register Addr        : 0x0043u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_CECC_ERR_0_ADDR                            (0x0043u)
#define MAC_CECC_ERR_0_RESET_VAL                       (0x00000000u)
#define MAC_CECC_ERR_0_MMS                             (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 09-00 | CECC_ERR_CNT             | Corrected ECC Error Count.        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_CECC_ERR_0_CECC_ERR_CNT               (0u)
#define BITL_MAC_CECC_ERR_0_CECC_ERR_CNT               (10u)
#define BITM_MAC_CECC_ERR_0_CECC_ERR_CNT               (0x000003FFu)

/* Register Name        : CECC_ERR_1
 * Register Addr        : 0x0044u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_CECC_ERR_1_ADDR                            (0x0044u)
#define MAC_CECC_ERR_1_RESET_VAL                       (0x00000000u)
#define MAC_CECC_ERR_1_MMS                             (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 09-00 | CECC_ERR_CNT             | Corrected ECC Error Count.        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_CECC_ERR_1_CECC_ERR_CNT               (0u)
#define BITL_MAC_CECC_ERR_1_CECC_ERR_CNT               (10u)
#define BITM_MAC_CECC_ERR_1_CECC_ERR_CNT               (0x000003FFu)

/* Register Name        : CECC_ERR_2
 * Register Addr        : 0x0045u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_CECC_ERR_2_ADDR                            (0x0045u)
#define MAC_CECC_ERR_2_RESET_VAL                       (0x00000000u)
#define MAC_CECC_ERR_2_MMS                             (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 09-00 | CECC_ERR_CNT             | Corrected ECC Error Count.        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_CECC_ERR_2_CECC_ERR_CNT               (0u)
#define BITL_MAC_CECC_ERR_2_CECC_ERR_CNT               (10u)
#define BITM_MAC_CECC_ERR_2_CECC_ERR_CNT               (0x000003FFu)

/* Register Name        : CECC_ERR_3
 * Register Addr        : 0x0046u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_CECC_ERR_3_ADDR                            (0x0046u)
#define MAC_CECC_ERR_3_RESET_VAL                       (0x00000000u)
#define MAC_CECC_ERR_3_MMS                             (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 09-00 | CECC_ERR_CNT             | Corrected ECC Error Count.        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_CECC_ERR_3_CECC_ERR_CNT               (0u)
#define BITL_MAC_CECC_ERR_3_CECC_ERR_CNT               (10u)
#define BITM_MAC_CECC_ERR_3_CECC_ERR_CNT               (0x000003FFu)

/* Register Name        : CECC_ERR_4
 * Register Addr        : 0x0047u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_CECC_ERR_4_ADDR                            (0x0047u)
#define MAC_CECC_ERR_4_RESET_VAL                       (0x00000000u)
#define MAC_CECC_ERR_4_MMS                             (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 09-00 | CECC_ERR_CNT             | Corrected ECC Error Count.        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_CECC_ERR_4_CECC_ERR_CNT               (0u)
#define BITL_MAC_CECC_ERR_4_CECC_ERR_CNT               (10u)
#define BITM_MAC_CECC_ERR_4_CECC_ERR_CNT               (0x000003FFu)

/* Register Name        : CECC_ERR_5
 * Register Addr        : 0x0048u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_CECC_ERR_5_ADDR                            (0x0048u)
#define MAC_CECC_ERR_5_RESET_VAL                       (0x00000000u)
#define MAC_CECC_ERR_5_MMS                             (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 09-00 | CECC_ERR_CNT             | Corrected ECC Error Count.        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_CECC_ERR_5_CECC_ERR_CNT               (0u)
#define BITL_MAC_CECC_ERR_5_CECC_ERR_CNT               (10u)
#define BITM_MAC_CECC_ERR_5_CECC_ERR_CNT               (0x000003FFu)

/* Register Name        : CECC_ERR_6
 * Register Addr        : 0x0049u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_CECC_ERR_6_ADDR                            (0x0049u)
#define MAC_CECC_ERR_6_RESET_VAL                       (0x00000000u)
#define MAC_CECC_ERR_6_MMS                             (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 09-00 | CECC_ERR_CNT             | Corrected ECC Error Count.        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_CECC_ERR_6_CECC_ERR_CNT               (0u)
#define BITL_MAC_CECC_ERR_6_CECC_ERR_CNT               (10u)
#define BITM_MAC_CECC_ERR_6_CECC_ERR_CNT               (0x000003FFu)

/* Register Name        : FIFO_ALMOST_EMPTY
 * Register Addr        : 0x004Cu
 * Register Reset Value : 0x00000004u
 * Register MMS         : 1u
 */

#define MAC_FIFO_ALMOST_EMPTY_ADDR                     (0x004Cu)
#define MAC_FIFO_ALMOST_EMPTY_RESET_VAL                (0x00000004u)
#define MAC_FIFO_ALMOST_EMPTY_MMS                      (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | AE_THRESH                | Almost Empty Threshold Value      | 0x00000004  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_FIFO_ALMOST_EMPTY_AE_THRESH           (0u)
#define BITL_MAC_FIFO_ALMOST_EMPTY_AE_THRESH           (8u)
#define BITM_MAC_FIFO_ALMOST_EMPTY_AE_THRESH           (0x000000FFu)

/* Register Name        : ADDR_FILT_UPR_0
 * Register Addr        : 0x0050u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_UPR_0_ADDR                       (0x0050u)
#define MAC_ADDR_FILT_UPR_0_RESET_VAL                  (0x00000000u)
#define MAC_ADDR_FILT_UPR_0_MMS                        (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 16    | TO_HOST                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Host.                             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 17    | TO_GPTP                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Other Port.                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 30    | APPLY2PORT               | Apply Rule                        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_UPR_0_MAC_ADDR              (0u)
#define BITL_MAC_ADDR_FILT_UPR_0_MAC_ADDR              (16u)
#define BITM_MAC_ADDR_FILT_UPR_0_MAC_ADDR              (0x0000FFFFu)

#define BITP_MAC_ADDR_FILT_UPR_0_TO_HOST               (16u)
#define BITL_MAC_ADDR_FILT_UPR_0_TO_HOST               (1u)
#define BITM_MAC_ADDR_FILT_UPR_0_TO_HOST               (0x00010000u)
#define ENUM_MAC_ADDR_FILT_UPR_0_TO_HOST_DROP          (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_0_TO_HOST_FORWARD       (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_0_TO_GPTP               (17u)
#define BITL_MAC_ADDR_FILT_UPR_0_TO_GPTP               (1u)
#define BITM_MAC_ADDR_FILT_UPR_0_TO_GPTP               (0x00020000u)
#define ENUM_MAC_ADDR_FILT_UPR_0_TO_GPTP_DROP          (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_0_TO_GPTP_FORWARD       (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_0_APPLY2PORT            (30u)
#define BITL_MAC_ADDR_FILT_UPR_0_APPLY2PORT            (1u)
#define BITM_MAC_ADDR_FILT_UPR_0_APPLY2PORT            (0x40000000u)
#define ENUM_MAC_ADDR_FILT_UPR_0_APPLY2PORT_NOTAPPLY   (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_0_APPLY2PORT_APPLY      (0x00000001u)

/* Register Name        : ADDR_FILT_LWR_0
 * Register Addr        : 0x0051u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_LWR_0_ADDR                       (0x0051u)
#define MAC_ADDR_FILT_LWR_0_RESET_VAL                  (0x00000000u)
#define MAC_ADDR_FILT_LWR_0_MMS                        (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_LWR_0_MAC_ADDR              (0u)
#define BITL_MAC_ADDR_FILT_LWR_0_MAC_ADDR              (32u)
#define BITM_MAC_ADDR_FILT_LWR_0_MAC_ADDR              (0xFFFFFFFFu)

/* Register Name        : ADDR_FILT_UPR_1
 * Register Addr        : 0x0052u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_UPR_1_ADDR                       (0x0052u)
#define MAC_ADDR_FILT_UPR_1_RESET_VAL                  (0x00000000u)
#define MAC_ADDR_FILT_UPR_1_MMS                        (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 16    | TO_HOST                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Host.                             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 17    | TO_GPTP                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Other Port.                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 30    | APPLY2PORT               | Apply Rule                        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_UPR_1_MAC_ADDR              (0u)
#define BITL_MAC_ADDR_FILT_UPR_1_MAC_ADDR              (16u)
#define BITM_MAC_ADDR_FILT_UPR_1_MAC_ADDR              (0x0000FFFFu)

#define BITP_MAC_ADDR_FILT_UPR_1_TO_HOST               (16u)
#define BITL_MAC_ADDR_FILT_UPR_1_TO_HOST               (1u)
#define BITM_MAC_ADDR_FILT_UPR_1_TO_HOST               (0x00010000u)
#define ENUM_MAC_ADDR_FILT_UPR_1_TO_HOST_DROP          (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_1_TO_HOST_FORWARD       (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_1_TO_GPTP               (17u)
#define BITL_MAC_ADDR_FILT_UPR_1_TO_GPTP               (1u)
#define BITM_MAC_ADDR_FILT_UPR_1_TO_GPTP               (0x00020000u)
#define ENUM_MAC_ADDR_FILT_UPR_1_TO_GPTP_DROP          (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_1_TO_GPTP_FORWARD       (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_1_APPLY2PORT            (30u)
#define BITL_MAC_ADDR_FILT_UPR_1_APPLY2PORT            (1u)
#define BITM_MAC_ADDR_FILT_UPR_1_APPLY2PORT            (0x40000000u)
#define ENUM_MAC_ADDR_FILT_UPR_1_APPLY2PORT_NOTAPPLY   (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_1_APPLY2PORT_APPLY      (0x00000001u)

/* Register Name        : ADDR_FILT_LWR_1
 * Register Addr        : 0x0053u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_LWR_1_ADDR                       (0x0053u)
#define MAC_ADDR_FILT_LWR_1_RESET_VAL                  (0x00000000u)
#define MAC_ADDR_FILT_LWR_1_MMS                        (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_LWR_1_MAC_ADDR              (0u)
#define BITL_MAC_ADDR_FILT_LWR_1_MAC_ADDR              (32u)
#define BITM_MAC_ADDR_FILT_LWR_1_MAC_ADDR              (0xFFFFFFFFu)

/* Register Name        : ADDR_FILT_UPR_2
 * Register Addr        : 0x0054u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_UPR_2_ADDR                       (0x0054u)
#define MAC_ADDR_FILT_UPR_2_RESET_VAL                  (0x00000000u)
#define MAC_ADDR_FILT_UPR_2_MMS                        (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 16    | TO_HOST                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Host.                             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 17    | TO_GPTP                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Other Port.                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 30    | APPLY2PORT               | Apply Rule                        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_UPR_2_MAC_ADDR              (0u)
#define BITL_MAC_ADDR_FILT_UPR_2_MAC_ADDR              (16u)
#define BITM_MAC_ADDR_FILT_UPR_2_MAC_ADDR              (0x0000FFFFu)

#define BITP_MAC_ADDR_FILT_UPR_2_TO_HOST               (16u)
#define BITL_MAC_ADDR_FILT_UPR_2_TO_HOST               (1u)
#define BITM_MAC_ADDR_FILT_UPR_2_TO_HOST               (0x00010000u)
#define ENUM_MAC_ADDR_FILT_UPR_2_TO_HOST_DROP          (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_2_TO_HOST_FORWARD       (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_2_TO_GPTP               (17u)
#define BITL_MAC_ADDR_FILT_UPR_2_TO_GPTP               (1u)
#define BITM_MAC_ADDR_FILT_UPR_2_TO_GPTP               (0x00020000u)
#define ENUM_MAC_ADDR_FILT_UPR_2_TO_GPTP_DROP          (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_2_TO_GPTP_FORWARD       (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_2_APPLY2PORT            (30u)
#define BITL_MAC_ADDR_FILT_UPR_2_APPLY2PORT            (1u)
#define BITM_MAC_ADDR_FILT_UPR_2_APPLY2PORT            (0x40000000u)
#define ENUM_MAC_ADDR_FILT_UPR_2_APPLY2PORT_NOTAPPLY   (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_2_APPLY2PORT_APPLY      (0x00000001u)

/* Register Name        : ADDR_FILT_LWR_2
 * Register Addr        : 0x0055u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_LWR_2_ADDR                       (0x0055u)
#define MAC_ADDR_FILT_LWR_2_RESET_VAL                  (0x00000000u)
#define MAC_ADDR_FILT_LWR_2_MMS                        (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_LWR_2_MAC_ADDR              (0u)
#define BITL_MAC_ADDR_FILT_LWR_2_MAC_ADDR              (32u)
#define BITM_MAC_ADDR_FILT_LWR_2_MAC_ADDR              (0xFFFFFFFFu)

/* Register Name        : ADDR_FILT_UPR_3
 * Register Addr        : 0x0056u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_UPR_3_ADDR                       (0x0056u)
#define MAC_ADDR_FILT_UPR_3_RESET_VAL                  (0x00000000u)
#define MAC_ADDR_FILT_UPR_3_MMS                        (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 16    | TO_HOST                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Host.                             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 17    | TO_GPTP                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Other Port.                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 30    | APPLY2PORT               | Apply Rule                        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_UPR_3_MAC_ADDR              (0u)
#define BITL_MAC_ADDR_FILT_UPR_3_MAC_ADDR              (16u)
#define BITM_MAC_ADDR_FILT_UPR_3_MAC_ADDR              (0x0000FFFFu)

#define BITP_MAC_ADDR_FILT_UPR_3_TO_HOST               (16u)
#define BITL_MAC_ADDR_FILT_UPR_3_TO_HOST               (1u)
#define BITM_MAC_ADDR_FILT_UPR_3_TO_HOST               (0x00010000u)
#define ENUM_MAC_ADDR_FILT_UPR_3_TO_HOST_DROP          (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_3_TO_HOST_FORWARD       (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_3_TO_GPTP               (17u)
#define BITL_MAC_ADDR_FILT_UPR_3_TO_GPTP               (1u)
#define BITM_MAC_ADDR_FILT_UPR_3_TO_GPTP               (0x00020000u)
#define ENUM_MAC_ADDR_FILT_UPR_3_TO_GPTP_DROP          (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_3_TO_GPTP_FORWARD       (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_3_APPLY2PORT            (30u)
#define BITL_MAC_ADDR_FILT_UPR_3_APPLY2PORT            (1u)
#define BITM_MAC_ADDR_FILT_UPR_3_APPLY2PORT            (0x40000000u)
#define ENUM_MAC_ADDR_FILT_UPR_3_APPLY2PORT_NOTAPPLY   (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_3_APPLY2PORT_APPLY      (0x00000001u)

/* Register Name        : ADDR_FILT_LWR_3
 * Register Addr        : 0x0057u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_LWR_3_ADDR                       (0x0057u)
#define MAC_ADDR_FILT_LWR_3_RESET_VAL                  (0x00000000u)
#define MAC_ADDR_FILT_LWR_3_MMS                        (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_LWR_3_MAC_ADDR              (0u)
#define BITL_MAC_ADDR_FILT_LWR_3_MAC_ADDR              (32u)
#define BITM_MAC_ADDR_FILT_LWR_3_MAC_ADDR              (0xFFFFFFFFu)

/* Register Name        : ADDR_FILT_UPR_4
 * Register Addr        : 0x0058u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_UPR_4_ADDR                       (0x0058u)
#define MAC_ADDR_FILT_UPR_4_RESET_VAL                  (0x00000000u)
#define MAC_ADDR_FILT_UPR_4_MMS                        (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 16    | TO_HOST                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Host.                             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 17    | TO_GPTP                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Other Port.                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 30    | APPLY2PORT               | Apply Rule                        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_UPR_4_MAC_ADDR              (0u)
#define BITL_MAC_ADDR_FILT_UPR_4_MAC_ADDR              (16u)
#define BITM_MAC_ADDR_FILT_UPR_4_MAC_ADDR              (0x0000FFFFu)

#define BITP_MAC_ADDR_FILT_UPR_4_TO_HOST               (16u)
#define BITL_MAC_ADDR_FILT_UPR_4_TO_HOST               (1u)
#define BITM_MAC_ADDR_FILT_UPR_4_TO_HOST               (0x00010000u)
#define ENUM_MAC_ADDR_FILT_UPR_4_TO_HOST_DROP          (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_4_TO_HOST_FORWARD       (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_4_TO_GPTP               (17u)
#define BITL_MAC_ADDR_FILT_UPR_4_TO_GPTP               (1u)
#define BITM_MAC_ADDR_FILT_UPR_4_TO_GPTP               (0x00020000u)
#define ENUM_MAC_ADDR_FILT_UPR_4_TO_GPTP_DROP          (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_4_TO_GPTP_FORWARD       (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_4_APPLY2PORT            (30u)
#define BITL_MAC_ADDR_FILT_UPR_4_APPLY2PORT            (1u)
#define BITM_MAC_ADDR_FILT_UPR_4_APPLY2PORT            (0x40000000u)
#define ENUM_MAC_ADDR_FILT_UPR_4_APPLY2PORT_NOTAPPLY   (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_4_APPLY2PORT_APPLY      (0x00000001u)

/* Register Name        : ADDR_FILT_LWR_4
 * Register Addr        : 0x0059u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_LWR_4_ADDR                       (0x0059u)
#define MAC_ADDR_FILT_LWR_4_RESET_VAL                  (0x00000000u)
#define MAC_ADDR_FILT_LWR_4_MMS                        (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_LWR_4_MAC_ADDR              (0u)
#define BITL_MAC_ADDR_FILT_LWR_4_MAC_ADDR              (32u)
#define BITM_MAC_ADDR_FILT_LWR_4_MAC_ADDR              (0xFFFFFFFFu)

/* Register Name        : ADDR_FILT_UPR_5
 * Register Addr        : 0x005Au
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_UPR_5_ADDR                       (0x005Au)
#define MAC_ADDR_FILT_UPR_5_RESET_VAL                  (0x00000000u)
#define MAC_ADDR_FILT_UPR_5_MMS                        (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 16    | TO_HOST                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Host.                             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 17    | TO_GPTP                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Other Port.                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 30    | APPLY2PORT               | Apply Rule                        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_UPR_5_MAC_ADDR              (0u)
#define BITL_MAC_ADDR_FILT_UPR_5_MAC_ADDR              (16u)
#define BITM_MAC_ADDR_FILT_UPR_5_MAC_ADDR              (0x0000FFFFu)

#define BITP_MAC_ADDR_FILT_UPR_5_TO_HOST               (16u)
#define BITL_MAC_ADDR_FILT_UPR_5_TO_HOST               (1u)
#define BITM_MAC_ADDR_FILT_UPR_5_TO_HOST               (0x00010000u)
#define ENUM_MAC_ADDR_FILT_UPR_5_TO_HOST_DROP          (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_5_TO_HOST_FORWARD       (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_5_TO_GPTP               (17u)
#define BITL_MAC_ADDR_FILT_UPR_5_TO_GPTP               (1u)
#define BITM_MAC_ADDR_FILT_UPR_5_TO_GPTP               (0x00020000u)
#define ENUM_MAC_ADDR_FILT_UPR_5_TO_GPTP_DROP          (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_5_TO_GPTP_FORWARD       (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_5_APPLY2PORT            (30u)
#define BITL_MAC_ADDR_FILT_UPR_5_APPLY2PORT            (1u)
#define BITM_MAC_ADDR_FILT_UPR_5_APPLY2PORT            (0x40000000u)
#define ENUM_MAC_ADDR_FILT_UPR_5_APPLY2PORT_NOTAPPLY   (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_5_APPLY2PORT_APPLY      (0x00000001u)

/* Register Name        : ADDR_FILT_LWR_5
 * Register Addr        : 0x005Bu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_LWR_5_ADDR                       (0x005Bu)
#define MAC_ADDR_FILT_LWR_5_RESET_VAL                  (0x00000000u)
#define MAC_ADDR_FILT_LWR_5_MMS                        (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_LWR_5_MAC_ADDR              (0u)
#define BITL_MAC_ADDR_FILT_LWR_5_MAC_ADDR              (32u)
#define BITM_MAC_ADDR_FILT_LWR_5_MAC_ADDR              (0xFFFFFFFFu)

/* Register Name        : ADDR_FILT_UPR_6
 * Register Addr        : 0x005Cu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_UPR_6_ADDR                       (0x005Cu)
#define MAC_ADDR_FILT_UPR_6_RESET_VAL                  (0x00000000u)
#define MAC_ADDR_FILT_UPR_6_MMS                        (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 16    | TO_HOST                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Host.                             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 17    | TO_GPTP                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Other Port.                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 30    | APPLY2PORT               | Apply Rule                        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_UPR_6_MAC_ADDR              (0u)
#define BITL_MAC_ADDR_FILT_UPR_6_MAC_ADDR              (16u)
#define BITM_MAC_ADDR_FILT_UPR_6_MAC_ADDR              (0x0000FFFFu)

#define BITP_MAC_ADDR_FILT_UPR_6_TO_HOST               (16u)
#define BITL_MAC_ADDR_FILT_UPR_6_TO_HOST               (1u)
#define BITM_MAC_ADDR_FILT_UPR_6_TO_HOST               (0x00010000u)
#define ENUM_MAC_ADDR_FILT_UPR_6_TO_HOST_DROP          (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_6_TO_HOST_FORWARD       (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_6_TO_GPTP               (17u)
#define BITL_MAC_ADDR_FILT_UPR_6_TO_GPTP               (1u)
#define BITM_MAC_ADDR_FILT_UPR_6_TO_GPTP               (0x00020000u)
#define ENUM_MAC_ADDR_FILT_UPR_6_TO_GPTP_DROP          (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_6_TO_GPTP_FORWARD       (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_6_APPLY2PORT            (30u)
#define BITL_MAC_ADDR_FILT_UPR_6_APPLY2PORT            (1u)
#define BITM_MAC_ADDR_FILT_UPR_6_APPLY2PORT            (0x40000000u)
#define ENUM_MAC_ADDR_FILT_UPR_6_APPLY2PORT_NOTAPPLY   (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_6_APPLY2PORT_APPLY      (0x00000001u)

/* Register Name        : ADDR_FILT_LWR_6
 * Register Addr        : 0x005Du
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_LWR_6_ADDR                       (0x005Du)
#define MAC_ADDR_FILT_LWR_6_RESET_VAL                  (0x00000000u)
#define MAC_ADDR_FILT_LWR_6_MMS                        (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_LWR_6_MAC_ADDR              (0u)
#define BITL_MAC_ADDR_FILT_LWR_6_MAC_ADDR              (32u)
#define BITM_MAC_ADDR_FILT_LWR_6_MAC_ADDR              (0xFFFFFFFFu)

/* Register Name        : ADDR_FILT_UPR_7
 * Register Addr        : 0x005Eu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_UPR_7_ADDR                       (0x005Eu)
#define MAC_ADDR_FILT_UPR_7_RESET_VAL                  (0x00000000u)
#define MAC_ADDR_FILT_UPR_7_MMS                        (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 16    | TO_HOST                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Host.                             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 17    | TO_GPTP                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Other Port.                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 30    | APPLY2PORT               | Apply Rule                        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_UPR_7_MAC_ADDR              (0u)
#define BITL_MAC_ADDR_FILT_UPR_7_MAC_ADDR              (16u)
#define BITM_MAC_ADDR_FILT_UPR_7_MAC_ADDR              (0x0000FFFFu)

#define BITP_MAC_ADDR_FILT_UPR_7_TO_HOST               (16u)
#define BITL_MAC_ADDR_FILT_UPR_7_TO_HOST               (1u)
#define BITM_MAC_ADDR_FILT_UPR_7_TO_HOST               (0x00010000u)
#define ENUM_MAC_ADDR_FILT_UPR_7_TO_HOST_DROP          (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_7_TO_HOST_FORWARD       (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_7_TO_GPTP               (17u)
#define BITL_MAC_ADDR_FILT_UPR_7_TO_GPTP               (1u)
#define BITM_MAC_ADDR_FILT_UPR_7_TO_GPTP               (0x00020000u)
#define ENUM_MAC_ADDR_FILT_UPR_7_TO_GPTP_DROP          (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_7_TO_GPTP_FORWARD       (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_7_APPLY2PORT            (30u)
#define BITL_MAC_ADDR_FILT_UPR_7_APPLY2PORT            (1u)
#define BITM_MAC_ADDR_FILT_UPR_7_APPLY2PORT            (0x40000000u)
#define ENUM_MAC_ADDR_FILT_UPR_7_APPLY2PORT_NOTAPPLY   (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_7_APPLY2PORT_APPLY      (0x00000001u)

/* Register Name        : ADDR_FILT_LWR_7
 * Register Addr        : 0x005Fu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_LWR_7_ADDR                       (0x005Fu)
#define MAC_ADDR_FILT_LWR_7_RESET_VAL                  (0x00000000u)
#define MAC_ADDR_FILT_LWR_7_MMS                        (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_LWR_7_MAC_ADDR              (0u)
#define BITL_MAC_ADDR_FILT_LWR_7_MAC_ADDR              (32u)
#define BITM_MAC_ADDR_FILT_LWR_7_MAC_ADDR              (0xFFFFFFFFu)

/* Register Name        : ADDR_FILT_UPR_8
 * Register Addr        : 0x0060u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_UPR_8_ADDR                       (0x0060u)
#define MAC_ADDR_FILT_UPR_8_RESET_VAL                  (0x00000000u)
#define MAC_ADDR_FILT_UPR_8_MMS                        (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 16    | TO_HOST                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Host.                             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 17    | TO_GPTP                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Other Port.                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 30    | APPLY2PORT               | Apply Rule                        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_UPR_8_MAC_ADDR              (0u)
#define BITL_MAC_ADDR_FILT_UPR_8_MAC_ADDR              (16u)
#define BITM_MAC_ADDR_FILT_UPR_8_MAC_ADDR              (0x0000FFFFu)

#define BITP_MAC_ADDR_FILT_UPR_8_TO_HOST               (16u)
#define BITL_MAC_ADDR_FILT_UPR_8_TO_HOST               (1u)
#define BITM_MAC_ADDR_FILT_UPR_8_TO_HOST               (0x00010000u)
#define ENUM_MAC_ADDR_FILT_UPR_8_TO_HOST_DROP          (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_8_TO_HOST_FORWARD       (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_8_TO_GPTP               (17u)
#define BITL_MAC_ADDR_FILT_UPR_8_TO_GPTP               (1u)
#define BITM_MAC_ADDR_FILT_UPR_8_TO_GPTP               (0x00020000u)
#define ENUM_MAC_ADDR_FILT_UPR_8_TO_GPTP_DROP          (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_8_TO_GPTP_FORWARD       (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_8_APPLY2PORT            (30u)
#define BITL_MAC_ADDR_FILT_UPR_8_APPLY2PORT            (1u)
#define BITM_MAC_ADDR_FILT_UPR_8_APPLY2PORT            (0x40000000u)
#define ENUM_MAC_ADDR_FILT_UPR_8_APPLY2PORT_NOTAPPLY   (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_8_APPLY2PORT_APPLY      (0x00000001u)

/* Register Name        : ADDR_FILT_LWR_8
 * Register Addr        : 0x0061u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_LWR_8_ADDR                       (0x0061u)
#define MAC_ADDR_FILT_LWR_8_RESET_VAL                  (0x00000000u)
#define MAC_ADDR_FILT_LWR_8_MMS                        (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_LWR_8_MAC_ADDR              (0u)
#define BITL_MAC_ADDR_FILT_LWR_8_MAC_ADDR              (32u)
#define BITM_MAC_ADDR_FILT_LWR_8_MAC_ADDR              (0xFFFFFFFFu)

/* Register Name        : ADDR_FILT_UPR_9
 * Register Addr        : 0x0062u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_UPR_9_ADDR                       (0x0062u)
#define MAC_ADDR_FILT_UPR_9_RESET_VAL                  (0x00000000u)
#define MAC_ADDR_FILT_UPR_9_MMS                        (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 16    | TO_HOST                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Host.                             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 17    | TO_GPTP                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Other Port.                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 30    | APPLY2PORT               | Apply Rule                        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_UPR_9_MAC_ADDR              (0u)
#define BITL_MAC_ADDR_FILT_UPR_9_MAC_ADDR              (16u)
#define BITM_MAC_ADDR_FILT_UPR_9_MAC_ADDR              (0x0000FFFFu)

#define BITP_MAC_ADDR_FILT_UPR_9_TO_HOST               (16u)
#define BITL_MAC_ADDR_FILT_UPR_9_TO_HOST               (1u)
#define BITM_MAC_ADDR_FILT_UPR_9_TO_HOST               (0x00010000u)
#define ENUM_MAC_ADDR_FILT_UPR_9_TO_HOST_DROP          (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_9_TO_HOST_FORWARD       (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_9_TO_GPTP               (17u)
#define BITL_MAC_ADDR_FILT_UPR_9_TO_GPTP               (1u)
#define BITM_MAC_ADDR_FILT_UPR_9_TO_GPTP               (0x00020000u)
#define ENUM_MAC_ADDR_FILT_UPR_9_TO_GPTP_DROP          (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_9_TO_GPTP_FORWARD       (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_9_APPLY2PORT            (30u)
#define BITL_MAC_ADDR_FILT_UPR_9_APPLY2PORT            (1u)
#define BITM_MAC_ADDR_FILT_UPR_9_APPLY2PORT            (0x40000000u)
#define ENUM_MAC_ADDR_FILT_UPR_9_APPLY2PORT_NOTAPPLY   (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_9_APPLY2PORT_APPLY      (0x00000001u)

/* Register Name        : ADDR_FILT_LWR_9
 * Register Addr        : 0x0063u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_LWR_9_ADDR                       (0x0063u)
#define MAC_ADDR_FILT_LWR_9_RESET_VAL                  (0x00000000u)
#define MAC_ADDR_FILT_LWR_9_MMS                        (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_LWR_9_MAC_ADDR              (0u)
#define BITL_MAC_ADDR_FILT_LWR_9_MAC_ADDR              (32u)
#define BITM_MAC_ADDR_FILT_LWR_9_MAC_ADDR              (0xFFFFFFFFu)

/* Register Name        : ADDR_FILT_UPR_10
 * Register Addr        : 0x0064u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_UPR_10_ADDR                      (0x0064u)
#define MAC_ADDR_FILT_UPR_10_RESET_VAL                 (0x00000000u)
#define MAC_ADDR_FILT_UPR_10_MMS                       (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 16    | TO_HOST                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Host.                             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 17    | TO_GPTP                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Other Port.                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 30    | APPLY2PORT               | Apply Rule                        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_UPR_10_MAC_ADDR             (0u)
#define BITL_MAC_ADDR_FILT_UPR_10_MAC_ADDR             (16u)
#define BITM_MAC_ADDR_FILT_UPR_10_MAC_ADDR             (0x0000FFFFu)

#define BITP_MAC_ADDR_FILT_UPR_10_TO_HOST              (16u)
#define BITL_MAC_ADDR_FILT_UPR_10_TO_HOST              (1u)
#define BITM_MAC_ADDR_FILT_UPR_10_TO_HOST              (0x00010000u)
#define ENUM_MAC_ADDR_FILT_UPR_10_TO_HOST_DROP         (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_10_TO_HOST_FORWARD      (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_10_TO_GPTP              (17u)
#define BITL_MAC_ADDR_FILT_UPR_10_TO_GPTP              (1u)
#define BITM_MAC_ADDR_FILT_UPR_10_TO_GPTP              (0x00020000u)
#define ENUM_MAC_ADDR_FILT_UPR_10_TO_GPTP_DROP         (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_10_TO_GPTP_FORWARD      (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_10_APPLY2PORT           (30u)
#define BITL_MAC_ADDR_FILT_UPR_10_APPLY2PORT           (1u)
#define BITM_MAC_ADDR_FILT_UPR_10_APPLY2PORT           (0x40000000u)
#define ENUM_MAC_ADDR_FILT_UPR_10_APPLY2PORT_NOTAPPLY  (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_10_APPLY2PORT_APPLY     (0x00000001u)

/* Register Name        : ADDR_FILT_LWR_10
 * Register Addr        : 0x0065u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_LWR_10_ADDR                      (0x0065u)
#define MAC_ADDR_FILT_LWR_10_RESET_VAL                 (0x00000000u)
#define MAC_ADDR_FILT_LWR_10_MMS                       (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_LWR_10_MAC_ADDR             (0u)
#define BITL_MAC_ADDR_FILT_LWR_10_MAC_ADDR             (32u)
#define BITM_MAC_ADDR_FILT_LWR_10_MAC_ADDR             (0xFFFFFFFFu)

/* Register Name        : ADDR_FILT_UPR_11
 * Register Addr        : 0x0066u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_UPR_11_ADDR                      (0x0066u)
#define MAC_ADDR_FILT_UPR_11_RESET_VAL                 (0x00000000u)
#define MAC_ADDR_FILT_UPR_11_MMS                       (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 16    | TO_HOST                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Host.                             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 17    | TO_GPTP                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Other Port.                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 30    | APPLY2PORT               | Apply Rule                        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_UPR_11_MAC_ADDR             (0u)
#define BITL_MAC_ADDR_FILT_UPR_11_MAC_ADDR             (16u)
#define BITM_MAC_ADDR_FILT_UPR_11_MAC_ADDR             (0x0000FFFFu)

#define BITP_MAC_ADDR_FILT_UPR_11_TO_HOST              (16u)
#define BITL_MAC_ADDR_FILT_UPR_11_TO_HOST              (1u)
#define BITM_MAC_ADDR_FILT_UPR_11_TO_HOST              (0x00010000u)
#define ENUM_MAC_ADDR_FILT_UPR_11_TO_HOST_DROP         (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_11_TO_HOST_FORWARD      (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_11_TO_GPTP              (17u)
#define BITL_MAC_ADDR_FILT_UPR_11_TO_GPTP              (1u)
#define BITM_MAC_ADDR_FILT_UPR_11_TO_GPTP              (0x00020000u)
#define ENUM_MAC_ADDR_FILT_UPR_11_TO_GPTP_DROP         (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_11_TO_GPTP_FORWARD      (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_11_APPLY2PORT           (30u)
#define BITL_MAC_ADDR_FILT_UPR_11_APPLY2PORT           (1u)
#define BITM_MAC_ADDR_FILT_UPR_11_APPLY2PORT           (0x40000000u)
#define ENUM_MAC_ADDR_FILT_UPR_11_APPLY2PORT_NOTAPPLY  (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_11_APPLY2PORT_APPLY     (0x00000001u)

/* Register Name        : ADDR_FILT_LWR_11
 * Register Addr        : 0x0067u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_LWR_11_ADDR                      (0x0067u)
#define MAC_ADDR_FILT_LWR_11_RESET_VAL                 (0x00000000u)
#define MAC_ADDR_FILT_LWR_11_MMS                       (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_LWR_11_MAC_ADDR             (0u)
#define BITL_MAC_ADDR_FILT_LWR_11_MAC_ADDR             (32u)
#define BITM_MAC_ADDR_FILT_LWR_11_MAC_ADDR             (0xFFFFFFFFu)

/* Register Name        : ADDR_FILT_UPR_12
 * Register Addr        : 0x0068u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_UPR_12_ADDR                      (0x0068u)
#define MAC_ADDR_FILT_UPR_12_RESET_VAL                 (0x00000000u)
#define MAC_ADDR_FILT_UPR_12_MMS                       (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 16    | TO_HOST                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Host.                             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 17    | TO_GPTP                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Other Port.                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 30    | APPLY2PORT               | Apply Rule                        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_UPR_12_MAC_ADDR             (0u)
#define BITL_MAC_ADDR_FILT_UPR_12_MAC_ADDR             (16u)
#define BITM_MAC_ADDR_FILT_UPR_12_MAC_ADDR             (0x0000FFFFu)

#define BITP_MAC_ADDR_FILT_UPR_12_TO_HOST              (16u)
#define BITL_MAC_ADDR_FILT_UPR_12_TO_HOST              (1u)
#define BITM_MAC_ADDR_FILT_UPR_12_TO_HOST              (0x00010000u)
#define ENUM_MAC_ADDR_FILT_UPR_12_TO_HOST_DROP         (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_12_TO_HOST_FORWARD      (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_12_TO_GPTP              (17u)
#define BITL_MAC_ADDR_FILT_UPR_12_TO_GPTP              (1u)
#define BITM_MAC_ADDR_FILT_UPR_12_TO_GPTP              (0x00020000u)
#define ENUM_MAC_ADDR_FILT_UPR_12_TO_GPTP_DROP         (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_12_TO_GPTP_FORWARD      (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_12_APPLY2PORT           (30u)
#define BITL_MAC_ADDR_FILT_UPR_12_APPLY2PORT           (1u)
#define BITM_MAC_ADDR_FILT_UPR_12_APPLY2PORT           (0x40000000u)
#define ENUM_MAC_ADDR_FILT_UPR_12_APPLY2PORT_NOTAPPLY  (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_12_APPLY2PORT_APPLY     (0x00000001u)

/* Register Name        : ADDR_FILT_LWR_12
 * Register Addr        : 0x0069u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_LWR_12_ADDR                      (0x0069u)
#define MAC_ADDR_FILT_LWR_12_RESET_VAL                 (0x00000000u)
#define MAC_ADDR_FILT_LWR_12_MMS                       (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_LWR_12_MAC_ADDR             (0u)
#define BITL_MAC_ADDR_FILT_LWR_12_MAC_ADDR             (32u)
#define BITM_MAC_ADDR_FILT_LWR_12_MAC_ADDR             (0xFFFFFFFFu)

/* Register Name        : ADDR_FILT_UPR_13
 * Register Addr        : 0x006Au
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_UPR_13_ADDR                      (0x006Au)
#define MAC_ADDR_FILT_UPR_13_RESET_VAL                 (0x00000000u)
#define MAC_ADDR_FILT_UPR_13_MMS                       (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 16    | TO_HOST                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Host.                             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 17    | TO_GPTP                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Other Port.                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 30    | APPLY2PORT               | Apply Rule                        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_UPR_13_MAC_ADDR             (0u)
#define BITL_MAC_ADDR_FILT_UPR_13_MAC_ADDR             (16u)
#define BITM_MAC_ADDR_FILT_UPR_13_MAC_ADDR             (0x0000FFFFu)

#define BITP_MAC_ADDR_FILT_UPR_13_TO_HOST              (16u)
#define BITL_MAC_ADDR_FILT_UPR_13_TO_HOST              (1u)
#define BITM_MAC_ADDR_FILT_UPR_13_TO_HOST              (0x00010000u)
#define ENUM_MAC_ADDR_FILT_UPR_13_TO_HOST_DROP         (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_13_TO_HOST_FORWARD      (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_13_TO_GPTP              (17u)
#define BITL_MAC_ADDR_FILT_UPR_13_TO_GPTP              (1u)
#define BITM_MAC_ADDR_FILT_UPR_13_TO_GPTP              (0x00020000u)
#define ENUM_MAC_ADDR_FILT_UPR_13_TO_GPTP_DROP         (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_13_TO_GPTP_FORWARD      (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_13_APPLY2PORT           (30u)
#define BITL_MAC_ADDR_FILT_UPR_13_APPLY2PORT           (1u)
#define BITM_MAC_ADDR_FILT_UPR_13_APPLY2PORT           (0x40000000u)
#define ENUM_MAC_ADDR_FILT_UPR_13_APPLY2PORT_NOTAPPLY  (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_13_APPLY2PORT_APPLY     (0x00000001u)

/* Register Name        : ADDR_FILT_LWR_13
 * Register Addr        : 0x006Bu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_LWR_13_ADDR                      (0x006Bu)
#define MAC_ADDR_FILT_LWR_13_RESET_VAL                 (0x00000000u)
#define MAC_ADDR_FILT_LWR_13_MMS                       (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_LWR_13_MAC_ADDR             (0u)
#define BITL_MAC_ADDR_FILT_LWR_13_MAC_ADDR             (32u)
#define BITM_MAC_ADDR_FILT_LWR_13_MAC_ADDR             (0xFFFFFFFFu)

/* Register Name        : ADDR_FILT_UPR_14
 * Register Addr        : 0x006Cu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_UPR_14_ADDR                      (0x006Cu)
#define MAC_ADDR_FILT_UPR_14_RESET_VAL                 (0x00000000u)
#define MAC_ADDR_FILT_UPR_14_MMS                       (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 16    | TO_HOST                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Host.                             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 17    | TO_GPTP                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Other Port.                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 30    | APPLY2PORT               | Apply Rule                        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_UPR_14_MAC_ADDR             (0u)
#define BITL_MAC_ADDR_FILT_UPR_14_MAC_ADDR             (16u)
#define BITM_MAC_ADDR_FILT_UPR_14_MAC_ADDR             (0x0000FFFFu)

#define BITP_MAC_ADDR_FILT_UPR_14_TO_HOST              (16u)
#define BITL_MAC_ADDR_FILT_UPR_14_TO_HOST              (1u)
#define BITM_MAC_ADDR_FILT_UPR_14_TO_HOST              (0x00010000u)
#define ENUM_MAC_ADDR_FILT_UPR_14_TO_HOST_DROP         (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_14_TO_HOST_FORWARD      (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_14_TO_GPTP              (17u)
#define BITL_MAC_ADDR_FILT_UPR_14_TO_GPTP              (1u)
#define BITM_MAC_ADDR_FILT_UPR_14_TO_GPTP              (0x00020000u)
#define ENUM_MAC_ADDR_FILT_UPR_14_TO_GPTP_DROP         (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_14_TO_GPTP_FORWARD      (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_14_APPLY2PORT           (30u)
#define BITL_MAC_ADDR_FILT_UPR_14_APPLY2PORT           (1u)
#define BITM_MAC_ADDR_FILT_UPR_14_APPLY2PORT           (0x40000000u)
#define ENUM_MAC_ADDR_FILT_UPR_14_APPLY2PORT_NOTAPPLY  (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_14_APPLY2PORT_APPLY     (0x00000001u)

/* Register Name        : ADDR_FILT_LWR_14
 * Register Addr        : 0x006Du
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_LWR_14_ADDR                      (0x006Du)
#define MAC_ADDR_FILT_LWR_14_RESET_VAL                 (0x00000000u)
#define MAC_ADDR_FILT_LWR_14_MMS                       (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_LWR_14_MAC_ADDR             (0u)
#define BITL_MAC_ADDR_FILT_LWR_14_MAC_ADDR             (32u)
#define BITM_MAC_ADDR_FILT_LWR_14_MAC_ADDR             (0xFFFFFFFFu)

/* Register Name        : ADDR_FILT_UPR_15
 * Register Addr        : 0x006Eu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_UPR_15_ADDR                      (0x006Eu)
#define MAC_ADDR_FILT_UPR_15_RESET_VAL                 (0x00000000u)
#define MAC_ADDR_FILT_UPR_15_MMS                       (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 16    | TO_HOST                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Host.                             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 17    | TO_GPTP                  | Controls Forwarding of Frames     | 0x00000000  |
 * |       |                          | Matching This MAC Address to the  |             |
 * |       |                          | Other Port.                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 30    | APPLY2PORT               | Apply Rule                        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_UPR_15_MAC_ADDR             (0u)
#define BITL_MAC_ADDR_FILT_UPR_15_MAC_ADDR             (16u)
#define BITM_MAC_ADDR_FILT_UPR_15_MAC_ADDR             (0x0000FFFFu)

#define BITP_MAC_ADDR_FILT_UPR_15_TO_HOST              (16u)
#define BITL_MAC_ADDR_FILT_UPR_15_TO_HOST              (1u)
#define BITM_MAC_ADDR_FILT_UPR_15_TO_HOST              (0x00010000u)
#define ENUM_MAC_ADDR_FILT_UPR_15_TO_HOST_DROP         (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_15_TO_HOST_FORWARD      (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_15_TO_GPTP              (17u)
#define BITL_MAC_ADDR_FILT_UPR_15_TO_GPTP              (1u)
#define BITM_MAC_ADDR_FILT_UPR_15_TO_GPTP              (0x00020000u)
#define ENUM_MAC_ADDR_FILT_UPR_15_TO_GPTP_DROP         (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_15_TO_GPTP_FORWARD      (0x00000001u)

#define BITP_MAC_ADDR_FILT_UPR_15_APPLY2PORT           (30u)
#define BITL_MAC_ADDR_FILT_UPR_15_APPLY2PORT           (1u)
#define BITM_MAC_ADDR_FILT_UPR_15_APPLY2PORT           (0x40000000u)
#define ENUM_MAC_ADDR_FILT_UPR_15_APPLY2PORT_NOTAPPLY  (0x00000000u)
#define ENUM_MAC_ADDR_FILT_UPR_15_APPLY2PORT_APPLY     (0x00000001u)

/* Register Name        : ADDR_FILT_LWR_15
 * Register Addr        : 0x006Fu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_ADDR_FILT_LWR_15_ADDR                      (0x006Fu)
#define MAC_ADDR_FILT_LWR_15_RESET_VAL                 (0x00000000u)
#define MAC_ADDR_FILT_LWR_15_MMS                       (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | MAC_ADDR                 | MAC Address.                      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_FILT_LWR_15_MAC_ADDR             (0u)
#define BITL_MAC_ADDR_FILT_LWR_15_MAC_ADDR             (32u)
#define BITM_MAC_ADDR_FILT_LWR_15_MAC_ADDR             (0xFFFFFFFFu)

/* Register Name        : ADDR_MSK_UPR_0
 * Register Addr        : 0x0070u
 * Register Reset Value : 0x0000FFFFu
 * Register MMS         : 1u
 */

#define MAC_ADDR_MSK_UPR_0_ADDR                        (0x0070u)
#define MAC_ADDR_MSK_UPR_0_RESET_VAL                   (0x0000FFFFu)
#define MAC_ADDR_MSK_UPR_0_MMS                         (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | MAC_ADDR_MASK            | MAC Address Bit Mask for the      | 0x0000ffff  |
 * |       |                          | Address Table.                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_MSK_UPR_0_MAC_ADDR_MASK          (0u)
#define BITL_MAC_ADDR_MSK_UPR_0_MAC_ADDR_MASK          (16u)
#define BITM_MAC_ADDR_MSK_UPR_0_MAC_ADDR_MASK          (0x0000FFFFu)

/* Register Name        : ADDR_MSK_LWR_0
 * Register Addr        : 0x0071u
 * Register Reset Value : 0xFFFFFFFFu
 * Register MMS         : 1u
 */

#define MAC_ADDR_MSK_LWR_0_ADDR                        (0x0071u)
#define MAC_ADDR_MSK_LWR_0_RESET_VAL                   (0xFFFFFFFFu)
#define MAC_ADDR_MSK_LWR_0_MMS                         (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | MAC_ADDR_MASK            | MAC Address Bit Mask for the      | 0xffffffff  |
 * |       |                          | Address Table.                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_MSK_LWR_0_MAC_ADDR_MASK          (0u)
#define BITL_MAC_ADDR_MSK_LWR_0_MAC_ADDR_MASK          (32u)
#define BITM_MAC_ADDR_MSK_LWR_0_MAC_ADDR_MASK          (0xFFFFFFFFu)

/* Register Name        : ADDR_MSK_UPR_1
 * Register Addr        : 0x0072u
 * Register Reset Value : 0x0000FFFFu
 * Register MMS         : 1u
 */

#define MAC_ADDR_MSK_UPR_1_ADDR                        (0x0072u)
#define MAC_ADDR_MSK_UPR_1_RESET_VAL                   (0x0000FFFFu)
#define MAC_ADDR_MSK_UPR_1_MMS                         (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | MAC_ADDR_MASK            | MAC Address Bit Mask for the      | 0x0000ffff  |
 * |       |                          | Address Table.                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_MSK_UPR_1_MAC_ADDR_MASK          (0u)
#define BITL_MAC_ADDR_MSK_UPR_1_MAC_ADDR_MASK          (16u)
#define BITM_MAC_ADDR_MSK_UPR_1_MAC_ADDR_MASK          (0x0000FFFFu)

/* Register Name        : ADDR_MSK_LWR_1
 * Register Addr        : 0x0073u
 * Register Reset Value : 0xFFFFFFFFu
 * Register MMS         : 1u
 */

#define MAC_ADDR_MSK_LWR_1_ADDR                        (0x0073u)
#define MAC_ADDR_MSK_LWR_1_RESET_VAL                   (0xFFFFFFFFu)
#define MAC_ADDR_MSK_LWR_1_MMS                         (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | MAC_ADDR_MASK            | MAC Address Bit Mask for the      | 0xffffffff  |
 * |       |                          | Address Table.                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_ADDR_MSK_LWR_1_MAC_ADDR_MASK          (0u)
#define BITL_MAC_ADDR_MSK_LWR_1_MAC_ADDR_MASK          (32u)
#define BITM_MAC_ADDR_MSK_LWR_1_MAC_ADDR_MASK          (0xFFFFFFFFu)

/* Register Name        : TS_ADDEND
 * Register Addr        : 0x0080u
 * Register Reset Value : 0x85555555u
 * Register MMS         : 1u
 */

#define MAC_TS_ADDEND_ADDR                             (0x0080u)
#define MAC_TS_ADDEND_RESET_VAL                        (0x85555555u)
#define MAC_TS_ADDEND_MMS                              (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | TS_ADDEND                | Timestamp Accumulator Addend.     | 0x85555555  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TS_ADDEND_TS_ADDEND                   (0u)
#define BITL_MAC_TS_ADDEND_TS_ADDEND                   (32u)
#define BITM_MAC_TS_ADDEND_TS_ADDEND                   (0xFFFFFFFFu)

/* Register Name        : TS_1SEC_CMP
 * Register Addr        : 0x0081u
 * Register Reset Value : 0x3B9ACA00u
 * Register MMS         : 1u
 */

#define MAC_TS_1SEC_CMP_ADDR                           (0x0081u)
#define MAC_TS_1SEC_CMP_RESET_VAL                      (0x3B9ACA00u)
#define MAC_TS_1SEC_CMP_MMS                            (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | TS_1SEC_CMP              | Timestamp 1 Second Compare        | 0x3b9aca00  |
 * |       |                          | Value.                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TS_1SEC_CMP_TS_1SEC_CMP               (0u)
#define BITL_MAC_TS_1SEC_CMP_TS_1SEC_CMP               (32u)
#define BITM_MAC_TS_1SEC_CMP_TS_1SEC_CMP               (0xFFFFFFFFu)

/* Register Name        : TS_SEC_CNT
 * Register Addr        : 0x0082u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_TS_SEC_CNT_ADDR                            (0x0082u)
#define MAC_TS_SEC_CNT_RESET_VAL                       (0x00000000u)
#define MAC_TS_SEC_CNT_MMS                             (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | TS_SEC_CNT               | Write to the Seconds Counter.     | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TS_SEC_CNT_TS_SEC_CNT                 (0u)
#define BITL_MAC_TS_SEC_CNT_TS_SEC_CNT                 (32u)
#define BITM_MAC_TS_SEC_CNT_TS_SEC_CNT                 (0xFFFFFFFFu)

/* Register Name        : TS_NS_CNT
 * Register Addr        : 0x0083u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_TS_NS_CNT_ADDR                             (0x0083u)
#define MAC_TS_NS_CNT_RESET_VAL                        (0x00000000u)
#define MAC_TS_NS_CNT_MMS                              (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | TS_NS_CNT                | Write to the Nanoseconds          | 0x00000000  |
 * |       |                          | Counter.                          |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TS_NS_CNT_TS_NS_CNT                   (0u)
#define BITL_MAC_TS_NS_CNT_TS_NS_CNT                   (32u)
#define BITM_MAC_TS_NS_CNT_TS_NS_CNT                   (0xFFFFFFFFu)

/* Register Name        : TS_CFG
 * Register Addr        : 0x0084u
 * Register Reset Value : 0x00000001u
 * Register MMS         : 1u
 */

#define MAC_TS_CFG_ADDR                                (0x0084u)
#define MAC_TS_CFG_RESET_VAL                           (0x00000001u)
#define MAC_TS_CFG_MMS                                 (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | TS_EN                    | Enable the 1588 Timestamp         | 0x00000001  |
 * |       |                          | Counter.                          |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | TS_CLR                   | Clear the 1588 Timestamp          | 0x00000000  |
 * |       |                          | Counters.                         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 2     | TS_TIMER_DEF             | The Default Value for the         | 0x00000000  |
 * |       |                          | TS_TIMER Output.                  |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 3     | TS_TIMER_STOP            | Stop Toggling the TS_TIMER        | 0x00000000  |
 * |       |                          | Output.                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 4     | TS_CAPT_FREE_CNT         | Capture the Free Running          | 0x00000000  |
 * |       |                          | Counter.                          |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TS_CFG_TS_EN                          (0u)
#define BITL_MAC_TS_CFG_TS_EN                          (1u)
#define BITM_MAC_TS_CFG_TS_EN                          (0x01u)

#define BITP_MAC_TS_CFG_TS_CLR                         (1u)
#define BITL_MAC_TS_CFG_TS_CLR                         (1u)
#define BITM_MAC_TS_CFG_TS_CLR                         (0x02u)

#define BITP_MAC_TS_CFG_TS_TIMER_DEF                   (2u)
#define BITL_MAC_TS_CFG_TS_TIMER_DEF                   (1u)
#define BITM_MAC_TS_CFG_TS_TIMER_DEF                   (0x04u)

#define BITP_MAC_TS_CFG_TS_TIMER_STOP                  (3u)
#define BITL_MAC_TS_CFG_TS_TIMER_STOP                  (1u)
#define BITM_MAC_TS_CFG_TS_TIMER_STOP                  (0x08u)

#define BITP_MAC_TS_CFG_TS_CAPT_FREE_CNT               (4u)
#define BITL_MAC_TS_CFG_TS_CAPT_FREE_CNT               (1u)
#define BITM_MAC_TS_CFG_TS_CAPT_FREE_CNT               (0x10u)

/* Register Name        : TS_TIMER_HI
 * Register Addr        : 0x0085u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_TS_TIMER_HI_ADDR                           (0x0085u)
#define MAC_TS_TIMER_HI_RESET_VAL                      (0x00000000u)
#define MAC_TS_TIMER_HI_MMS                            (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | TS_TIMER_HI              | TS_TIMER High Period (NS).        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TS_TIMER_HI_TS_TIMER_HI               (0u)
#define BITL_MAC_TS_TIMER_HI_TS_TIMER_HI               (32u)
#define BITM_MAC_TS_TIMER_HI_TS_TIMER_HI               (0xFFFFFFFFu)

/* Register Name        : TS_TIMER_LO
 * Register Addr        : 0x0086u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_TS_TIMER_LO_ADDR                           (0x0086u)
#define MAC_TS_TIMER_LO_RESET_VAL                      (0x00000000u)
#define MAC_TS_TIMER_LO_MMS                            (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | TS_TIMER_LO              | TS_TIMER Low Period (NS).         | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TS_TIMER_LO_TS_TIMER_LO               (0u)
#define BITL_MAC_TS_TIMER_LO_TS_TIMER_LO               (32u)
#define BITM_MAC_TS_TIMER_LO_TS_TIMER_LO               (0xFFFFFFFFu)

/* Register Name        : TS_TIMER_QE_CORR
 * Register Addr        : 0x0087u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_TS_TIMER_QE_CORR_ADDR                      (0x0087u)
#define MAC_TS_TIMER_QE_CORR_RESET_VAL                 (0x00000000u)
#define MAC_TS_TIMER_QE_CORR_MMS                       (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | TS_TIMER_QE_CORR         | TS_TIMER Quantization Error       | 0x00000000  |
 * |       |                          | Correction Value.                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TS_TIMER_QE_CORR_TS_TIMER_QE_CORR     (0u)
#define BITL_MAC_TS_TIMER_QE_CORR_TS_TIMER_QE_CORR     (8u)
#define BITM_MAC_TS_TIMER_QE_CORR_TS_TIMER_QE_CORR     (0x000000FFu)
#define ENUM_MAC_TS_TIMER_QE_CORR_TS_TIMER_QE_CORR_NO_QE_CORR (0x00000000u)
#define ENUM_MAC_TS_TIMER_QE_CORR_TS_TIMER_QE_CORR_QE_CORR_1NS (0x00000001u)
#define ENUM_MAC_TS_TIMER_QE_CORR_TS_TIMER_QE_CORR_QE_CORR_2NS (0x00000002u)
#define ENUM_MAC_TS_TIMER_QE_CORR_TS_TIMER_QE_CORR_QE_CORR_3NS (0x00000003u)
#define ENUM_MAC_TS_TIMER_QE_CORR_TS_TIMER_QE_CORR_QE_CORR_4NS (0x00000004u)
#define ENUM_MAC_TS_TIMER_QE_CORR_TS_TIMER_QE_CORR_QE_CORR_5NS (0x00000005u)
#define ENUM_MAC_TS_TIMER_QE_CORR_TS_TIMER_QE_CORR_QE_CORR_6NS (0x00000006u)
#define ENUM_MAC_TS_TIMER_QE_CORR_TS_TIMER_QE_CORR_QE_CORR_7NS (0x00000007u)
#define ENUM_MAC_TS_TIMER_QE_CORR_TS_TIMER_QE_CORR_QE_CORR_8NS (0x00000008u)
#define ENUM_MAC_TS_TIMER_QE_CORR_TS_TIMER_QE_CORR_QE_CORR_9NS (0x00000009u)
#define ENUM_MAC_TS_TIMER_QE_CORR_TS_TIMER_QE_CORR_QE_CORR_10NS (0x0000000Au)
#define ENUM_MAC_TS_TIMER_QE_CORR_TS_TIMER_QE_CORR_QE_CORR_11NS (0x0000000Bu)
#define ENUM_MAC_TS_TIMER_QE_CORR_TS_TIMER_QE_CORR_QE_CORR_12NS (0x0000000Cu)
#define ENUM_MAC_TS_TIMER_QE_CORR_TS_TIMER_QE_CORR_QE_CORR_13NS (0x0000000Du)
#define ENUM_MAC_TS_TIMER_QE_CORR_TS_TIMER_QE_CORR_QE_CORR_14NS (0x0000000Eu)
#define ENUM_MAC_TS_TIMER_QE_CORR_TS_TIMER_QE_CORR_QE_CORR_15NS (0x0000000Fu)

/* Register Name        : TS_TIMER_START
 * Register Addr        : 0x0088u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_TS_TIMER_START_ADDR                        (0x0088u)
#define MAC_TS_TIMER_START_RESET_VAL                   (0x00000000u)
#define MAC_TS_TIMER_START_MMS                         (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | TS_TSTART                | Point in Time at Which to Start   | 0x00000000  |
 * |       |                          | the TS_TIMER Counter (NS).        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TS_TIMER_START_TS_TSTART              (0u)
#define BITL_MAC_TS_TIMER_START_TS_TSTART              (32u)
#define BITM_MAC_TS_TIMER_START_TS_TSTART              (0xFFFFFFFFu)

/* Register Name        : TS_EXT_CAPT0
 * Register Addr        : 0x0089u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_TS_EXT_CAPT0_ADDR                          (0x0089u)
#define MAC_TS_EXT_CAPT0_RESET_VAL                     (0x00000000u)
#define MAC_TS_EXT_CAPT0_MMS                           (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | TS_EXT_CAPTD             | Timestamp Captured on the         | 0x00000000  |
 * |       |                          | Assertion of TS_CAPT Pin.         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TS_EXT_CAPT0_TS_EXT_CAPTD             (0u)
#define BITL_MAC_TS_EXT_CAPT0_TS_EXT_CAPTD             (32u)
#define BITM_MAC_TS_EXT_CAPT0_TS_EXT_CAPTD             (0xFFFFFFFFu)

/* Register Name        : TS_EXT_CAPT1
 * Register Addr        : 0x008Au
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_TS_EXT_CAPT1_ADDR                          (0x008Au)
#define MAC_TS_EXT_CAPT1_RESET_VAL                     (0x00000000u)
#define MAC_TS_EXT_CAPT1_MMS                           (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | TS_EXT_CAPTD             | Timestamp Captured on the         | 0x00000000  |
 * |       |                          | Assertion of TS_CAPT Pin.         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TS_EXT_CAPT1_TS_EXT_CAPTD             (0u)
#define BITL_MAC_TS_EXT_CAPT1_TS_EXT_CAPTD             (32u)
#define BITM_MAC_TS_EXT_CAPT1_TS_EXT_CAPTD             (0xFFFFFFFFu)

/* Register Name        : TS_FREECNT_CAPT
 * Register Addr        : 0x008Bu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_TS_FREECNT_CAPT_ADDR                       (0x008Bu)
#define MAC_TS_FREECNT_CAPT_RESET_VAL                  (0x00000000u)
#define MAC_TS_FREECNT_CAPT_MMS                        (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 31-00 | TS_CNT_CAPTD             | Captured Free Running Counter.    | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TS_FREECNT_CAPT_TS_CNT_CAPTD          (0u)
#define BITL_MAC_TS_FREECNT_CAPT_TS_CNT_CAPTD          (32u)
#define BITM_MAC_TS_FREECNT_CAPT_TS_CNT_CAPTD          (0xFFFFFFFFu)

/* Register Name        : PLCA_PRIORITY
 * Register Addr        : 0x008Du
 * Register Reset Value : 0x00080000u
 * Register MMS         : 1u
 */

#define MAC_PLCA_PRIORITY_ADDR                         (0x008Du)
#define MAC_PLCA_PRIORITY_RESET_VAL                    (0x00080000u)
#define MAC_PLCA_PRIORITY_MMS                          (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | NODE_PRIORITY_ID         | Current Active Priority           | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-08 | NET_PRIORITY_ID          | Network Priority List             | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 16    | FRAME_PRIORITY_EN        | Enables the Frame Priority        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 18    | NODE_PRIORITY_EN         | Enables the Node PLCA Priority    | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 19    | PLCA_PENDING_PKT_FORCE   | Enable Forcing PCLA Pending       | 0x00000001  |
 * |       |                          | Packing.                          |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_PLCA_PRIORITY_NODE_PRIORITY_ID        (0u)
#define BITL_MAC_PLCA_PRIORITY_NODE_PRIORITY_ID        (8u)
#define BITM_MAC_PLCA_PRIORITY_NODE_PRIORITY_ID        (0x000000FFu)

#define BITP_MAC_PLCA_PRIORITY_NET_PRIORITY_ID         (8u)
#define BITL_MAC_PLCA_PRIORITY_NET_PRIORITY_ID         (8u)
#define BITM_MAC_PLCA_PRIORITY_NET_PRIORITY_ID         (0x0000FF00u)

#define BITP_MAC_PLCA_PRIORITY_FRAME_PRIORITY_EN       (16u)
#define BITL_MAC_PLCA_PRIORITY_FRAME_PRIORITY_EN       (1u)
#define BITM_MAC_PLCA_PRIORITY_FRAME_PRIORITY_EN       (0x00010000u)

#define BITP_MAC_PLCA_PRIORITY_NODE_PRIORITY_EN        (18u)
#define BITL_MAC_PLCA_PRIORITY_NODE_PRIORITY_EN        (1u)
#define BITM_MAC_PLCA_PRIORITY_NODE_PRIORITY_EN        (0x00040000u)

#define BITP_MAC_PLCA_PRIORITY_PLCA_PENDING_PKT_FORCE  (19u)
#define BITL_MAC_PLCA_PRIORITY_PLCA_PENDING_PKT_FORCE  (1u)
#define BITM_MAC_PLCA_PRIORITY_PLCA_PENDING_PKT_FORCE  (0x00080000u)

/* Register Name        : RX_FSIZE
 * Register Addr        : 0x0090u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_RX_FSIZE_ADDR                              (0x0090u)
#define MAC_RX_FSIZE_RESET_VAL                         (0x00000000u)
#define MAC_RX_FSIZE_MMS                               (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 10-00 | RX_FRM_SIZE              | Receive Frame Size.               | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_RX_FSIZE_RX_FRM_SIZE                  (0u)
#define BITL_MAC_RX_FSIZE_RX_FRM_SIZE                  (11u)
#define BITM_MAC_RX_FSIZE_RX_FRM_SIZE                  (0x000007FFu)

/* Register Name        : RX_FRM_CNT
 * Register Addr        : 0x00A1u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_RX_FRM_CNT_ADDR                            (0x00A1u)
#define MAC_RX_FRM_CNT_RESET_VAL                       (0x00000000u)
#define MAC_RX_FRM_CNT_MMS                             (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 23-00 | RX_FRM_CNT               | Rx Frame Count.                   | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_RX_FRM_CNT_RX_FRM_CNT                 (0u)
#define BITL_MAC_RX_FRM_CNT_RX_FRM_CNT                 (24u)
#define BITM_MAC_RX_FRM_CNT_RX_FRM_CNT                 (0x00FFFFFFu)

/* Register Name        : RX_BCAST_CNT
 * Register Addr        : 0x00A2u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_RX_BCAST_CNT_ADDR                          (0x00A2u)
#define MAC_RX_BCAST_CNT_RESET_VAL                     (0x00000000u)
#define MAC_RX_BCAST_CNT_MMS                           (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 23-00 | RX_BCAST_CNT             | Rx Broadcast Frame Count.         | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_RX_BCAST_CNT_RX_BCAST_CNT             (0u)
#define BITL_MAC_RX_BCAST_CNT_RX_BCAST_CNT             (24u)
#define BITM_MAC_RX_BCAST_CNT_RX_BCAST_CNT             (0x00FFFFFFu)

/* Register Name        : RX_MCAST_CNT
 * Register Addr        : 0x00A3u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_RX_MCAST_CNT_ADDR                          (0x00A3u)
#define MAC_RX_MCAST_CNT_RESET_VAL                     (0x00000000u)
#define MAC_RX_MCAST_CNT_MMS                           (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 23-00 | RX_MCAST_CNT             | Rx Multicast Frame Count.         | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_RX_MCAST_CNT_RX_MCAST_CNT             (0u)
#define BITL_MAC_RX_MCAST_CNT_RX_MCAST_CNT             (24u)
#define BITM_MAC_RX_MCAST_CNT_RX_MCAST_CNT             (0x00FFFFFFu)

/* Register Name        : RX_UCAST_CNT
 * Register Addr        : 0x00A4u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_RX_UCAST_CNT_ADDR                          (0x00A4u)
#define MAC_RX_UCAST_CNT_RESET_VAL                     (0x00000000u)
#define MAC_RX_UCAST_CNT_MMS                           (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 23-00 | RX_UCAST_CNT             | Rx Unicast Frame Count.           | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_RX_UCAST_CNT_RX_UCAST_CNT             (0u)
#define BITL_MAC_RX_UCAST_CNT_RX_UCAST_CNT             (24u)
#define BITM_MAC_RX_UCAST_CNT_RX_UCAST_CNT             (0x00FFFFFFu)

/* Register Name        : RX_CRC_ERR_CNT
 * Register Addr        : 0x00A5u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_RX_CRC_ERR_CNT_ADDR                        (0x00A5u)
#define MAC_RX_CRC_ERR_CNT_RESET_VAL                   (0x00000000u)
#define MAC_RX_CRC_ERR_CNT_MMS                         (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 23-00 | RX_CRC_ERR_CNT           | Rx CRC Errored Frame Count.       | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_RX_CRC_ERR_CNT_RX_CRC_ERR_CNT         (0u)
#define BITL_MAC_RX_CRC_ERR_CNT_RX_CRC_ERR_CNT         (24u)
#define BITM_MAC_RX_CRC_ERR_CNT_RX_CRC_ERR_CNT         (0x00FFFFFFu)

/* Register Name        : RX_ALGN_ERR_CNT
 * Register Addr        : 0x00A6u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_RX_ALGN_ERR_CNT_ADDR                       (0x00A6u)
#define MAC_RX_ALGN_ERR_CNT_RESET_VAL                  (0x00000000u)
#define MAC_RX_ALGN_ERR_CNT_MMS                        (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 23-00 | RX_ALGN_ERR_CNT          | Rx Align Error Count.             | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_RX_ALGN_ERR_CNT_RX_ALGN_ERR_CNT       (0u)
#define BITL_MAC_RX_ALGN_ERR_CNT_RX_ALGN_ERR_CNT       (24u)
#define BITM_MAC_RX_ALGN_ERR_CNT_RX_ALGN_ERR_CNT       (0x00FFFFFFu)

/* Register Name        : RX_PREAMBLE_ERR_CNT
 * Register Addr        : 0x00A7u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_RX_PREAMBLE_ERR_CNT_ADDR                   (0x00A7u)
#define MAC_RX_PREAMBLE_ERR_CNT_RESET_VAL              (0x00000000u)
#define MAC_RX_PREAMBLE_ERR_CNT_MMS                    (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 23-00 | RX_PREAMBLE_ERR_CNT      | Rx Preamble Error Count.          | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_RX_PREAMBLE_ERR_CNT_RX_PREAMBLE_ERR_CNT (0u)
#define BITL_MAC_RX_PREAMBLE_ERR_CNT_RX_PREAMBLE_ERR_CNT (24u)
#define BITM_MAC_RX_PREAMBLE_ERR_CNT_RX_PREAMBLE_ERR_CNT (0x00FFFFFFu)

/* Register Name        : RX_SHORT_ERR_CNT
 * Register Addr        : 0x00A8u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_RX_SHORT_ERR_CNT_ADDR                      (0x00A8u)
#define MAC_RX_SHORT_ERR_CNT_RESET_VAL                 (0x00000000u)
#define MAC_RX_SHORT_ERR_CNT_MMS                       (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 23-00 | RX_SHORT_ERR_CNT         | Rx Short Frame Error Count.       | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_RX_SHORT_ERR_CNT_RX_SHORT_ERR_CNT     (0u)
#define BITL_MAC_RX_SHORT_ERR_CNT_RX_SHORT_ERR_CNT     (24u)
#define BITM_MAC_RX_SHORT_ERR_CNT_RX_SHORT_ERR_CNT     (0x00FFFFFFu)

/* Register Name        : RX_LONG_ERR_CNT
 * Register Addr        : 0x00A9u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_RX_LONG_ERR_CNT_ADDR                       (0x00A9u)
#define MAC_RX_LONG_ERR_CNT_RESET_VAL                  (0x00000000u)
#define MAC_RX_LONG_ERR_CNT_MMS                        (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 23-00 | RX_LONG_ERR_CNT          | Rx Long Frame Error Count.        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_RX_LONG_ERR_CNT_RX_LONG_ERR_CNT       (0u)
#define BITL_MAC_RX_LONG_ERR_CNT_RX_LONG_ERR_CNT       (24u)
#define BITM_MAC_RX_LONG_ERR_CNT_RX_LONG_ERR_CNT       (0x00FFFFFFu)

/* Register Name        : RX_PHY_ERR_CNT
 * Register Addr        : 0x00AAu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_RX_PHY_ERR_CNT_ADDR                        (0x00AAu)
#define MAC_RX_PHY_ERR_CNT_RESET_VAL                   (0x00000000u)
#define MAC_RX_PHY_ERR_CNT_MMS                         (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 23-00 | RX_PHY_ERR_CNT           | Rx PHY Error Count.               | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_RX_PHY_ERR_CNT_RX_PHY_ERR_CNT         (0u)
#define BITL_MAC_RX_PHY_ERR_CNT_RX_PHY_ERR_CNT         (24u)
#define BITM_MAC_RX_PHY_ERR_CNT_RX_PHY_ERR_CNT         (0x00FFFFFFu)

/* Register Name        : RX_DROP_HOST_FULL_CNT
 * Register Addr        : 0x00ABu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_RX_DROP_HOST_FULL_CNT_ADDR                 (0x00ABu)
#define MAC_RX_DROP_HOST_FULL_CNT_RESET_VAL            (0x00000000u)
#define MAC_RX_DROP_HOST_FULL_CNT_MMS                  (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 23-00 | RX_DROP_HOST_FULL_CNT    | Rx Frames Dropped Due to Host     | 0x00000000  |
 * |       |                          | FIFO Full.                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_RX_DROP_HOST_FULL_CNT_RX_DROP_HOST_FULL_CNT (0u)
#define BITL_MAC_RX_DROP_HOST_FULL_CNT_RX_DROP_HOST_FULL_CNT (24u)
#define BITM_MAC_RX_DROP_HOST_FULL_CNT_RX_DROP_HOST_FULL_CNT (0x00FFFFFFu)

/* Register Name        : RX_DROP_FILT_CNT
 * Register Addr        : 0x00ADu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_RX_DROP_FILT_CNT_ADDR                      (0x00ADu)
#define MAC_RX_DROP_FILT_CNT_RESET_VAL                 (0x00000000u)
#define MAC_RX_DROP_FILT_CNT_MMS                       (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 23-00 | RX_DROP_FILT_CNT         | Rx Frames Dropped Due to          | 0x00000000  |
 * |       |                          | Filtering.                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_RX_DROP_FILT_CNT_RX_DROP_FILT_CNT     (0u)
#define BITL_MAC_RX_DROP_FILT_CNT_RX_DROP_FILT_CNT     (24u)
#define BITM_MAC_RX_DROP_FILT_CNT_RX_DROP_FILT_CNT     (0x00FFFFFFu)

/* Register Name        : RX_IFG_ERR_CNT
 * Register Addr        : 0x00AEu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_RX_IFG_ERR_CNT_ADDR                        (0x00AEu)
#define MAC_RX_IFG_ERR_CNT_RESET_VAL                   (0x00000000u)
#define MAC_RX_IFG_ERR_CNT_MMS                         (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 23-00 | RX_IFG_ERR_CNT           | IFG Error Counter for Received    | 0x00000000  |
 * |       |                          | Frames.                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_RX_IFG_ERR_CNT_RX_IFG_ERR_CNT         (0u)
#define BITL_MAC_RX_IFG_ERR_CNT_RX_IFG_ERR_CNT         (24u)
#define BITM_MAC_RX_IFG_ERR_CNT_RX_IFG_ERR_CNT         (0x00FFFFFFu)

/* Register Name        : TX_FRM_CNT
 * Register Addr        : 0x00B1u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_TX_FRM_CNT_ADDR                            (0x00B1u)
#define MAC_TX_FRM_CNT_RESET_VAL                       (0x00000000u)
#define MAC_TX_FRM_CNT_MMS                             (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 23-00 | TX_FRM_CNT               | Tx Frame Count.                   | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TX_FRM_CNT_TX_FRM_CNT                 (0u)
#define BITL_MAC_TX_FRM_CNT_TX_FRM_CNT                 (24u)
#define BITM_MAC_TX_FRM_CNT_TX_FRM_CNT                 (0x00FFFFFFu)

/* Register Name        : TX_BCAST_CNT
 * Register Addr        : 0x00B2u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_TX_BCAST_CNT_ADDR                          (0x00B2u)
#define MAC_TX_BCAST_CNT_RESET_VAL                     (0x00000000u)
#define MAC_TX_BCAST_CNT_MMS                           (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 23-00 | TX_BCAST_CNT             | Tx Broadcast Frame Count.         | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TX_BCAST_CNT_TX_BCAST_CNT             (0u)
#define BITL_MAC_TX_BCAST_CNT_TX_BCAST_CNT             (24u)
#define BITM_MAC_TX_BCAST_CNT_TX_BCAST_CNT             (0x00FFFFFFu)

/* Register Name        : TX_MCAST_CNT
 * Register Addr        : 0x00B3u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_TX_MCAST_CNT_ADDR                          (0x00B3u)
#define MAC_TX_MCAST_CNT_RESET_VAL                     (0x00000000u)
#define MAC_TX_MCAST_CNT_MMS                           (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 23-00 | TX_MCAST_CNT             | Tx Multicast Frame Count.         | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TX_MCAST_CNT_TX_MCAST_CNT             (0u)
#define BITL_MAC_TX_MCAST_CNT_TX_MCAST_CNT             (24u)
#define BITM_MAC_TX_MCAST_CNT_TX_MCAST_CNT             (0x00FFFFFFu)

/* Register Name        : TX_UCAST_CNT
 * Register Addr        : 0x00B4u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_TX_UCAST_CNT_ADDR                          (0x00B4u)
#define MAC_TX_UCAST_CNT_RESET_VAL                     (0x00000000u)
#define MAC_TX_UCAST_CNT_MMS                           (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 23-00 | TX_UCAST_CNT             | Tx Unicast Frame Count.           | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TX_UCAST_CNT_TX_UCAST_CNT             (0u)
#define BITL_MAC_TX_UCAST_CNT_TX_UCAST_CNT             (24u)
#define BITM_MAC_TX_UCAST_CNT_TX_UCAST_CNT             (0x00FFFFFFu)

/* Register Name        : TX_SINGLE_COL_CNT
 * Register Addr        : 0x00B5u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_TX_SINGLE_COL_CNT_ADDR                     (0x00B5u)
#define MAC_TX_SINGLE_COL_CNT_RESET_VAL                (0x00000000u)
#define MAC_TX_SINGLE_COL_CNT_MMS                      (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 23-00 | TX_SINGLE_COL_CNT        | Tx Single Collision Frame Count.  | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TX_SINGLE_COL_CNT_TX_SINGLE_COL_CNT   (0u)
#define BITL_MAC_TX_SINGLE_COL_CNT_TX_SINGLE_COL_CNT   (24u)
#define BITM_MAC_TX_SINGLE_COL_CNT_TX_SINGLE_COL_CNT   (0x00FFFFFFu)

/* Register Name        : TX_MULTIPLE_COL_CNT
 * Register Addr        : 0x00B6u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_TX_MULTIPLE_COL_CNT_ADDR                   (0x00B6u)
#define MAC_TX_MULTIPLE_COL_CNT_RESET_VAL              (0x00000000u)
#define MAC_TX_MULTIPLE_COL_CNT_MMS                    (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 23-00 | TX_MULTIPLE_COL_CNT      | Tx Multiple Collision Frame       | 0x00000000  |
 * |       |                          | Count.                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TX_MULTIPLE_COL_CNT_TX_MULTIPLE_COL_CNT (0u)
#define BITL_MAC_TX_MULTIPLE_COL_CNT_TX_MULTIPLE_COL_CNT (24u)
#define BITM_MAC_TX_MULTIPLE_COL_CNT_TX_MULTIPLE_COL_CNT (0x00FFFFFFu)

/* Register Name        : TX_DEFERRED_XMIT_CNT
 * Register Addr        : 0x00B7u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_TX_DEFERRED_XMIT_CNT_ADDR                  (0x00B7u)
#define MAC_TX_DEFERRED_XMIT_CNT_RESET_VAL             (0x00000000u)
#define MAC_TX_DEFERRED_XMIT_CNT_MMS                   (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 23-00 | TX_DEFERRED_XMIT_CNT     | Tx Deferred Transmission Frame    | 0x00000000  |
 * |       |                          | Count.                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TX_DEFERRED_XMIT_CNT_TX_DEFERRED_XMIT_CNT (0u)
#define BITL_MAC_TX_DEFERRED_XMIT_CNT_TX_DEFERRED_XMIT_CNT (24u)
#define BITM_MAC_TX_DEFERRED_XMIT_CNT_TX_DEFERRED_XMIT_CNT (0x00FFFFFFu)

/* Register Name        : TX_LATE_COL_CNT
 * Register Addr        : 0x00B8u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_TX_LATE_COL_CNT_ADDR                       (0x00B8u)
#define MAC_TX_LATE_COL_CNT_RESET_VAL                  (0x00000000u)
#define MAC_TX_LATE_COL_CNT_MMS                        (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 23-00 | TX_LATE_COL_CNT          | Tx Late Collision Frame Count.    | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TX_LATE_COL_CNT_TX_LATE_COL_CNT       (0u)
#define BITL_MAC_TX_LATE_COL_CNT_TX_LATE_COL_CNT       (24u)
#define BITM_MAC_TX_LATE_COL_CNT_TX_LATE_COL_CNT       (0x00FFFFFFu)

/* Register Name        : TX_XSCOLS_CNT
 * Register Addr        : 0x00B9u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_TX_XSCOLS_CNT_ADDR                         (0x00B9u)
#define MAC_TX_XSCOLS_CNT_RESET_VAL                    (0x00000000u)
#define MAC_TX_XSCOLS_CNT_MMS                          (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 23-00 | TX_XSCOLS_CNT            | Tx Excess Collision Frame Count.  | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TX_XSCOLS_CNT_TX_XSCOLS_CNT           (0u)
#define BITL_MAC_TX_XSCOLS_CNT_TX_XSCOLS_CNT           (24u)
#define BITM_MAC_TX_XSCOLS_CNT_TX_XSCOLS_CNT           (0x00FFFFFFu)

/* Register Name        : TX_UNR_CNT
 * Register Addr        : 0x00BAu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_TX_UNR_CNT_ADDR                            (0x00BAu)
#define MAC_TX_UNR_CNT_RESET_VAL                       (0x00000000u)
#define MAC_TX_UNR_CNT_MMS                             (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 23-00 | TX_UNR_CNT               | Tx Frames That Were Dropped due   | 0x00000000  |
 * |       |                          | to An Under Run on Port 1.        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TX_UNR_CNT_TX_UNR_CNT                 (0u)
#define BITL_MAC_TX_UNR_CNT_TX_UNR_CNT                 (24u)
#define BITM_MAC_TX_UNR_CNT_TX_UNR_CNT                 (0x00FFFFFFu)

/* Register Name        : HI_RFC
 * Register Addr        : 0x00BBu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_HI_RFC_ADDR                                (0x00BBu)
#define MAC_HI_RFC_RESET_VAL                           (0x00000000u)
#define MAC_HI_RFC_MMS                                 (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 08-00 | RFC                      | Receive Frame Count.              | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_HI_RFC_RFC                            (0u)
#define BITL_MAC_HI_RFC_RFC                            (9u)
#define BITM_MAC_HI_RFC_RFC                            (0x000001FFu)

/* Register Name        : HI_RXSIZE
 * Register Addr        : 0x00BDu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_HI_RXSIZE_ADDR                             (0x00BDu)
#define MAC_HI_RXSIZE_RESET_VAL                        (0x00000000u)
#define MAC_HI_RXSIZE_MMS                              (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 13-00 | RXSIZE                   | Data in the Rx FIFO. Number of    | 0x00000000  |
 * |       |                          | Half Words(16 Bit).               |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_HI_RXSIZE_RXSIZE                      (0u)
#define BITL_MAC_HI_RXSIZE_RXSIZE                      (14u)
#define BITM_MAC_HI_RXSIZE_RXSIZE                      (0x00003FFFu)

/* Register Name        : TX_IFG
 * Register Addr        : 0x00C1u
 * Register Reset Value : 0x0000000Bu
 * Register MMS         : 1u
 */

#define MAC_TX_IFG_ADDR                                (0x00C1u)
#define MAC_TX_IFG_RESET_VAL                           (0x0000000Bu)
#define MAC_TX_IFG_MMS                                 (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | TX_IFG                   | Inter Frame Gap.                  | 0x0000000b  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13-08 | TX_IFG_PART2             | Inter Frame Gap Part2.            | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_TX_IFG_TX_IFG                         (0u)
#define BITL_MAC_TX_IFG_TX_IFG                         (8u)
#define BITM_MAC_TX_IFG_TX_IFG                         (0x000000FFu)

#define BITP_MAC_TX_IFG_TX_IFG_PART2                   (8u)
#define BITL_MAC_TX_IFG_TX_IFG_PART2                   (6u)
#define BITM_MAC_TX_IFG_TX_IFG_PART2                   (0x00003F00u)

/* Register Name        : DUPLEX
 * Register Addr        : 0x00C2u
 * Register Reset Value : 0x00000010u
 * Register MMS         : 1u
 */

#define MAC_DUPLEX_ADDR                                (0x00C2u)
#define MAC_DUPLEX_RESET_VAL                           (0x00000010u)
#define MAC_DUPLEX_MMS                                 (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 06-01 | TX_JAM_SIZE              | Jam Size (Nibbles).               | 0x00000008  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_DUPLEX_TX_JAM_SIZE                    (1u)
#define BITL_MAC_DUPLEX_TX_JAM_SIZE                    (6u)
#define BITM_MAC_DUPLEX_TX_JAM_SIZE                    (0x0000007Eu)

/* Register Name        : MAX_RETRY
 * Register Addr        : 0x00C3u
 * Register Reset Value : 0x0000000Fu
 * Register MMS         : 1u
 */

#define MAC_MAX_RETRY_ADDR                             (0x00C3u)
#define MAC_MAX_RETRY_RESET_VAL                        (0x0000000Fu)
#define MAC_MAX_RETRY_MMS                              (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 03-00 | MAX_RETRY                | Max Retry Count After             | 0x0000000f  |
 * |       |                          | Collisions.                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_MAX_RETRY_MAX_RETRY                   (0u)
#define BITL_MAC_MAX_RETRY_MAX_RETRY                   (4u)
#define BITM_MAC_MAX_RETRY_MAX_RETRY                   (0x0000000Fu)

/* Register Name        : LOOP
 * Register Addr        : 0x00C4u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_LOOP_ADDR                                  (0x00C4u)
#define MAC_LOOP_RESET_VAL                             (0x00000000u)
#define MAC_LOOP_MMS                                   (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | LOOPBACK_EN              | MAC Loopback.                     | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_LOOP_LOOPBACK_EN                      (0u)
#define BITL_MAC_LOOP_LOOPBACK_EN                      (1u)
#define BITM_MAC_LOOP_LOOPBACK_EN                      (0x01u)
#define ENUM_MAC_LOOP_LOOPBACK_EN_LOOPB_DIS            (0x00000000u)
#define ENUM_MAC_LOOP_LOOPBACK_EN_LOOPB_EN             (0x00000001u)

/* Register Name        : RX_CRC_EN
 * Register Addr        : 0x00C5u
 * Register Reset Value : 0x00000001u
 * Register MMS         : 1u
 */

#define MAC_RX_CRC_EN_ADDR                             (0x00C5u)
#define MAC_RX_CRC_EN_RESET_VAL                        (0x00000001u)
#define MAC_RX_CRC_EN_MMS                              (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | CRC_CHK_EN               | CRC Check Enable on Receive.      | 0x00000001  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_RX_CRC_EN_CRC_CHK_EN                  (0u)
#define BITL_MAC_RX_CRC_EN_CRC_CHK_EN                  (1u)
#define BITM_MAC_RX_CRC_EN_CRC_CHK_EN                  (0x01u)
#define ENUM_MAC_RX_CRC_EN_CRC_CHK_EN_DISABLE          (0x00000000u)
#define ENUM_MAC_RX_CRC_EN_CRC_CHK_EN_ENABLE           (0x00000001u)

/* Register Name        : RX_IFG
 * Register Addr        : 0x00C6u
 * Register Reset Value : 0x0000000Au
 * Register MMS         : 1u
 */

#define MAC_RX_IFG_ADDR                                (0x00C6u)
#define MAC_RX_IFG_RESET_VAL                           (0x0000000Au)
#define MAC_RX_IFG_MMS                                 (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | RX_IFG                   | Inter Frame Gap.                  | 0x0000000a  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_RX_IFG_RX_IFG                         (0u)
#define BITL_MAC_RX_IFG_RX_IFG                         (8u)
#define BITM_MAC_RX_IFG_RX_IFG                         (0x000000FFu)

/* Register Name        : RX_MAX_LEN
 * Register Addr        : 0x00C7u
 * Register Reset Value : 0x00000618u
 * Register MMS         : 1u
 */

#define MAC_RX_MAX_LEN_ADDR                            (0x00C7u)
#define MAC_RX_MAX_LEN_RESET_VAL                       (0x00000618u)
#define MAC_RX_MAX_LEN_MMS                             (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | MAX_FRM_LEN              | Max Frame Length on Receive.      | 0x00000618  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_RX_MAX_LEN_MAX_FRM_LEN                (0u)
#define BITL_MAC_RX_MAX_LEN_MAX_FRM_LEN                (16u)
#define BITM_MAC_RX_MAX_LEN_MAX_FRM_LEN                (0x0000FFFFu)

/* Register Name        : RX_MIN_LEN
 * Register Addr        : 0x00C8u
 * Register Reset Value : 0x00000040u
 * Register MMS         : 1u
 */

#define MAC_RX_MIN_LEN_ADDR                            (0x00C8u)
#define MAC_RX_MIN_LEN_RESET_VAL                       (0x00000040u)
#define MAC_RX_MIN_LEN_MMS                             (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | MIN_FRM_LEN              | Min Frame Length on Receive.      | 0x00000040  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_RX_MIN_LEN_MIN_FRM_LEN                (0u)
#define BITL_MAC_RX_MIN_LEN_MIN_FRM_LEN                (16u)
#define BITM_MAC_RX_MIN_LEN_MIN_FRM_LEN                (0x0000FFFFu)

/* Register Name        : RXFILT_VID_TABLE
 * Register Addr        : 0x00C9u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_RXFILT_VID_TABLE_ADDR                      (0x00C9u)
#define MAC_RXFILT_VID_TABLE_RESET_VAL                 (0x00000000u)
#define MAC_RXFILT_VID_TABLE_MMS                       (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 11-00 | RXFILT_VID_ENTRY1        | VLAN Identifier Filter Table      | 0x00000000  |
 * |       |                          | Entry #1.                         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 27-16 | RXFILT_VID_ENTRY2        | VLAN Filter Identifier Table      | 0x00000000  |
 * |       |                          | Entry #2.                         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 30    | RXFILT_VID_RULE          | VLAN Identifier Filter Rule to    | 0x00000000  |
 * |       |                          | Entry Table.                      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 31    | RXFILT_VID_EN            | Enable VLAN Identifier            | 0x00000000  |
 * |       |                          | Filtering.                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_RXFILT_VID_TABLE_RXFILT_VID_ENTRY1    (0u)
#define BITL_MAC_RXFILT_VID_TABLE_RXFILT_VID_ENTRY1    (12u)
#define BITM_MAC_RXFILT_VID_TABLE_RXFILT_VID_ENTRY1    (0x00000FFFu)

#define BITP_MAC_RXFILT_VID_TABLE_RXFILT_VID_ENTRY2    (16u)
#define BITL_MAC_RXFILT_VID_TABLE_RXFILT_VID_ENTRY2    (12u)
#define BITM_MAC_RXFILT_VID_TABLE_RXFILT_VID_ENTRY2    (0x0FFF0000u)

#define BITP_MAC_RXFILT_VID_TABLE_RXFILT_VID_RULE      (30u)
#define BITL_MAC_RXFILT_VID_TABLE_RXFILT_VID_RULE      (1u)
#define BITM_MAC_RXFILT_VID_TABLE_RXFILT_VID_RULE      (0x40000000u)

#define BITP_MAC_RXFILT_VID_TABLE_RXFILT_VID_EN        (31u)
#define BITL_MAC_RXFILT_VID_TABLE_RXFILT_VID_EN        (1u)
#define BITM_MAC_RXFILT_VID_TABLE_RXFILT_VID_EN        (0x80000000u)

/* Register Name        : RXFILT_ETYPE_TABLE
 * Register Addr        : 0x00CAu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_RXFILT_ETYPE_TABLE_ADDR                    (0x00CAu)
#define MAC_RXFILT_ETYPE_TABLE_RESET_VAL               (0x00000000u)
#define MAC_RXFILT_ETYPE_TABLE_MMS                     (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | RXFILT_ETYPE_ENTRY1      | Ethernet Type Filter Identifier   | 0x00000000  |
 * |       |                          | Table Entry #1.                   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 31-16 | RXFILT_ETYPE_ENTRY2      | Ethernet Type Filter Identifier   | 0x00000000  |
 * |       |                          | Table Entry #2.                   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_RXFILT_ETYPE_TABLE_RXFILT_ETYPE_ENTRY1 (0u)
#define BITL_MAC_RXFILT_ETYPE_TABLE_RXFILT_ETYPE_ENTRY1 (16u)
#define BITM_MAC_RXFILT_ETYPE_TABLE_RXFILT_ETYPE_ENTRY1 (0x0000FFFFu)

#define BITP_MAC_RXFILT_ETYPE_TABLE_RXFILT_ETYPE_ENTRY2 (16u)
#define BITL_MAC_RXFILT_ETYPE_TABLE_RXFILT_ETYPE_ENTRY2 (16u)
#define BITM_MAC_RXFILT_ETYPE_TABLE_RXFILT_ETYPE_ENTRY2 (0xFFFF0000u)

/* Register Name        : RXFILT_ETYPE_CNRL
 * Register Addr        : 0x00CBu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 1u
 */

#define MAC_RXFILT_ETYPE_CNRL_ADDR                     (0x00CBu)
#define MAC_RXFILT_ETYPE_CNRL_RESET_VAL                (0x00000000u)
#define MAC_RXFILT_ETYPE_CNRL_MMS                      (1u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 30    | RXFILT_ETYPE_RULE        | Ethernet Type Filter Rule to      | 0x00000000  |
 * |       |                          | Entry Table.                      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 31    | RXFILT_ETYPE_EN          | Enable Ethernet Type Based        | 0x00000000  |
 * |       |                          | Filtering.                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_MAC_RXFILT_ETYPE_CNRL_RXFILT_ETYPE_RULE   (30u)
#define BITL_MAC_RXFILT_ETYPE_CNRL_RXFILT_ETYPE_RULE   (1u)
#define BITM_MAC_RXFILT_ETYPE_CNRL_RXFILT_ETYPE_RULE   (0x40000000u)
#define ENUM_MAC_RXFILT_ETYPE_CNRL_RXFILT_ETYPE_RULE_MATCHPASS (0x00000000u)
#define ENUM_MAC_RXFILT_ETYPE_CNRL_RXFILT_ETYPE_RULE_MATCHDISCARD (0x00000001u)

#define BITP_MAC_RXFILT_ETYPE_CNRL_RXFILT_ETYPE_EN     (31u)
#define BITL_MAC_RXFILT_ETYPE_CNRL_RXFILT_ETYPE_EN     (1u)
#define BITM_MAC_RXFILT_ETYPE_CNRL_RXFILT_ETYPE_EN     (0x80000000u)

#endif /* ADI_MACPHY_REG_H */
