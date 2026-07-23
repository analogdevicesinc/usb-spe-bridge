/**
 * Copyright © 2026 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/******************************************************************************
*   @file   adi_mii_reg.h
*   @brief  Definitions for IEEE 802.3, Section 2 MII compatible PHY
*           transceivers.
******************************************************************************/

#ifndef ADI_MII_REG_H
#define ADI_MII_REG_H

/* Register Name        : BMCR
 * Register Addr        : 0x00
 * Description          : Basic Mode Control Register
 */

#define MII_BMCR_ADDR                                      (0x00u)

/* Bit field description table:
 * +=======+==========================+===================================+
 * | Bits  | Bit Field                | Description                       |
 * +=======+==========================+===================================+
 * | 15    | RESET                    | PHY reset                         |
 * +-------+--------------------------+-----------------------------------+
 * | 14    | LOOPBACK                 | Enable loopback mode              |
 * +-------+--------------------------+-----------------------------------+
 * | 13    | SPEED_LSB                | Speed select LSB (see bit 6)      |
 * +-------+--------------------------+-----------------------------------+
 * | 12    | AUTONEG_ENABLE           | Auto-Negotiation enable           |
 * +-------+--------------------------+-----------------------------------+
 * | 11    | POWER_DOWN               | Power down mode                   |
 * +-------+--------------------------+-----------------------------------+
 * | 10    | ISOLATE                  | Isolate PHY from MII              |
 * +-------+--------------------------+-----------------------------------+
 * | 9     | AUTONEG_RESTART          | Restart auto-negotiation          |
 * +-------+--------------------------+-----------------------------------+
 * | 8     | DUPLEX_MODE              | Full duplex mode                  |
 * +-------+--------------------------+-----------------------------------+
 * | 6     | SPEED_MSB                | Speed select MSB (see bit 13)     |
 * +-------+--------------------------+-----------------------------------+
 */

#define BITP_MII_BMCR_RESET                                (15u)
#define BITL_MII_BMCR_RESET                                (1u)
#define BITM_MII_BMCR_RESET                                (0x8000u)

#define BITP_MII_BMCR_LOOPBACK                             (14u)
#define BITL_MII_BMCR_LOOPBACK                             (1u)
#define BITM_MII_BMCR_LOOPBACK                             (0x4000u)

#define BITP_MII_BMCR_SPEED_LSB                            (13u)
#define BITL_MII_BMCR_SPEED_LSB                            (1u)
#define BITM_MII_BMCR_SPEED_LSB                            (0x2000u)

#define BITP_MII_BMCR_AUTONEG_ENABLE                       (12u)
#define BITL_MII_BMCR_AUTONEG_ENABLE                       (1u)
#define BITM_MII_BMCR_AUTONEG_ENABLE                       (0x1000u)

#define BITP_MII_BMCR_POWER_DOWN                           (11u)
#define BITL_MII_BMCR_POWER_DOWN                           (1u)
#define BITM_MII_BMCR_POWER_DOWN                           (0x0800u)

#define BITP_MII_BMCR_ISOLATE                              (10u)
#define BITL_MII_BMCR_ISOLATE                              (1u)
#define BITM_MII_BMCR_ISOLATE                              (0x0400u)

#define BITP_MII_BMCR_AUTONEG_RESTART                      (9u)
#define BITL_MII_BMCR_AUTONEG_RESTART                      (1u)
#define BITM_MII_BMCR_AUTONEG_RESTART                      (0x0200u)

#define BITP_MII_BMCR_DUPLEX_MODE                          (8u)
#define BITL_MII_BMCR_DUPLEX_MODE                          (1u)
#define BITM_MII_BMCR_DUPLEX_MODE                          (0x0100u)

#define BITP_MII_BMCR_SPEED_MSB                            (6u)
#define BITL_MII_BMCR_SPEED_MSB                            (1u)
#define BITM_MII_BMCR_SPEED_MSB                            (0x40u)

/* Speed field: bits 6 and 13 combined */
#define BITM_MII_BMCR_SPEED_MASK                           ((0x40u) | (0x2000u))
#define ENUM_MII_BMCR_SPEED_10                             (0x0000u)
#define ENUM_MII_BMCR_SPEED_100                            (0x2000u)
#define ENUM_MII_BMCR_SPEED_1000                           (0x0040u)

