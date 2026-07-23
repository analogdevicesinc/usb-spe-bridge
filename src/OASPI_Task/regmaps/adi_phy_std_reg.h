/**
 * Copyright © 2026 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/********************************************************************************
 *   @file   adi_phy_std_reg.h
 *   @brief  This header file provides register descriptions for the
 *           PHY Standard.
 *******************************************************************************/

#ifndef ADI_PHY_STD_REG_H
#define ADI_PHY_STD_REG_H

#define PHY_STD_NUM_REGS                                           (17u)

/* Register Name        : CONTROL_REGISTER
 * Register Addr        : 0xFF00u
 * Register Reset Value : 0x00001000u
 * Register MMS         : 0u
 */

#define PHY_STD_CONTROL_REGISTER_ADDR                              (0xFF00u)
#define PHY_STD_CONTROL_REGISTER_RESET_VAL                         (0x00001000u)
#define PHY_STD_CONTROL_REGISTER_MMS                               (0u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 6     | SPEEDSEL1                | Speed indication MSB.             | 0x00000000  |
 * |       |                          | speedSel[1:0] = 00b indicates     |             |
 * |       |                          | 10Mbps operation                  |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 7     | COLLISIONTEST            | Collision test mode enable. When  | 0x00000000  |
 * |       |                          | Set The PHY Reports a Collision   |             |
 * |       |                          | Within 512 BT For Any Frame       |             |
 * |       |                          | Transmitted                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 8     | DUPLEXMODE               | If High The PHY is Operating in   | 0x00000000  |
 * |       |                          | Full-Duplex Mode, If Low The PHY  |             |
 * |       |                          | is Operating in Half-Duplex       |             |
 * |       |                          | Mode. T1S Operation is Always     |             |
 * |       |                          | Half-Duplex                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 9     | LINKRST                  | Setting this bit causes the       | 0x00000000  |
 * |       |                          | transceiver to reset its link     |             |
 * |       |                          | status, then resume normal        |             |
 * |       |                          | operation.                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11    | LOWPWRMODE               | Low power mode enable             | 0x00000000  |
 * |       |                          | (Redundant, Field Has No Effect)  |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12    | LINKCTL                  | Link control.  When zero, the     | 0x00000001  |
 * |       |                          | PHY cannot transmit or receive.   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13    | SPEEDSEL0                | Speed indication LSB.             | 0x00000000  |
 * |       |                          | speedSel[1:0] = 00b indicates     |             |
 * |       |                          | 10Mbps operation                  |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14    | LOOPBACK                 | PMA loop back mode enable.        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15    | SRESET                   | Soft reset. When set a soft       | 0x00000000  |
 * |       |                          | reset process is initiated to     |             |
 * |       |                          | reset the PHY                     |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_STD_CONTROL_REGISTER_SPEEDSEL1                    (6u)
#define BITL_PHY_STD_CONTROL_REGISTER_SPEEDSEL1                    (1u)
#define BITM_PHY_STD_CONTROL_REGISTER_SPEEDSEL1                    (0x40u)
#define ENUM_PHY_STD_CONTROL_REGISTER_SPEEDSEL1_TENMBPS            (0x00000000u)
#define ENUM_PHY_STD_CONTROL_REGISTER_SPEEDSEL1_HUNDREDMBPS        (0x00000001u)
#define ENUM_PHY_STD_CONTROL_REGISTER_SPEEDSEL1_THOUSANDMBPS       (0x00000002u)
#define ENUM_PHY_STD_CONTROL_REGISTER_SPEEDSEL1_ENUM003            (0x00000003u)

#define BITP_PHY_STD_CONTROL_REGISTER_COLLISIONTEST                (7u)
#define BITL_PHY_STD_CONTROL_REGISTER_COLLISIONTEST                (1u)
#define BITM_PHY_STD_CONTROL_REGISTER_COLLISIONTEST                (0x80u)
#define ENUM_PHY_STD_CONTROL_REGISTER_COLLISIONTEST_DISABLE        (0x00000000u)
#define ENUM_PHY_STD_CONTROL_REGISTER_COLLISIONTEST_ENABLE         (0x00000001u)

#define BITP_PHY_STD_CONTROL_REGISTER_DUPLEXMODE                   (8u)
#define BITL_PHY_STD_CONTROL_REGISTER_DUPLEXMODE                   (1u)
#define BITM_PHY_STD_CONTROL_REGISTER_DUPLEXMODE                   (0x0100u)
#define ENUM_PHY_STD_CONTROL_REGISTER_DUPLEXMODE_ENUM000           (0x00000000u)
#define ENUM_PHY_STD_CONTROL_REGISTER_DUPLEXMODE_ENUM001           (0x00000001u)

#define BITP_PHY_STD_CONTROL_REGISTER_LINKRST                      (9u)
#define BITL_PHY_STD_CONTROL_REGISTER_LINKRST                      (1u)
#define BITM_PHY_STD_CONTROL_REGISTER_LINKRST                      (0x0200u)
#define ENUM_PHY_STD_CONTROL_REGISTER_LINKRST_DISABLE              (0x00000000u)
#define ENUM_PHY_STD_CONTROL_REGISTER_LINKRST_ENABLE               (0x00000001u)

#define BITP_PHY_STD_CONTROL_REGISTER_LOWPWRMODE                   (11u)
#define BITL_PHY_STD_CONTROL_REGISTER_LOWPWRMODE                   (1u)
#define BITM_PHY_STD_CONTROL_REGISTER_LOWPWRMODE                   (0x0800u)
#define ENUM_PHY_STD_CONTROL_REGISTER_LOWPWRMODE_DISABLE           (0x00000000u)
#define ENUM_PHY_STD_CONTROL_REGISTER_LOWPWRMODE_ENABLE            (0x00000001u)

#define BITP_PHY_STD_CONTROL_REGISTER_LINKCTL                      (12u)
#define BITL_PHY_STD_CONTROL_REGISTER_LINKCTL                      (1u)
#define BITM_PHY_STD_CONTROL_REGISTER_LINKCTL                      (0x1000u)
#define ENUM_PHY_STD_CONTROL_REGISTER_LINKCTL_ENUM000              (0x00000000u)
#define ENUM_PHY_STD_CONTROL_REGISTER_LINKCTL_ENUM001              (0x00000001u)

#define BITP_PHY_STD_CONTROL_REGISTER_SPEEDSEL0                    (13u)
#define BITL_PHY_STD_CONTROL_REGISTER_SPEEDSEL0                    (1u)
#define BITM_PHY_STD_CONTROL_REGISTER_SPEEDSEL0                    (0x2000u)

