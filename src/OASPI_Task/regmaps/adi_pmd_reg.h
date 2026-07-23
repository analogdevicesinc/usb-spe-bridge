/**
 * Copyright © 2026 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/********************************************************
 *   @file   adi_pmd_reg.h
 *   @brief  This header file provides register descriptions for the
 *           PMD (Physical Medium Dependent).
 *******************************************************/

#ifndef ADI_PMD_REG_H
#define ADI_PMD_REG_H

#define PMD_NUM_REGS                       (5u)

/* Register Name        : MIIMCTL
 * Register Addr        : 0xD200u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define PMD_MIIMCTL_ADDR                   (0xD200u)
#define PMD_MIIMCTL_RESET_VAL              (0x00000000u)
#define PMD_MIIMCTL_MMS                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 14    | LOOPBACK                 | Control to enable a digital       | 0x00000000  |
 * |       |                          | loopback while not transmitting   |             |
 * |       |                          | on the cable                      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15    | RESET                    | Control to reset the block and    | 0x00000000  |
 * |       |                          | its associated register map       |             |
 * |       |                          | controls. The bit is only         |             |
 * |       |                          | effective when PMD is not (or no  |             |
 * |       |                          | longer) in CONFIGURATION mode.    |             |
 * |       |                          | It clears automatically when the  |             |
 * |       |                          | reset is applied internally       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PMD_MIIMCTL_LOOPBACK          (14u)
#define BITL_PMD_MIIMCTL_LOOPBACK          (1u)
#define BITM_PMD_MIIMCTL_LOOPBACK          (0x4000u)
#define ENUM_PMD_MIIMCTL_LOOPBACK_DISABLED (0x00000000u)
#define ENUM_PMD_MIIMCTL_LOOPBACK_ENABLED  (0x00000001u)

#define BITP_PMD_MIIMCTL_RESET             (15u)
#define BITL_PMD_MIIMCTL_RESET             (1u)
#define BITM_PMD_MIIMCTL_RESET             (0x8000u)
#define ENUM_PMD_MIIMCTL_RESET_INACTIVE    (0x00000000u)
#define ENUM_PMD_MIIMCTL_RESET_TRIGGER     (0x00000001u)

/* Register Name        : PHYIDH
 * Register Addr        : 0xD202u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define PMD_PHYIDH_ADDR                    (0xD202u)
#define PMD_PHYIDH_RESET_VAL               (0x00000000u)
#define PMD_PHYIDH_MMS                     (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | PHYID                    | Readback of PHY identifier        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PMD_PHYIDH_PHYID              (0u)
#define BITL_PMD_PHYIDH_PHYID              (16u)
#define BITM_PMD_PHYIDH_PHYID              (0x0000FFFFu)

/* Register Name        : PHYIDL
 * Register Addr        : 0xD203u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define PMD_PHYIDL_ADDR                    (0xD203u)
#define PMD_PHYIDL_RESET_VAL               (0x00000000u)
#define PMD_PHYIDL_MMS                     (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | PHYID                    | Readback of PHY identifier        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PMD_PHYIDL_PHYID              (0u)
#define BITL_PMD_PHYIDL_PHYID              (16u)
#define BITM_PMD_PHYIDL_PHYID              (0x0000FFFFu)

/* Register Name        : PMDCTL
 * Register Addr        : 0xD210u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define PMD_PMDCTL_ADDR                    (0xD210u)
#define PMD_PMDCTL_RESET_VAL               (0x00000000u)
#define PMD_PMDCTL_MMS                     (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | TPEN                     | Control to enable Topology        | 0x00000000  |
 * |       |                          | Discovery mode                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | TPREFN                   | Control to configure Topology     | 0x00000000  |
 * |       |                          | Discovery mode as a reference     |             |
 * |       |                          | node (when 1) or a measured node  |             |
 * |       |                          | (when 0)                          |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14    | HDCAP                    | Readback of the Half-Duplex       | 0x00000000  |
 * |       |                          | capability                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15    | FDCAP                    | Readback of the Full-Duplex       | 0x00000000  |
 * |       |                          | capability                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PMD_PMDCTL_TPEN               (0u)
#define BITL_PMD_PMDCTL_TPEN               (1u)
#define BITM_PMD_PMDCTL_TPEN               (0x01u)
#define ENUM_PMD_PMDCTL_TPEN_DISABLED      (0x00000000u)
#define ENUM_PMD_PMDCTL_TPEN_ENABLED       (0x00000001u)

#define BITP_PMD_PMDCTL_TPREFN             (1u)
#define BITL_PMD_PMDCTL_TPREFN             (1u)
#define BITM_PMD_PMDCTL_TPREFN             (0x02u)
#define ENUM_PMD_PMDCTL_TPREFN_ENUM000     (0x00000000u)
#define ENUM_PMD_PMDCTL_TPREFN_ENUM001     (0x00000001u)

#define BITP_PMD_PMDCTL_HDCAP              (14u)
#define BITL_PMD_PMDCTL_HDCAP              (1u)
#define BITM_PMD_PMDCTL_HDCAP              (0x4000u)

#define BITP_PMD_PMDCTL_FDCAP              (15u)
#define BITL_PMD_PMDCTL_FDCAP              (1u)
#define BITM_PMD_PMDCTL_FDCAP              (0x8000u)

/* Register Name        : VS_CTRL
 * Register Addr        : 0xD211u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define PMD_VS_CTRL_ADDR                   (0xD211u)
#define PMD_VS_CTRL_RESET_VAL              (0x00000000u)
#define PMD_VS_CTRL_MMS                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15    | REGMAP_CLEAR             | Control to reset all RW bits in   | 0x00000000  |
 * |       |                          | the PMD register map (for         |             |
 * |       |                          | initialization purposes) without  |             |
 * |       |                          | affecting the PMD state machine.  |             |
 * |       |                          | Effect is immediate.              |             |
 * |       |                          | Self-clearing bit                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PMD_VS_CTRL_REGMAP_CLEAR      (15u)
#define BITL_PMD_VS_CTRL_REGMAP_CLEAR      (1u)
#define BITM_PMD_VS_CTRL_REGMAP_CLEAR      (0x8000u)
#define ENUM_PMD_VS_CTRL_REGMAP_CLEAR_INACTIVE (0x00000000u)
#define ENUM_PMD_VS_CTRL_REGMAP_CLEAR_TRIGGER (0x00000001u)

#endif /* ADI_PMD_REG_H */