/* -------------------------------------------------------------------------- */
/* Register Name        : BMSR
 * Register Addr        : 0x01
 * Description          : Basic Mode Status Register
 */

#define MII_BMSR_ADDR                                      (0x01u)

/* Bit field description table:
 * +=======+==========================+===================================+
 * | Bits  | Bit Field                | Description                       |
 * +=======+==========================+===================================+
 * | 15    | 100BASE_T4               | 100BASE-T4 capable                |
 * +-------+--------------------------+-----------------------------------+
 * | 14    | 100BASE_X_FULL           | 100BASE-X full duplex capable     |
 * +-------+--------------------------+-----------------------------------+
 * | 13    | 100BASE_X_HALF           | 100BASE-X half duplex capable     |
 * +-------+--------------------------+-----------------------------------+
 * | 12    | 10_FULL                  | 10 Mb/s full duplex capable       |
 * +-------+--------------------------+-----------------------------------+
 * | 11    | 10_HALF                  | 10 Mb/s half duplex capable       |
 * +-------+--------------------------+-----------------------------------+
 * | 10    | 100BASE_T2_FULL          | 100BASE-T2 full duplex capable    |
 * +-------+--------------------------+-----------------------------------+
 * | 9     | 100BASE_T2_HALF          | 100BASE-T2 half duplex capable    |
 * +-------+--------------------------+-----------------------------------+
 * | 8     | EXTEND_STATUS            | Extended status in register 15    |
 * +-------+--------------------------+-----------------------------------+
 * | 6     | MF_PREAMB_SUPPR          | Preamble suppression capable      |
 * +-------+--------------------------+-----------------------------------+
 * | 5     | AUTONEG_COMPLETE         | Auto-negotiation complete         |
 * +-------+--------------------------+-----------------------------------+
 * | 4     | REMOTE_FAULT             | Remote fault detected             |
 * +-------+--------------------------+-----------------------------------+
 * | 3     | AUTONEG_ABILITY          | Auto-negotiation ability          |
 * +-------+--------------------------+-----------------------------------+
 * | 2     | LINK_STATUS              | Link is up                        |
 * +-------+--------------------------+-----------------------------------+
 * | 1     | JABBER_DETECT            | Jabber condition detected         |
 * +-------+--------------------------+-----------------------------------+
 * | 0     | EXTEND_CAPAB             | Extended register capabilities    |
 * +-------+--------------------------+-----------------------------------+
 */

#define BITP_MII_BMSR_100BASE_T4                           (15u)
#define BITL_MII_BMSR_100BASE_T4                           (1u)
#define BITM_MII_BMSR_100BASE_T4                           (0x8000u)

#define BITP_MII_BMSR_100BASE_X_FULL                       (14u)
#define BITL_MII_BMSR_100BASE_X_FULL                       (1u)
#define BITM_MII_BMSR_100BASE_X_FULL                       (0x4000u)

#define BITP_MII_BMSR_100BASE_X_HALF                       (13u)
#define BITL_MII_BMSR_100BASE_X_HALF                       (1u)
#define BITM_MII_BMSR_100BASE_X_HALF                       (0x2000u)

#define BITP_MII_BMSR_10_FULL                              (12u)
#define BITL_MII_BMSR_10_FULL                              (1u)
#define BITM_MII_BMSR_10_FULL                              (0x1000u)

#define BITP_MII_BMSR_10_HALF                              (11u)
#define BITL_MII_BMSR_10_HALF                              (1u)
#define BITM_MII_BMSR_10_HALF                              (0x0800u)

#define BITP_MII_BMSR_100BASE_T2_FULL                      (10u)
#define BITL_MII_BMSR_100BASE_T2_FULL                      (1u)
#define BITM_MII_BMSR_100BASE_T2_FULL                      (0x0400u)

#define BITP_MII_BMSR_100BASE_T2_HALF                      (9u)
#define BITL_MII_BMSR_100BASE_T2_HALF                      (1u)
#define BITM_MII_BMSR_100BASE_T2_HALF                      (0x0200u)

#define BITP_MII_BMSR_EXTEND_STATUS                        (8u)
#define BITL_MII_BMSR_EXTEND_STATUS                        (1u)
#define BITM_MII_BMSR_EXTEND_STATUS                        (0x0100u)