#define BITP_PHY_STD_CONTROL_REGISTER_LOOPBACK                     (14u)
#define BITL_PHY_STD_CONTROL_REGISTER_LOOPBACK                     (1u)
#define BITM_PHY_STD_CONTROL_REGISTER_LOOPBACK                     (0x4000u)
#define ENUM_PHY_STD_CONTROL_REGISTER_LOOPBACK_DISABLE             (0x00000000u)
#define ENUM_PHY_STD_CONTROL_REGISTER_LOOPBACK_ENABLE              (0x00000001u)

#define BITP_PHY_STD_CONTROL_REGISTER_SRESET                       (15u)
#define BITL_PHY_STD_CONTROL_REGISTER_SRESET                       (1u)
#define BITM_PHY_STD_CONTROL_REGISTER_SRESET                       (0x8000u)
#define ENUM_PHY_STD_CONTROL_REGISTER_SRESET_INACTIVE              (0x00000000u)
#define ENUM_PHY_STD_CONTROL_REGISTER_SRESET_TRIGGER               (0x00000001u)

/* Register Name        : STATUS_REGISTER
 * Register Addr        : 0xFF01u
 * Register Reset Value : 0x0000082Du
 * Register MMS         : 0u
 */

#define PHY_STD_STATUS_REGISTER_ADDR                               (0xFF01u)
#define PHY_STD_STATUS_REGISTER_RESET_VAL                          (0x0000082Du)
#define PHY_STD_STATUS_REGISTER_MMS                                (0u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | EXTENDEDCAPAB            | This bit indicates that the PHY   | 0x00000001  |
 * |       |                          | supports Clause 22 to Clause 45   |             |
 * |       |                          | bridge access method.             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | LOCALJABBER              | Local jabber event detected       | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 2     | LINKSTATUS               | This bit is set by the PHY to     | 0x00000001  |
 * |       |                          | report whether a valid link has   |             |
 * |       |                          | been established.                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 3     | AUTONEGABILITY           | This bit advertises that the PHY  | 0x00000001  |
 * |       |                          | supports the Auto-Negotiation     |             |
 * |       |                          | interface                         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 4     | REMOTEJABBER             | Remote jabber event detected      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 5     | LINKNEGCOMPLETE          | Link negotiation complete         | 0x00000001  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 6     | PREAMBSUPPR              | This bit indicates the PHY does   | 0x00000000  |
 * |       |                          | not accept MDIO frames with a     |             |
 * |       |                          | suppressed preamble.              |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 7     | UNIDIRABILITY            | This bit indicates that the PHY   | 0x00000000  |
 * |       |                          | can transmit from media           |             |
 * |       |                          | independent interface (MII) only  |             |
 * |       |                          | when the PHY has determined that  |             |
 * |       |                          | a valid link has been             |             |
 * |       |                          | established.                      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11    | SPEED10M                 | This bit indicates that the PHY   | 0x00000001  |
 * |       |                          | operates at 10 Mb/s in            |             |
 * |       |                          | half-duplex mode.                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_STD_STATUS_REGISTER_EXTENDEDCAPAB                 (0u)
#define BITL_PHY_STD_STATUS_REGISTER_EXTENDEDCAPAB                 (1u)
#define BITM_PHY_STD_STATUS_REGISTER_EXTENDEDCAPAB                 (0x01u)
#define ENUM_PHY_STD_STATUS_REGISTER_EXTENDEDCAPAB_NOT_SUPPORTED   (0x00000000u)
#define ENUM_PHY_STD_STATUS_REGISTER_EXTENDEDCAPAB_SUPPORTED       (0x00000001u)

#define BITP_PHY_STD_STATUS_REGISTER_LOCALJABBER                   (1u)
#define BITL_PHY_STD_STATUS_REGISTER_LOCALJABBER                   (1u)
#define BITM_PHY_STD_STATUS_REGISTER_LOCALJABBER                   (0x02u)
#define ENUM_PHY_STD_STATUS_REGISTER_LOCALJABBER_DETECTED          (0x00000001u)
#define ENUM_PHY_STD_STATUS_REGISTER_LOCALJABBER_NOT_DETECTED      (0x00000000u)

#define BITP_PHY_STD_STATUS_REGISTER_LINKSTATUS                    (2u)
#define BITL_PHY_STD_STATUS_REGISTER_LINKSTATUS                    (1u)
#define BITM_PHY_STD_STATUS_REGISTER_LINKSTATUS                    (0x04u)
#define ENUM_PHY_STD_STATUS_REGISTER_LINKSTATUS_ENUM000            (0x00000000u)
#define ENUM_PHY_STD_STATUS_REGISTER_LINKSTATUS_ENUM001            (0x00000001u)

#define BITP_PHY_STD_STATUS_REGISTER_AUTONEGABILITY                (3u)
#define BITL_PHY_STD_STATUS_REGISTER_AUTONEGABILITY                (1u)
#define BITM_PHY_STD_STATUS_REGISTER_AUTONEGABILITY                (0x08u)
#define ENUM_PHY_STD_STATUS_REGISTER_AUTONEGABILITY_NOT_SUPPORTED  (0x00000000u)
#define ENUM_PHY_STD_STATUS_REGISTER_AUTONEGABILITY_SUPPORTED      (0x00000001u)

#define BITP_PHY_STD_STATUS_REGISTER_REMOTEJABBER                  (4u)
#define BITL_PHY_STD_STATUS_REGISTER_REMOTEJABBER                  (1u)
#define BITM_PHY_STD_STATUS_REGISTER_REMOTEJABBER                  (0x10u)
#define ENUM_PHY_STD_STATUS_REGISTER_REMOTEJABBER_NOT_DETECTED     (0x00000000u)
#define ENUM_PHY_STD_STATUS_REGISTER_REMOTEJABBER_DETECTED         (0x00000001u)

#define BITP_PHY_STD_STATUS_REGISTER_LINKNEGCOMPLETE               (5u)
#define BITL_PHY_STD_STATUS_REGISTER_LINKNEGCOMPLETE               (1u)
#define BITM_PHY_STD_STATUS_REGISTER_LINKNEGCOMPLETE               (0x20u)
#define ENUM_PHY_STD_STATUS_REGISTER_LINKNEGCOMPLETE_NOT_TRIGGERED (0x00000000u)
#define ENUM_PHY_STD_STATUS_REGISTER_LINKNEGCOMPLETE_TRIGGERED     (0x00000001u)