#define BITP_MII_BMSR_MF_PREAMB_SUPPR                      (6u)
#define BITL_MII_BMSR_MF_PREAMB_SUPPR                      (1u)
#define BITM_MII_BMSR_MF_PREAMB_SUPPR                      (0x40u)

#define BITP_MII_BMSR_AUTONEG_COMPLETE                     (5u)
#define BITL_MII_BMSR_AUTONEG_COMPLETE                     (1u)
#define BITM_MII_BMSR_AUTONEG_COMPLETE                     (0x20u)

#define BITP_MII_BMSR_REMOTE_FAULT                         (4u)
#define BITL_MII_BMSR_REMOTE_FAULT                         (1u)
#define BITM_MII_BMSR_REMOTE_FAULT                         (0x10u)

#define BITP_MII_BMSR_AUTONEG_ABILITY                      (3u)
#define BITL_MII_BMSR_AUTONEG_ABILITY                      (1u)
#define BITM_MII_BMSR_AUTONEG_ABILITY                      (0x08u)

#define BITP_MII_BMSR_LINK_STATUS                          (2u)
#define BITL_MII_BMSR_LINK_STATUS                          (1u)
#define BITM_MII_BMSR_LINK_STATUS                          (0x04u)

#define BITP_MII_BMSR_JABBER_DETECT                        (1u)
#define BITL_MII_BMSR_JABBER_DETECT                        (1u)
#define BITM_MII_BMSR_JABBER_DETECT                        (0x02u)

#define BITP_MII_BMSR_EXTEND_CAPAB                         (0u)
#define BITL_MII_BMSR_EXTEND_CAPAB                         (1u)
#define BITM_MII_BMSR_EXTEND_CAPAB                         (0x01u)

/* -------------------------------------------------------------------------- */
/* Register Name        : PHYID1R
 * Register Addr        : 0x02
 * Description          : PHY Identifier 1 Register
 */

#define MII_PHYID1R_ADDR                                   (0x02u)

/* -------------------------------------------------------------------------- */
/* Register Name        : PHYID2R
 * Register Addr        : 0x03
 * Description          : PHY Identifier 2 Register
 */

#define MII_PHYID2R_ADDR                                   (0x03u)

/* -------------------------------------------------------------------------- */
/* Register Name        : ANAR
 * Register Addr        : 0x04
 * Description          : Auto-Negotiation Advertisement Register
 */

#define MII_ANAR_ADDR                                      (0x04u)

/* Bit field description table:
 * +=======+==========================+===================================+
 * | Bits  | Bit Field                | Description                       |
 * +=======+==========================+===================================+
 * | 15    | NEXT_PAGE                | Next page indication              |
 * +-------+--------------------------+-----------------------------------+
 * | 14    | LPACK                    | Link partner acknowledge          |
 * +-------+--------------------------+-----------------------------------+
 * | 13    | REMOTE_FAULT             | Remote fault                      |
 * +-------+--------------------------+-----------------------------------+
 * | 11    | ASYM_PAUSE               | Asymmetric pause                  |
 * +-------+--------------------------+-----------------------------------+
 * | 10    | PAUSE                    | Pause capability                  |
 * +-------+--------------------------+-----------------------------------+
 * | 9     | 100BASE_T4               | 100BASE-T4 support                |
 * +-------+--------------------------+-----------------------------------+
 * | 8     | 100_FULL                 | 100BASE-X full duplex             |
 * +-------+--------------------------+-----------------------------------+
 * | 7     | 100_HALF                 | 100BASE-X half duplex             |
 * +-------+--------------------------+-----------------------------------+
 * | 6     | 10_FULL                  | 10BASE-T full duplex              |
 * +-------+--------------------------+-----------------------------------+
 * | 5     | 10_HALF                  | 10BASE-T half duplex              |
 * +-------+--------------------------+-----------------------------------+
 * | 04-00 | SEL                      | Selector field                    |
 * +-------+--------------------------+-----------------------------------+
 */

#define BITP_MII_ANAR_NEXT_PAGE                            (15u)
#define BITL_MII_ANAR_NEXT_PAGE                            (1u)
#define BITM_MII_ANAR_NEXT_PAGE                            (0x8000u)

#define BITP_MII_ANAR_LPACK                                (14u)
#define BITL_MII_ANAR_LPACK                                (1u)
#define BITM_MII_ANAR_LPACK                                (0x4000u)

#define BITP_MII_ANAR_REMOTE_FAULT                         (13u)
#define BITL_MII_ANAR_REMOTE_FAULT                         (1u)
#define BITM_MII_ANAR_REMOTE_FAULT                         (0x2000u)

#define BITP_MII_ANAR_ASYM_PAUSE                           (11u)
#define BITL_MII_ANAR_ASYM_PAUSE                           (1u)
#define BITM_MII_ANAR_ASYM_PAUSE                           (0x0800u)

#define BITP_MII_ANAR_PAUSE                                (10u)
#define BITL_MII_ANAR_PAUSE                                (1u)
#define BITM_MII_ANAR_PAUSE                                (0x0400u)

#define BITP_MII_ANAR_100BASE_T4                           (9u)
#define BITL_MII_ANAR_100BASE_T4                           (1u)
#define BITM_MII_ANAR_100BASE_T4                           (0x0200u)

#define BITP_MII_ANAR_100_FULL                             (8u)
#define BITL_MII_ANAR_100_FULL                             (1u)
#define BITM_MII_ANAR_100_FULL                             (0x0100u)

#define BITP_MII_ANAR_100_HALF                             (7u)
#define BITL_MII_ANAR_100_HALF                             (1u)
#define BITM_MII_ANAR_100_HALF                             (0x80u)

#define BITP_MII_ANAR_10_FULL                              (6u)
#define BITL_MII_ANAR_10_FULL                              (1u)
#define BITM_MII_ANAR_10_FULL                              (0x40u)

#define BITP_MII_ANAR_10_HALF                              (5u)
#define BITL_MII_ANAR_10_HALF                              (1u)
#define BITM_MII_ANAR_10_HALF                              (0x20u)

#define BITP_MII_ANAR_SEL                                  (0u)
#define BITL_MII_ANAR_SEL                                  (5u)
#define BITM_MII_ANAR_SEL                                  (0x1Fu)
#define ENUM_MII_ANAR_SEL_IEEE_802_3                       (0x0001u)

/* Advertise all speeds helper */
#define MII_ADVERTISE_ALL                                  (BITM_MII_ANAR_10_HALF | \
                                                            BITM_MII_ANAR_10_FULL | \
                                                            BITM_MII_ANAR_100_HALF | \
                                                            BITM_MII_ANAR_100_FULL | \
                                                            ENUM_MII_ANAR_SEL_IEEE_802_3)

/* -------------------------------------------------------------------------- */
/* Register Name        : ANLPAR
 * Register Addr        : 0x05
 * Description          : Auto-Negotiation Link Partner Ability Register
 */

#define MII_ANLPAR_ADDR                                    (0x05u)

/* Uses same bit definitions as ANAR */

/* -------------------------------------------------------------------------- */
/* Register Name        : ANER
 * Register Addr        : 0x06
 * Description          : Auto-Negotiation Expansion Register
 */

#define MII_ANER_ADDR                                      (0x06u)

/* -------------------------------------------------------------------------- */
/* Register Name        : ANNPTR
 * Register Addr        : 0x07
 * Description          : Auto-Negotiation Next Page Transmit Register
 */

#define MII_ANNPTR_ADDR                                    (0x07u)

/* -------------------------------------------------------------------------- */
/* Register Name        : ANLPRNPR
 * Register Addr        : 0x08
 * Description          : Auto-Negotiation Link Partner Received Next Page Reg
 */

#define MII_ANLPRNPR_ADDR                                  (0x08u)

/* -------------------------------------------------------------------------- */
/* Register Name        : 1KTCR
 * Register Addr        : 0x09
 * Description          : 1000BASE-T Control Register
 */

#define MII_1KTCR_ADDR                                     (0x09u)

/* Bit field description table:
 * +=======+==========================+===================================+
 * | Bits  | Bit Field                | Description                       |
 * +=======+==========================+===================================+
 * | 9     | 1000_FULL                | Advertise 1000BASE-T full duplex  |
 * +-------+--------------------------+-----------------------------------+
 * | 8     | 1000_HALF                | Advertise 1000BASE-T half duplex  |
 * +-------+--------------------------+-----------------------------------+
 */

#define BITP_MII_1KTCR_1000_FULL                           (9u)
#define BITL_MII_1KTCR_1000_FULL                           (1u)
#define BITM_MII_1KTCR_1000_FULL                           (0x0200u)