#define BITP_PHY_STD_STATUS_REGISTER_PREAMBSUPPR                   (6u)
#define BITL_PHY_STD_STATUS_REGISTER_PREAMBSUPPR                   (1u)
#define BITM_PHY_STD_STATUS_REGISTER_PREAMBSUPPR                   (0x40u)
#define ENUM_PHY_STD_STATUS_REGISTER_PREAMBSUPPR_NOT_ACTIVE        (0x00000000u)
#define ENUM_PHY_STD_STATUS_REGISTER_PREAMBSUPPR_ACTIVE            (0x00000001u)

#define BITP_PHY_STD_STATUS_REGISTER_UNIDIRABILITY                 (7u)
#define BITL_PHY_STD_STATUS_REGISTER_UNIDIRABILITY                 (1u)
#define BITM_PHY_STD_STATUS_REGISTER_UNIDIRABILITY                 (0x80u)
#define ENUM_PHY_STD_STATUS_REGISTER_UNIDIRABILITY_SUPPORTED       (0x00000001u)
#define ENUM_PHY_STD_STATUS_REGISTER_UNIDIRABILITY_NOT_SUPPORTED   (0x00000000u)

#define BITP_PHY_STD_STATUS_REGISTER_SPEED10M                      (11u)
#define BITL_PHY_STD_STATUS_REGISTER_SPEED10M                      (1u)
#define BITM_PHY_STD_STATUS_REGISTER_SPEED10M                      (0x0800u)
#define ENUM_PHY_STD_STATUS_REGISTER_SPEED10M_NOT_SUPPORTED        (0x00000000u)
#define ENUM_PHY_STD_STATUS_REGISTER_SPEED10M_SUPPORTED            (0x00000001u)

/* Register Name        : PHY_IDENTIFIER_1
 * Register Addr        : 0xFF02u
 * Register Reset Value : 0x00000283u
 * Register MMS         : 0u
 */

#define PHY_STD_PHY_IDENTIFIER_1_ADDR                              (0xFF02u)
#define PHY_STD_PHY_IDENTIFIER_1_RESET_VAL                         (0x00000283u)
#define PHY_STD_PHY_IDENTIFIER_1_MMS                               (0u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | PHYIDOUT_3_18            | IEEE Organizationally Unique      | 0x00000283  |
 * |       |                          | Identifier LSBs                   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_STD_PHY_IDENTIFIER_1_PHYIDOUT_3_18                (0u)
#define BITL_PHY_STD_PHY_IDENTIFIER_1_PHYIDOUT_3_18                (16u)
#define BITM_PHY_STD_PHY_IDENTIFIER_1_PHYIDOUT_3_18                (0x0000FFFFu)

/* Register Name        : PHY_IDENTIFIER_2
 * Register Addr        : 0xFF03u
 * Register Reset Value : 0x0000BE00u
 * Register MMS         : 0u
 */

#define PHY_STD_PHY_IDENTIFIER_2_ADDR                              (0xFF03u)
#define PHY_STD_PHY_IDENTIFIER_2_RESET_VAL                         (0x0000BE00u)
#define PHY_STD_PHY_IDENTIFIER_2_MMS                               (0u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 03-00 | PHYIDCHIPREV             | Manufacturers Revision Number     | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 09-04 | PHYIDICMODEL             | Manufacturers Model Number        | 0x00000020  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-10 | PHYIDOUT_19_24           | IEEE Organizationally Unique      | 0x0000002f  |
 * |       |                          | Ddentifier MSBs                   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_STD_PHY_IDENTIFIER_2_PHYIDCHIPREV                 (0u)
#define BITL_PHY_STD_PHY_IDENTIFIER_2_PHYIDCHIPREV                 (4u)
#define BITM_PHY_STD_PHY_IDENTIFIER_2_PHYIDCHIPREV                 (0x0000000Fu)

#define BITP_PHY_STD_PHY_IDENTIFIER_2_PHYIDICMODEL                 (4u)
#define BITL_PHY_STD_PHY_IDENTIFIER_2_PHYIDICMODEL                 (6u)
#define BITM_PHY_STD_PHY_IDENTIFIER_2_PHYIDICMODEL                 (0x000003F0u)

#define BITP_PHY_STD_PHY_IDENTIFIER_2_PHYIDOUT_19_24               (10u)
#define BITL_PHY_STD_PHY_IDENTIFIER_2_PHYIDOUT_19_24               (6u)
#define BITM_PHY_STD_PHY_IDENTIFIER_2_PHYIDOUT_19_24               (0x0000FC00u)

/* Register Name        : DEV_IN_PACKAGE_1_1
 * Register Addr        : 0x0005u
 * Register Reset Value : 0x0000000Bu
 * Register MMS         : 3u
 */

#define PHY_STD_DEV_IN_PACKAGE_1_1_ADDR                            (0x0005u)
#define PHY_STD_DEV_IN_PACKAGE_1_1_RESET_VAL                       (0x0000000Bu)
#define PHY_STD_DEV_IN_PACKAGE_1_1_MMS                             (3u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | C22DEVINPKG              | Clause 22 registers present in    | 0x00000001  |
 * |       |                          | package                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | PMADEVINPKG              | PMA present in package            | 0x00000001  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 2     | WIS_PRESENT              | WIS Present in Package            | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 3     | PCSDEVINPKG              | PCS present in package            | 0x00000001  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 4     | PHYXS_PRESENT            | PHY XS Present in Package         | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 5     | DTEXS_PRESENT            | DTE XS Present in Package         | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 6     | TC_PRESENT               | TC Present in Package             | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 7     | AN_PRESENT               | Auto Negotiation Present in       | 0x00000000  |
 * |       |                          | Package                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11-08 | SPMA_PRESENT             | Separated PMA Present in Package  | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12    | OFDM_PRESENT             | OFDM Present in Package           | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13    | POWER_UNIT_PRESENT       | Power Unit Present in Package     | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_STD_DEV_IN_PACKAGE_1_1_C22DEVINPKG                (0u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_1_1_C22DEVINPKG                (1u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_1_1_C22DEVINPKG                (0x01u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_1_1_C22DEVINPKG_NOT_PRESENT    (0x00000000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_1_1_C22DEVINPKG_PRESENT        (0x00000001u)

#define BITP_PHY_STD_DEV_IN_PACKAGE_1_1_PMADEVINPKG                (1u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_1_1_PMADEVINPKG                (1u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_1_1_PMADEVINPKG                (0x02u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_1_1_PMADEVINPKG_NOT_PRESENT    (0x00000000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_1_1_PMADEVINPKG_PRESENT        (0x00000001u)

#define BITP_PHY_STD_DEV_IN_PACKAGE_1_1_WIS_PRESENT                (2u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_1_1_WIS_PRESENT                (1u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_1_1_WIS_PRESENT                (0x04u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_1_1_WIS_PRESENT_NOT_PRESENT    (0x00000000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_1_1_WIS_PRESENT_PRESENT        (0x00000001u)

#define BITP_PHY_STD_DEV_IN_PACKAGE_1_1_PCSDEVINPKG                (3u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_1_1_PCSDEVINPKG                (1u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_1_1_PCSDEVINPKG                (0x08u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_1_1_PCSDEVINPKG_NOT_PRESENT    (0x00000000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_1_1_PCSDEVINPKG_PRESENT        (0x00000001u)

#define BITP_PHY_STD_DEV_IN_PACKAGE_1_1_PHYXS_PRESENT              (4u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_1_1_PHYXS_PRESENT              (1u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_1_1_PHYXS_PRESENT              (0x10u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_1_1_PHYXS_PRESENT_PHYXS_NOT_PRESENT (0x00000001u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_1_1_PHYXS_PRESENT_PHYXS_PRESENT (0x00000000u)

#define BITP_PHY_STD_DEV_IN_PACKAGE_1_1_DTEXS_PRESENT              (5u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_1_1_DTEXS_PRESENT              (1u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_1_1_DTEXS_PRESENT              (0x20u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_1_1_DTEXS_PRESENT_NOT_PRESENT  (0x00000000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_1_1_DTEXS_PRESENT_PRESENT      (0x00000001u)

#define BITP_PHY_STD_DEV_IN_PACKAGE_1_1_TC_PRESENT                 (6u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_1_1_TC_PRESENT                 (1u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_1_1_TC_PRESENT                 (0x40u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_1_1_TC_PRESENT_NOT_PRESENT     (0x00000000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_1_1_TC_PRESENT_PRESENT         (0x00000001u)

#define BITP_PHY_STD_DEV_IN_PACKAGE_1_1_AN_PRESENT                 (7u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_1_1_AN_PRESENT                 (1u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_1_1_AN_PRESENT                 (0x80u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_1_1_AN_PRESENT_NOT_PRESENT     (0x00000000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_1_1_AN_PRESENT_PRESENT         (0x00000001u)

#define BITP_PHY_STD_DEV_IN_PACKAGE_1_1_SPMA_PRESENT               (8u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_1_1_SPMA_PRESENT               (4u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_1_1_SPMA_PRESENT               (0x00000F00u)

#define BITP_PHY_STD_DEV_IN_PACKAGE_1_1_OFDM_PRESENT               (12u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_1_1_OFDM_PRESENT               (1u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_1_1_OFDM_PRESENT               (0x1000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_1_1_OFDM_PRESENT_NOT_PRESENT   (0x00000000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_1_1_OFDM_PRESENT_PRESENT       (0x00000001u)

#define BITP_PHY_STD_DEV_IN_PACKAGE_1_1_POWER_UNIT_PRESENT         (13u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_1_1_POWER_UNIT_PRESENT         (1u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_1_1_POWER_UNIT_PRESENT         (0x2000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_1_1_POWER_UNIT_PRESENT_NOT_PRESENT (0x00000000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_1_1_POWER_UNIT_PRESENT_PRESENT (0x00000001u)

/* Register Name        : DEV_IN_PACKAGE_1_2
 * Register Addr        : 0x0006u
 * Register Reset Value : 0x00001000u
 * Register MMS         : 3u
 */

#define PHY_STD_DEV_IN_PACKAGE_1_2_ADDR                            (0x0006u)
#define PHY_STD_DEV_IN_PACKAGE_1_2_RESET_VAL                       (0x00001000u)
#define PHY_STD_DEV_IN_PACKAGE_1_2_MMS                             (3u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 12    | PLCADEVINPKG             | PLCA present in package           | 0x00000001  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13    | CL22E_NOT_PRESENT        | Clause 22 Extension Not Present   | 0x00000000  |
 * |       |                          | in Package                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14    | VSD1_PRESENT             | Vendor Specific Device 1 Present  | 0x00000000  |
 * |       |                          | in Package                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15    | VSD2_PRESENT             | Vendor Specific Device 2 Present  | 0x00000000  |
 * |       |                          | in Package                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_STD_DEV_IN_PACKAGE_1_2_PLCADEVINPKG               (12u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_1_2_PLCADEVINPKG               (1u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_1_2_PLCADEVINPKG               (0x1000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_1_2_PLCADEVINPKG_NOT_PRESENT   (0x00000000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_1_2_PLCADEVINPKG_PRESENT       (0x00000001u)

#define BITP_PHY_STD_DEV_IN_PACKAGE_1_2_CL22E_NOT_PRESENT          (13u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_1_2_CL22E_NOT_PRESENT          (1u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_1_2_CL22E_NOT_PRESENT          (0x2000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_1_2_CL22E_NOT_PRESENT_NOT_PRESENT (0x00000000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_1_2_CL22E_NOT_PRESENT_PRESENT  (0x00000001u)

#define BITP_PHY_STD_DEV_IN_PACKAGE_1_2_VSD1_PRESENT               (14u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_1_2_VSD1_PRESENT               (1u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_1_2_VSD1_PRESENT               (0x4000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_1_2_VSD1_PRESENT_NOT_PRESENT   (0x00000000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_1_2_VSD1_PRESENT_PRESENT       (0x00000001u)

#define BITP_PHY_STD_DEV_IN_PACKAGE_1_2_VSD2_PRESENT               (15u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_1_2_VSD2_PRESENT               (1u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_1_2_VSD2_PRESENT               (0x8000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_1_2_VSD2_PRESENT_NOT_PRESENT   (0x00000000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_1_2_VSD2_PRESENT_PRESENT       (0x00000001u)

/* Register Name        : PMA_PMD_EXTENDED_ABILITY2
 * Register Addr        : 0x000Bu
 * Register Reset Value : 0x00000800u
 * Register MMS         : 3u
 */

#define PHY_STD_PMA_PMD_EXTENDED_ABILITY2_ADDR                     (0x000Bu)
#define PHY_STD_PMA_PMD_EXTENDED_ABILITY2_RESET_VAL                (0x00000800u)
#define PHY_STD_PMA_PMD_EXTENDED_ABILITY2_MMS                      (3u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 11    | PMAEXTAB10T1             | PHY Supports Base-T1 Extended     | 0x00000001  |
 * |       |                          | Abilities                         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_STD_PMA_PMD_EXTENDED_ABILITY2_PMAEXTAB10T1        (11u)
#define BITL_PHY_STD_PMA_PMD_EXTENDED_ABILITY2_PMAEXTAB10T1        (1u)
#define BITM_PHY_STD_PMA_PMD_EXTENDED_ABILITY2_PMAEXTAB10T1        (0x0800u)
#define ENUM_PHY_STD_PMA_PMD_EXTENDED_ABILITY2_PMAEXTAB10T1_NOT_SUPPORTED (0x00000000u)
#define ENUM_PHY_STD_PMA_PMD_EXTENDED_ABILITY2_PMAEXTAB10T1_SUPPORTED (0x00000001u)

/* Register Name        : PMA_PMD_EXTENDED_ABILITY
 * Register Addr        : 0x0032u
 * Register Reset Value : 0x00000008u
 * Register MMS         : 3u
 */

#define PHY_STD_PMA_PMD_EXTENDED_ABILITY_ADDR                      (0x0032u)
#define PHY_STD_PMA_PMD_EXTENDED_ABILITY_RESET_VAL                 (0x00000008u)
#define PHY_STD_PMA_PMD_EXTENDED_ABILITY_MMS                       (3u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 2     | PMAEXTAB10T1L            | PHY Supports 10BASE-T1L           | 0x00000000  |
 * |       |                          | Capability                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 3     | PMAEXTAB10T1S            | PHY Supports 10Base-T1S           | 0x00000001  |
 * |       |                          | Capability                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_STD_PMA_PMD_EXTENDED_ABILITY_PMAEXTAB10T1L        (2u)
#define BITL_PHY_STD_PMA_PMD_EXTENDED_ABILITY_PMAEXTAB10T1L        (1u)
#define BITM_PHY_STD_PMA_PMD_EXTENDED_ABILITY_PMAEXTAB10T1L        (0x04u)
#define ENUM_PHY_STD_PMA_PMD_EXTENDED_ABILITY_PMAEXTAB10T1L_NOT_SUPPORTED (0x00000000u)
#define ENUM_PHY_STD_PMA_PMD_EXTENDED_ABILITY_PMAEXTAB10T1L_SUPPORTED (0x00000001u)

#define BITP_PHY_STD_PMA_PMD_EXTENDED_ABILITY_PMAEXTAB10T1S        (3u)
#define BITL_PHY_STD_PMA_PMD_EXTENDED_ABILITY_PMAEXTAB10T1S        (1u)
#define BITM_PHY_STD_PMA_PMD_EXTENDED_ABILITY_PMAEXTAB10T1S        (0x08u)
#define ENUM_PHY_STD_PMA_PMD_EXTENDED_ABILITY_PMAEXTAB10T1S_NOT_SUPPORTED (0x00000000u)
#define ENUM_PHY_STD_PMA_PMD_EXTENDED_ABILITY_PMAEXTAB10T1S_SUPPORTED (0x00000001u)

/* Register Name        : T1S_PMA_CONTROL
 * Register Addr        : 0x08F9u
 * Register Reset Value : 0x00000400u
 * Register MMS         : 3u
 */

#define PHY_STD_T1S_PMA_CONTROL_ADDR                               (0x08F9u)
#define PHY_STD_T1S_PMA_CONTROL_RESET_VAL                          (0x00000400u)
#define PHY_STD_T1S_PMA_CONTROL_MMS                                (3u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | PMALOOPBACK_1            | PMA loop back mode enable         | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 10    | PMAMULTIDROP             | Multi-drop mode enabled           | 0x00000001  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11    | LOWPWRMODE_1             | Low power mode enable             | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14    | PMATXDISABLE             | PMA transmission disable          | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15    | SRESET_1                 | PCS and PMA PHY Layer Reset       | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_STD_T1S_PMA_CONTROL_PMALOOPBACK_1                 (0u)
#define BITL_PHY_STD_T1S_PMA_CONTROL_PMALOOPBACK_1                 (1u)
#define BITM_PHY_STD_T1S_PMA_CONTROL_PMALOOPBACK_1                 (0x01u)
#define ENUM_PHY_STD_T1S_PMA_CONTROL_PMALOOPBACK_1_DISABLE         (0x00000000u)
#define ENUM_PHY_STD_T1S_PMA_CONTROL_PMALOOPBACK_1_ENABLE          (0x00000001u)

#define BITP_PHY_STD_T1S_PMA_CONTROL_PMAMULTIDROP                  (10u)
#define BITL_PHY_STD_T1S_PMA_CONTROL_PMAMULTIDROP                  (1u)
#define BITM_PHY_STD_T1S_PMA_CONTROL_PMAMULTIDROP                  (0x0400u)
#define ENUM_PHY_STD_T1S_PMA_CONTROL_PMAMULTIDROP_DISABLE          (0x00000000u)
#define ENUM_PHY_STD_T1S_PMA_CONTROL_PMAMULTIDROP_ENABLE           (0x00000001u)

#define BITP_PHY_STD_T1S_PMA_CONTROL_LOWPWRMODE_1                  (11u)
#define BITL_PHY_STD_T1S_PMA_CONTROL_LOWPWRMODE_1                  (1u)
#define BITM_PHY_STD_T1S_PMA_CONTROL_LOWPWRMODE_1                  (0x0800u)
#define ENUM_PHY_STD_T1S_PMA_CONTROL_LOWPWRMODE_1_DISABLE          (0x00000000u)
#define ENUM_PHY_STD_T1S_PMA_CONTROL_LOWPWRMODE_1_ENABLE           (0x00000001u)

#define BITP_PHY_STD_T1S_PMA_CONTROL_PMATXDISABLE                  (14u)
#define BITL_PHY_STD_T1S_PMA_CONTROL_PMATXDISABLE                  (1u)
#define BITM_PHY_STD_T1S_PMA_CONTROL_PMATXDISABLE                  (0x4000u)
#define ENUM_PHY_STD_T1S_PMA_CONTROL_PMATXDISABLE_DISABLE          (0x00000000u)
#define ENUM_PHY_STD_T1S_PMA_CONTROL_PMATXDISABLE_ENABLE           (0x00000001u)

#define BITP_PHY_STD_T1S_PMA_CONTROL_SRESET_1                      (15u)
#define BITL_PHY_STD_T1S_PMA_CONTROL_SRESET_1                      (1u)
#define BITM_PHY_STD_T1S_PMA_CONTROL_SRESET_1                      (0x8000u)
#define ENUM_PHY_STD_T1S_PMA_CONTROL_SRESET_1_INACTIVE             (0x00000000u)
#define ENUM_PHY_STD_T1S_PMA_CONTROL_SRESET_1_TRIGGER              (0x00000001u)

/* Register Name        : T1S_PMA_STATUS
 * Register Addr        : 0x08FAu
 * Register Reset Value : 0x00002E00u
 * Register MMS         : 3u
 */

#define PHY_STD_T1S_PMA_STATUS_ADDR                                (0x08FAu)
#define PHY_STD_T1S_PMA_STATUS_RESET_VAL                           (0x00002E00u)
#define PHY_STD_T1S_PMA_STATUS_MMS                                 (3u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 1     | REMOTEJABBER_1           | Remote jabber event detected      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 9     | PMARXFAULTABILI          | Detection of receive faults       | 0x00000001  |
 * |       |                          | supported                         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 10    | PMAMULTIDROPABI          | Half-duplex multi-drop mode       | 0x00000001  |
 * |       |                          | supported                         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11    | LOWPWRABILITY            | Low power mode interface          | 0x00000001  |
 * |       |                          | supported                         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13    | PMALOOPBACKABIL          | PMA loop back mode supported      | 0x00000001  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_STD_T1S_PMA_STATUS_REMOTEJABBER_1                 (1u)
#define BITL_PHY_STD_T1S_PMA_STATUS_REMOTEJABBER_1                 (1u)
#define BITM_PHY_STD_T1S_PMA_STATUS_REMOTEJABBER_1                 (0x02u)
#define ENUM_PHY_STD_T1S_PMA_STATUS_REMOTEJABBER_1_NOT_DETECTED    (0x00000000u)
#define ENUM_PHY_STD_T1S_PMA_STATUS_REMOTEJABBER_1_DETECTED        (0x00000001u)

#define BITP_PHY_STD_T1S_PMA_STATUS_PMARXFAULTABILI                (9u)
#define BITL_PHY_STD_T1S_PMA_STATUS_PMARXFAULTABILI                (1u)
#define BITM_PHY_STD_T1S_PMA_STATUS_PMARXFAULTABILI                (0x0200u)
#define ENUM_PHY_STD_T1S_PMA_STATUS_PMARXFAULTABILI_NOT_SUPPORTED  (0x00000000u)
#define ENUM_PHY_STD_T1S_PMA_STATUS_PMARXFAULTABILI_SUPPORTED      (0x00000001u)

#define BITP_PHY_STD_T1S_PMA_STATUS_PMAMULTIDROPABI                (10u)
#define BITL_PHY_STD_T1S_PMA_STATUS_PMAMULTIDROPABI                (1u)
#define BITM_PHY_STD_T1S_PMA_STATUS_PMAMULTIDROPABI                (0x0400u)
#define ENUM_PHY_STD_T1S_PMA_STATUS_PMAMULTIDROPABI_NOT_SUPPORTED  (0x00000000u)
#define ENUM_PHY_STD_T1S_PMA_STATUS_PMAMULTIDROPABI_SUPPORTED      (0x00000001u)

#define BITP_PHY_STD_T1S_PMA_STATUS_LOWPWRABILITY                  (11u)
#define BITL_PHY_STD_T1S_PMA_STATUS_LOWPWRABILITY                  (1u)
#define BITM_PHY_STD_T1S_PMA_STATUS_LOWPWRABILITY                  (0x0800u)
#define ENUM_PHY_STD_T1S_PMA_STATUS_LOWPWRABILITY_NOT_SUPPORTED    (0x00000000u)
#define ENUM_PHY_STD_T1S_PMA_STATUS_LOWPWRABILITY_SUPPORTED        (0x00000001u)

#define BITP_PHY_STD_T1S_PMA_STATUS_PMALOOPBACKABIL                (13u)
#define BITL_PHY_STD_T1S_PMA_STATUS_PMALOOPBACKABIL                (1u)
#define BITM_PHY_STD_T1S_PMA_STATUS_PMALOOPBACKABIL                (0x2000u)
#define ENUM_PHY_STD_T1S_PMA_STATUS_PMALOOPBACKABIL_NOT_SUPPORTED  (0x00000000u)
#define ENUM_PHY_STD_T1S_PMA_STATUS_PMALOOPBACKABIL_SUPPORTED      (0x00000001u)

/* Register Name        : T1S_TEST_MODE_CONTROL
 * Register Addr        : 0x08FBu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 3u
 */

#define PHY_STD_T1S_TEST_MODE_CONTROL_ADDR                         (0x08FBu)
#define PHY_STD_T1S_TEST_MODE_CONTROL_RESET_VAL                    (0x00000000u)
#define PHY_STD_T1S_TEST_MODE_CONTROL_MMS                          (3u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-13 | PMAPATTERNSEL            | PMA Tx Pattern Select             | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_STD_T1S_TEST_MODE_CONTROL_PMAPATTERNSEL           (13u)
#define BITL_PHY_STD_T1S_TEST_MODE_CONTROL_PMAPATTERNSEL           (3u)
#define BITM_PHY_STD_T1S_TEST_MODE_CONTROL_PMAPATTERNSEL           (0x0000E000u)
#define ENUM_PHY_STD_T1S_TEST_MODE_CONTROL_PMAPATTERNSEL_ENUM000   (0x00000000u)
#define ENUM_PHY_STD_T1S_TEST_MODE_CONTROL_PMAPATTERNSEL_ENUM001   (0x00000001u)
#define ENUM_PHY_STD_T1S_TEST_MODE_CONTROL_PMAPATTERNSEL_ENUM002   (0x00000002u)
#define ENUM_PHY_STD_T1S_TEST_MODE_CONTROL_PMAPATTERNSEL_ENUM003   (0x00000003u)
#define ENUM_PHY_STD_T1S_TEST_MODE_CONTROL_PMAPATTERNSEL_ENUM004   (0x00000004u)
#define ENUM_PHY_STD_T1S_TEST_MODE_CONTROL_PMAPATTERNSEL_ENUM005   (0x00000005u)
#define ENUM_PHY_STD_T1S_TEST_MODE_CONTROL_PMAPATTERNSEL_ENUM006   (0x00000006u)
#define ENUM_PHY_STD_T1S_TEST_MODE_CONTROL_PMAPATTERNSEL_ENUM007   (0x00000007u)

/* Register Name        : DEV_IN_PACKAGE_3_1
 * Register Addr        : 0x0005u
 * Register Reset Value : 0x0000000Bu
 * Register MMS         : 2u
 */

#define PHY_STD_DEV_IN_PACKAGE_3_1_ADDR                            (0x0005u)
#define PHY_STD_DEV_IN_PACKAGE_3_1_RESET_VAL                       (0x0000000Bu)
#define PHY_STD_DEV_IN_PACKAGE_3_1_MMS                             (2u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | C22DEVINPKG_1            | Clause 22 registers present in    | 0x00000001  |
 * |       |                          | package                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | PMADEVINPKG_1            | PMA present in package            | 0x00000001  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 2     | WIS_PRESENT_1            | WIS Present in Package            | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 3     | PCSDEVINPKG_1            | PCS present in package            | 0x00000001  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 4     | PHYXS_PRESENT_1          | PHY XS Present in Package         | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 5     | DTEXS_PRESENT_1          | DTE XS Present in Package         | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 6     | TC_PRESENT_1             | TC Present in Package             | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 7     | AN_PRESENT_1             | Auto Negotiation Present in       | 0x00000000  |
 * |       |                          | Package                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11-08 | SPMA_PRESENT_1           | Separated PMA Present in Package  | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12    | OFDM_PRESENT_1           | OFDM Present in Package           | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13    | POWER_UNIT_PRESENT_1     | Power Unit Present in Package     | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_STD_DEV_IN_PACKAGE_3_1_C22DEVINPKG_1              (0u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_3_1_C22DEVINPKG_1              (1u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_3_1_C22DEVINPKG_1              (0x01u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_3_1_C22DEVINPKG_1_NOT_PRESENT  (0x00000000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_3_1_C22DEVINPKG_1_PRESENT      (0x00000001u)

#define BITP_PHY_STD_DEV_IN_PACKAGE_3_1_PMADEVINPKG_1              (1u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_3_1_PMADEVINPKG_1              (1u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_3_1_PMADEVINPKG_1              (0x02u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_3_1_PMADEVINPKG_1_NOT_PRESENT  (0x00000000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_3_1_PMADEVINPKG_1_PRESENT      (0x00000001u)

#define BITP_PHY_STD_DEV_IN_PACKAGE_3_1_WIS_PRESENT_1              (2u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_3_1_WIS_PRESENT_1              (1u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_3_1_WIS_PRESENT_1              (0x04u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_3_1_WIS_PRESENT_1_NOT_PRESENT  (0x00000000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_3_1_WIS_PRESENT_1_PRESENT      (0x00000001u)

#define BITP_PHY_STD_DEV_IN_PACKAGE_3_1_PCSDEVINPKG_1              (3u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_3_1_PCSDEVINPKG_1              (1u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_3_1_PCSDEVINPKG_1              (0x08u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_3_1_PCSDEVINPKG_1_NOT_PRESENT  (0x00000000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_3_1_PCSDEVINPKG_1_PRESENT      (0x00000001u)

#define BITP_PHY_STD_DEV_IN_PACKAGE_3_1_PHYXS_PRESENT_1            (4u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_3_1_PHYXS_PRESENT_1            (1u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_3_1_PHYXS_PRESENT_1            (0x10u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_3_1_PHYXS_PRESENT_1_NOT_PRESENT (0x00000000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_3_1_PHYXS_PRESENT_1_PRESENT    (0x00000001u)

#define BITP_PHY_STD_DEV_IN_PACKAGE_3_1_DTEXS_PRESENT_1            (5u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_3_1_DTEXS_PRESENT_1            (1u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_3_1_DTEXS_PRESENT_1            (0x20u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_3_1_DTEXS_PRESENT_1_NOT_PRESENT (0x00000000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_3_1_DTEXS_PRESENT_1_PRESENT    (0x00000001u)

#define BITP_PHY_STD_DEV_IN_PACKAGE_3_1_TC_PRESENT_1               (6u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_3_1_TC_PRESENT_1               (1u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_3_1_TC_PRESENT_1               (0x40u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_3_1_TC_PRESENT_1_NOT_PRESENT   (0x00000000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_3_1_TC_PRESENT_1_PRESENT       (0x00000001u)

#define BITP_PHY_STD_DEV_IN_PACKAGE_3_1_AN_PRESENT_1               (7u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_3_1_AN_PRESENT_1               (1u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_3_1_AN_PRESENT_1               (0x80u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_3_1_AN_PRESENT_1_NOT_PRESENT   (0x00000000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_3_1_AN_PRESENT_1_PRESENT       (0x00000001u)

#define BITP_PHY_STD_DEV_IN_PACKAGE_3_1_SPMA_PRESENT_1             (8u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_3_1_SPMA_PRESENT_1             (4u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_3_1_SPMA_PRESENT_1             (0x00000F00u)

#define BITP_PHY_STD_DEV_IN_PACKAGE_3_1_OFDM_PRESENT_1             (12u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_3_1_OFDM_PRESENT_1             (1u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_3_1_OFDM_PRESENT_1             (0x1000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_3_1_OFDM_PRESENT_1_NOT_PRESENT (0x00000000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_3_1_OFDM_PRESENT_1_PRESENT     (0x00000001u)

#define BITP_PHY_STD_DEV_IN_PACKAGE_3_1_POWER_UNIT_PRESENT_1       (13u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_3_1_POWER_UNIT_PRESENT_1       (1u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_3_1_POWER_UNIT_PRESENT_1       (0x2000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_3_1_POWER_UNIT_PRESENT_1_NOT_PRESENT (0x00000000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_3_1_POWER_UNIT_PRESENT_1_PRESENT (0x00000001u)

/* Register Name        : DEV_IN_PACKAGE_3_2
 * Register Addr        : 0x0006u
 * Register Reset Value : 0x00001000u
 * Register MMS         : 2u
 */

#define PHY_STD_DEV_IN_PACKAGE_3_2_ADDR                            (0x0006u)
#define PHY_STD_DEV_IN_PACKAGE_3_2_RESET_VAL                       (0x00001000u)
#define PHY_STD_DEV_IN_PACKAGE_3_2_MMS                             (2u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 12    | PLCADEVINPKG_1           | PLCA present in package           | 0x00000001  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13    | CL22E_NOT_PRESENT_1      | Clause 22 Extension Not Present   | 0x00000000  |
 * |       |                          | in Package                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14    | VSD1_PRESENT_1           | Vendor Specific Device 1 Present  | 0x00000000  |
 * |       |                          | in Package                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15    | VSD2_PRESENT_1           | Vendor Specific Device 2 Present  | 0x00000000  |
 * |       |                          | in Package                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_STD_DEV_IN_PACKAGE_3_2_PLCADEVINPKG_1             (12u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_3_2_PLCADEVINPKG_1             (1u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_3_2_PLCADEVINPKG_1             (0x1000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_3_2_PLCADEVINPKG_1_NOT_PRESENT (0x00000000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_3_2_PLCADEVINPKG_1_PRESENT     (0x00000001u)

#define BITP_PHY_STD_DEV_IN_PACKAGE_3_2_CL22E_NOT_PRESENT_1        (13u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_3_2_CL22E_NOT_PRESENT_1        (1u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_3_2_CL22E_NOT_PRESENT_1        (0x2000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_3_2_CL22E_NOT_PRESENT_1_NOT_PRESENT (0x00000000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_3_2_CL22E_NOT_PRESENT_1_PRESENT (0x00000001u)

#define BITP_PHY_STD_DEV_IN_PACKAGE_3_2_VSD1_PRESENT_1             (14u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_3_2_VSD1_PRESENT_1             (1u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_3_2_VSD1_PRESENT_1             (0x4000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_3_2_VSD1_PRESENT_1_NOT_PRESENT (0x00000000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_3_2_VSD1_PRESENT_1_PRESENT     (0x00000001u)

#define BITP_PHY_STD_DEV_IN_PACKAGE_3_2_VSD2_PRESENT_1             (15u)
#define BITL_PHY_STD_DEV_IN_PACKAGE_3_2_VSD2_PRESENT_1             (1u)
#define BITM_PHY_STD_DEV_IN_PACKAGE_3_2_VSD2_PRESENT_1             (0x8000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_3_2_VSD2_PRESENT_1_NOT_PRESENT (0x00000000u)
#define ENUM_PHY_STD_DEV_IN_PACKAGE_3_2_VSD2_PRESENT_1_PRESENT     (0x00000001u)

/* Register Name        : PCS_CONTROL
 * Register Addr        : 0x08F3u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 2u
 */

#define PHY_STD_PCS_CONTROL_ADDR                                   (0x08F3u)
#define PHY_STD_PCS_CONTROL_RESET_VAL                              (0x00000000u)
#define PHY_STD_PCS_CONTROL_MMS                                    (2u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 14    | PCSLOOPBACK              | PCS loop back mode enable         | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15    | PCSRST                   | PCS and PMA layer reset           | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_STD_PCS_CONTROL_PCSLOOPBACK                       (14u)
#define BITL_PHY_STD_PCS_CONTROL_PCSLOOPBACK                       (1u)
#define BITM_PHY_STD_PCS_CONTROL_PCSLOOPBACK                       (0x4000u)
#define ENUM_PHY_STD_PCS_CONTROL_PCSLOOPBACK_DISABLE               (0x00000000u)
#define ENUM_PHY_STD_PCS_CONTROL_PCSLOOPBACK_ENABLE                (0x00000001u)

#define BITP_PHY_STD_PCS_CONTROL_PCSRST                            (15u)
#define BITL_PHY_STD_PCS_CONTROL_PCSRST                            (1u)
#define BITM_PHY_STD_PCS_CONTROL_PCSRST                            (0x8000u)
#define ENUM_PHY_STD_PCS_CONTROL_PCSRST_INACTIVE                   (0x00000000u)
#define ENUM_PHY_STD_PCS_CONTROL_PCSRST_TRIGGER                    (0x00000001u)

/* Register Name        : PCS_STATUS
 * Register Addr        : 0x08F4u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 2u
 */

#define PHY_STD_PCS_STATUS_ADDR                                    (0x08F4u)
#define PHY_STD_PCS_STATUS_RESET_VAL                               (0x00000000u)
#define PHY_STD_PCS_STATUS_MMS                                     (2u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 7     | JABDETECTED              | Remote or local jabber detected   | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_STD_PCS_STATUS_JABDETECTED                        (7u)
#define BITL_PHY_STD_PCS_STATUS_JABDETECTED                        (1u)
#define BITM_PHY_STD_PCS_STATUS_JABDETECTED                        (0x80u)
#define ENUM_PHY_STD_PCS_STATUS_JABDETECTED_DETECTED               (0x00000001u)
#define ENUM_PHY_STD_PCS_STATUS_JABDETECTED_NOT_DETECTED           (0x00000000u)

/* Register Name        : PCS_DIAGNOSTIC
 * Register Addr        : 0x08F5u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 2u
 */

#define PHY_STD_PCS_DIAGNOSTIC_ADDR                                (0x08F5u)
#define PHY_STD_PCS_DIAGNOSTIC_RESET_VAL                           (0x00000000u)
#define PHY_STD_PCS_DIAGNOSTIC_MMS                                 (2u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | REMOTEJABCNT             | Remote jabber error counter       | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_STD_PCS_DIAGNOSTIC_REMOTEJABCNT                   (0u)
#define BITL_PHY_STD_PCS_DIAGNOSTIC_REMOTEJABCNT                   (16u)
#define BITM_PHY_STD_PCS_DIAGNOSTIC_REMOTEJABCNT                   (0x0000FFFFu)

/* Register Name        : PCS_DIAGNOSTIC_2
 * Register Addr        : 0x08F6u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 2u
 */

#define PHY_STD_PCS_DIAGNOSTIC_2_ADDR                              (0x08F6u)
#define PHY_STD_PCS_DIAGNOSTIC_2_RESET_VAL                         (0x00000000u)
#define PHY_STD_PCS_DIAGNOSTIC_2_MMS                               (2u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | CORRUPTEDTXCNT           | Physical collision detected       | 0x00000000  |
 * |       |                          | counter                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_STD_PCS_DIAGNOSTIC_2_CORRUPTEDTXCNT               (0u)
#define BITL_PHY_STD_PCS_DIAGNOSTIC_2_CORRUPTEDTXCNT               (16u)
#define BITM_PHY_STD_PCS_DIAGNOSTIC_2_CORRUPTEDTXCNT               (0x0000FFFFu)

#endif /* ADI_PHY_STD_REG_H */