#define BITP_MII_1KTCR_1000_HALF                           (8u)
#define BITL_MII_1KTCR_1000_HALF                           (1u)
#define BITM_MII_1KTCR_1000_HALF                           (0x0100u)

/* -------------------------------------------------------------------------- */
/* Register Name        : 1KSTSR
 * Register Addr        : 0x0A
 * Description          : 1000BASE-T Status Register
 */

#define MII_1KSTSR_ADDR                                    (0x0Au)

/* -------------------------------------------------------------------------- */
/* Register Name        : MMD_ACR
 * Register Addr        : 0x0D
 * Description          : MMD Access Control Register
 */

#define MII_MMD_ACR_ADDR                                   (0x0Du)

/* Bit field description table:
 * +=======+==========================+===================================+
 * | Bits  | Bit Field                | Description                       |
 * +=======+==========================+===================================+
 * | 15-14 | FUNC                     | Function (address/data mode)      |
 * +-------+--------------------------+-----------------------------------+
 * | 04-00 | DEVAD                    | Device address                    |
 * +-------+--------------------------+-----------------------------------+
 */

#define BITP_MII_MMD_ACR_FUNC                              (14u)
#define BITL_MII_MMD_ACR_FUNC                              (2u)
#define BITM_MII_MMD_ACR_FUNC                              (0xC000u)
#define ENUM_MII_MMD_ACR_FUNC_ADDR                         (0x0000u)
#define ENUM_MII_MMD_ACR_FUNC_DATA_NO_INC                  (0x4000u)
#define ENUM_MII_MMD_ACR_FUNC_DATA_RW_INC                  (0x8000u)
#define ENUM_MII_MMD_ACR_FUNC_DATA_W_INC                   (0xC000u)

#define BITP_MII_MMD_ACR_DEVAD                             (0u)
#define BITL_MII_MMD_ACR_DEVAD                             (5u)
#define BITM_MII_MMD_ACR_DEVAD                             (0x1Fu)

/* -------------------------------------------------------------------------- */
/* Register Name        : MMD_AADR
 * Register Addr        : 0x0E
 * Description          : MMD Access Address Data Register
 */

#define MII_MMD_AADR_ADDR                                  (0x0Eu)

/* -------------------------------------------------------------------------- */
/* Register Name        : ESTAT
 * Register Addr        : 0x0F
 * Description          : Extended Status Register
 */

#define MII_ESTAT_ADDR                                     (0x0Fu)

/* Bit field description table:
 * +=======+==========================+===================================+
 * | Bits  | Bit Field                | Description                       |
 * +=======+==========================+===================================+
 * | 15    | 1000BASE_X_FULL          | 1000BASE-X full duplex capable    |
 * +-------+--------------------------+-----------------------------------+
 * | 14    | 1000BASE_X_HALF          | 1000BASE-X half duplex capable    |
 * +-------+--------------------------+-----------------------------------+
 * | 13    | 1000BASE_T_FULL          | 1000BASE-T full duplex capable    |
 * +-------+--------------------------+-----------------------------------+
 * | 12    | 1000BASE_T_HALF          | 1000BASE-T half duplex capable    |
 * +-------+--------------------------+-----------------------------------+
 */

#define BITP_MII_ESTAT_1000BASE_X_FULL                     (15u)
#define BITL_MII_ESTAT_1000BASE_X_FULL                     (1u)
#define BITM_MII_ESTAT_1000BASE_X_FULL                     (0x8000u)

#define BITP_MII_ESTAT_1000BASE_X_HALF                     (14u)
#define BITL_MII_ESTAT_1000BASE_X_HALF                     (1u)
#define BITM_MII_ESTAT_1000BASE_X_HALF                     (0x4000u)

#define BITP_MII_ESTAT_1000BASE_T_FULL                     (13u)
#define BITL_MII_ESTAT_1000BASE_T_FULL                     (1u)
#define BITM_MII_ESTAT_1000BASE_T_FULL                     (0x2000u)

#define BITP_MII_ESTAT_1000BASE_T_HALF                     (12u)
#define BITL_MII_ESTAT_1000BASE_T_HALF                     (1u)
#define BITM_MII_ESTAT_1000BASE_T_HALF                     (0x1000u)

#endif /* ADI_MII_REG_H */
