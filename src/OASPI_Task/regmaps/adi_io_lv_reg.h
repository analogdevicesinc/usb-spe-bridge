/**
 * Copyright © 2026 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/********************************************************************************************
 *   @file   adi_io_lv_reg.h
 *   @brief  This header file provides register descriptions for the
 *           IO Low-Voltage Domain.
 *******************************************************************************************/

#ifndef ADI_IO_LV_REG_H
#define ADI_IO_LV_REG_H

#define IO_NUM_REGS                                                            (242u)

/* Register Name        : DEBUG_DATA_CTRL
 * Register Addr        : 0xC801u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_DEBUG_DATA_CTRL_ADDR                                                (0xC801u)
#define IO_DEBUG_DATA_CTRL_RESET_VAL                                           (0x00000000u)
#define IO_DEBUG_DATA_CTRL_MMS                                                 (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 11-00 | SA_IF_DEBUG_DATA_EN      | SA_IF Debug Data Enable. This     | 0x00000000  |
 * |       |                          | bit-field enables the muxing of   |             |
 * |       |                          | internal signal through the       |             |
 * |       |                          | different Sensor-Actuator         |             |
 * |       |                          | Interface Pins.                   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_DEBUG_DATA_CTRL_SA_IF_DEBUG_DATA_EN                            (0u)
#define BITL_IO_DEBUG_DATA_CTRL_SA_IF_DEBUG_DATA_EN                            (12u)
#define BITM_IO_DEBUG_DATA_CTRL_SA_IF_DEBUG_DATA_EN                            (0x00000FFFu)

/* Register Name        : IO_PULLDOWN_CTRL_1
 * Register Addr        : 0xC802u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_IO_PULLDOWN_CTRL_1_ADDR                                             (0xC802u)
#define IO_IO_PULLDOWN_CTRL_1_RESET_VAL                                        (0x00000000u)
#define IO_IO_PULLDOWN_CTRL_1_MMS                                              (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 01-00 | IO_PULLDOWN_SA_IF_0      | Weak Pull-Up / Pull-Down control  | 0x00000000  |
 * |       |                          | for SA_IF0                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 03-02 | IO_PULLDOWN_SA_IF_1      | Weak Pull-Up / Pull-Down control  | 0x00000000  |
 * |       |                          | for SA_IF1                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 05-04 | IO_PULLDOWN_SA_IF_2      | Weak Pull-Up / Pull-Down control  | 0x00000000  |
 * |       |                          | for SA_IF2                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 07-06 | IO_PULLDOWN_SA_IF_3      | Weak Pull-Up / Pull-Down control  | 0x00000000  |
 * |       |                          | for SA_IF3                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 09-08 | IO_PULLDOWN_SA_IF_4      | Weak Pull-Up / Pull-Down control  | 0x00000000  |
 * |       |                          | for SA_IF4                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11-10 | IO_PULLDOWN_SA_IF_5      | Weak Pull-Up / Pull-Down control  | 0x00000000  |
 * |       |                          | for SA_IF5                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13-12 | IO_PULLDOWN_SA_IF_6      | Weak Pull-Up / Pull-Down control  | 0x00000000  |
 * |       |                          | for SA_IF6                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-14 | IO_PULLDOWN_SA_IF_7      | Weak Pull-Up / Pull-Down control  | 0x00000000  |
 * |       |                          | for SA_IF7                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_0                         (0u)
#define BITL_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_0                         (2u)
#define BITM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_0                         (0x00000003u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_0_ENUM000                 (0x00000000u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_0_ENUM001                 (0x00000001u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_0_ENUM002                 (0x00000002u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_0_ENUM003                 (0x00000003u)

#define BITP_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_1                         (2u)
#define BITL_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_1                         (2u)
#define BITM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_1                         (0x0000000Cu)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_1_ENUM000                 (0x00000000u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_1_ENUM001                 (0x00000001u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_1_ENUM002                 (0x00000002u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_1_ENUM003                 (0x00000003u)

#define BITP_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_2                         (4u)
#define BITL_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_2                         (2u)
#define BITM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_2                         (0x00000030u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_2_ENUM000                 (0x00000000u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_2_ENUM001                 (0x00000001u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_2_ENUM002                 (0x00000002u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_2_ENUM003                 (0x00000003u)

#define BITP_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_3                         (6u)
#define BITL_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_3                         (2u)
#define BITM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_3                         (0x000000C0u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_3_ENUM000                 (0x00000000u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_3_ENUM001                 (0x00000001u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_3_ENUM002                 (0x00000002u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_3_ENUM003                 (0x00000003u)

#define BITP_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_4                         (8u)
#define BITL_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_4                         (2u)
#define BITM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_4                         (0x00000300u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_4_ENUM000                 (0x00000000u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_4_ENUM001                 (0x00000001u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_4_ENUM002                 (0x00000002u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_4_ENUM003                 (0x00000003u)

#define BITP_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_5                         (10u)
#define BITL_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_5                         (2u)
#define BITM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_5                         (0x00000C00u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_5_ENUM000                 (0x00000000u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_5_ENUM001                 (0x00000001u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_5_ENUM002                 (0x00000002u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_5_ENUM003                 (0x00000003u)

#define BITP_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_6                         (12u)
#define BITL_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_6                         (2u)
#define BITM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_6                         (0x00003000u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_6_ENUM000                 (0x00000000u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_6_ENUM001                 (0x00000001u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_6_ENUM002                 (0x00000002u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_6_ENUM003                 (0x00000003u)

#define BITP_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_7                         (14u)
#define BITL_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_7                         (2u)
#define BITM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_7                         (0x0000C000u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_7_ENUM000                 (0x00000000u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_7_ENUM001                 (0x00000001u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_7_ENUM002                 (0x00000002u)
#define ENUM_IO_IO_PULLDOWN_CTRL_1_IO_PULLDOWN_SA_IF_7_ENUM003                 (0x00000003u)

/* Register Name        : IO_PULLDOWN_CTRL_2
 * Register Addr        : 0xC803u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_IO_PULLDOWN_CTRL_2_ADDR                                             (0xC803u)
#define IO_IO_PULLDOWN_CTRL_2_RESET_VAL                                        (0x00000000u)
#define IO_IO_PULLDOWN_CTRL_2_MMS                                              (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 01-00 | IO_PULLDOWN_SA_IF_8      | Weak Pull-Up / Pull-Down control  | 0x00000000  |
 * |       |                          | for SA_IF8                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 03-02 | IO_PULLDOWN_SA_IF_9      | Weak Pull-Up / Pull-Down control  | 0x00000000  |
 * |       |                          | for SA_IF9                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 05-04 | IO_PULLDOWN_SA_IF_10     | Weak Pull-Up / Pull-Down control  | 0x00000000  |
 * |       |                          | for SA_IF10                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 07-06 | IO_PULLDOWN_SA_IF_11     | Weak Pull-Up / Pull-Down control  | 0x00000000  |
 * |       |                          | for SA_IF11                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_IO_PULLDOWN_CTRL_2_IO_PULLDOWN_SA_IF_8                         (0u)
#define BITL_IO_IO_PULLDOWN_CTRL_2_IO_PULLDOWN_SA_IF_8                         (2u)
#define BITM_IO_IO_PULLDOWN_CTRL_2_IO_PULLDOWN_SA_IF_8                         (0x00000003u)
#define ENUM_IO_IO_PULLDOWN_CTRL_2_IO_PULLDOWN_SA_IF_8_ENUM000                 (0x00000000u)
#define ENUM_IO_IO_PULLDOWN_CTRL_2_IO_PULLDOWN_SA_IF_8_ENUM001                 (0x00000001u)
#define ENUM_IO_IO_PULLDOWN_CTRL_2_IO_PULLDOWN_SA_IF_8_ENUM002                 (0x00000002u)
#define ENUM_IO_IO_PULLDOWN_CTRL_2_IO_PULLDOWN_SA_IF_8_ENUM003                 (0x00000003u)

#define BITP_IO_IO_PULLDOWN_CTRL_2_IO_PULLDOWN_SA_IF_9                         (2u)
#define BITL_IO_IO_PULLDOWN_CTRL_2_IO_PULLDOWN_SA_IF_9                         (2u)
#define BITM_IO_IO_PULLDOWN_CTRL_2_IO_PULLDOWN_SA_IF_9                         (0x0000000Cu)
#define ENUM_IO_IO_PULLDOWN_CTRL_2_IO_PULLDOWN_SA_IF_9_ENUM000                 (0x00000000u)
#define ENUM_IO_IO_PULLDOWN_CTRL_2_IO_PULLDOWN_SA_IF_9_ENUM001                 (0x00000001u)
#define ENUM_IO_IO_PULLDOWN_CTRL_2_IO_PULLDOWN_SA_IF_9_ENUM002                 (0x00000002u)
#define ENUM_IO_IO_PULLDOWN_CTRL_2_IO_PULLDOWN_SA_IF_9_ENUM003                 (0x00000003u)

#define BITP_IO_IO_PULLDOWN_CTRL_2_IO_PULLDOWN_SA_IF_10                        (4u)
#define BITL_IO_IO_PULLDOWN_CTRL_2_IO_PULLDOWN_SA_IF_10                        (2u)
#define BITM_IO_IO_PULLDOWN_CTRL_2_IO_PULLDOWN_SA_IF_10                        (0x00000030u)
#define ENUM_IO_IO_PULLDOWN_CTRL_2_IO_PULLDOWN_SA_IF_10_ENUM000                (0x00000000u)
#define ENUM_IO_IO_PULLDOWN_CTRL_2_IO_PULLDOWN_SA_IF_10_ENUM001                (0x00000001u)
#define ENUM_IO_IO_PULLDOWN_CTRL_2_IO_PULLDOWN_SA_IF_10_ENUM002                (0x00000002u)
#define ENUM_IO_IO_PULLDOWN_CTRL_2_IO_PULLDOWN_SA_IF_10_ENUM003                (0x00000003u)

#define BITP_IO_IO_PULLDOWN_CTRL_2_IO_PULLDOWN_SA_IF_11                        (6u)
#define BITL_IO_IO_PULLDOWN_CTRL_2_IO_PULLDOWN_SA_IF_11                        (2u)
#define BITM_IO_IO_PULLDOWN_CTRL_2_IO_PULLDOWN_SA_IF_11                        (0x000000C0u)
#define ENUM_IO_IO_PULLDOWN_CTRL_2_IO_PULLDOWN_SA_IF_11_ENUM000                (0x00000000u)
#define ENUM_IO_IO_PULLDOWN_CTRL_2_IO_PULLDOWN_SA_IF_11_ENUM001                (0x00000001u)
#define ENUM_IO_IO_PULLDOWN_CTRL_2_IO_PULLDOWN_SA_IF_11_ENUM002                (0x00000002u)
#define ENUM_IO_IO_PULLDOWN_CTRL_2_IO_PULLDOWN_SA_IF_11_ENUM003                (0x00000003u)

/* Register Name        : MAC_INTERFACE
 * Register Addr        : 0xC804u
 * Register Reset Value : 0x0000000Eu
 * Register MMS         : 0xAu
 */

#define IO_MAC_INTERFACE_ADDR                                                  (0xC804u)
#define IO_MAC_INTERFACE_RESET_VAL                                             (0x0000000Eu)
#define IO_MAC_INTERFACE_MMS                                                   (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | MAC_TIMER_EN             | Enable for MAC Timer signals      | 0x00000000  |
 * |       |                          | when OA-SPI is connected          |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | MAC_INTRQ_EN             | Enable for MAC INTRQ signal when  | 0x00000001  |
 * |       |                          | OA-SPI is connected               |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_MAC_INTERFACE_MAC_TIMER_EN                                     (0u)
#define BITL_IO_MAC_INTERFACE_MAC_TIMER_EN                                     (1u)
#define BITM_IO_MAC_INTERFACE_MAC_TIMER_EN                                     (0x01u)
#define ENUM_IO_MAC_INTERFACE_MAC_TIMER_EN_DISABLED                            (0x00000000u)
#define ENUM_IO_MAC_INTERFACE_MAC_TIMER_EN_ENABLED                             (0x00000001u)

#define BITP_IO_MAC_INTERFACE_MAC_INTRQ_EN                                     (1u)
#define BITL_IO_MAC_INTERFACE_MAC_INTRQ_EN                                     (1u)
#define BITM_IO_MAC_INTERFACE_MAC_INTRQ_EN                                     (0x02u)
#define ENUM_IO_MAC_INTERFACE_MAC_INTRQ_EN_DISABLED                            (0x00000000u)
#define ENUM_IO_MAC_INTERFACE_MAC_INTRQ_EN_ENABLED                             (0x00000001u)

/* Register Name        : REVISION_CONTROL
 * Register Addr        : 0xC805u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_REVISION_CONTROL_ADDR                                               (0xC805u)
#define IO_REVISION_CONTROL_RESET_VAL                                          (0x00000000u)
#define IO_REVISION_CONTROL_MMS                                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 03-00 | REV_CODE                 | Chip revision code                | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-04 | REV_CODE_DIG             | Chip revision code digital        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_REVISION_CONTROL_REV_CODE                                      (0u)
#define BITL_IO_REVISION_CONTROL_REV_CODE                                      (4u)
#define BITM_IO_REVISION_CONTROL_REV_CODE                                      (0x0000000Fu)
#define ENUM_IO_REVISION_CONTROL_REV_CODE_ENUM000                              (0x00000000u)
#define ENUM_IO_REVISION_CONTROL_REV_CODE_ENUM001                              (0x00000001u)
#define ENUM_IO_REVISION_CONTROL_REV_CODE_ENUM002                              (0x00000002u)

#define BITP_IO_REVISION_CONTROL_REV_CODE_DIG                                  (4u)
#define BITL_IO_REVISION_CONTROL_REV_CODE_DIG                                  (12u)
#define BITM_IO_REVISION_CONTROL_REV_CODE_DIG                                  (0x0000FFF0u)

/* Register Name        : BOOTLOADER_STATUS_0
 * Register Addr        : 0xC806u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_BOOTLOADER_STATUS_0_ADDR                                            (0xC806u)
#define IO_BOOTLOADER_STATUS_0_RESET_VAL                                       (0x00000000u)
#define IO_BOOTLOADER_STATUS_0_MMS                                             (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 01-00 | BLOCK_STATUS_0           | Bootloader block 0 status         | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 03-02 | BLOCK_STATUS_1           | Bootloader block 1 status         | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 05-04 | BLOCK_STATUS_2           | Bootloader block 2 status         | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 07-06 | BLOCK_STATUS_3           | Bootloader block 3 status         | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 09-08 | BLOCK_STATUS_4           | Bootloader block 4 status         | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11-10 | BLOCK_STATUS_5           | Bootloader block 5 status         | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13-12 | BLOCK_STATUS_6           | Bootloader block 6 status         | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-14 | BLOCK_STATUS_7           | Bootloader block 7 status         | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_0                             (0u)
#define BITL_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_0                             (2u)
#define BITM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_0                             (0x00000003u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_0_BL_BLK_ST_00                (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_0_BL_BLK_ST_01                (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_0_BL_BLK_ST_10                (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_0_BL_BLK_ST_11                (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_1                             (2u)
#define BITL_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_1                             (2u)
#define BITM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_1                             (0x0000000Cu)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_1_BL_BLK_ST_00                (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_1_BL_BLK_ST_01                (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_1_BL_BLK_ST_10                (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_1_BL_BLK_ST_11                (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_2                             (4u)
#define BITL_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_2                             (2u)
#define BITM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_2                             (0x00000030u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_2_BL_BLK_ST_00                (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_2_BL_BLK_ST_01                (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_2_BL_BLK_ST_10                (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_2_BL_BLK_ST_11                (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_3                             (6u)
#define BITL_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_3                             (2u)
#define BITM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_3                             (0x000000C0u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_3_BL_BLK_ST_00                (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_3_BL_BLK_ST_01                (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_3_BL_BLK_ST_10                (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_3_BL_BLK_ST_11                (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_4                             (8u)
#define BITL_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_4                             (2u)
#define BITM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_4                             (0x00000300u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_4_BL_BLK_ST_00                (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_4_BL_BLK_ST_01                (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_4_BL_BLK_ST_10                (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_4_BL_BLK_ST_11                (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_5                             (10u)
#define BITL_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_5                             (2u)
#define BITM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_5                             (0x00000C00u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_5_BL_BLK_ST_00                (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_5_BL_BLK_ST_01                (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_5_BL_BLK_ST_10                (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_5_BL_BLK_ST_11                (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_6                             (12u)
#define BITL_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_6                             (2u)
#define BITM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_6                             (0x00003000u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_6_BL_BLK_ST_00                (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_6_BL_BLK_ST_01                (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_6_BL_BLK_ST_10                (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_6_BL_BLK_ST_11                (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_7                             (14u)
#define BITL_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_7                             (2u)
#define BITM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_7                             (0x0000C000u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_7_BL_BLK_ST_00                (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_7_BL_BLK_ST_01                (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_7_BL_BLK_ST_10                (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_0_BLOCK_STATUS_7_BL_BLK_ST_11                (0x00000003u)

/* Register Name        : BOOTLOADER_STATUS_1
 * Register Addr        : 0xC807u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_BOOTLOADER_STATUS_1_ADDR                                            (0xC807u)
#define IO_BOOTLOADER_STATUS_1_RESET_VAL                                       (0x00000000u)
#define IO_BOOTLOADER_STATUS_1_MMS                                             (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 01-00 | BLOCK_STATUS_8           | Bootloader block 8 status         | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 03-02 | BLOCK_STATUS_9           | Bootloader block 9 status         | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 05-04 | BLOCK_STATUS_10          | Bootloader block 10 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 07-06 | BLOCK_STATUS_11          | Bootloader block 11 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 09-08 | BLOCK_STATUS_12          | Bootloader block 12 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11-10 | BLOCK_STATUS_13          | Bootloader block 13 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13-12 | BLOCK_STATUS_14          | Bootloader block 14 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-14 | BLOCK_STATUS_15          | Bootloader block 15 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_8                             (0u)
#define BITL_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_8                             (2u)
#define BITM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_8                             (0x00000003u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_8_BL_BLK_ST_00                (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_8_BL_BLK_ST_01                (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_8_BL_BLK_ST_10                (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_8_BL_BLK_ST_11                (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_9                             (2u)
#define BITL_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_9                             (2u)
#define BITM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_9                             (0x0000000Cu)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_9_BL_BLK_ST_00                (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_9_BL_BLK_ST_01                (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_9_BL_BLK_ST_10                (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_9_BL_BLK_ST_11                (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_10                            (4u)
#define BITL_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_10                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_10                            (0x00000030u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_10_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_10_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_10_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_10_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_11                            (6u)
#define BITL_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_11                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_11                            (0x000000C0u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_11_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_11_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_11_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_11_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_12                            (8u)
#define BITL_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_12                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_12                            (0x00000300u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_12_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_12_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_12_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_12_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_13                            (10u)
#define BITL_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_13                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_13                            (0x00000C00u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_13_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_13_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_13_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_13_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_14                            (12u)
#define BITL_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_14                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_14                            (0x00003000u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_14_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_14_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_14_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_14_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_15                            (14u)
#define BITL_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_15                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_15                            (0x0000C000u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_15_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_15_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_15_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_1_BLOCK_STATUS_15_BL_BLK_ST_11               (0x00000003u)

/* Register Name        : BOOTLOADER_STATUS_2
 * Register Addr        : 0xC808u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_BOOTLOADER_STATUS_2_ADDR                                            (0xC808u)
#define IO_BOOTLOADER_STATUS_2_RESET_VAL                                       (0x00000000u)
#define IO_BOOTLOADER_STATUS_2_MMS                                             (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 01-00 | BLOCK_STATUS_16          | Bootloader block 16 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 03-02 | BLOCK_STATUS_17          | Bootloader block 17 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 05-04 | BLOCK_STATUS_18          | Bootloader block 18 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 07-06 | BLOCK_STATUS_19          | Bootloader block 19 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 09-08 | BLOCK_STATUS_20          | Bootloader block 20 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11-10 | BLOCK_STATUS_21          | Bootloader block 21 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13-12 | BLOCK_STATUS_22          | Bootloader block 22 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-14 | BLOCK_STATUS_23          | Bootloader block 23 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_16                            (0u)
#define BITL_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_16                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_16                            (0x00000003u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_16_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_16_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_16_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_16_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_17                            (2u)
#define BITL_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_17                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_17                            (0x0000000Cu)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_17_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_17_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_17_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_17_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_18                            (4u)
#define BITL_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_18                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_18                            (0x00000030u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_18_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_18_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_18_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_18_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_19                            (6u)
#define BITL_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_19                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_19                            (0x000000C0u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_19_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_19_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_19_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_19_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_20                            (8u)
#define BITL_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_20                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_20                            (0x00000300u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_20_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_20_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_20_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_20_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_21                            (10u)
#define BITL_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_21                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_21                            (0x00000C00u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_21_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_21_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_21_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_21_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_22                            (12u)
#define BITL_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_22                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_22                            (0x00003000u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_22_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_22_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_22_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_22_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_23                            (14u)
#define BITL_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_23                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_23                            (0x0000C000u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_23_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_23_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_23_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_2_BLOCK_STATUS_23_BL_BLK_ST_11               (0x00000003u)

/* Register Name        : BOOTLOADER_STATUS_3
 * Register Addr        : 0xC809u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_BOOTLOADER_STATUS_3_ADDR                                            (0xC809u)
#define IO_BOOTLOADER_STATUS_3_RESET_VAL                                       (0x00000000u)
#define IO_BOOTLOADER_STATUS_3_MMS                                             (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 01-00 | BLOCK_STATUS_24          | Bootloader block 24 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 03-02 | BLOCK_STATUS_25          | Bootloader block 25 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 05-04 | BLOCK_STATUS_26          | Bootloader block 26 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 07-06 | BLOCK_STATUS_27          | Bootloader block 27 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 09-08 | BLOCK_STATUS_28          | Bootloader block 28 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11-10 | BLOCK_STATUS_29          | Bootloader block 29 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13-12 | BLOCK_STATUS_30          | Bootloader block 30 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-14 | BLOCK_STATUS_31          | Bootloader block 31 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_24                            (0u)
#define BITL_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_24                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_24                            (0x00000003u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_24_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_24_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_24_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_24_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_25                            (2u)
#define BITL_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_25                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_25                            (0x0000000Cu)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_25_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_25_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_25_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_25_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_26                            (4u)
#define BITL_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_26                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_26                            (0x00000030u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_26_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_26_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_26_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_26_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_27                            (6u)
#define BITL_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_27                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_27                            (0x000000C0u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_27_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_27_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_27_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_27_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_28                            (8u)
#define BITL_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_28                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_28                            (0x00000300u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_28_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_28_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_28_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_28_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_29                            (10u)
#define BITL_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_29                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_29                            (0x00000C00u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_29_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_29_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_29_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_29_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_30                            (12u)
#define BITL_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_30                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_30                            (0x00003000u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_30_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_30_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_30_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_30_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_31                            (14u)
#define BITL_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_31                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_31                            (0x0000C000u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_31_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_31_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_31_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_3_BLOCK_STATUS_31_BL_BLK_ST_11               (0x00000003u)

/* Register Name        : BOOTLOADER_STATUS_4
 * Register Addr        : 0xC80Au
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_BOOTLOADER_STATUS_4_ADDR                                            (0xC80Au)
#define IO_BOOTLOADER_STATUS_4_RESET_VAL                                       (0x00000000u)
#define IO_BOOTLOADER_STATUS_4_MMS                                             (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 01-00 | BLOCK_STATUS_32          | Bootloader block 32 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 03-02 | BLOCK_STATUS_33          | Bootloader block 33 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 05-04 | BLOCK_STATUS_34          | Bootloader block 34 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 07-06 | BLOCK_STATUS_35          | Bootloader block 35 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 09-08 | BLOCK_STATUS_36          | Bootloader block 36 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11-10 | BLOCK_STATUS_37          | Bootloader block 37 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13-12 | BLOCK_STATUS_38          | Bootloader block 38 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-14 | BLOCK_STATUS_39          | Bootloader block 39 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_32                            (0u)
#define BITL_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_32                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_32                            (0x00000003u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_32_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_32_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_32_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_32_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_33                            (2u)
#define BITL_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_33                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_33                            (0x0000000Cu)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_33_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_33_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_33_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_33_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_34                            (4u)
#define BITL_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_34                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_34                            (0x00000030u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_34_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_34_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_34_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_34_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_35                            (6u)
#define BITL_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_35                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_35                            (0x000000C0u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_35_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_35_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_35_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_35_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_36                            (8u)
#define BITL_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_36                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_36                            (0x00000300u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_36_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_36_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_36_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_36_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_37                            (10u)
#define BITL_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_37                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_37                            (0x00000C00u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_37_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_37_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_37_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_37_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_38                            (12u)
#define BITL_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_38                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_38                            (0x00003000u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_38_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_38_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_38_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_38_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_39                            (14u)
#define BITL_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_39                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_39                            (0x0000C000u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_39_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_39_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_39_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_4_BLOCK_STATUS_39_BL_BLK_ST_11               (0x00000003u)

/* Register Name        : BOOTLOADER_STATUS_5
 * Register Addr        : 0xC80Bu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_BOOTLOADER_STATUS_5_ADDR                                            (0xC80Bu)
#define IO_BOOTLOADER_STATUS_5_RESET_VAL                                       (0x00000000u)
#define IO_BOOTLOADER_STATUS_5_MMS                                             (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 01-00 | BLOCK_STATUS_40          | Bootloader block 40 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 03-02 | BLOCK_STATUS_41          | Bootloader block 41 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 05-04 | BLOCK_STATUS_42          | Bootloader block 42 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 07-06 | BLOCK_STATUS_43          | Bootloader block 43 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 09-08 | BLOCK_STATUS_44          | Bootloader block 44 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11-10 | BLOCK_STATUS_45          | Bootloader block 45 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13-12 | BLOCK_STATUS_46          | Bootloader block 46 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-14 | BLOCK_STATUS_47          | Bootloader block 47 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_40                            (0u)
#define BITL_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_40                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_40                            (0x00000003u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_40_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_40_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_40_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_40_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_41                            (2u)
#define BITL_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_41                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_41                            (0x0000000Cu)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_41_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_41_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_41_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_41_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_42                            (4u)
#define BITL_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_42                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_42                            (0x00000030u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_42_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_42_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_42_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_42_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_43                            (6u)
#define BITL_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_43                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_43                            (0x000000C0u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_43_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_43_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_43_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_43_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_44                            (8u)
#define BITL_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_44                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_44                            (0x00000300u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_44_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_44_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_44_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_44_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_45                            (10u)
#define BITL_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_45                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_45                            (0x00000C00u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_45_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_45_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_45_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_45_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_46                            (12u)
#define BITL_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_46                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_46                            (0x00003000u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_46_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_46_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_46_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_46_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_47                            (14u)
#define BITL_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_47                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_47                            (0x0000C000u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_47_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_47_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_47_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_5_BLOCK_STATUS_47_BL_BLK_ST_11               (0x00000003u)

/* Register Name        : BOOTLOADER_STATUS_6
 * Register Addr        : 0xC80Cu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_BOOTLOADER_STATUS_6_ADDR                                            (0xC80Cu)
#define IO_BOOTLOADER_STATUS_6_RESET_VAL                                       (0x00000000u)
#define IO_BOOTLOADER_STATUS_6_MMS                                             (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 01-00 | BLOCK_STATUS_48          | Bootloader block 48 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 03-02 | BLOCK_STATUS_49          | Bootloader block 49 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 05-04 | BLOCK_STATUS_50          | Bootloader block 50 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 07-06 | BLOCK_STATUS_51          | Bootloader block 51 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 09-08 | BLOCK_STATUS_52          | Bootloader block 52 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11-10 | BLOCK_STATUS_53          | Bootloader block 53 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13-12 | BLOCK_STATUS_54          | Bootloader block 54 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-14 | BLOCK_STATUS_55          | Bootloader block 55 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_48                            (0u)
#define BITL_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_48                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_48                            (0x00000003u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_48_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_48_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_48_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_48_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_49                            (2u)
#define BITL_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_49                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_49                            (0x0000000Cu)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_49_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_49_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_49_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_49_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_50                            (4u)
#define BITL_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_50                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_50                            (0x00000030u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_50_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_50_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_50_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_50_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_51                            (6u)
#define BITL_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_51                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_51                            (0x000000C0u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_51_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_51_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_51_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_51_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_52                            (8u)
#define BITL_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_52                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_52                            (0x00000300u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_52_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_52_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_52_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_52_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_53                            (10u)
#define BITL_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_53                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_53                            (0x00000C00u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_53_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_53_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_53_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_53_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_54                            (12u)
#define BITL_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_54                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_54                            (0x00003000u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_54_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_54_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_54_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_54_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_55                            (14u)
#define BITL_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_55                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_55                            (0x0000C000u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_55_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_55_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_55_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_6_BLOCK_STATUS_55_BL_BLK_ST_11               (0x00000003u)

/* Register Name        : BOOTLOADER_STATUS_7
 * Register Addr        : 0xC80Du
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_BOOTLOADER_STATUS_7_ADDR                                            (0xC80Du)
#define IO_BOOTLOADER_STATUS_7_RESET_VAL                                       (0x00000000u)
#define IO_BOOTLOADER_STATUS_7_MMS                                             (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 01-00 | BLOCK_STATUS_56          | Bootloader block 56 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 03-02 | BLOCK_STATUS_57          | Bootloader block 57 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 05-04 | BLOCK_STATUS_58          | Bootloader block 58 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 07-06 | BLOCK_STATUS_59          | Bootloader block 59 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 09-08 | BLOCK_STATUS_60          | Bootloader block 60 status        | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13    | BOOTLOADER_TIMEOUT       | The bootloading process was not   | 0x00000000  |
 * |       |                          | able to start within 1s (0 =      |             |
 * |       |                          | able to start; 1 = timeout        |             |
 * |       |                          | error)                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14    | BOOTLOADER_ABORTED       | The bootloading process was       | 0x00000000  |
 * |       |                          | aborted (0 = ok; 1 = aborted).    |             |
 * |       |                          | See additional flag               |             |
 * |       |                          | bootloader_timeout for reason to  |             |
 * |       |                          | abort                             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15    | BOOTLOAD_DONE            | Bootloader done                   | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_56                            (0u)
#define BITL_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_56                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_56                            (0x00000003u)
#define ENUM_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_56_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_56_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_56_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_56_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_57                            (2u)
#define BITL_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_57                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_57                            (0x0000000Cu)
#define ENUM_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_57_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_57_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_57_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_57_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_58                            (4u)
#define BITL_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_58                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_58                            (0x00000030u)
#define ENUM_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_58_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_58_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_58_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_58_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_59                            (6u)
#define BITL_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_59                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_59                            (0x000000C0u)
#define ENUM_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_59_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_59_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_59_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_59_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_60                            (8u)
#define BITL_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_60                            (2u)
#define BITM_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_60                            (0x00000300u)
#define ENUM_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_60_BL_BLK_ST_00               (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_60_BL_BLK_ST_01               (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_60_BL_BLK_ST_10               (0x00000002u)
#define ENUM_IO_BOOTLOADER_STATUS_7_BLOCK_STATUS_60_BL_BLK_ST_11               (0x00000003u)

#define BITP_IO_BOOTLOADER_STATUS_7_BOOTLOADER_TIMEOUT                         (13u)
#define BITL_IO_BOOTLOADER_STATUS_7_BOOTLOADER_TIMEOUT                         (1u)
#define BITM_IO_BOOTLOADER_STATUS_7_BOOTLOADER_TIMEOUT                         (0x2000u)
#define ENUM_IO_BOOTLOADER_STATUS_7_BOOTLOADER_TIMEOUT_ENUM001                 (0x00000001u)
#define ENUM_IO_BOOTLOADER_STATUS_7_BOOTLOADER_TIMEOUT_ENUM000                 (0x00000000u)

#define BITP_IO_BOOTLOADER_STATUS_7_BOOTLOADER_ABORTED                         (14u)
#define BITL_IO_BOOTLOADER_STATUS_7_BOOTLOADER_ABORTED                         (1u)
#define BITM_IO_BOOTLOADER_STATUS_7_BOOTLOADER_ABORTED                         (0x4000u)
#define ENUM_IO_BOOTLOADER_STATUS_7_BOOTLOADER_ABORTED_ENUM000                 (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_7_BOOTLOADER_ABORTED_ENUM001                 (0x00000001u)

#define BITP_IO_BOOTLOADER_STATUS_7_BOOTLOAD_DONE                              (15u)
#define BITL_IO_BOOTLOADER_STATUS_7_BOOTLOAD_DONE                              (1u)
#define BITM_IO_BOOTLOADER_STATUS_7_BOOTLOAD_DONE                              (0x8000u)
#define ENUM_IO_BOOTLOADER_STATUS_7_BOOTLOAD_DONE_BOOTLOAD_NOT_FINISHED        (0x00000000u)
#define ENUM_IO_BOOTLOADER_STATUS_7_BOOTLOAD_DONE_BOOTLOAD_FINISHED            (0x00000001u)

/* Register Name        : BOOTLOADER_CFG
 * Register Addr        : 0xC80Eu
 * Register Reset Value : 0x00004000u
 * Register MMS         : 0xAu
 */

#define IO_BOOTLOADER_CFG_ADDR                                                 (0xC80Eu)
#define IO_BOOTLOADER_CFG_RESET_VAL                                            (0x00004000u)
#define IO_BOOTLOADER_CFG_MMS                                                  (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 6     | slpwk_cfg_check_traffic_w| Check for network traffic         | 0x00000000  |
 * |       |                          | presence when booting up due to   |             |
 * |       |                          | POR release                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 7     | slpwk_cfg_check_traffic_w| Check for network traffic         | 0x00000000  |
 * |       |                          | presence when booting up due to   |             |
 * |       |                          | restored Vbat issues that caused  |             |
 * |       |                          | sleep                             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 8     | slpwk_cfg_check_traffic_w| Check for network traffic         | 0x00000000  |
 * |       |                          | presence when booting up due to   |             |
 * |       |                          | receiving the Wake-Up pulse on    |             |
 * |       |                          | the Ethernet line                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 9     | slpwk_cfg_auto_sleep_stan| Select what action to take when   | 0x00000000  |
 * |       |                          | the network traffic check fails   |             |
 * |       |                          | (i.e. no traffic)                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 10    | slpwk_cfg_auto_wus_wake_p| Configure an automatic Wake-Up    | 0x00000000  |
 * |       |                          | pulse to be sent on the ethernet  |             |
 * |       |                          | line when booting up due to       |             |
 * |       |                          | local WAKE pin assertion          |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-13 | DEVICE_MODE              | Set the device operational mode   | 0x00000002  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_BOOTLOADER_CFG_SLPWK_CFG_CHECK_TRAFFIC_WAKE_POR                (6u)
#define BITL_IO_BOOTLOADER_CFG_SLPWK_CFG_CHECK_TRAFFIC_WAKE_POR                (1u)
#define BITM_IO_BOOTLOADER_CFG_SLPWK_CFG_CHECK_TRAFFIC_WAKE_POR                (0x40u)
#define ENUM_IO_BOOTLOADER_CFG_SLPWK_CFG_CHECK_TRAFFIC_WAKE_POR_DISABLED       (0x00000000u)
#define ENUM_IO_BOOTLOADER_CFG_SLPWK_CFG_CHECK_TRAFFIC_WAKE_POR_ENABLED        (0x00000001u)

#define BITP_IO_BOOTLOADER_CFG_SLPWK_CFG_CHECK_TRAFFIC_WAKE_VBAT               (7u)
#define BITL_IO_BOOTLOADER_CFG_SLPWK_CFG_CHECK_TRAFFIC_WAKE_VBAT               (1u)
#define BITM_IO_BOOTLOADER_CFG_SLPWK_CFG_CHECK_TRAFFIC_WAKE_VBAT               (0x80u)
#define ENUM_IO_BOOTLOADER_CFG_SLPWK_CFG_CHECK_TRAFFIC_WAKE_VBAT_DISABLED      (0x00000000u)
#define ENUM_IO_BOOTLOADER_CFG_SLPWK_CFG_CHECK_TRAFFIC_WAKE_VBAT_ENABLED       (0x00000001u)

#define BITP_IO_BOOTLOADER_CFG_SLPWK_CFG_CHECK_TRAFFIC_WAKE_WUD                (8u)
#define BITL_IO_BOOTLOADER_CFG_SLPWK_CFG_CHECK_TRAFFIC_WAKE_WUD                (1u)
#define BITM_IO_BOOTLOADER_CFG_SLPWK_CFG_CHECK_TRAFFIC_WAKE_WUD                (0x0100u)
#define ENUM_IO_BOOTLOADER_CFG_SLPWK_CFG_CHECK_TRAFFIC_WAKE_WUD_DISABLED       (0x00000000u)
#define ENUM_IO_BOOTLOADER_CFG_SLPWK_CFG_CHECK_TRAFFIC_WAKE_WUD_ENABLED        (0x00000001u)

#define BITP_IO_BOOTLOADER_CFG_SLPWK_CFG_AUTO_SLEEP_STANDBY_B                  (9u)
#define BITL_IO_BOOTLOADER_CFG_SLPWK_CFG_AUTO_SLEEP_STANDBY_B                  (1u)
#define BITM_IO_BOOTLOADER_CFG_SLPWK_CFG_AUTO_SLEEP_STANDBY_B                  (0x0200u)
#define ENUM_IO_BOOTLOADER_CFG_SLPWK_CFG_AUTO_SLEEP_STANDBY_B_STANDBY          (0x00000000u)
#define ENUM_IO_BOOTLOADER_CFG_SLPWK_CFG_AUTO_SLEEP_STANDBY_B_SLEEP            (0x00000001u)

#define BITP_IO_BOOTLOADER_CFG_SLPWK_CFG_AUTO_WUS_WAKE_PIN                     (10u)
#define BITL_IO_BOOTLOADER_CFG_SLPWK_CFG_AUTO_WUS_WAKE_PIN                     (1u)
#define BITM_IO_BOOTLOADER_CFG_SLPWK_CFG_AUTO_WUS_WAKE_PIN                     (0x0400u)
#define ENUM_IO_BOOTLOADER_CFG_SLPWK_CFG_AUTO_WUS_WAKE_PIN_DISABLED            (0x00000000u)
#define ENUM_IO_BOOTLOADER_CFG_SLPWK_CFG_AUTO_WUS_WAKE_PIN_ENABLED             (0x00000001u)

#define BITP_IO_BOOTLOADER_CFG_DEVICE_MODE                                     (13u)
#define BITL_IO_BOOTLOADER_CFG_DEVICE_MODE                                     (3u)
#define BITM_IO_BOOTLOADER_CFG_DEVICE_MODE                                     (0x0000E000u)
#define ENUM_IO_BOOTLOADER_CFG_DEVICE_MODE_TRISTATE                            (0x00000000u)
#define ENUM_IO_BOOTLOADER_CFG_DEVICE_MODE_MAC_PHY                             (0x00000003u)

/* Register Name        : SLEEP_WAKE_CFG
 * Register Addr        : 0xC80Fu
 * Register Reset Value : 0x00000100u
 * Register MMS         : 0xAu
 */

#define IO_SLEEP_WAKE_CFG_ADDR                                                 (0xC80Fu)
#define IO_SLEEP_WAKE_CFG_RESET_VAL                                            (0x00000100u)
#define IO_SLEEP_WAKE_CFG_MMS                                                  (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 02-00 | slpwk_cfg_traffic_timer_s| Select the delay for network      | 0x00000000  |
 * |       |                          | traffic check when waking up      |             |
 * |       |                          | before returning to               |             |
 * |       |                          | sleep/standby                     |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 3     | slpwk_cfg_req_system_wake| Sleep Wake controller will send   | 0x00000000  |
 * |       |                          | an interrupt message to the       |             |
 * |       |                          | network requesting that the       |             |
 * |       |                          | controller node clears the        |             |
 * |       |                          | interrupt to confirm that the     |             |
 * |       |                          | system is woken up. Otherwise     |             |
 * |       |                          | the WUS will be re-tried. When    |             |
 * |       |                          | this bit is 0, the confirmation   |             |
 * |       |                          | of system awake is obtained from  |             |
 * |       |                          | any network traffic being         |             |
 * |       |                          | received.                         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 07-04 | slpwk_cfg_wus_wakeup_max_| Sleep Wake controller will        | 0x00000000  |
 * |       |                          | re-send a Wake-Up-Signal (WUS)    |             |
 * |       |                          | every 100ms until it gets         |             |
 * |       |                          | confirmation of the system being  |             |
 * |       |                          | awake for a maximum of this       |             |
 * |       |                          | number of times. A value of 0     |             |
 * |       |                          | does not retry, and keeps the     |             |
 * |       |                          | node awake (can be used to abort  |             |
 * |       |                          | the re-tries). When the max       |             |
 * |       |                          | retry is reached the device will  |             |
 * |       |                          | go to sleep automatically. This   |             |
 * |       |                          | is only applicable when the       |             |
 * |       |                          | device is waking up due to WAKE   |             |
 * |       |                          | pin activation.                   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 09-08 | slpwk_cfg_wus_wakeup_irq_| Sleep Wake controller's wait      | 0x00000001  |
 * |       |                          | time selection to get IRQ clear   |             |
 * |       |                          | confirmation of the system being  |             |
 * |       |                          | awake                             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12    | SLPWK_FAILSAFE_SLEEP_EN  | Sleep Wake controller will        | 0x00000000  |
 * |       |                          | automatically send the device to  |             |
 * |       |                          | sleep after a selectable timeout  |             |
 * |       |                          | without receiving data via the    |             |
 * |       |                          | network, preventing single        |             |
 * |       |                          | devices to remain powered up in   |             |
 * |       |                          | a powered down network.           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_SLEEP_WAKE_CFG_SLPWK_CFG_TRAFFIC_TIMER_SEL                     (0u)
#define BITL_IO_SLEEP_WAKE_CFG_SLPWK_CFG_TRAFFIC_TIMER_SEL                     (3u)
#define BITM_IO_SLEEP_WAKE_CFG_SLPWK_CFG_TRAFFIC_TIMER_SEL                     (0x00000007u)
#define ENUM_IO_SLEEP_WAKE_CFG_SLPWK_CFG_TRAFFIC_TIMER_SEL_SLPWK_TRAFFIC_TIMER_SEL0 (0x00000000u)
#define ENUM_IO_SLEEP_WAKE_CFG_SLPWK_CFG_TRAFFIC_TIMER_SEL_SLPWK_TRAFFIC_TIMER_SEL1 (0x00000001u)
#define ENUM_IO_SLEEP_WAKE_CFG_SLPWK_CFG_TRAFFIC_TIMER_SEL_SLPWK_TRAFFIC_TIMER_SEL2 (0x00000002u)
#define ENUM_IO_SLEEP_WAKE_CFG_SLPWK_CFG_TRAFFIC_TIMER_SEL_SLPWK_TRAFFIC_TIMER_SEL3 (0x00000003u)
#define ENUM_IO_SLEEP_WAKE_CFG_SLPWK_CFG_TRAFFIC_TIMER_SEL_SLPWK_TRAFFIC_TIMER_SEL4 (0x00000004u)
#define ENUM_IO_SLEEP_WAKE_CFG_SLPWK_CFG_TRAFFIC_TIMER_SEL_SLPWK_TRAFFIC_TIMER_SEL5 (0x00000005u)
#define ENUM_IO_SLEEP_WAKE_CFG_SLPWK_CFG_TRAFFIC_TIMER_SEL_SLPWK_TRAFFIC_TIMER_SEL6 (0x00000006u)
#define ENUM_IO_SLEEP_WAKE_CFG_SLPWK_CFG_TRAFFIC_TIMER_SEL_SLPWK_TRAFFIC_TIMER_SEL7 (0x00000007u)

#define BITP_IO_SLEEP_WAKE_CFG_SLPWK_CFG_REQ_SYSTEM_WAKEUP_CONF                (3u)
#define BITL_IO_SLEEP_WAKE_CFG_SLPWK_CFG_REQ_SYSTEM_WAKEUP_CONF                (1u)
#define BITM_IO_SLEEP_WAKE_CFG_SLPWK_CFG_REQ_SYSTEM_WAKEUP_CONF                (0x08u)
#define ENUM_IO_SLEEP_WAKE_CFG_SLPWK_CFG_REQ_SYSTEM_WAKEUP_CONF_DISABLED       (0x00000000u)
#define ENUM_IO_SLEEP_WAKE_CFG_SLPWK_CFG_REQ_SYSTEM_WAKEUP_CONF_ENABLED        (0x00000001u)

#define BITP_IO_SLEEP_WAKE_CFG_SLPWK_CFG_WUS_WAKEUP_MAX_RETRY                  (4u)
#define BITL_IO_SLEEP_WAKE_CFG_SLPWK_CFG_WUS_WAKEUP_MAX_RETRY                  (4u)
#define BITM_IO_SLEEP_WAKE_CFG_SLPWK_CFG_WUS_WAKEUP_MAX_RETRY                  (0x000000F0u)

#define BITP_IO_SLEEP_WAKE_CFG_SLPWK_CFG_WUS_WAKEUP_IRQ_CONF_WAIT_SEL          (8u)
#define BITL_IO_SLEEP_WAKE_CFG_SLPWK_CFG_WUS_WAKEUP_IRQ_CONF_WAIT_SEL          (2u)
#define BITM_IO_SLEEP_WAKE_CFG_SLPWK_CFG_WUS_WAKEUP_IRQ_CONF_WAIT_SEL          (0x00000300u)
#define ENUM_IO_SLEEP_WAKE_CFG_SLPWK_CFG_WUS_WAKEUP_IRQ_CONF_WAIT_SEL_SLPWK_IRQ_CONF_WAIT_SEL0 (0x00000000u)
#define ENUM_IO_SLEEP_WAKE_CFG_SLPWK_CFG_WUS_WAKEUP_IRQ_CONF_WAIT_SEL_SLPWK_IRQ_CONF_WAIT_SEL1 (0x00000001u)
#define ENUM_IO_SLEEP_WAKE_CFG_SLPWK_CFG_WUS_WAKEUP_IRQ_CONF_WAIT_SEL_SLPWK_IRQ_CONF_WAIT_SEL2 (0x00000002u)
#define ENUM_IO_SLEEP_WAKE_CFG_SLPWK_CFG_WUS_WAKEUP_IRQ_CONF_WAIT_SEL_SLPWK_IRQ_CONF_WAIT_SEL3 (0x00000003u)

#define BITP_IO_SLEEP_WAKE_CFG_SLPWK_FAILSAFE_SLEEP_EN                         (12u)
#define BITL_IO_SLEEP_WAKE_CFG_SLPWK_FAILSAFE_SLEEP_EN                         (1u)
#define BITM_IO_SLEEP_WAKE_CFG_SLPWK_FAILSAFE_SLEEP_EN                         (0x1000u)
#define ENUM_IO_SLEEP_WAKE_CFG_SLPWK_FAILSAFE_SLEEP_EN_DISABLED                (0x00000000u)
#define ENUM_IO_SLEEP_WAKE_CFG_SLPWK_FAILSAFE_SLEEP_EN_ENABLED                 (0x00000001u)

/* Register Name        : SLEEPWAKE_CMD
 * Register Addr        : 0xC810u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_SLEEPWAKE_CMD_ADDR                                                  (0xC810u)
#define IO_SLEEPWAKE_CMD_RESET_VAL                                             (0x00000000u)
#define IO_SLEEPWAKE_CMD_MMS                                                   (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | SLPWK_CMD_GOTO_SLEEP     | Sleep Wake command go to sleep    | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | SLPWK_CMD_GOTO_STANDBY   | Sleep Wake command go to standby  | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 2     | SLPWK_CMD_SEND_WUS       | Sleep Wake command send wake up   | 0x00000000  |
 * |       |                          | sequence                          |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_SLEEPWAKE_CMD_SLPWK_CMD_GOTO_SLEEP                             (0u)
#define BITL_IO_SLEEPWAKE_CMD_SLPWK_CMD_GOTO_SLEEP                             (1u)
#define BITM_IO_SLEEPWAKE_CMD_SLPWK_CMD_GOTO_SLEEP                             (0x01u)
#define ENUM_IO_SLEEPWAKE_CMD_SLPWK_CMD_GOTO_SLEEP_INACTIVE                    (0x00000000u)
#define ENUM_IO_SLEEPWAKE_CMD_SLPWK_CMD_GOTO_SLEEP_TRIGGER                     (0x00000001u)

#define BITP_IO_SLEEPWAKE_CMD_SLPWK_CMD_GOTO_STANDBY                           (1u)
#define BITL_IO_SLEEPWAKE_CMD_SLPWK_CMD_GOTO_STANDBY                           (1u)
#define BITM_IO_SLEEPWAKE_CMD_SLPWK_CMD_GOTO_STANDBY                           (0x02u)
#define ENUM_IO_SLEEPWAKE_CMD_SLPWK_CMD_GOTO_STANDBY_INACTIVE                  (0x00000000u)
#define ENUM_IO_SLEEPWAKE_CMD_SLPWK_CMD_GOTO_STANDBY_TRIGGER                   (0x00000001u)

#define BITP_IO_SLEEPWAKE_CMD_SLPWK_CMD_SEND_WUS                               (2u)
#define BITL_IO_SLEEPWAKE_CMD_SLPWK_CMD_SEND_WUS                               (1u)
#define BITM_IO_SLEEPWAKE_CMD_SLPWK_CMD_SEND_WUS                               (0x04u)
#define ENUM_IO_SLEEPWAKE_CMD_SLPWK_CMD_SEND_WUS_INACTIVE                      (0x00000000u)
#define ENUM_IO_SLEEPWAKE_CMD_SLPWK_CMD_SEND_WUS_TRIGGER                       (0x00000001u)

/* Register Name        : SLEEPWAKE_STATUS
 * Register Addr        : 0xC811u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_SLEEPWAKE_STATUS_ADDR                                               (0xC811u)
#define IO_SLEEPWAKE_STATUS_RESET_VAL                                          (0x00000000u)
#define IO_SLEEPWAKE_STATUS_MMS                                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | SLPWK_RB_AWAKE           | Sleep Wake controller is resting  | 0x00000000  |
 * |       |                          | in awake state                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | SLPWK_RB_FAILED_SLEEP    | Sleep Wake controller failed to   | 0x00000000  |
 * |       |                          | enter sleep                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 2     | SLPWK_RB_FAILED_STANDBY  | Sleep Wake controller failed to   | 0x00000000  |
 * |       |                          | enter standby                     |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 3     | slpwk_standby_return_is_p| Sleep Wake controller exited      | 0x00000000  |
 * |       |                          | standby due to WAKE pin           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 4     | slpwk_standby_return_is_w| Sleep Wake controller exited      | 0x00000000  |
 * |       |                          | standby due to WUD                |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 5     | SLPWK_RB_WUP_COL         | Sleep Wake detected a collision   | 0x00000000  |
 * |       |                          | during the Wake-Up Pulse (WUP)    |             |
 * |       |                          | transmission. Value is kept       |             |
 * |       |                          | until a new WUP is requested      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 6     | SLPWK_SUSPEND_DETECTED   | Sleep Wake suspend detected       | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_SLEEPWAKE_STATUS_SLPWK_RB_AWAKE                                (0u)
#define BITL_IO_SLEEPWAKE_STATUS_SLPWK_RB_AWAKE                                (1u)
#define BITM_IO_SLEEPWAKE_STATUS_SLPWK_RB_AWAKE                                (0x01u)
#define ENUM_IO_SLEEPWAKE_STATUS_SLPWK_RB_AWAKE_NOT_TRIGGERED                  (0x00000000u)
#define ENUM_IO_SLEEPWAKE_STATUS_SLPWK_RB_AWAKE_TRIGGERED                      (0x00000001u)

#define BITP_IO_SLEEPWAKE_STATUS_SLPWK_RB_FAILED_SLEEP                         (1u)
#define BITL_IO_SLEEPWAKE_STATUS_SLPWK_RB_FAILED_SLEEP                         (1u)
#define BITM_IO_SLEEPWAKE_STATUS_SLPWK_RB_FAILED_SLEEP                         (0x02u)
#define ENUM_IO_SLEEPWAKE_STATUS_SLPWK_RB_FAILED_SLEEP_NOT_TRIGGERED           (0x00000000u)
#define ENUM_IO_SLEEPWAKE_STATUS_SLPWK_RB_FAILED_SLEEP_TRIGGERED               (0x00000001u)

#define BITP_IO_SLEEPWAKE_STATUS_SLPWK_RB_FAILED_STANDBY                       (2u)
#define BITL_IO_SLEEPWAKE_STATUS_SLPWK_RB_FAILED_STANDBY                       (1u)
#define BITM_IO_SLEEPWAKE_STATUS_SLPWK_RB_FAILED_STANDBY                       (0x04u)
#define ENUM_IO_SLEEPWAKE_STATUS_SLPWK_RB_FAILED_STANDBY_NOT_TRIGGERED         (0x00000000u)
#define ENUM_IO_SLEEPWAKE_STATUS_SLPWK_RB_FAILED_STANDBY_TRIGGERED             (0x00000001u)

#define BITP_IO_SLEEPWAKE_STATUS_SLPWK_STANDBY_RETURN_IS_PIN                   (3u)
#define BITL_IO_SLEEPWAKE_STATUS_SLPWK_STANDBY_RETURN_IS_PIN                   (1u)
#define BITM_IO_SLEEPWAKE_STATUS_SLPWK_STANDBY_RETURN_IS_PIN                   (0x08u)
#define ENUM_IO_SLEEPWAKE_STATUS_SLPWK_STANDBY_RETURN_IS_PIN_NOT_TRIGGERED     (0x00000000u)
#define ENUM_IO_SLEEPWAKE_STATUS_SLPWK_STANDBY_RETURN_IS_PIN_TRIGGERED         (0x00000001u)

#define BITP_IO_SLEEPWAKE_STATUS_SLPWK_STANDBY_RETURN_IS_WUD                   (4u)
#define BITL_IO_SLEEPWAKE_STATUS_SLPWK_STANDBY_RETURN_IS_WUD                   (1u)
#define BITM_IO_SLEEPWAKE_STATUS_SLPWK_STANDBY_RETURN_IS_WUD                   (0x10u)
#define ENUM_IO_SLEEPWAKE_STATUS_SLPWK_STANDBY_RETURN_IS_WUD_NOT_TRIGGERED     (0x00000000u)
#define ENUM_IO_SLEEPWAKE_STATUS_SLPWK_STANDBY_RETURN_IS_WUD_TRIGGERED         (0x00000001u)

#define BITP_IO_SLEEPWAKE_STATUS_SLPWK_RB_WUP_COL                              (5u)
#define BITL_IO_SLEEPWAKE_STATUS_SLPWK_RB_WUP_COL                              (1u)
#define BITM_IO_SLEEPWAKE_STATUS_SLPWK_RB_WUP_COL                              (0x20u)
#define ENUM_IO_SLEEPWAKE_STATUS_SLPWK_RB_WUP_COL_NOT_TRIGGERED                (0x00000000u)
#define ENUM_IO_SLEEPWAKE_STATUS_SLPWK_RB_WUP_COL_TRIGGERED                    (0x00000001u)

#define BITP_IO_SLEEPWAKE_STATUS_SLPWK_SUSPEND_DETECTED                        (6u)
#define BITL_IO_SLEEPWAKE_STATUS_SLPWK_SUSPEND_DETECTED                        (1u)
#define BITM_IO_SLEEPWAKE_STATUS_SLPWK_SUSPEND_DETECTED                        (0x40u)
#define ENUM_IO_SLEEPWAKE_STATUS_SLPWK_SUSPEND_DETECTED_NOT_TRIGGERED          (0x00000000u)
#define ENUM_IO_SLEEPWAKE_STATUS_SLPWK_SUSPEND_DETECTED_TRIGGERED              (0x00000001u)

/* Register Name        : BOOTLOADER_RB_8
 * Register Addr        : 0xC813u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_BOOTLOADER_RB_8_ADDR                                                (0xC813u)
#define IO_BOOTLOADER_RB_8_RESET_VAL                                           (0x00000000u)
#define IO_BOOTLOADER_RB_8_MMS                                                 (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | DEVICE_ID                | User identifier for the device    | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_BOOTLOADER_RB_8_DEVICE_ID                                      (0u)
#define BITL_IO_BOOTLOADER_RB_8_DEVICE_ID                                      (16u)
#define BITM_IO_BOOTLOADER_RB_8_DEVICE_ID                                      (0x0000FFFFu)

/* Register Name        : BOOTLOADER_RB_9
 * Register Addr        : 0xC814u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_BOOTLOADER_RB_9_ADDR                                                (0xC814u)
#define IO_BOOTLOADER_RB_9_RESET_VAL                                           (0x00000000u)
#define IO_BOOTLOADER_RB_9_MMS                                                 (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | DEVICE_VERSION           | User version for the device       | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_BOOTLOADER_RB_9_DEVICE_VERSION                                 (0u)
#define BITL_IO_BOOTLOADER_RB_9_DEVICE_VERSION                                 (8u)
#define BITM_IO_BOOTLOADER_RB_9_DEVICE_VERSION                                 (0x000000FFu)

/* Register Name        : BOOTLOADER_RB_10
 * Register Addr        : 0xC815u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_BOOTLOADER_RB_10_ADDR                                               (0xC815u)
#define IO_BOOTLOADER_RB_10_RESET_VAL                                          (0x00000000u)
#define IO_BOOTLOADER_RB_10_MMS                                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | PHY_IDENTIFIER_0         | Bootloader PHY identifier LSBs    | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_BOOTLOADER_RB_10_PHY_IDENTIFIER_0                              (0u)
#define BITL_IO_BOOTLOADER_RB_10_PHY_IDENTIFIER_0                              (16u)
#define BITM_IO_BOOTLOADER_RB_10_PHY_IDENTIFIER_0                              (0x0000FFFFu)

/* Register Name        : BOOTLOADER_RB_11
 * Register Addr        : 0xC816u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_BOOTLOADER_RB_11_ADDR                                               (0xC816u)
#define IO_BOOTLOADER_RB_11_RESET_VAL                                          (0x00000000u)
#define IO_BOOTLOADER_RB_11_MMS                                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | PHY_IDENTIFIER_1         | Bootloader PHY identifier         | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_BOOTLOADER_RB_11_PHY_IDENTIFIER_1                              (0u)
#define BITL_IO_BOOTLOADER_RB_11_PHY_IDENTIFIER_1                              (16u)
#define BITM_IO_BOOTLOADER_RB_11_PHY_IDENTIFIER_1                              (0x0000FFFFu)

/* Register Name        : BOOTLOADER_RB_12
 * Register Addr        : 0xC817u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_BOOTLOADER_RB_12_ADDR                                               (0xC817u)
#define IO_BOOTLOADER_RB_12_RESET_VAL                                          (0x00000000u)
#define IO_BOOTLOADER_RB_12_MMS                                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | PHY_IDENTIFIER_2         | Bootloader PHY identifier MSBs    | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_BOOTLOADER_RB_12_PHY_IDENTIFIER_2                              (0u)
#define BITL_IO_BOOTLOADER_RB_12_PHY_IDENTIFIER_2                              (16u)
#define BITM_IO_BOOTLOADER_RB_12_PHY_IDENTIFIER_2                              (0x0000FFFFu)

/* Register Name        : BOOTLOADER_RB_13
 * Register Addr        : 0xC818u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_BOOTLOADER_RB_13_ADDR                                               (0xC818u)
#define IO_BOOTLOADER_RB_13_RESET_VAL                                          (0x00000000u)
#define IO_BOOTLOADER_RB_13_MMS                                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | OEM_DATA_0               | Bootloader OEM data               | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_BOOTLOADER_RB_13_OEM_DATA_0                                    (0u)
#define BITL_IO_BOOTLOADER_RB_13_OEM_DATA_0                                    (16u)
#define BITM_IO_BOOTLOADER_RB_13_OEM_DATA_0                                    (0x0000FFFFu)

/* Register Name        : BOOTLOADER_RB_14
 * Register Addr        : 0xC819u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_BOOTLOADER_RB_14_ADDR                                               (0xC819u)
#define IO_BOOTLOADER_RB_14_RESET_VAL                                          (0x00000000u)
#define IO_BOOTLOADER_RB_14_MMS                                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | OEM_DATA_1               | Bootloader OEM data               | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_BOOTLOADER_RB_14_OEM_DATA_1                                    (0u)
#define BITL_IO_BOOTLOADER_RB_14_OEM_DATA_1                                    (16u)
#define BITM_IO_BOOTLOADER_RB_14_OEM_DATA_1                                    (0x0000FFFFu)

/* Register Name        : BOOTLOADER_RB_15
 * Register Addr        : 0xC81Au
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_BOOTLOADER_RB_15_ADDR                                               (0xC81Au)
#define IO_BOOTLOADER_RB_15_RESET_VAL                                          (0x00000000u)
#define IO_BOOTLOADER_RB_15_MMS                                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | OEM_DATA_2               | Bootloader OEM data               | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_BOOTLOADER_RB_15_OEM_DATA_2                                    (0u)
#define BITL_IO_BOOTLOADER_RB_15_OEM_DATA_2                                    (16u)
#define BITM_IO_BOOTLOADER_RB_15_OEM_DATA_2                                    (0x0000FFFFu)

/* Register Name        : BOOTLOADER_RB_16
 * Register Addr        : 0xC81Bu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_BOOTLOADER_RB_16_ADDR                                               (0xC81Bu)
#define IO_BOOTLOADER_RB_16_RESET_VAL                                          (0x00000000u)
#define IO_BOOTLOADER_RB_16_MMS                                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | OEM_DATA_3               | Bootloader OEM data               | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_BOOTLOADER_RB_16_OEM_DATA_3                                    (0u)
#define BITL_IO_BOOTLOADER_RB_16_OEM_DATA_3                                    (16u)
#define BITM_IO_BOOTLOADER_RB_16_OEM_DATA_3                                    (0x0000FFFFu)

/* Register Name        : BOOTLOADER_RB_17
 * Register Addr        : 0xC81Cu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_BOOTLOADER_RB_17_ADDR                                               (0xC81Cu)
#define IO_BOOTLOADER_RB_17_RESET_VAL                                          (0x00000000u)
#define IO_BOOTLOADER_RB_17_MMS                                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | OEM_DATA_4               | Bootloader OEM data               | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_BOOTLOADER_RB_17_OEM_DATA_4                                    (0u)
#define BITL_IO_BOOTLOADER_RB_17_OEM_DATA_4                                    (16u)
#define BITM_IO_BOOTLOADER_RB_17_OEM_DATA_4                                    (0x0000FFFFu)

/* Register Name        : BOOTLOADER_RB_18
 * Register Addr        : 0xC81Du
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_BOOTLOADER_RB_18_ADDR                                               (0xC81Du)
#define IO_BOOTLOADER_RB_18_RESET_VAL                                          (0x00000000u)
#define IO_BOOTLOADER_RB_18_MMS                                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | OEM_DATA_5               | Bootloader OEM data               | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_BOOTLOADER_RB_18_OEM_DATA_5                                    (0u)
#define BITL_IO_BOOTLOADER_RB_18_OEM_DATA_5                                    (16u)
#define BITM_IO_BOOTLOADER_RB_18_OEM_DATA_5                                    (0x0000FFFFu)

/* Register Name        : BOOTLOADER_RB_19
 * Register Addr        : 0xC81Eu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_BOOTLOADER_RB_19_ADDR                                               (0xC81Eu)
#define IO_BOOTLOADER_RB_19_RESET_VAL                                          (0x00000000u)
#define IO_BOOTLOADER_RB_19_MMS                                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 13-00 | OEM_DATA_6               | Bootloader OEM data               | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_BOOTLOADER_RB_19_OEM_DATA_6                                    (0u)
#define BITL_IO_BOOTLOADER_RB_19_OEM_DATA_6                                    (14u)
#define BITM_IO_BOOTLOADER_RB_19_OEM_DATA_6                                    (0x00003FFFu)

/* Register Name        : BOOTLOADER_RB_20
 * Register Addr        : 0xC81Fu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_BOOTLOADER_RB_20_ADDR                                               (0xC81Fu)
#define IO_BOOTLOADER_RB_20_RESET_VAL                                          (0x00000000u)
#define IO_BOOTLOADER_RB_20_MMS                                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | MANUFACTURER_DATA_0      | Bootloader manufacturer data      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_BOOTLOADER_RB_20_MANUFACTURER_DATA_0                           (0u)
#define BITL_IO_BOOTLOADER_RB_20_MANUFACTURER_DATA_0                           (16u)
#define BITM_IO_BOOTLOADER_RB_20_MANUFACTURER_DATA_0                           (0x0000FFFFu)

/* Register Name        : BOOTLOADER_RB_21
 * Register Addr        : 0xC820u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_BOOTLOADER_RB_21_ADDR                                               (0xC820u)
#define IO_BOOTLOADER_RB_21_RESET_VAL                                          (0x00000000u)
#define IO_BOOTLOADER_RB_21_MMS                                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | MANUFACTURER_DATA_1      | Bootloader manufacturer data      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_BOOTLOADER_RB_21_MANUFACTURER_DATA_1                           (0u)
#define BITL_IO_BOOTLOADER_RB_21_MANUFACTURER_DATA_1                           (16u)
#define BITM_IO_BOOTLOADER_RB_21_MANUFACTURER_DATA_1                           (0x0000FFFFu)

/* Register Name        : BOOTLOADER_RB_22
 * Register Addr        : 0xC821u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_BOOTLOADER_RB_22_ADDR                                               (0xC821u)
#define IO_BOOTLOADER_RB_22_RESET_VAL                                          (0x00000000u)
#define IO_BOOTLOADER_RB_22_MMS                                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | MANUFACTURER_DATA_2      | Bootloader manufacturer data      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_BOOTLOADER_RB_22_MANUFACTURER_DATA_2                           (0u)
#define BITL_IO_BOOTLOADER_RB_22_MANUFACTURER_DATA_2                           (16u)
#define BITM_IO_BOOTLOADER_RB_22_MANUFACTURER_DATA_2                           (0x0000FFFFu)

/* Register Name        : BOOTLOADER_RB_23
 * Register Addr        : 0xC822u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_BOOTLOADER_RB_23_ADDR                                               (0xC822u)
#define IO_BOOTLOADER_RB_23_RESET_VAL                                          (0x00000000u)
#define IO_BOOTLOADER_RB_23_MMS                                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | MANUFACTURER_DATA_3      | Bootloader manufacturer data      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_BOOTLOADER_RB_23_MANUFACTURER_DATA_3                           (0u)
#define BITL_IO_BOOTLOADER_RB_23_MANUFACTURER_DATA_3                           (16u)
#define BITM_IO_BOOTLOADER_RB_23_MANUFACTURER_DATA_3                           (0x0000FFFFu)

/* Register Name        : BOOTLOADER_RB_24
 * Register Addr        : 0xC823u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_BOOTLOADER_RB_24_ADDR                                               (0xC823u)
#define IO_BOOTLOADER_RB_24_RESET_VAL                                          (0x00000000u)
#define IO_BOOTLOADER_RB_24_MMS                                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | MANUFACTURER_DATA_4      | Bootloader manufacturer data      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_BOOTLOADER_RB_24_MANUFACTURER_DATA_4                           (0u)
#define BITL_IO_BOOTLOADER_RB_24_MANUFACTURER_DATA_4                           (16u)
#define BITM_IO_BOOTLOADER_RB_24_MANUFACTURER_DATA_4                           (0x0000FFFFu)

/* Register Name        : BOOTLOADER_RB_25
 * Register Addr        : 0xC824u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_BOOTLOADER_RB_25_ADDR                                               (0xC824u)
#define IO_BOOTLOADER_RB_25_RESET_VAL                                          (0x00000000u)
#define IO_BOOTLOADER_RB_25_MMS                                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | MANUFACTURER_DATA_5      | Bootloader manufacturer data      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_BOOTLOADER_RB_25_MANUFACTURER_DATA_5                           (0u)
#define BITL_IO_BOOTLOADER_RB_25_MANUFACTURER_DATA_5                           (16u)
#define BITM_IO_BOOTLOADER_RB_25_MANUFACTURER_DATA_5                           (0x0000FFFFu)

/* Register Name        : BOOTLOADER_RB_26
 * Register Addr        : 0xC825u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_BOOTLOADER_RB_26_ADDR                                               (0xC825u)
#define IO_BOOTLOADER_RB_26_RESET_VAL                                          (0x00000000u)
#define IO_BOOTLOADER_RB_26_MMS                                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | MANUFACTURER_DATA_6      | Bootloader manufacturer data      | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_BOOTLOADER_RB_26_MANUFACTURER_DATA_6                           (0u)
#define BITL_IO_BOOTLOADER_RB_26_MANUFACTURER_DATA_6                           (16u)
#define BITM_IO_BOOTLOADER_RB_26_MANUFACTURER_DATA_6                           (0x0000FFFFu)

/* Register Name        : DEBUG_DATA_CONTROL_0
 * Register Addr        : 0xC840u
 * Register Reset Value : 0x00007F7Fu
 * Register MMS         : 0xAu
 */

#define IO_DEBUG_DATA_CONTROL_0_ADDR                                           (0xC840u)
#define IO_DEBUG_DATA_CONTROL_0_RESET_VAL                                      (0x00007F7Fu)
#define IO_DEBUG_DATA_CONTROL_0_MMS                                            (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 06-00 | DBG_DATA_SEL_0           | Debug Data Selection for the      | 0x0000007f  |
 * |       |                          | Sensor-Actuator Interface Pin 0   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14-08 | DBG_DATA_SEL_1           | Debug Data Selection for the      | 0x0000007f  |
 * |       |                          | Sensor-Actuator Interface Pin 1   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_DEBUG_DATA_CONTROL_0_DBG_DATA_SEL_0                            (0u)
#define BITL_IO_DEBUG_DATA_CONTROL_0_DBG_DATA_SEL_0                            (7u)
#define BITM_IO_DEBUG_DATA_CONTROL_0_DBG_DATA_SEL_0                            (0x0000007Fu)
#define ENUM_IO_DEBUG_DATA_CONTROL_0_DBG_DATA_SEL_0_ENUM030                    (0x0000001Eu)
#define ENUM_IO_DEBUG_DATA_CONTROL_0_DBG_DATA_SEL_0_ENUM055                    (0x00000037u)

#define BITP_IO_DEBUG_DATA_CONTROL_0_DBG_DATA_SEL_1                            (8u)
#define BITL_IO_DEBUG_DATA_CONTROL_0_DBG_DATA_SEL_1                            (7u)
#define BITM_IO_DEBUG_DATA_CONTROL_0_DBG_DATA_SEL_1                            (0x00007F00u)
#define ENUM_IO_DEBUG_DATA_CONTROL_0_DBG_DATA_SEL_1_ENUM030                    (0x0000001Eu)
#define ENUM_IO_DEBUG_DATA_CONTROL_0_DBG_DATA_SEL_1_ENUM055                    (0x00000037u)

/* Register Name        : DEBUG_DATA_CONTROL_1
 * Register Addr        : 0xC841u
 * Register Reset Value : 0x00007F7Fu
 * Register MMS         : 0xAu
 */

#define IO_DEBUG_DATA_CONTROL_1_ADDR                                           (0xC841u)
#define IO_DEBUG_DATA_CONTROL_1_RESET_VAL                                      (0x00007F7Fu)
#define IO_DEBUG_DATA_CONTROL_1_MMS                                            (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 06-00 | DBG_DATA_SEL_2           | Debug Data Selection for the      | 0x0000007f  |
 * |       |                          | Sensor-Actuator Interface Pin 2   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14-08 | DBG_DATA_SEL_3           | Debug Data Selection for the      | 0x0000007f  |
 * |       |                          | Sensor-Actuator Interface Pin 3   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_DEBUG_DATA_CONTROL_1_DBG_DATA_SEL_2                            (0u)
#define BITL_IO_DEBUG_DATA_CONTROL_1_DBG_DATA_SEL_2                            (7u)
#define BITM_IO_DEBUG_DATA_CONTROL_1_DBG_DATA_SEL_2                            (0x0000007Fu)
#define ENUM_IO_DEBUG_DATA_CONTROL_1_DBG_DATA_SEL_2_ENUM030                    (0x0000001Eu)
#define ENUM_IO_DEBUG_DATA_CONTROL_1_DBG_DATA_SEL_2_ENUM055                    (0x00000037u)

#define BITP_IO_DEBUG_DATA_CONTROL_1_DBG_DATA_SEL_3                            (8u)
#define BITL_IO_DEBUG_DATA_CONTROL_1_DBG_DATA_SEL_3                            (7u)
#define BITM_IO_DEBUG_DATA_CONTROL_1_DBG_DATA_SEL_3                            (0x00007F00u)
#define ENUM_IO_DEBUG_DATA_CONTROL_1_DBG_DATA_SEL_3_ENUM030                    (0x0000001Eu)
#define ENUM_IO_DEBUG_DATA_CONTROL_1_DBG_DATA_SEL_3_ENUM055                    (0x00000037u)

/* Register Name        : DEBUG_DATA_CONTROL_2
 * Register Addr        : 0xC842u
 * Register Reset Value : 0x00007F7Fu
 * Register MMS         : 0xAu
 */

#define IO_DEBUG_DATA_CONTROL_2_ADDR                                           (0xC842u)
#define IO_DEBUG_DATA_CONTROL_2_RESET_VAL                                      (0x00007F7Fu)
#define IO_DEBUG_DATA_CONTROL_2_MMS                                            (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 06-00 | DBG_DATA_SEL_4           | Debug Data Selection for the      | 0x0000007f  |
 * |       |                          | Sensor-Actuator Interface Pin 4   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14-08 | DBG_DATA_SEL_5           | Debug Data Selection for the      | 0x0000007f  |
 * |       |                          | Sensor-Actuator Interface Pin 5   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_DEBUG_DATA_CONTROL_2_DBG_DATA_SEL_4                            (0u)
#define BITL_IO_DEBUG_DATA_CONTROL_2_DBG_DATA_SEL_4                            (7u)
#define BITM_IO_DEBUG_DATA_CONTROL_2_DBG_DATA_SEL_4                            (0x0000007Fu)
#define ENUM_IO_DEBUG_DATA_CONTROL_2_DBG_DATA_SEL_4_ENUM030                    (0x0000001Eu)
#define ENUM_IO_DEBUG_DATA_CONTROL_2_DBG_DATA_SEL_4_ENUM055                    (0x00000037u)

#define BITP_IO_DEBUG_DATA_CONTROL_2_DBG_DATA_SEL_5                            (8u)
#define BITL_IO_DEBUG_DATA_CONTROL_2_DBG_DATA_SEL_5                            (7u)
#define BITM_IO_DEBUG_DATA_CONTROL_2_DBG_DATA_SEL_5                            (0x00007F00u)
#define ENUM_IO_DEBUG_DATA_CONTROL_2_DBG_DATA_SEL_5_ENUM030                    (0x0000001Eu)
#define ENUM_IO_DEBUG_DATA_CONTROL_2_DBG_DATA_SEL_5_ENUM055                    (0x00000037u)

/* Register Name        : DEBUG_DATA_CONTROL_3
 * Register Addr        : 0xC843u
 * Register Reset Value : 0x00007F7Fu
 * Register MMS         : 0xAu
 */

#define IO_DEBUG_DATA_CONTROL_3_ADDR                                           (0xC843u)
#define IO_DEBUG_DATA_CONTROL_3_RESET_VAL                                      (0x00007F7Fu)
#define IO_DEBUG_DATA_CONTROL_3_MMS                                            (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 06-00 | DBG_DATA_SEL_6           | Debug Data Selection for the      | 0x0000007f  |
 * |       |                          | Sensor-Actuator Interface Pin 6   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14-08 | DBG_DATA_SEL_7           | Debug Data Selection for the      | 0x0000007f  |
 * |       |                          | Sensor-Actuator Interface Pin 7   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_DEBUG_DATA_CONTROL_3_DBG_DATA_SEL_6                            (0u)
#define BITL_IO_DEBUG_DATA_CONTROL_3_DBG_DATA_SEL_6                            (7u)
#define BITM_IO_DEBUG_DATA_CONTROL_3_DBG_DATA_SEL_6                            (0x0000007Fu)
#define ENUM_IO_DEBUG_DATA_CONTROL_3_DBG_DATA_SEL_6_ENUM030                    (0x0000001Eu)
#define ENUM_IO_DEBUG_DATA_CONTROL_3_DBG_DATA_SEL_6_ENUM055                    (0x00000037u)

#define BITP_IO_DEBUG_DATA_CONTROL_3_DBG_DATA_SEL_7                            (8u)
#define BITL_IO_DEBUG_DATA_CONTROL_3_DBG_DATA_SEL_7                            (7u)
#define BITM_IO_DEBUG_DATA_CONTROL_3_DBG_DATA_SEL_7                            (0x00007F00u)
#define ENUM_IO_DEBUG_DATA_CONTROL_3_DBG_DATA_SEL_7_ENUM030                    (0x0000001Eu)
#define ENUM_IO_DEBUG_DATA_CONTROL_3_DBG_DATA_SEL_7_ENUM055                    (0x00000037u)

/* Register Name        : DEBUG_DATA_CONTROL_4
 * Register Addr        : 0xC844u
 * Register Reset Value : 0x00007F7Fu
 * Register MMS         : 0xAu
 */

#define IO_DEBUG_DATA_CONTROL_4_ADDR                                           (0xC844u)
#define IO_DEBUG_DATA_CONTROL_4_RESET_VAL                                      (0x00007F7Fu)
#define IO_DEBUG_DATA_CONTROL_4_MMS                                            (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 06-00 | DBG_DATA_SEL_8           | Debug Data Selection for the      | 0x0000007f  |
 * |       |                          | Sensor-Actuator Interface Pin 8   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14-08 | DBG_DATA_SEL_9           | Debug Data Selection for the      | 0x0000007f  |
 * |       |                          | Sensor-Actuator Interface Pin 9   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_DEBUG_DATA_CONTROL_4_DBG_DATA_SEL_8                            (0u)
#define BITL_IO_DEBUG_DATA_CONTROL_4_DBG_DATA_SEL_8                            (7u)
#define BITM_IO_DEBUG_DATA_CONTROL_4_DBG_DATA_SEL_8                            (0x0000007Fu)
#define ENUM_IO_DEBUG_DATA_CONTROL_4_DBG_DATA_SEL_8_ENUM030                    (0x0000001Eu)
#define ENUM_IO_DEBUG_DATA_CONTROL_4_DBG_DATA_SEL_8_ENUM055                    (0x00000037u)

#define BITP_IO_DEBUG_DATA_CONTROL_4_DBG_DATA_SEL_9                            (8u)
#define BITL_IO_DEBUG_DATA_CONTROL_4_DBG_DATA_SEL_9                            (7u)
#define BITM_IO_DEBUG_DATA_CONTROL_4_DBG_DATA_SEL_9                            (0x00007F00u)
#define ENUM_IO_DEBUG_DATA_CONTROL_4_DBG_DATA_SEL_9_ENUM030                    (0x0000001Eu)
#define ENUM_IO_DEBUG_DATA_CONTROL_4_DBG_DATA_SEL_9_ENUM055                    (0x00000037u)

/* Register Name        : DEBUG_DATA_CONTROL_5
 * Register Addr        : 0xC845u
 * Register Reset Value : 0x00007F7Fu
 * Register MMS         : 0xAu
 */

#define IO_DEBUG_DATA_CONTROL_5_ADDR                                           (0xC845u)
#define IO_DEBUG_DATA_CONTROL_5_RESET_VAL                                      (0x00007F7Fu)
#define IO_DEBUG_DATA_CONTROL_5_MMS                                            (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 06-00 | DBG_DATA_SEL_10          | Debug Data Selection for the      | 0x0000007f  |
 * |       |                          | Sensor-Actuator Interface Pin 10  |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14-08 | DBG_DATA_SEL_11          | Debug Data Selection for the      | 0x0000007f  |
 * |       |                          | Sensor-Actuator Interface Pin 11  |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_DEBUG_DATA_CONTROL_5_DBG_DATA_SEL_10                           (0u)
#define BITL_IO_DEBUG_DATA_CONTROL_5_DBG_DATA_SEL_10                           (7u)
#define BITM_IO_DEBUG_DATA_CONTROL_5_DBG_DATA_SEL_10                           (0x0000007Fu)
#define ENUM_IO_DEBUG_DATA_CONTROL_5_DBG_DATA_SEL_10_ENUM030                   (0x0000001Eu)
#define ENUM_IO_DEBUG_DATA_CONTROL_5_DBG_DATA_SEL_10_ENUM055                   (0x00000037u)

#define BITP_IO_DEBUG_DATA_CONTROL_5_DBG_DATA_SEL_11                           (8u)
#define BITL_IO_DEBUG_DATA_CONTROL_5_DBG_DATA_SEL_11                           (7u)
#define BITM_IO_DEBUG_DATA_CONTROL_5_DBG_DATA_SEL_11                           (0x00007F00u)
#define ENUM_IO_DEBUG_DATA_CONTROL_5_DBG_DATA_SEL_11_ENUM030                   (0x0000001Eu)
#define ENUM_IO_DEBUG_DATA_CONTROL_5_DBG_DATA_SEL_11_ENUM055                   (0x00000037u)

/* Register Name        : MISC_CONTROL
 * Register Addr        : 0xC849u
 * Register Reset Value : 0x00002000u
 * Register MMS         : 0xAu
 */

#define IO_MISC_CONTROL_ADDR                                                   (0xC849u)
#define IO_MISC_CONTROL_RESET_VAL                                              (0x00002000u)
#define IO_MISC_CONTROL_MMS                                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15    | STANDBY_FEATURE_EN       | Disables the device mode          | 0x00000000  |
 * |       |                          | backdoor. A special boot-up       |             |
 * |       |                          | sequence allows the device to     |             |
 * |       |                          | enter backdoor mode, where the    |             |
 * |       |                          | device mode register can be set   |             |
 * |       |                          | to any functional or test mode.   |             |
 * |       |                          | In order to enter the selected    |             |
 * |       |                          | mode, backdoor mode should be     |             |
 * |       |                          | disabled using this bit           |             |
 * |       |                          | (backdoor has priority over most  |             |
 * |       |                          | of other modes). There is a       |             |
 * |       |                          | special feature to allow this     |             |
 * |       |                          | bitfield to be cleared when in    |             |
 * |       |                          | MBIST mode to return to           |             |
 * |       |                          | backdoor.                         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_MISC_CONTROL_STANDBY_FEATURE_EN                                (15u)
#define BITL_IO_MISC_CONTROL_STANDBY_FEATURE_EN                                (1u)
#define BITM_IO_MISC_CONTROL_STANDBY_FEATURE_EN                                (0x8000u)

/* Register Name        : VIH_VIL_READBACKS
 * Register Addr        : 0xC84Du
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_VIH_VIL_READBACKS_ADDR                                              (0xC84Du)
#define IO_VIH_VIL_READBACKS_RESET_VAL                                         (0x00000000u)
#define IO_VIH_VIL_READBACKS_MMS                                               (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-12 | DEVICE_MODE_RB           | Read the internal device          | 0x00000000  |
 * |       |                          | operational mode                  |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_VIH_VIL_READBACKS_DEVICE_MODE_RB                               (12u)
#define BITL_IO_VIH_VIL_READBACKS_DEVICE_MODE_RB                               (4u)
#define BITM_IO_VIH_VIL_READBACKS_DEVICE_MODE_RB                               (0x0000F000u)
#define ENUM_IO_VIH_VIL_READBACKS_DEVICE_MODE_RB_TRISTATE                      (0x00000000u)
#define ENUM_IO_VIH_VIL_READBACKS_DEVICE_MODE_RB_MAC_PHY                       (0x00000003u)

/* Register Name        : IO_GLITCH_REJECT_0
 * Register Addr        : 0xC84Fu
 * Register Reset Value : 0x0000FFFFu
 * Register MMS         : 0xAu
 */

#define IO_IO_GLITCH_REJECT_0_ADDR                                             (0xC84Fu)
#define IO_IO_GLITCH_REJECT_0_RESET_VAL                                        (0x0000FFFFu)
#define IO_IO_GLITCH_REJECT_0_MMS                                              (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 01-00 | io_glitch_reject_filter_0| Selects the reject filter of the  | 0x00000003  |
 * |       |                          | PAD for SA_IF0                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 03-02 | io_glitch_reject_filter_1| Selects the reject filter of the  | 0x00000003  |
 * |       |                          | PAD for SA_IF1                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 05-04 | io_glitch_reject_filter_2| Selects the reject filter of the  | 0x00000003  |
 * |       |                          | PAD for SA_IF2                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 07-06 | io_glitch_reject_filter_3| Selects the reject filter of the  | 0x00000003  |
 * |       |                          | PAD for SA_IF3                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 09-08 | io_glitch_reject_filter_4| Selects the reject filter of the  | 0x00000003  |
 * |       |                          | PAD for SA_IF4                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11-10 | io_glitch_reject_filter_5| Selects the reject filter of the  | 0x00000003  |
 * |       |                          | PAD for SA_IF5                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13-12 | io_glitch_reject_filter_6| Selects the reject filter of the  | 0x00000003  |
 * |       |                          | PAD for SA_IF6                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-14 | io_glitch_reject_filter_7| Selects the reject filter of the  | 0x00000003  |
 * |       |                          | PAD for SA_IF7                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_0                   (0u)
#define BITL_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_0                   (2u)
#define BITM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_0                   (0x00000003u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_0_ENUM000           (0x00000000u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_0_ENUM001           (0x00000001u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_0_ENUM002           (0x00000002u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_0_ENUM003           (0x00000003u)

#define BITP_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_1                   (2u)
#define BITL_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_1                   (2u)
#define BITM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_1                   (0x0000000Cu)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_1_ENUM000           (0x00000000u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_1_ENUM001           (0x00000001u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_1_ENUM002           (0x00000002u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_1_ENUM003           (0x00000003u)

#define BITP_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_2                   (4u)
#define BITL_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_2                   (2u)
#define BITM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_2                   (0x00000030u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_2_ENUM000           (0x00000000u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_2_ENUM001           (0x00000001u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_2_ENUM002           (0x00000002u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_2_ENUM003           (0x00000003u)

#define BITP_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_3                   (6u)
#define BITL_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_3                   (2u)
#define BITM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_3                   (0x000000C0u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_3_ENUM000           (0x00000000u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_3_ENUM001           (0x00000001u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_3_ENUM002           (0x00000002u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_3_ENUM003           (0x00000003u)

#define BITP_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_4                   (8u)
#define BITL_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_4                   (2u)
#define BITM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_4                   (0x00000300u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_4_ENUM000           (0x00000000u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_4_ENUM001           (0x00000001u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_4_ENUM002           (0x00000002u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_4_ENUM003           (0x00000003u)

#define BITP_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_5                   (10u)
#define BITL_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_5                   (2u)
#define BITM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_5                   (0x00000C00u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_5_ENUM000           (0x00000000u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_5_ENUM001           (0x00000001u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_5_ENUM002           (0x00000002u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_5_ENUM003           (0x00000003u)

#define BITP_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_6                   (12u)
#define BITL_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_6                   (2u)
#define BITM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_6                   (0x00003000u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_6_ENUM000           (0x00000000u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_6_ENUM001           (0x00000001u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_6_ENUM002           (0x00000002u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_6_ENUM003           (0x00000003u)

#define BITP_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_7                   (14u)
#define BITL_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_7                   (2u)
#define BITM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_7                   (0x0000C000u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_7_ENUM000           (0x00000000u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_7_ENUM001           (0x00000001u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_7_ENUM002           (0x00000002u)
#define ENUM_IO_IO_GLITCH_REJECT_0_IO_GLITCH_REJECT_FILTER_7_ENUM003           (0x00000003u)

/* Register Name        : IO_GLITCH_REJECT_1
 * Register Addr        : 0xC850u
 * Register Reset Value : 0x0000033Fu
 * Register MMS         : 0xAu
 */

#define IO_IO_GLITCH_REJECT_1_ADDR                                             (0xC850u)
#define IO_IO_GLITCH_REJECT_1_RESET_VAL                                        (0x0000033Fu)
#define IO_IO_GLITCH_REJECT_1_MMS                                              (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 01-00 | io_glitch_reject_filter_8| Selects the reject filter of the  | 0x00000003  |
 * |       |                          | PAD for SA_IF8                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 03-02 | io_glitch_reject_filter_9| Selects the reject filter of the  | 0x00000003  |
 * |       |                          | PAD for SA_IF9                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 05-04 | io_glitch_reject_filter_1| Selects the reject filter of the  | 0x00000003  |
 * |       |                          | PAD for SA_IF10                   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 09-08 | io_glitch_reject_filter_1| Selects the reject filter of the  | 0x00000003  |
 * |       |                          | PAD for SA_IF11                   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_IO_GLITCH_REJECT_1_IO_GLITCH_REJECT_FILTER_8                   (0u)
#define BITL_IO_IO_GLITCH_REJECT_1_IO_GLITCH_REJECT_FILTER_8                   (2u)
#define BITM_IO_IO_GLITCH_REJECT_1_IO_GLITCH_REJECT_FILTER_8                   (0x00000003u)
#define ENUM_IO_IO_GLITCH_REJECT_1_IO_GLITCH_REJECT_FILTER_8_ENUM000           (0x00000000u)
#define ENUM_IO_IO_GLITCH_REJECT_1_IO_GLITCH_REJECT_FILTER_8_ENUM001           (0x00000001u)
#define ENUM_IO_IO_GLITCH_REJECT_1_IO_GLITCH_REJECT_FILTER_8_ENUM002           (0x00000002u)
#define ENUM_IO_IO_GLITCH_REJECT_1_IO_GLITCH_REJECT_FILTER_8_ENUM003           (0x00000003u)

#define BITP_IO_IO_GLITCH_REJECT_1_IO_GLITCH_REJECT_FILTER_9                   (2u)
#define BITL_IO_IO_GLITCH_REJECT_1_IO_GLITCH_REJECT_FILTER_9                   (2u)
#define BITM_IO_IO_GLITCH_REJECT_1_IO_GLITCH_REJECT_FILTER_9                   (0x0000000Cu)
#define ENUM_IO_IO_GLITCH_REJECT_1_IO_GLITCH_REJECT_FILTER_9_ENUM000           (0x00000000u)
#define ENUM_IO_IO_GLITCH_REJECT_1_IO_GLITCH_REJECT_FILTER_9_ENUM001           (0x00000001u)
#define ENUM_IO_IO_GLITCH_REJECT_1_IO_GLITCH_REJECT_FILTER_9_ENUM002           (0x00000002u)
#define ENUM_IO_IO_GLITCH_REJECT_1_IO_GLITCH_REJECT_FILTER_9_ENUM003           (0x00000003u)

#define BITP_IO_IO_GLITCH_REJECT_1_IO_GLITCH_REJECT_FILTER_10                  (4u)
#define BITL_IO_IO_GLITCH_REJECT_1_IO_GLITCH_REJECT_FILTER_10                  (2u)
#define BITM_IO_IO_GLITCH_REJECT_1_IO_GLITCH_REJECT_FILTER_10                  (0x00000030u)
#define ENUM_IO_IO_GLITCH_REJECT_1_IO_GLITCH_REJECT_FILTER_10_ENUM000          (0x00000000u)
#define ENUM_IO_IO_GLITCH_REJECT_1_IO_GLITCH_REJECT_FILTER_10_ENUM001          (0x00000001u)
#define ENUM_IO_IO_GLITCH_REJECT_1_IO_GLITCH_REJECT_FILTER_10_ENUM002          (0x00000002u)
#define ENUM_IO_IO_GLITCH_REJECT_1_IO_GLITCH_REJECT_FILTER_10_ENUM003          (0x00000003u)

#define BITP_IO_IO_GLITCH_REJECT_1_IO_GLITCH_REJECT_FILTER_11                  (8u)
#define BITL_IO_IO_GLITCH_REJECT_1_IO_GLITCH_REJECT_FILTER_11                  (2u)
#define BITM_IO_IO_GLITCH_REJECT_1_IO_GLITCH_REJECT_FILTER_11                  (0x00000300u)
#define ENUM_IO_IO_GLITCH_REJECT_1_IO_GLITCH_REJECT_FILTER_11_ENUM000          (0x00000000u)
#define ENUM_IO_IO_GLITCH_REJECT_1_IO_GLITCH_REJECT_FILTER_11_ENUM001          (0x00000001u)
#define ENUM_IO_IO_GLITCH_REJECT_1_IO_GLITCH_REJECT_FILTER_11_ENUM002          (0x00000002u)
#define ENUM_IO_IO_GLITCH_REJECT_1_IO_GLITCH_REJECT_FILTER_11_ENUM003          (0x00000003u)

/* Register Name        : IO_DRIVE_STRENGTH_0
 * Register Addr        : 0xC851u
 * Register Reset Value : 0x00005555u
 * Register MMS         : 0xAu
 */

#define IO_IO_DRIVE_STRENGTH_0_ADDR                                            (0xC851u)
#define IO_IO_DRIVE_STRENGTH_0_RESET_VAL                                       (0x00005555u)
#define IO_IO_DRIVE_STRENGTH_0_MMS                                             (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 01-00 | IO_DRIVE_STRENGTH_0      | Drive strength setting for        | 0x00000001  |
 * |       |                          | SA_IF0                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 03-02 | IO_DRIVE_STRENGTH_1      | Drive strength setting for        | 0x00000001  |
 * |       |                          | SA_IF1                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 05-04 | IO_DRIVE_STRENGTH_2      | Drive strength setting for        | 0x00000001  |
 * |       |                          | SA_IF2                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 07-06 | IO_DRIVE_STRENGTH_3      | Drive strength setting for        | 0x00000001  |
 * |       |                          | SA_IF3                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 09-08 | IO_DRIVE_STRENGTH_4      | Drive strength setting for        | 0x00000001  |
 * |       |                          | SA_IF4                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11-10 | IO_DRIVE_STRENGTH_5      | Drive strength setting for        | 0x00000001  |
 * |       |                          | SA_IF5                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13-12 | IO_DRIVE_STRENGTH_6      | Drive strength setting for        | 0x00000001  |
 * |       |                          | SA_IF6                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-14 | IO_DRIVE_STRENGTH_7      | Drive strength setting for        | 0x00000001  |
 * |       |                          | SA_IF7                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_0                        (0u)
#define BITL_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_0                        (2u)
#define BITM_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_0                        (0x00000003u)
#define ENUM_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_0_ENUM001                (0x00000001u)
#define ENUM_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_0_ENUM003                (0x00000003u)

#define BITP_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_1                        (2u)
#define BITL_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_1                        (2u)
#define BITM_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_1                        (0x0000000Cu)
#define ENUM_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_1_ENUM001                (0x00000001u)
#define ENUM_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_1_ENUM003                (0x00000003u)

#define BITP_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_2                        (4u)
#define BITL_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_2                        (2u)
#define BITM_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_2                        (0x00000030u)
#define ENUM_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_2_ENUM001                (0x00000001u)
#define ENUM_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_2_ENUM003                (0x00000003u)

#define BITP_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_3                        (6u)
#define BITL_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_3                        (2u)
#define BITM_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_3                        (0x000000C0u)
#define ENUM_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_3_ENUM001                (0x00000001u)
#define ENUM_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_3_ENUM003                (0x00000003u)

#define BITP_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_4                        (8u)
#define BITL_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_4                        (2u)
#define BITM_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_4                        (0x00000300u)
#define ENUM_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_4_ENUM001                (0x00000001u)
#define ENUM_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_4_ENUM003                (0x00000003u)

#define BITP_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_5                        (10u)
#define BITL_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_5                        (2u)
#define BITM_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_5                        (0x00000C00u)
#define ENUM_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_5_ENUM001                (0x00000001u)
#define ENUM_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_5_ENUM003                (0x00000003u)

#define BITP_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_6                        (12u)
#define BITL_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_6                        (2u)
#define BITM_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_6                        (0x00003000u)
#define ENUM_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_6_ENUM001                (0x00000001u)
#define ENUM_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_6_ENUM003                (0x00000003u)

#define BITP_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_7                        (14u)
#define BITL_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_7                        (2u)
#define BITM_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_7                        (0x0000C000u)
#define ENUM_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_7_ENUM001                (0x00000001u)
#define ENUM_IO_IO_DRIVE_STRENGTH_0_IO_DRIVE_STRENGTH_7_ENUM003                (0x00000003u)

/* Register Name        : IO_DRIVE_STRENGTH_1
 * Register Addr        : 0xC852u
 * Register Reset Value : 0x00000055u
 * Register MMS         : 0xAu
 */

#define IO_IO_DRIVE_STRENGTH_1_ADDR                                            (0xC852u)
#define IO_IO_DRIVE_STRENGTH_1_RESET_VAL                                       (0x00000055u)
#define IO_IO_DRIVE_STRENGTH_1_MMS                                             (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 01-00 | IO_DRIVE_STRENGTH_8      | Drive strength setting for        | 0x00000001  |
 * |       |                          | SA_IF8                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 07-06 | IO_DRIVE_STRENGTH_11     | Drive strength setting for        | 0x00000001  |
 * |       |                          | SA_IF11                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_IO_DRIVE_STRENGTH_1_IO_DRIVE_STRENGTH_8                        (0u)
#define BITL_IO_IO_DRIVE_STRENGTH_1_IO_DRIVE_STRENGTH_8                        (2u)
#define BITM_IO_IO_DRIVE_STRENGTH_1_IO_DRIVE_STRENGTH_8                        (0x00000003u)
#define ENUM_IO_IO_DRIVE_STRENGTH_1_IO_DRIVE_STRENGTH_8_ENUM001                (0x00000001u)
#define ENUM_IO_IO_DRIVE_STRENGTH_1_IO_DRIVE_STRENGTH_8_ENUM003                (0x00000003u)

#define BITP_IO_IO_DRIVE_STRENGTH_1_IO_DRIVE_STRENGTH_11                       (6u)
#define BITL_IO_IO_DRIVE_STRENGTH_1_IO_DRIVE_STRENGTH_11                       (2u)
#define BITM_IO_IO_DRIVE_STRENGTH_1_IO_DRIVE_STRENGTH_11                       (0x000000C0u)
#define ENUM_IO_IO_DRIVE_STRENGTH_1_IO_DRIVE_STRENGTH_11_ENUM001               (0x00000001u)
#define ENUM_IO_IO_DRIVE_STRENGTH_1_IO_DRIVE_STRENGTH_11_ENUM003               (0x00000003u)

/* Register Name        : IO_HYSTHERESIS_ENABLE
 * Register Addr        : 0xC853u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_IO_HYSTHERESIS_ENABLE_ADDR                                          (0xC853u)
#define IO_IO_HYSTHERESIS_ENABLE_RESET_VAL                                     (0x00000000u)
#define IO_IO_HYSTHERESIS_ENABLE_MMS                                           (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | IO_HYSTHERESIS_ENABLE_0  | Selects the hysteresis            | 0x00000000  |
 * |       |                          | configuration of the PAD for      |             |
 * |       |                          | SA_IF0                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | IO_HYSTHERESIS_ENABLE_1  | Selects the hysteresis            | 0x00000000  |
 * |       |                          | configuration of the PAD for      |             |
 * |       |                          | SA_IF1                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 2     | IO_HYSTHERESIS_ENABLE_2  | Selects the hysteresis            | 0x00000000  |
 * |       |                          | configuration of the PAD for      |             |
 * |       |                          | SA_IF2                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 3     | IO_HYSTHERESIS_ENABLE_3  | Selects the hysteresis            | 0x00000000  |
 * |       |                          | configuration of the PAD for      |             |
 * |       |                          | SA_IF3                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 4     | IO_HYSTHERESIS_ENABLE_4  | Selects the hysteresis            | 0x00000000  |
 * |       |                          | configuration of the PAD for      |             |
 * |       |                          | SA_IF4                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 5     | IO_HYSTHERESIS_ENABLE_5  | Selects the hysteresis            | 0x00000000  |
 * |       |                          | configuration of the PAD for      |             |
 * |       |                          | SA_IF5                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 6     | IO_HYSTHERESIS_ENABLE_6  | Selects the hysteresis            | 0x00000000  |
 * |       |                          | configuration of the PAD for      |             |
 * |       |                          | SA_IF6                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 7     | IO_HYSTHERESIS_ENABLE_7  | Selects the hysteresis            | 0x00000000  |
 * |       |                          | configuration of the PAD for      |             |
 * |       |                          | SA_IF7                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 8     | IO_HYSTHERESIS_ENABLE_8  | Selects the hysteresis            | 0x00000000  |
 * |       |                          | configuration of the PAD for      |             |
 * |       |                          | SA_IF8                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 9     | IO_HYSTHERESIS_ENABLE_9  | Selects the hysteresis            | 0x00000000  |
 * |       |                          | configuration of the PAD for      |             |
 * |       |                          | SA_IF9                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 10    | IO_HYSTHERESIS_ENABLE_10 | Selects the hysteresis            | 0x00000000  |
 * |       |                          | configuration of the PAD for      |             |
 * |       |                          | SA_IF10                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11    | IO_HYSTHERESIS_ENABLE_11 | Selects the hysteresis            | 0x00000000  |
 * |       |                          | configuration of the PAD for      |             |
 * |       |                          | SA_IF11                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_0                  (0u)
#define BITL_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_0                  (1u)
#define BITM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_0                  (0x01u)
#define ENUM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_0_ENUM000          (0x00000000u)
#define ENUM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_0_ENUM001          (0x00000001u)

#define BITP_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_1                  (1u)
#define BITL_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_1                  (1u)
#define BITM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_1                  (0x02u)
#define ENUM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_1_ENUM000          (0x00000000u)
#define ENUM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_1_ENUM001          (0x00000001u)

#define BITP_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_2                  (2u)
#define BITL_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_2                  (1u)
#define BITM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_2                  (0x04u)
#define ENUM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_2_ENUM000          (0x00000000u)
#define ENUM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_2_ENUM001          (0x00000001u)

#define BITP_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_3                  (3u)
#define BITL_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_3                  (1u)
#define BITM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_3                  (0x08u)
#define ENUM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_3_ENUM000          (0x00000000u)
#define ENUM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_3_ENUM001          (0x00000001u)

#define BITP_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_4                  (4u)
#define BITL_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_4                  (1u)
#define BITM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_4                  (0x10u)
#define ENUM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_4_ENUM000          (0x00000000u)
#define ENUM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_4_ENUM001          (0x00000001u)

#define BITP_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_5                  (5u)
#define BITL_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_5                  (1u)
#define BITM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_5                  (0x20u)
#define ENUM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_5_ENUM000          (0x00000000u)
#define ENUM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_5_ENUM001          (0x00000001u)

#define BITP_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_6                  (6u)
#define BITL_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_6                  (1u)
#define BITM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_6                  (0x40u)
#define ENUM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_6_ENUM000          (0x00000000u)
#define ENUM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_6_ENUM001          (0x00000001u)

#define BITP_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_7                  (7u)
#define BITL_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_7                  (1u)
#define BITM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_7                  (0x80u)
#define ENUM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_7_ENUM000          (0x00000000u)
#define ENUM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_7_ENUM001          (0x00000001u)

#define BITP_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_8                  (8u)
#define BITL_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_8                  (1u)
#define BITM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_8                  (0x0100u)
#define ENUM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_8_ENUM000          (0x00000000u)
#define ENUM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_8_ENUM001          (0x00000001u)

#define BITP_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_9                  (9u)
#define BITL_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_9                  (1u)
#define BITM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_9                  (0x0200u)
#define ENUM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_9_ENUM000          (0x00000000u)
#define ENUM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_9_ENUM001          (0x00000001u)

#define BITP_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_10                 (10u)
#define BITL_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_10                 (1u)
#define BITM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_10                 (0x0400u)
#define ENUM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_10_ENUM000         (0x00000000u)
#define ENUM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_10_ENUM001         (0x00000001u)

#define BITP_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_11                 (11u)
#define BITL_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_11                 (1u)
#define BITM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_11                 (0x0800u)
#define ENUM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_11_ENUM000         (0x00000000u)
#define ENUM_IO_IO_HYSTHERESIS_ENABLE_IO_HYSTHERESIS_ENABLE_11_ENUM001         (0x00000001u)

/* Register Name        : IO_SLEW_RATE
 * Register Addr        : 0xC854u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_IO_SLEW_RATE_ADDR                                                   (0xC854u)
#define IO_IO_SLEW_RATE_RESET_VAL                                              (0x00000000u)
#define IO_IO_SLEW_RATE_MMS                                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | IO_SLEW_RATE_0           | Selects slew rate for the PAD     | 0x00000000  |
 * |       |                          | for SA_IF0                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | IO_SLEW_RATE_1           | Selects slew rate for the PAD     | 0x00000000  |
 * |       |                          | for SA_IF1                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 2     | IO_SLEW_RATE_2           | Selects slew rate for the PAD     | 0x00000000  |
 * |       |                          | for SA_IF2                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 3     | IO_SLEW_RATE_3           | Selects slew rate for the PAD     | 0x00000000  |
 * |       |                          | for SA_IF3                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 4     | IO_SLEW_RATE_4           | Selects slew rate for the PAD     | 0x00000000  |
 * |       |                          | for SA_IF4                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 5     | IO_SLEW_RATE_5           | Selects slew rate for the PAD     | 0x00000000  |
 * |       |                          | for SA_IF5                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 6     | IO_SLEW_RATE_6           | Selects slew rate for the PAD     | 0x00000000  |
 * |       |                          | for SA_IF6                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 7     | IO_SLEW_RATE_7           | Selects slew rate for the PAD     | 0x00000000  |
 * |       |                          | for SA_IF7                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 8     | IO_SLEW_RATE_8           | Selects slew rate for the PAD     | 0x00000000  |
 * |       |                          | for SA_IF8                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11    | IO_SLEW_RATE_11          | Selects slew rate for the PAD     | 0x00000000  |
 * |       |                          | for SA_IF11                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_IO_SLEW_RATE_IO_SLEW_RATE_0                                    (0u)
#define BITL_IO_IO_SLEW_RATE_IO_SLEW_RATE_0                                    (1u)
#define BITM_IO_IO_SLEW_RATE_IO_SLEW_RATE_0                                    (0x01u)
#define ENUM_IO_IO_SLEW_RATE_IO_SLEW_RATE_0_ENUM001                            (0x00000001u)
#define ENUM_IO_IO_SLEW_RATE_IO_SLEW_RATE_0_ENUM000                            (0x00000000u)

#define BITP_IO_IO_SLEW_RATE_IO_SLEW_RATE_1                                    (1u)
#define BITL_IO_IO_SLEW_RATE_IO_SLEW_RATE_1                                    (1u)
#define BITM_IO_IO_SLEW_RATE_IO_SLEW_RATE_1                                    (0x02u)
#define ENUM_IO_IO_SLEW_RATE_IO_SLEW_RATE_1_ENUM001                            (0x00000001u)
#define ENUM_IO_IO_SLEW_RATE_IO_SLEW_RATE_1_ENUM000                            (0x00000000u)

#define BITP_IO_IO_SLEW_RATE_IO_SLEW_RATE_2                                    (2u)
#define BITL_IO_IO_SLEW_RATE_IO_SLEW_RATE_2                                    (1u)
#define BITM_IO_IO_SLEW_RATE_IO_SLEW_RATE_2                                    (0x04u)
#define ENUM_IO_IO_SLEW_RATE_IO_SLEW_RATE_2_ENUM001                            (0x00000001u)
#define ENUM_IO_IO_SLEW_RATE_IO_SLEW_RATE_2_ENUM000                            (0x00000000u)

#define BITP_IO_IO_SLEW_RATE_IO_SLEW_RATE_3                                    (3u)
#define BITL_IO_IO_SLEW_RATE_IO_SLEW_RATE_3                                    (1u)
#define BITM_IO_IO_SLEW_RATE_IO_SLEW_RATE_3                                    (0x08u)
#define ENUM_IO_IO_SLEW_RATE_IO_SLEW_RATE_3_ENUM001                            (0x00000001u)
#define ENUM_IO_IO_SLEW_RATE_IO_SLEW_RATE_3_ENUM000                            (0x00000000u)

#define BITP_IO_IO_SLEW_RATE_IO_SLEW_RATE_4                                    (4u)
#define BITL_IO_IO_SLEW_RATE_IO_SLEW_RATE_4                                    (1u)
#define BITM_IO_IO_SLEW_RATE_IO_SLEW_RATE_4                                    (0x10u)
#define ENUM_IO_IO_SLEW_RATE_IO_SLEW_RATE_4_ENUM001                            (0x00000001u)
#define ENUM_IO_IO_SLEW_RATE_IO_SLEW_RATE_4_ENUM000                            (0x00000000u)

#define BITP_IO_IO_SLEW_RATE_IO_SLEW_RATE_5                                    (5u)
#define BITL_IO_IO_SLEW_RATE_IO_SLEW_RATE_5                                    (1u)
#define BITM_IO_IO_SLEW_RATE_IO_SLEW_RATE_5                                    (0x20u)
#define ENUM_IO_IO_SLEW_RATE_IO_SLEW_RATE_5_ENUM001                            (0x00000001u)
#define ENUM_IO_IO_SLEW_RATE_IO_SLEW_RATE_5_ENUM000                            (0x00000000u)

#define BITP_IO_IO_SLEW_RATE_IO_SLEW_RATE_6                                    (6u)
#define BITL_IO_IO_SLEW_RATE_IO_SLEW_RATE_6                                    (1u)
#define BITM_IO_IO_SLEW_RATE_IO_SLEW_RATE_6                                    (0x40u)
#define ENUM_IO_IO_SLEW_RATE_IO_SLEW_RATE_6_ENUM001                            (0x00000001u)
#define ENUM_IO_IO_SLEW_RATE_IO_SLEW_RATE_6_ENUM000                            (0x00000000u)

#define BITP_IO_IO_SLEW_RATE_IO_SLEW_RATE_7                                    (7u)
#define BITL_IO_IO_SLEW_RATE_IO_SLEW_RATE_7                                    (1u)
#define BITM_IO_IO_SLEW_RATE_IO_SLEW_RATE_7                                    (0x80u)
#define ENUM_IO_IO_SLEW_RATE_IO_SLEW_RATE_7_ENUM001                            (0x00000001u)
#define ENUM_IO_IO_SLEW_RATE_IO_SLEW_RATE_7_ENUM000                            (0x00000000u)

#define BITP_IO_IO_SLEW_RATE_IO_SLEW_RATE_8                                    (8u)
#define BITL_IO_IO_SLEW_RATE_IO_SLEW_RATE_8                                    (1u)
#define BITM_IO_IO_SLEW_RATE_IO_SLEW_RATE_8                                    (0x0100u)
#define ENUM_IO_IO_SLEW_RATE_IO_SLEW_RATE_8_ENUM001                            (0x00000001u)
#define ENUM_IO_IO_SLEW_RATE_IO_SLEW_RATE_8_ENUM000                            (0x00000000u)

#define BITP_IO_IO_SLEW_RATE_IO_SLEW_RATE_11                                   (11u)
#define BITL_IO_IO_SLEW_RATE_IO_SLEW_RATE_11                                   (1u)
#define BITM_IO_IO_SLEW_RATE_IO_SLEW_RATE_11                                   (0x0800u)
#define ENUM_IO_IO_SLEW_RATE_IO_SLEW_RATE_11_ENUM001                           (0x00000001u)
#define ENUM_IO_IO_SLEW_RATE_IO_SLEW_RATE_11_ENUM000                           (0x00000000u)

/* Register Name        : SLEEP_HISTORY
 * Register Addr        : 0xC860u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_SLEEP_HISTORY_ADDR                                                  (0xC860u)
#define IO_SLEEP_HISTORY_RESET_VAL                                             (0x00000000u)
#define IO_SLEEP_HISTORY_MMS                                                   (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 03-00 | REASON_FOR_SLEEP         | Reason for Sleep (copied from     | 0x00000000  |
 * |       |                          | always-on map at boot-up)         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 07-04 | REASON_FOR_WAKE          | Reason for Wake (copied from      | 0x00000000  |
 * |       |                          | always-on map at boot-up)         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_SLEEP_HISTORY_REASON_FOR_SLEEP                                 (0u)
#define BITL_IO_SLEEP_HISTORY_REASON_FOR_SLEEP                                 (4u)
#define BITM_IO_SLEEP_HISTORY_REASON_FOR_SLEEP                                 (0x0000000Fu)
#define ENUM_IO_SLEEP_HISTORY_REASON_FOR_SLEEP_RS_REGMAP_REQ                   (0x00000001u)
#define ENUM_IO_SLEEP_HISTORY_REASON_FOR_SLEEP_RS_VBAT_DUV                     (0x00000008u)
#define ENUM_IO_SLEEP_HISTORY_REASON_FOR_SLEEP_RS_VBAT_UV                      (0x00000004u)
#define ENUM_IO_SLEEP_HISTORY_REASON_FOR_SLEEP_RS_VBAT_OV                      (0x00000002u)

#define BITP_IO_SLEEP_HISTORY_REASON_FOR_WAKE                                  (4u)
#define BITL_IO_SLEEP_HISTORY_REASON_FOR_WAKE                                  (4u)
#define BITM_IO_SLEEP_HISTORY_REASON_FOR_WAKE                                  (0x000000F0u)
#define ENUM_IO_SLEEP_HISTORY_REASON_FOR_WAKE_RW_LOCAL_PIN                     (0x00000001u)
#define ENUM_IO_SLEEP_HISTORY_REASON_FOR_WAKE_RW_ETH_WUP_DET                   (0x00000002u)
#define ENUM_IO_SLEEP_HISTORY_REASON_FOR_WAKE_RW_VBAT_RECOVERY                 (0x00000004u)
#define ENUM_IO_SLEEP_HISTORY_REASON_FOR_WAKE_RW_POR_RELEASE                   (0x00000008u)

/* Register Name        : MANUAL_INTERRUPT
 * Register Addr        : 0xC882u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_MANUAL_INTERRUPT_ADDR                                               (0xC882u)
#define IO_MANUAL_INTERRUPT_RESET_VAL                                          (0x00000000u)
#define IO_MANUAL_INTERRUPT_MMS                                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | MANUAL_INTERRUPT         | User programmable interrupt. If   | 0x00000000  |
 * |       |                          | this value is set HIGH, an        |             |
 * |       |                          | interrupt located at field 5 of   |             |
 * |       |                          | interrupt vector 29 will trigger  |             |
 * |       |                          | (if enabled in the interrupt      |             |
 * |       |                          | configuration).                   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_MANUAL_INTERRUPT_MANUAL_INTERRUPT                              (0u)
#define BITL_IO_MANUAL_INTERRUPT_MANUAL_INTERRUPT                              (1u)
#define BITM_IO_MANUAL_INTERRUPT_MANUAL_INTERRUPT                              (0x01u)
#define ENUM_IO_MANUAL_INTERRUPT_MANUAL_INTERRUPT_DISABLED                     (0x00000000u)
#define ENUM_IO_MANUAL_INTERRUPT_MANUAL_INTERRUPT_ENABLED                      (0x00000001u)

/* Register Name        : SSC_MUX_SEL_SAFE_ACTIVE_RB
 * Register Addr        : 0xC883u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_SSC_MUX_SEL_SAFE_ACTIVE_RB_ADDR                                     (0xC883u)
#define IO_SSC_MUX_SEL_SAFE_ACTIVE_RB_RESET_VAL                                (0x00000000u)
#define IO_SSC_MUX_SEL_SAFE_ACTIVE_RB_MMS                                      (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 11-00 | ssc_mux_sel_safe_active_r| Indicates which pin has the safe  | 0x00000000  |
 * |       |                          | configuration enabled.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_SSC_MUX_SEL_SAFE_ACTIVE_RB_SSC_MUX_SEL_SAFE_ACTIVE_RB          (0u)
#define BITL_IO_SSC_MUX_SEL_SAFE_ACTIVE_RB_SSC_MUX_SEL_SAFE_ACTIVE_RB          (12u)
#define BITM_IO_SSC_MUX_SEL_SAFE_ACTIVE_RB_SSC_MUX_SEL_SAFE_ACTIVE_RB          (0x00000FFFu)

/* Register Name        : SSC_SAFE_CHECKS_TRIGGERED_RB
 * Register Addr        : 0xC884u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_SSC_SAFE_CHECKS_TRIGGERED_RB_ADDR                                   (0xC884u)
#define IO_SSC_SAFE_CHECKS_TRIGGERED_RB_RESET_VAL                              (0x00000000u)
#define IO_SSC_SAFE_CHECKS_TRIGGERED_RB_MMS                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | ssc_monitor_triggered_sig| Indicates the state of the        | 0x00000000  |
 * |       |                          | monitored signals when entered    |             |
 * |       |                          | safe mode.                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_SSC_MONITOR_TRIGGERED_SIGNALS_RB  (0u)
#define BITL_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_SSC_MONITOR_TRIGGERED_SIGNALS_RB  (16u)
#define BITM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_SSC_MONITOR_TRIGGERED_SIGNALS_RB  (0x0000FFFFu)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_SSC_MONITOR_TRIGGERED_SIGNALS_RB_SA_IF_0 (0x00000000u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_SSC_MONITOR_TRIGGERED_SIGNALS_RB_SA_IF_1 (0x00000001u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_SSC_MONITOR_TRIGGERED_SIGNALS_RB_SA_IF_2 (0x00000002u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_SSC_MONITOR_TRIGGERED_SIGNALS_RB_SA_IF_3 (0x00000003u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_SSC_MONITOR_TRIGGERED_SIGNALS_RB_SA_IF_4 (0x00000004u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_SSC_MONITOR_TRIGGERED_SIGNALS_RB_SA_IF_5 (0x00000005u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_SSC_MONITOR_TRIGGERED_SIGNALS_RB_SA_IF_6 (0x00000006u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_SSC_MONITOR_TRIGGERED_SIGNALS_RB_SA_IF_7 (0x00000007u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_SSC_MONITOR_TRIGGERED_SIGNALS_RB_SA_IF_8 (0x00000008u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_SSC_MONITOR_TRIGGERED_SIGNALS_RB_SA_IF_9 (0x00000009u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_SSC_MONITOR_TRIGGERED_SIGNALS_RB_SA_IF_10 (0x0000000Au)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_SSC_MONITOR_TRIGGERED_SIGNALS_RB_SA_IF_11 (0x0000000Bu)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_SSC_MONITOR_TRIGGERED_SIGNALS_RB_GPTP_UNLOCKED (0x00000014u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_SSC_MONITOR_TRIGGERED_SIGNALS_RB_OTP_CONFIG (0x00000015u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_SSC_MONITOR_TRIGGERED_SIGNALS_RB_SQI_LVL (0x00000016u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_SSC_MONITOR_TRIGGERED_SIGNALS_RB_MANUAL (0x00000017u)

/* Register Name        : SSC_SAFE_CHECKS_TRIGGERED_RB_2
 * Register Addr        : 0xC885u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_SSC_SAFE_CHECKS_TRIGGERED_RB_2_ADDR                                 (0xC885u)
#define IO_SSC_SAFE_CHECKS_TRIGGERED_RB_2_RESET_VAL                            (0x00000000u)
#define IO_SSC_SAFE_CHECKS_TRIGGERED_RB_2_MMS                                  (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | ssc_monitor_triggered_sig| Indicates the state of the        | 0x00000000  |
 * |       |                          | monitored signals when entered    |             |
 * |       |                          | safe mode.                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-14 | ssc_timeout_triggered_sig| Indicates if Each of the          | 0x00000000  |
 * |       |                          | Timeouts Have Been Triggered.     |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_RB (0u)
#define BITL_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_RB (8u)
#define BITM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_RB (0x000000FFu)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_RB_SA_IF_0 (0x00000000u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_RB_SA_IF_1 (0x00000001u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_RB_SA_IF_2 (0x00000002u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_RB_SA_IF_3 (0x00000003u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_RB_SA_IF_4 (0x00000004u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_RB_SA_IF_5 (0x00000005u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_RB_SA_IF_6 (0x00000006u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_RB_SA_IF_7 (0x00000007u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_RB_SA_IF_8 (0x00000008u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_RB_SA_IF_9 (0x00000009u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_RB_SA_IF_10 (0x0000000Au)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_RB_SA_IF_11 (0x0000000Bu)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_RB_GPTP_UNLOCKED (0x00000014u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_RB_OTP_CONFIG (0x00000015u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_RB_SQI_LVL (0x00000016u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_RB_MANUAL (0x00000017u)

#define BITP_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_2_SSC_TIMEOUT_TRIGGERED_SIGNALS_RB (14u)
#define BITL_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_2_SSC_TIMEOUT_TRIGGERED_SIGNALS_RB (2u)
#define BITM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_2_SSC_TIMEOUT_TRIGGERED_SIGNALS_RB (0x0000C000u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_2_SSC_TIMEOUT_TRIGGERED_SIGNALS_RB_ENUM000 (0x00000000u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_RB_2_SSC_TIMEOUT_TRIGGERED_SIGNALS_RB_ENUM001 (0x00000001u)

/* Register Name        : SSC_SAFE_CHECKS_TRIGGER
 * Register Addr        : 0xC886u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_SSC_SAFE_CHECKS_TRIGGER_ADDR                                        (0xC886u)
#define IO_SSC_SAFE_CHECKS_TRIGGER_RESET_VAL                                   (0x00000000u)
#define IO_SSC_SAFE_CHECKS_TRIGGER_MMS                                         (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | ssc_monitor_triggered_sig| Indicates all the monitored       | 0x00000000  |
 * |       |                          | signals the has triggered.        |             |
 * |       |                          | Cleared on Read bits.             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_SSC_SAFE_CHECKS_TRIGGER_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB (0u)
#define BITL_IO_SSC_SAFE_CHECKS_TRIGGER_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB (16u)
#define BITM_IO_SSC_SAFE_CHECKS_TRIGGER_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB (0x0000FFFFu)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGER_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_SA_IF_0 (0x00000000u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGER_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_SA_IF_1 (0x00000001u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGER_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_SA_IF_2 (0x00000002u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGER_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_SA_IF_3 (0x00000003u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGER_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_SA_IF_4 (0x00000004u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGER_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_SA_IF_5 (0x00000005u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGER_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_SA_IF_6 (0x00000006u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGER_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_SA_IF_7 (0x00000007u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGER_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_SA_IF_8 (0x00000008u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGER_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_SA_IF_9 (0x00000009u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGER_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_SA_IF_10 (0x0000000Au)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGER_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_SA_IF_11 (0x0000000Bu)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGER_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_GPTP_UNLOCKED (0x00000014u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGER_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_OTP_CONFIG (0x00000015u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGER_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_SQI_LVL (0x00000016u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGER_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_MANUAL (0x00000017u)

/* Register Name        : SSC_SAFE_CHECKS_TRIGGERED_STICKY_RB_2
 * Register Addr        : 0xC887u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_SSC_SAFE_CHECKS_TRIGGERED_STICKY_RB_2_ADDR                          (0xC887u)
#define IO_SSC_SAFE_CHECKS_TRIGGERED_STICKY_RB_2_RESET_VAL                     (0x00000000u)
#define IO_SSC_SAFE_CHECKS_TRIGGERED_STICKY_RB_2_MMS                           (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | ssc_monitor_triggered_sig| Indicates all the monitored       | 0x00000000  |
 * |       |                          | signals the has triggered.        |             |
 * |       |                          | Cleared on Read bits.             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-14 | ssc_timeout_triggered_sig| Indicates all the timeout         | 0x00000000  |
 * |       |                          | signals that have been            |             |
 * |       |                          | triggered. These bits will keep   |             |
 * |       |                          | its value until cleared.          |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_SSC_SAFE_CHECKS_TRIGGERED_STICKY_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB (0u)
#define BITL_IO_SSC_SAFE_CHECKS_TRIGGERED_STICKY_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB (8u)
#define BITM_IO_SSC_SAFE_CHECKS_TRIGGERED_STICKY_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB (0x000000FFu)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_STICKY_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_SA_IF_0 (0x00000000u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_STICKY_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_SA_IF_1 (0x00000001u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_STICKY_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_SA_IF_2 (0x00000002u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_STICKY_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_SA_IF_3 (0x00000003u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_STICKY_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_SA_IF_4 (0x00000004u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_STICKY_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_SA_IF_5 (0x00000005u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_STICKY_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_SA_IF_6 (0x00000006u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_STICKY_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_SA_IF_7 (0x00000007u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_STICKY_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_SA_IF_8 (0x00000008u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_STICKY_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_SA_IF_9 (0x00000009u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_STICKY_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_SA_IF_10 (0x0000000Au)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_STICKY_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_SA_IF_11 (0x0000000Bu)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_STICKY_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_GPTP_UNLOCKED (0x00000014u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_STICKY_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_OTP_CONFIG (0x00000015u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_STICKY_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_SQI_LVL (0x00000016u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_STICKY_RB_2_SSC_MONITOR_TRIGGERED_SIGNALS_STICKY_RB_MANUAL (0x00000017u)

#define BITP_IO_SSC_SAFE_CHECKS_TRIGGERED_STICKY_RB_2_SSC_TIMEOUT_TRIGGERED_SIGNALS_STICKY_RB (14u)
#define BITL_IO_SSC_SAFE_CHECKS_TRIGGERED_STICKY_RB_2_SSC_TIMEOUT_TRIGGERED_SIGNALS_STICKY_RB (2u)
#define BITM_IO_SSC_SAFE_CHECKS_TRIGGERED_STICKY_RB_2_SSC_TIMEOUT_TRIGGERED_SIGNALS_STICKY_RB (0x0000C000u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_STICKY_RB_2_SSC_TIMEOUT_TRIGGERED_SIGNALS_STICKY_RB_ENUM000 (0x00000000u)
#define ENUM_IO_SSC_SAFE_CHECKS_TRIGGERED_STICKY_RB_2_SSC_TIMEOUT_TRIGGERED_SIGNALS_STICKY_RB_ENUM001 (0x00000001u)

/* Register Name        : SSC_GENERAL_RB
 * Register Addr        : 0xC888u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_SSC_GENERAL_RB_ADDR                                                 (0xC888u)
#define IO_SSC_GENERAL_RB_RESET_VAL                                            (0x00000000u)
#define IO_SSC_GENERAL_RB_MMS                                                  (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | SSC_MODE_RB              | Indicates the safe state          | 0x00000000  |
 * |       |                          | controller current mode           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | SSC_MODE_CHANGE_FLAG_RB  | This flag is going to trigger     | 0x00000000  |
 * |       |                          | every time the mode switches      |             |
 * |       |                          | between functional mode and safe  |             |
 * |       |                          | mode                              |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_SSC_GENERAL_RB_SSC_MODE_RB                                     (0u)
#define BITL_IO_SSC_GENERAL_RB_SSC_MODE_RB                                     (1u)
#define BITM_IO_SSC_GENERAL_RB_SSC_MODE_RB                                     (0x01u)
#define ENUM_IO_SSC_GENERAL_RB_SSC_MODE_RB_ENUM000                             (0x00000000u)
#define ENUM_IO_SSC_GENERAL_RB_SSC_MODE_RB_ENUM001                             (0x00000001u)

#define BITP_IO_SSC_GENERAL_RB_SSC_MODE_CHANGE_FLAG_RB                         (1u)
#define BITL_IO_SSC_GENERAL_RB_SSC_MODE_CHANGE_FLAG_RB                         (1u)
#define BITM_IO_SSC_GENERAL_RB_SSC_MODE_CHANGE_FLAG_RB                         (0x02u)
#define ENUM_IO_SSC_GENERAL_RB_SSC_MODE_CHANGE_FLAG_RB_ENUM000                 (0x00000000u)
#define ENUM_IO_SSC_GENERAL_RB_SSC_MODE_CHANGE_FLAG_RB_ENUM001                 (0x00000001u)

/* Register Name        : SSC_ALIVE_COUNTER_RB
 * Register Addr        : 0xC889u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_SSC_ALIVE_COUNTER_RB_ADDR                                           (0xC889u)
#define IO_SSC_ALIVE_COUNTER_RB_RESET_VAL                                      (0x00000000u)
#define IO_SSC_ALIVE_COUNTER_RB_MMS                                            (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 13-00 | SSC_ALIVE_COUNTER        | Alive counter count value. The    | 0x00000000  |
 * |       |                          | count value increments every      |             |
 * |       |                          | 81.92 us.                         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_SSC_ALIVE_COUNTER_RB_SSC_ALIVE_COUNTER                         (0u)
#define BITL_IO_SSC_ALIVE_COUNTER_RB_SSC_ALIVE_COUNTER                         (14u)
#define BITM_IO_SSC_ALIVE_COUNTER_RB_SSC_ALIVE_COUNTER                         (0x00003FFFu)

/* Register Name        : SSC_SAFE_SA_IF_CONTROLS
 * Register Addr        : 0xC88Au
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_SSC_SAFE_SA_IF_CONTROLS_ADDR                                        (0xC88Au)
#define IO_SSC_SAFE_SA_IF_CONTROLS_RESET_VAL                                   (0x00000000u)
#define IO_SSC_SAFE_SA_IF_CONTROLS_MMS                                         (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 02-00 | ssc_safe_sa_if_0_controls| Selects the SA_IF0 configuration  | 0x00000000  |
 * |       |                          | in SAFE mode                      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 05-03 | ssc_safe_sa_if_1_controls| Selects the SA_IF1 configuration  | 0x00000000  |
 * |       |                          | in SAFE mode                      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 08-06 | ssc_safe_sa_if_2_controls| Selects the SA_IF2 configuration  | 0x00000000  |
 * |       |                          | in SAFE mode                      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11-09 | ssc_safe_sa_if_3_controls| Selects the SA_IF3 configuration  | 0x00000000  |
 * |       |                          | in SAFE mode                      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14-12 | ssc_safe_sa_if_4_controls| Selects the SA_IF4 configuration  | 0x00000000  |
 * |       |                          | in SAFE mode                      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_0_CONTROLS_MUX          (0u)
#define BITL_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_0_CONTROLS_MUX          (3u)
#define BITM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_0_CONTROLS_MUX          (0x00000007u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_0_CONTROLS_MUX_NO_CHANGE (0x00000000u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_0_CONTROLS_MUX_DISABLE_BOTH (0x00000001u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_0_CONTROLS_MUX_ENABLE_BOTH_LOW (0x00000002u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_0_CONTROLS_MUX_ENABLE_BOTH_HIGH (0x00000003u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_0_CONTROLS_MUX_ENABLE_INPUT_ONLY (0x00000004u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_0_CONTROLS_MUX_ENABLE_INPUT_PU (0x00000006u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_0_CONTROLS_MUX_ENABLE_INPUT_PD (0x00000007u)

#define BITP_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_1_CONTROLS_MUX          (3u)
#define BITL_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_1_CONTROLS_MUX          (3u)
#define BITM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_1_CONTROLS_MUX          (0x00000038u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_1_CONTROLS_MUX_NO_CHANGE (0x00000000u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_1_CONTROLS_MUX_DISABLE_BOTH (0x00000001u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_1_CONTROLS_MUX_ENABLE_BOTH_LOW (0x00000002u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_1_CONTROLS_MUX_ENABLE_BOTH_HIGH (0x00000003u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_1_CONTROLS_MUX_ENABLE_INPUT_ONLY (0x00000004u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_1_CONTROLS_MUX_ENABLE_INPUT_PU (0x00000006u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_1_CONTROLS_MUX_ENABLE_INPUT_PD (0x00000007u)

#define BITP_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_2_CONTROLS_MUX          (6u)
#define BITL_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_2_CONTROLS_MUX          (3u)
#define BITM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_2_CONTROLS_MUX          (0x000001C0u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_2_CONTROLS_MUX_NO_CHANGE (0x00000000u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_2_CONTROLS_MUX_DISABLE_BOTH (0x00000001u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_2_CONTROLS_MUX_ENABLE_BOTH_LOW (0x00000002u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_2_CONTROLS_MUX_ENABLE_BOTH_HIGH (0x00000003u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_2_CONTROLS_MUX_ENABLE_INPUT_ONLY (0x00000004u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_2_CONTROLS_MUX_ENABLE_INPUT_PU (0x00000006u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_2_CONTROLS_MUX_ENABLE_INPUT_PD (0x00000007u)

#define BITP_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_3_CONTROLS_MUX          (9u)
#define BITL_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_3_CONTROLS_MUX          (3u)
#define BITM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_3_CONTROLS_MUX          (0x00000E00u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_3_CONTROLS_MUX_NO_CHANGE (0x00000000u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_3_CONTROLS_MUX_DISABLE_BOTH (0x00000001u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_3_CONTROLS_MUX_ENABLE_BOTH_LOW (0x00000002u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_3_CONTROLS_MUX_ENABLE_BOTH_HIGH (0x00000003u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_3_CONTROLS_MUX_ENABLE_INPUT_ONLY (0x00000004u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_3_CONTROLS_MUX_ENABLE_INPUT_PU (0x00000006u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_3_CONTROLS_MUX_ENABLE_INPUT_PD (0x00000007u)

#define BITP_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_4_CONTROLS_MUX          (12u)
#define BITL_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_4_CONTROLS_MUX          (3u)
#define BITM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_4_CONTROLS_MUX          (0x00007000u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_4_CONTROLS_MUX_NO_CHANGE (0x00000000u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_4_CONTROLS_MUX_DISABLE_BOTH (0x00000001u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_4_CONTROLS_MUX_ENABLE_BOTH_LOW (0x00000002u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_4_CONTROLS_MUX_ENABLE_BOTH_HIGH (0x00000003u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_4_CONTROLS_MUX_ENABLE_INPUT_ONLY (0x00000004u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_4_CONTROLS_MUX_ENABLE_INPUT_PU (0x00000006u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_SSC_SAFE_SA_IF_4_CONTROLS_MUX_ENABLE_INPUT_PD (0x00000007u)

/* Register Name        : SSC_SAFE_SA_IF_CONTROLS_2
 * Register Addr        : 0xC88Bu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_SSC_SAFE_SA_IF_CONTROLS_2_ADDR                                      (0xC88Bu)
#define IO_SSC_SAFE_SA_IF_CONTROLS_2_RESET_VAL                                 (0x00000000u)
#define IO_SSC_SAFE_SA_IF_CONTROLS_2_MMS                                       (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 02-00 | ssc_safe_sa_if_5_controls| Selects the SA_IF5 configuration  | 0x00000000  |
 * |       |                          | in SAFE mode                      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 05-03 | ssc_safe_sa_if_6_controls| Selects the SA_IF6 configuration  | 0x00000000  |
 * |       |                          | in SAFE mode                      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 08-06 | ssc_safe_sa_if_7_controls| Selects the SA_IF7 configuration  | 0x00000000  |
 * |       |                          | in SAFE mode                      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11-09 | ssc_safe_sa_if_8_controls| Selects the SA_IF8 configuration  | 0x00000000  |
 * |       |                          | in SAFE mode                      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14-12 | ssc_safe_sa_if_9_controls| Selects the SA_IF9 configuration  | 0x00000000  |
 * |       |                          | in SAFE mode                      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_5_CONTROLS_MUX        (0u)
#define BITL_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_5_CONTROLS_MUX        (3u)
#define BITM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_5_CONTROLS_MUX        (0x00000007u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_5_CONTROLS_MUX_NO_CHANGE (0x00000000u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_5_CONTROLS_MUX_DISABLE_BOTH (0x00000001u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_5_CONTROLS_MUX_ENABLE_BOTH_LOW (0x00000002u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_5_CONTROLS_MUX_ENABLE_BOTH_HIGH (0x00000003u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_5_CONTROLS_MUX_ENABLE_INPUT_ONLY (0x00000004u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_5_CONTROLS_MUX_ENABLE_INPUT_PU (0x00000006u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_5_CONTROLS_MUX_ENABLE_INPUT_PD (0x00000007u)

#define BITP_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_6_CONTROLS_MUX        (3u)
#define BITL_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_6_CONTROLS_MUX        (3u)
#define BITM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_6_CONTROLS_MUX        (0x00000038u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_6_CONTROLS_MUX_NO_CHANGE (0x00000000u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_6_CONTROLS_MUX_DISABLE_BOTH (0x00000001u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_6_CONTROLS_MUX_ENABLE_BOTH_LOW (0x00000002u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_6_CONTROLS_MUX_ENABLE_BOTH_HIGH (0x00000003u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_6_CONTROLS_MUX_ENABLE_INPUT_ONLY (0x00000004u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_6_CONTROLS_MUX_ENABLE_INPUT_PU (0x00000006u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_6_CONTROLS_MUX_ENABLE_INPUT_PD (0x00000007u)

#define BITP_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_7_CONTROLS_MUX        (6u)
#define BITL_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_7_CONTROLS_MUX        (3u)
#define BITM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_7_CONTROLS_MUX        (0x000001C0u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_7_CONTROLS_MUX_NO_CHANGE (0x00000000u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_7_CONTROLS_MUX_DISABLE_BOTH (0x00000001u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_7_CONTROLS_MUX_ENABLE_BOTH_LOW (0x00000002u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_7_CONTROLS_MUX_ENABLE_BOTH_HIGH (0x00000003u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_7_CONTROLS_MUX_ENABLE_INPUT_ONLY (0x00000004u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_7_CONTROLS_MUX_ENABLE_INPUT_PU (0x00000006u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_7_CONTROLS_MUX_ENABLE_INPUT_PD (0x00000007u)

#define BITP_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_8_CONTROLS_MUX        (9u)
#define BITL_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_8_CONTROLS_MUX        (3u)
#define BITM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_8_CONTROLS_MUX        (0x00000E00u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_8_CONTROLS_MUX_NO_CHANGE (0x00000000u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_8_CONTROLS_MUX_DISABLE_BOTH (0x00000001u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_8_CONTROLS_MUX_ENABLE_BOTH_LOW (0x00000002u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_8_CONTROLS_MUX_ENABLE_BOTH_HIGH (0x00000003u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_8_CONTROLS_MUX_ENABLE_INPUT_ONLY (0x00000004u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_8_CONTROLS_MUX_ENABLE_INPUT_PU (0x00000006u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_8_CONTROLS_MUX_ENABLE_INPUT_PD (0x00000007u)

#define BITP_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_9_CONTROLS_MUX        (12u)
#define BITL_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_9_CONTROLS_MUX        (3u)
#define BITM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_9_CONTROLS_MUX        (0x00007000u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_9_CONTROLS_MUX_NO_CHANGE (0x00000000u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_9_CONTROLS_MUX_DISABLE_BOTH (0x00000001u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_9_CONTROLS_MUX_ENABLE_BOTH_LOW (0x00000002u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_9_CONTROLS_MUX_ENABLE_BOTH_HIGH (0x00000003u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_9_CONTROLS_MUX_ENABLE_INPUT_ONLY (0x00000004u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_9_CONTROLS_MUX_ENABLE_INPUT_PU (0x00000006u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_2_SSC_SAFE_SA_IF_9_CONTROLS_MUX_ENABLE_INPUT_PD (0x00000007u)

/* Register Name        : SSC_SAFE_SA_IF_CONTROLS_3
 * Register Addr        : 0xC88Cu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_SSC_SAFE_SA_IF_CONTROLS_3_ADDR                                      (0xC88Cu)
#define IO_SSC_SAFE_SA_IF_CONTROLS_3_RESET_VAL                                 (0x00000000u)
#define IO_SSC_SAFE_SA_IF_CONTROLS_3_MMS                                       (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 02-00 | ssc_safe_sa_if_10_control| Selects the SA_IF10               | 0x00000000  |
 * |       |                          | configuration in SAFE mode        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 05-03 | ssc_safe_sa_if_11_control| Selects the SA_IF11               | 0x00000000  |
 * |       |                          | configuration in SAFE mode        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_SSC_SAFE_SA_IF_CONTROLS_3_SSC_SAFE_SA_IF_10_CONTROLS_MUX       (0u)
#define BITL_IO_SSC_SAFE_SA_IF_CONTROLS_3_SSC_SAFE_SA_IF_10_CONTROLS_MUX       (3u)
#define BITM_IO_SSC_SAFE_SA_IF_CONTROLS_3_SSC_SAFE_SA_IF_10_CONTROLS_MUX       (0x00000007u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_3_SSC_SAFE_SA_IF_10_CONTROLS_MUX_NO_CHANGE (0x00000000u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_3_SSC_SAFE_SA_IF_10_CONTROLS_MUX_DISABLE_BOTH (0x00000001u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_3_SSC_SAFE_SA_IF_10_CONTROLS_MUX_ENABLE_BOTH_LOW (0x00000002u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_3_SSC_SAFE_SA_IF_10_CONTROLS_MUX_ENABLE_BOTH_HIGH (0x00000003u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_3_SSC_SAFE_SA_IF_10_CONTROLS_MUX_ENABLE_INPUT_ONLY (0x00000004u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_3_SSC_SAFE_SA_IF_10_CONTROLS_MUX_ENABLE_INPUT_PU (0x00000006u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_3_SSC_SAFE_SA_IF_10_CONTROLS_MUX_ENABLE_INPUT_PD (0x00000007u)

#define BITP_IO_SSC_SAFE_SA_IF_CONTROLS_3_SSC_SAFE_SA_IF_11_CONTROLS_MUX       (3u)
#define BITL_IO_SSC_SAFE_SA_IF_CONTROLS_3_SSC_SAFE_SA_IF_11_CONTROLS_MUX       (3u)
#define BITM_IO_SSC_SAFE_SA_IF_CONTROLS_3_SSC_SAFE_SA_IF_11_CONTROLS_MUX       (0x00000038u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_3_SSC_SAFE_SA_IF_11_CONTROLS_MUX_NO_CHANGE (0x00000000u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_3_SSC_SAFE_SA_IF_11_CONTROLS_MUX_DISABLE_BOTH (0x00000001u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_3_SSC_SAFE_SA_IF_11_CONTROLS_MUX_ENABLE_BOTH_LOW (0x00000002u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_3_SSC_SAFE_SA_IF_11_CONTROLS_MUX_ENABLE_BOTH_HIGH (0x00000003u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_3_SSC_SAFE_SA_IF_11_CONTROLS_MUX_ENABLE_INPUT_ONLY (0x00000004u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_3_SSC_SAFE_SA_IF_11_CONTROLS_MUX_ENABLE_INPUT_PU (0x00000006u)
#define ENUM_IO_SSC_SAFE_SA_IF_CONTROLS_3_SSC_SAFE_SA_IF_11_CONTROLS_MUX_ENABLE_INPUT_PD (0x00000007u)

/* Register Name        : SSC_MONITOR_POLARITY
 * Register Addr        : 0xC88Du
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_SSC_MONITOR_POLARITY_ADDR                                           (0xC88Du)
#define IO_SSC_MONITOR_POLARITY_RESET_VAL                                      (0x00000000u)
#define IO_SSC_MONITOR_POLARITY_MMS                                            (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | SSC_MONITOR_POLARITY     | Selects the value that triggers   | 0x00000000  |
 * |       |                          | the safe mode for each input.     |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_SSC_MONITOR_POLARITY_SSC_MONITOR_POLARITY                      (0u)
#define BITL_IO_SSC_MONITOR_POLARITY_SSC_MONITOR_POLARITY                      (16u)
#define BITM_IO_SSC_MONITOR_POLARITY_SSC_MONITOR_POLARITY                      (0x0000FFFFu)
#define ENUM_IO_SSC_MONITOR_POLARITY_SSC_MONITOR_POLARITY_SA_IF_0              (0x00000000u)
#define ENUM_IO_SSC_MONITOR_POLARITY_SSC_MONITOR_POLARITY_SA_IF_1              (0x00000001u)
#define ENUM_IO_SSC_MONITOR_POLARITY_SSC_MONITOR_POLARITY_SA_IF_2              (0x00000002u)
#define ENUM_IO_SSC_MONITOR_POLARITY_SSC_MONITOR_POLARITY_SA_IF_3              (0x00000003u)
#define ENUM_IO_SSC_MONITOR_POLARITY_SSC_MONITOR_POLARITY_SA_IF_4              (0x00000004u)
#define ENUM_IO_SSC_MONITOR_POLARITY_SSC_MONITOR_POLARITY_SA_IF_5              (0x00000005u)
#define ENUM_IO_SSC_MONITOR_POLARITY_SSC_MONITOR_POLARITY_SA_IF_6              (0x00000006u)
#define ENUM_IO_SSC_MONITOR_POLARITY_SSC_MONITOR_POLARITY_SA_IF_7              (0x00000007u)
#define ENUM_IO_SSC_MONITOR_POLARITY_SSC_MONITOR_POLARITY_SA_IF_8              (0x00000008u)
#define ENUM_IO_SSC_MONITOR_POLARITY_SSC_MONITOR_POLARITY_SA_IF_9              (0x00000009u)
#define ENUM_IO_SSC_MONITOR_POLARITY_SSC_MONITOR_POLARITY_SA_IF_10             (0x0000000Au)
#define ENUM_IO_SSC_MONITOR_POLARITY_SSC_MONITOR_POLARITY_SA_IF_11             (0x0000000Bu)
#define ENUM_IO_SSC_MONITOR_POLARITY_SSC_MONITOR_POLARITY_GPTP_UNLOCKED        (0x00000014u)
#define ENUM_IO_SSC_MONITOR_POLARITY_SSC_MONITOR_POLARITY_OTP_CONFIG           (0x00000015u)
#define ENUM_IO_SSC_MONITOR_POLARITY_SSC_MONITOR_POLARITY_SQI_LVL              (0x00000016u)
#define ENUM_IO_SSC_MONITOR_POLARITY_SSC_MONITOR_POLARITY_MANUAL               (0x00000017u)

/* Register Name        : SSC_MONITOR_POLARITY_2
 * Register Addr        : 0xC88Eu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_SSC_MONITOR_POLARITY_2_ADDR                                         (0xC88Eu)
#define IO_SSC_MONITOR_POLARITY_2_RESET_VAL                                    (0x00000000u)
#define IO_SSC_MONITOR_POLARITY_2_MMS                                          (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | SSC_MONITOR_POLARITY     | Selects the value that triggers   | 0x00000000  |
 * |       |                          | the safe mode for each input.     |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_SSC_MONITOR_POLARITY_2_SSC_MONITOR_POLARITY                    (0u)
#define BITL_IO_SSC_MONITOR_POLARITY_2_SSC_MONITOR_POLARITY                    (8u)
#define BITM_IO_SSC_MONITOR_POLARITY_2_SSC_MONITOR_POLARITY                    (0x000000FFu)
#define ENUM_IO_SSC_MONITOR_POLARITY_2_SSC_MONITOR_POLARITY_SA_IF_0            (0x00000000u)
#define ENUM_IO_SSC_MONITOR_POLARITY_2_SSC_MONITOR_POLARITY_SA_IF_1            (0x00000001u)
#define ENUM_IO_SSC_MONITOR_POLARITY_2_SSC_MONITOR_POLARITY_SA_IF_2            (0x00000002u)
#define ENUM_IO_SSC_MONITOR_POLARITY_2_SSC_MONITOR_POLARITY_SA_IF_3            (0x00000003u)
#define ENUM_IO_SSC_MONITOR_POLARITY_2_SSC_MONITOR_POLARITY_SA_IF_4            (0x00000004u)
#define ENUM_IO_SSC_MONITOR_POLARITY_2_SSC_MONITOR_POLARITY_SA_IF_5            (0x00000005u)
#define ENUM_IO_SSC_MONITOR_POLARITY_2_SSC_MONITOR_POLARITY_SA_IF_6            (0x00000006u)
#define ENUM_IO_SSC_MONITOR_POLARITY_2_SSC_MONITOR_POLARITY_SA_IF_7            (0x00000007u)
#define ENUM_IO_SSC_MONITOR_POLARITY_2_SSC_MONITOR_POLARITY_SA_IF_8            (0x00000008u)
#define ENUM_IO_SSC_MONITOR_POLARITY_2_SSC_MONITOR_POLARITY_SA_IF_9            (0x00000009u)
#define ENUM_IO_SSC_MONITOR_POLARITY_2_SSC_MONITOR_POLARITY_SA_IF_10           (0x0000000Au)
#define ENUM_IO_SSC_MONITOR_POLARITY_2_SSC_MONITOR_POLARITY_SA_IF_11           (0x0000000Bu)
#define ENUM_IO_SSC_MONITOR_POLARITY_2_SSC_MONITOR_POLARITY_GPTP_UNLOCKED      (0x00000014u)
#define ENUM_IO_SSC_MONITOR_POLARITY_2_SSC_MONITOR_POLARITY_OTP_CONFIG         (0x00000015u)
#define ENUM_IO_SSC_MONITOR_POLARITY_2_SSC_MONITOR_POLARITY_SQI_LVL            (0x00000016u)
#define ENUM_IO_SSC_MONITOR_POLARITY_2_SSC_MONITOR_POLARITY_MANUAL             (0x00000017u)

/* Register Name        : SSC_TIMEOUT_0_TIME
 * Register Addr        : 0xC88Fu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_SSC_TIMEOUT_0_TIME_ADDR                                             (0xC88Fu)
#define IO_SSC_TIMEOUT_0_TIME_RESET_VAL                                        (0x00000000u)
#define IO_SSC_TIMEOUT_0_TIME_MMS                                              (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | SSC_TIMEOUT_TIME_0       | Defines the Configurable Timeout  | 0x00000000  |
 * |       |                          | 0 Value, in Steps of 81.92us.     |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_SSC_TIMEOUT_0_TIME_SSC_TIMEOUT_TIME_0                          (0u)
#define BITL_IO_SSC_TIMEOUT_0_TIME_SSC_TIMEOUT_TIME_0                          (16u)
#define BITM_IO_SSC_TIMEOUT_0_TIME_SSC_TIMEOUT_TIME_0                          (0x0000FFFFu)

/* Register Name        : SSC_TIMEOUT_1_TIME
 * Register Addr        : 0xC890u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_SSC_TIMEOUT_1_TIME_ADDR                                             (0xC890u)
#define IO_SSC_TIMEOUT_1_TIME_RESET_VAL                                        (0x00000000u)
#define IO_SSC_TIMEOUT_1_TIME_MMS                                              (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | SSC_TIMEOUT_TIME_1       | Defines the Configurable Timeout  | 0x00000000  |
 * |       |                          | 1 Value, in Steps of 81.92us.     |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_SSC_TIMEOUT_1_TIME_SSC_TIMEOUT_TIME_1                          (0u)
#define BITL_IO_SSC_TIMEOUT_1_TIME_SSC_TIMEOUT_TIME_1                          (16u)
#define BITM_IO_SSC_TIMEOUT_1_TIME_SSC_TIMEOUT_TIME_1                          (0x0000FFFFu)

/* Register Name        : SSC_HW_ADC_CONTROLS
 * Register Addr        : 0xC891u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_SSC_HW_ADC_CONTROLS_ADDR                                            (0xC891u)
#define IO_SSC_HW_ADC_CONTROLS_RESET_VAL                                       (0x00000000u)
#define IO_SSC_HW_ADC_CONTROLS_MMS                                             (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 03-00 | SSC_HW_ADC_MONITOR_MUX_0 | Mux to select which ADC channel   | 0x00000000  |
 * |       |                          | is going to be checked in the     |             |
 * |       |                          | safe_state monitor input 12.      |             |
 * |       |                          | Values bigger than 13 mean the    |             |
 * |       |                          | monitor input is not connected    |             |
 * |       |                          | to any ADC channel and it is      |             |
 * |       |                          | tied to 1'b0.                     |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 4     | ssc_hw_adc_monitor_gt_th_| Selects which threshold is going  | 0x00000000  |
 * |       |                          | to be checked by the Safe State   |             |
 * |       |                          | Controller Hardware Monitor 12.   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 09-06 | SSC_HW_ADC_MONITOR_MUX_1 | Mux to select which ADC channel   | 0x00000000  |
 * |       |                          | is going to be checked in the     |             |
 * |       |                          | safe_state monitor input 13.      |             |
 * |       |                          | Values bigger than 13 mean the    |             |
 * |       |                          | monitor input is not connected    |             |
 * |       |                          | to any ADC channel and it is      |             |
 * |       |                          | tied to 1'b0.                     |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 10    | ssc_hw_adc_monitor_gt_th_| Selects which threshold is going  | 0x00000000  |
 * |       |                          | to be checked by the Safe State   |             |
 * |       |                          | Controller Hardware Monitor 13.   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_0                   (0u)
#define BITL_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_0                   (4u)
#define BITM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_0                   (0x0000000Fu)
#define ENUM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_0_ENUM000           (0x00000000u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_0_ENUM001           (0x00000001u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_0_ENUM002           (0x00000002u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_0_ENUM003           (0x00000003u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_0_ENUM004           (0x00000004u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_0_ENUM005           (0x00000005u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_0_ENUM006           (0x00000006u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_0_ENUM007           (0x00000007u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_0_ENUM008           (0x00000008u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_0_ENUM009           (0x00000009u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_0_ENUM010           (0x0000000Au)
#define ENUM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_0_ENUM011           (0x0000000Bu)

#define BITP_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_GT_TH_0                 (4u)
#define BITL_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_GT_TH_0                 (1u)
#define BITM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_GT_TH_0                 (0x10u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_GT_TH_0_ENUM000         (0x00000000u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_GT_TH_0_ENUM001         (0x00000001u)

#define BITP_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_1                   (6u)
#define BITL_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_1                   (4u)
#define BITM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_1                   (0x000003C0u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_1_ENUM000           (0x00000000u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_1_ENUM001           (0x00000001u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_1_ENUM002           (0x00000002u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_1_ENUM003           (0x00000003u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_1_ENUM004           (0x00000004u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_1_ENUM005           (0x00000005u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_1_ENUM006           (0x00000006u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_1_ENUM007           (0x00000007u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_1_ENUM008           (0x00000008u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_1_ENUM009           (0x00000009u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_1_ENUM010           (0x0000000Au)
#define ENUM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_MUX_1_ENUM011           (0x0000000Bu)

#define BITP_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_GT_TH_1                 (10u)
#define BITL_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_GT_TH_1                 (1u)
#define BITM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_GT_TH_1                 (0x0400u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_GT_TH_1_ENUM000         (0x00000000u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS_SSC_HW_ADC_MONITOR_GT_TH_1_ENUM001         (0x00000001u)

/* Register Name        : SSC_HW_ADC_CONTROLS2
 * Register Addr        : 0xC892u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_SSC_HW_ADC_CONTROLS2_ADDR                                           (0xC892u)
#define IO_SSC_HW_ADC_CONTROLS2_RESET_VAL                                      (0x00000000u)
#define IO_SSC_HW_ADC_CONTROLS2_MMS                                            (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 03-00 | SSC_HW_ADC_MONITOR_MUX_2 | Mux to select which ADC channel   | 0x00000000  |
 * |       |                          | is going to be checked in the     |             |
 * |       |                          | safe_state monitor input 14.      |             |
 * |       |                          | Values bigger than 13 mean the    |             |
 * |       |                          | monitor input is not connected    |             |
 * |       |                          | to any ADC channel and it is      |             |
 * |       |                          | tied to 1'b0.                     |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 4     | ssc_hw_adc_monitor_gt_th_| Selects if ADC flag it is going   | 0x00000000  |
 * |       |                          | to be connected to monitor input  |             |
 * |       |                          | 14 is greater than high           |             |
 * |       |                          | threshold or lower than low       |             |
 * |       |                          | threshold.                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 09-06 | SSC_HW_ADC_MONITOR_MUX_3 | Mux to select which ADC channel   | 0x00000000  |
 * |       |                          | is going to be checked in the     |             |
 * |       |                          | safe_state monitor input 15.      |             |
 * |       |                          | Values bigger than 13 mean the    |             |
 * |       |                          | monitor input is not connected    |             |
 * |       |                          | to any ADC channel and it is      |             |
 * |       |                          | tied to 1'b0.                     |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 10    | ssc_hw_adc_monitor_gt_th_| Selects if ADC flag it is going   | 0x00000000  |
 * |       |                          | to be connected to monitor input  |             |
 * |       |                          | 15 is greater than high           |             |
 * |       |                          | threshold or lower than low       |             |
 * |       |                          | threshold.                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_2                  (0u)
#define BITL_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_2                  (4u)
#define BITM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_2                  (0x0000000Fu)
#define ENUM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_2_ENUM000          (0x00000000u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_2_ENUM001          (0x00000001u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_2_ENUM002          (0x00000002u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_2_ENUM003          (0x00000003u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_2_ENUM004          (0x00000004u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_2_ENUM005          (0x00000005u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_2_ENUM006          (0x00000006u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_2_ENUM007          (0x00000007u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_2_ENUM008          (0x00000008u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_2_ENUM009          (0x00000009u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_2_ENUM010          (0x0000000Au)
#define ENUM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_2_ENUM011          (0x0000000Bu)

#define BITP_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_GT_TH_2                (4u)
#define BITL_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_GT_TH_2                (1u)
#define BITM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_GT_TH_2                (0x10u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_GT_TH_2_ENUM000        (0x00000000u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_GT_TH_2_ENUM001        (0x00000001u)

#define BITP_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_3                  (6u)
#define BITL_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_3                  (4u)
#define BITM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_3                  (0x000003C0u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_3_ENUM000          (0x00000000u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_3_ENUM001          (0x00000001u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_3_ENUM002          (0x00000002u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_3_ENUM003          (0x00000003u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_3_ENUM004          (0x00000004u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_3_ENUM005          (0x00000005u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_3_ENUM006          (0x00000006u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_3_ENUM007          (0x00000007u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_3_ENUM008          (0x00000008u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_3_ENUM009          (0x00000009u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_3_ENUM010          (0x0000000Au)
#define ENUM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_MUX_3_ENUM011          (0x0000000Bu)

#define BITP_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_GT_TH_3                (10u)
#define BITL_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_GT_TH_3                (1u)
#define BITM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_GT_TH_3                (0x0400u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_GT_TH_3_ENUM000        (0x00000000u)
#define ENUM_IO_SSC_HW_ADC_CONTROLS2_SSC_HW_ADC_MONITOR_GT_TH_3_ENUM001        (0x00000001u)

/* Register Name        : SSC_AUTO_RETURN_TO_FUNCTIONAL_EN
 * Register Addr        : 0xC893u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN_ADDR                               (0xC893u)
#define IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN_RESET_VAL                          (0x00000000u)
#define IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN_MMS                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 11-00 | ssc_sa_if_mon_auto_return| Activates the auto return to      | 0x00000000  |
 * |       |                          | functional feature for the SA_IF  |             |
 * |       |                          | checks.                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-12 | ssc_hw_adc_mon_auto_retur| Activates the auto return to      | 0x00000000  |
 * |       |                          | functional feature for the        |             |
 * |       |                          | Hardware ADC checks. Each bit     |             |
 * |       |                          | activates the auto-return of      |             |
 * |       |                          | each of the monitored channels.   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN_SSC_SA_IF_MON_AUTO_RETURN     (0u)
#define BITL_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN_SSC_SA_IF_MON_AUTO_RETURN     (12u)
#define BITM_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN_SSC_SA_IF_MON_AUTO_RETURN     (0x00000FFFu)
#define ENUM_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN_SSC_SA_IF_MON_AUTO_RETURN_SA_IF_0 (0x00000000u)
#define ENUM_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN_SSC_SA_IF_MON_AUTO_RETURN_SA_IF_1 (0x00000001u)
#define ENUM_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN_SSC_SA_IF_MON_AUTO_RETURN_SA_IF_2 (0x00000002u)
#define ENUM_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN_SSC_SA_IF_MON_AUTO_RETURN_SA_IF_3 (0x00000003u)
#define ENUM_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN_SSC_SA_IF_MON_AUTO_RETURN_SA_IF_4 (0x00000004u)
#define ENUM_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN_SSC_SA_IF_MON_AUTO_RETURN_SA_IF_5 (0x00000005u)
#define ENUM_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN_SSC_SA_IF_MON_AUTO_RETURN_SA_IF_6 (0x00000006u)
#define ENUM_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN_SSC_SA_IF_MON_AUTO_RETURN_SA_IF_7 (0x00000007u)
#define ENUM_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN_SSC_SA_IF_MON_AUTO_RETURN_SA_IF_8 (0x00000008u)
#define ENUM_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN_SSC_SA_IF_MON_AUTO_RETURN_SA_IF_9 (0x00000009u)
#define ENUM_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN_SSC_SA_IF_MON_AUTO_RETURN_SA_IF_10 (0x0000000Au)
#define ENUM_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN_SSC_SA_IF_MON_AUTO_RETURN_SA_IF_11 (0x0000000Bu)

#define BITP_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN_SSC_HW_ADC_MON_AUTO_RETURN    (12u)
#define BITL_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN_SSC_HW_ADC_MON_AUTO_RETURN    (4u)
#define BITM_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN_SSC_HW_ADC_MON_AUTO_RETURN    (0x0000F000u)
#define ENUM_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN_SSC_HW_ADC_MON_AUTO_RETURN_ENUM000 (0x00000000u)
#define ENUM_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN_SSC_HW_ADC_MON_AUTO_RETURN_ENUM001 (0x00000001u)
#define ENUM_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN_SSC_HW_ADC_MON_AUTO_RETURN_ENUM002 (0x00000002u)
#define ENUM_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN_SSC_HW_ADC_MON_AUTO_RETURN_ENUM003 (0x00000003u)

/* Register Name        : SSC_AUTO_RETURN_TO_FUNCTIONAL_EN2
 * Register Addr        : 0xC894u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN2_ADDR                              (0xC894u)
#define IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN2_RESET_VAL                         (0x00000000u)
#define IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN2_MMS                               (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | ssc_gptp_lock_mon_auto_re| Activates the auto return to      | 0x00000000  |
 * |       |                          | functional feature for the gPTP   |             |
 * |       |                          | lock checks.                      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | ssc_eth_timeout_auto_retu| Activates the auto return to      | 0x00000000  |
 * |       |                          | functional feature for the valid  |             |
 * |       |                          | Ethernet frames received checks.  |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN2_SSC_GPTP_LOCK_MON_AUTO_RETURN (0u)
#define BITL_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN2_SSC_GPTP_LOCK_MON_AUTO_RETURN (1u)
#define BITM_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN2_SSC_GPTP_LOCK_MON_AUTO_RETURN (0x01u)
#define ENUM_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN2_SSC_GPTP_LOCK_MON_AUTO_RETURN_DISABLE (0x00000000u)
#define ENUM_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN2_SSC_GPTP_LOCK_MON_AUTO_RETURN_ENABLE (0x00000001u)

#define BITP_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN2_SSC_ETH_TIMEOUT_AUTO_RETURN  (1u)
#define BITL_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN2_SSC_ETH_TIMEOUT_AUTO_RETURN  (1u)
#define BITM_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN2_SSC_ETH_TIMEOUT_AUTO_RETURN  (0x02u)
#define ENUM_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN2_SSC_ETH_TIMEOUT_AUTO_RETURN_DISABLE (0x00000000u)
#define ENUM_IO_SSC_AUTO_RETURN_TO_FUNCTIONAL_EN2_SSC_ETH_TIMEOUT_AUTO_RETURN_ENABLE (0x00000001u)

/* Register Name        : SSC_CONTROLS
 * Register Addr        : 0xC895u
 * Register Reset Value : 0x00002000u
 * Register MMS         : 0xAu
 */

#define IO_SSC_CONTROLS_ADDR                                                   (0xC895u)
#define IO_SSC_CONTROLS_RESET_VAL                                              (0x00002000u)
#define IO_SSC_CONTROLS_MMS                                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 11-00 | SSC_SAFE_MODE_ENABLE     | Selects for each pin the          | 0x00000000  |
 * |       |                          | configuration during safe mode.   |             |
 * |       |                          | 1'b1 = Safe pin configuration.    |             |
 * |       |                          | 1'b0 = Functional pin             |             |
 * |       |                          | configuration.                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12    | SSC_SQI_MON_YELLOW_RED   | Selects from which SQI level the  | 0x00000000  |
 * |       |                          | safe mode is going to be          |             |
 * |       |                          | triggered                         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13    | ssc_disable_hoif_on_safe_| Control to disable the Host       | 0x00000001  |
 * |       |                          | Interface while in safe mode.     |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14    | SSC_BEACON_TIMEOUT_CHECK | If set, enables the monitoring    | 0x00000000  |
 * |       |                          | of the beacon will be added to    |             |
 * |       |                          | the Ethernet traffic check.       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15    | ssc_return_to_functional_| When triggered, returns to        | 0x00000000  |
 * |       |                          | functional mode if safe           |             |
 * |       |                          | conditions have disappeared.      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_SSC_CONTROLS_SSC_SAFE_MODE_ENABLE                              (0u)
#define BITL_IO_SSC_CONTROLS_SSC_SAFE_MODE_ENABLE                              (12u)
#define BITM_IO_SSC_CONTROLS_SSC_SAFE_MODE_ENABLE                              (0x00000FFFu)
#define ENUM_IO_SSC_CONTROLS_SSC_SAFE_MODE_ENABLE_SA_IF_0                      (0x00000000u)
#define ENUM_IO_SSC_CONTROLS_SSC_SAFE_MODE_ENABLE_SA_IF_1                      (0x00000001u)
#define ENUM_IO_SSC_CONTROLS_SSC_SAFE_MODE_ENABLE_SA_IF_2                      (0x00000002u)
#define ENUM_IO_SSC_CONTROLS_SSC_SAFE_MODE_ENABLE_SA_IF_3                      (0x00000003u)
#define ENUM_IO_SSC_CONTROLS_SSC_SAFE_MODE_ENABLE_SA_IF_4                      (0x00000004u)
#define ENUM_IO_SSC_CONTROLS_SSC_SAFE_MODE_ENABLE_SA_IF_5                      (0x00000005u)
#define ENUM_IO_SSC_CONTROLS_SSC_SAFE_MODE_ENABLE_SA_IF_6                      (0x00000006u)
#define ENUM_IO_SSC_CONTROLS_SSC_SAFE_MODE_ENABLE_SA_IF_7                      (0x00000007u)
#define ENUM_IO_SSC_CONTROLS_SSC_SAFE_MODE_ENABLE_SA_IF_8                      (0x00000008u)
#define ENUM_IO_SSC_CONTROLS_SSC_SAFE_MODE_ENABLE_SA_IF_9                      (0x00000009u)
#define ENUM_IO_SSC_CONTROLS_SSC_SAFE_MODE_ENABLE_SA_IF_10                     (0x0000000Au)
#define ENUM_IO_SSC_CONTROLS_SSC_SAFE_MODE_ENABLE_SA_IF_11                     (0x0000000Bu)

#define BITP_IO_SSC_CONTROLS_SSC_SQI_MON_YELLOW_RED                            (12u)
#define BITL_IO_SSC_CONTROLS_SSC_SQI_MON_YELLOW_RED                            (1u)
#define BITM_IO_SSC_CONTROLS_SSC_SQI_MON_YELLOW_RED                            (0x1000u)
#define ENUM_IO_SSC_CONTROLS_SSC_SQI_MON_YELLOW_RED_RED                        (0x00000000u)
#define ENUM_IO_SSC_CONTROLS_SSC_SQI_MON_YELLOW_RED_YELLOW_RED                 (0x00000001u)

#define BITP_IO_SSC_CONTROLS_SSC_DISABLE_HOIF_ON_SAFE_MODE                     (13u)
#define BITL_IO_SSC_CONTROLS_SSC_DISABLE_HOIF_ON_SAFE_MODE                     (1u)
#define BITM_IO_SSC_CONTROLS_SSC_DISABLE_HOIF_ON_SAFE_MODE                     (0x2000u)
#define ENUM_IO_SSC_CONTROLS_SSC_DISABLE_HOIF_ON_SAFE_MODE_HOIF_ACTIVE         (0x00000000u)
#define ENUM_IO_SSC_CONTROLS_SSC_DISABLE_HOIF_ON_SAFE_MODE_HOIF_DISABLED       (0x00000001u)

#define BITP_IO_SSC_CONTROLS_SSC_BEACON_TIMEOUT_CHECK                          (14u)
#define BITL_IO_SSC_CONTROLS_SSC_BEACON_TIMEOUT_CHECK                          (1u)
#define BITM_IO_SSC_CONTROLS_SSC_BEACON_TIMEOUT_CHECK                          (0x4000u)
#define ENUM_IO_SSC_CONTROLS_SSC_BEACON_TIMEOUT_CHECK_DISABLE                  (0x00000000u)
#define ENUM_IO_SSC_CONTROLS_SSC_BEACON_TIMEOUT_CHECK_ENABLE                   (0x00000001u)

#define BITP_IO_SSC_CONTROLS_SSC_RETURN_TO_FUNCTIONAL_MODE                     (15u)
#define BITL_IO_SSC_CONTROLS_SSC_RETURN_TO_FUNCTIONAL_MODE                     (1u)
#define BITM_IO_SSC_CONTROLS_SSC_RETURN_TO_FUNCTIONAL_MODE                     (0x8000u)

/* Register Name        : SSC_SAFE_CHECKS_ENABLE
 * Register Addr        : 0xC896u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_SSC_SAFE_CHECKS_ENABLE_ADDR                                         (0xC896u)
#define IO_SSC_SAFE_CHECKS_ENABLE_RESET_VAL                                    (0x00000000u)
#define IO_SSC_SAFE_CHECKS_ENABLE_MMS                                          (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | SSC_MONITOR_ENABLE       | Enables the monitoring of each    | 0x00000000  |
 * |       |                          | selected input. 1'b1 = enabled,   |             |
 * |       |                          | 1'b0 = disabled.                  |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_SSC_SAFE_CHECKS_ENABLE_SSC_MONITOR_ENABLE                      (0u)
#define BITL_IO_SSC_SAFE_CHECKS_ENABLE_SSC_MONITOR_ENABLE                      (16u)
#define BITM_IO_SSC_SAFE_CHECKS_ENABLE_SSC_MONITOR_ENABLE                      (0x0000FFFFu)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_SSC_MONITOR_ENABLE_SA_IF_0              (0x00000000u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_SSC_MONITOR_ENABLE_SA_IF_1              (0x00000001u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_SSC_MONITOR_ENABLE_SA_IF_2              (0x00000002u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_SSC_MONITOR_ENABLE_SA_IF_3              (0x00000003u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_SSC_MONITOR_ENABLE_SA_IF_4              (0x00000004u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_SSC_MONITOR_ENABLE_SA_IF_5              (0x00000005u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_SSC_MONITOR_ENABLE_SA_IF_6              (0x00000006u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_SSC_MONITOR_ENABLE_SA_IF_7              (0x00000007u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_SSC_MONITOR_ENABLE_SA_IF_8              (0x00000008u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_SSC_MONITOR_ENABLE_SA_IF_9              (0x00000009u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_SSC_MONITOR_ENABLE_SA_IF_10             (0x0000000Au)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_SSC_MONITOR_ENABLE_SA_IF_11             (0x0000000Bu)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_SSC_MONITOR_ENABLE_GPTP_UNLOCKED        (0x00000014u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_SSC_MONITOR_ENABLE_OTP_CONFIG           (0x00000015u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_SSC_MONITOR_ENABLE_SQI_LVL              (0x00000016u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_SSC_MONITOR_ENABLE_MANUAL               (0x00000017u)

/* Register Name        : SSC_SAFE_CHECKS_ENABLE_2
 * Register Addr        : 0xC897u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_SSC_SAFE_CHECKS_ENABLE_2_ADDR                                       (0xC897u)
#define IO_SSC_SAFE_CHECKS_ENABLE_2_RESET_VAL                                  (0x00000000u)
#define IO_SSC_SAFE_CHECKS_ENABLE_2_MMS                                        (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | SSC_MONITOR_ENABLE       | Enables the monitoring of each    | 0x00000000  |
 * |       |                          | selected input. 1'b1 = enabled,   |             |
 * |       |                          | 1'b0 = disabled.                  |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14    | SSC_TIMEOUT_ENABLE_0     | Enables the safe state            | 0x00000000  |
 * |       |                          | controller timeout 0.             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15    | SSC_TIMEOUT_ENABLE_1     | Enables the safe state            | 0x00000000  |
 * |       |                          | controller timeout 1.             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_SSC_SAFE_CHECKS_ENABLE_2_SSC_MONITOR_ENABLE                    (0u)
#define BITL_IO_SSC_SAFE_CHECKS_ENABLE_2_SSC_MONITOR_ENABLE                    (8u)
#define BITM_IO_SSC_SAFE_CHECKS_ENABLE_2_SSC_MONITOR_ENABLE                    (0x000000FFu)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_2_SSC_MONITOR_ENABLE_SA_IF_0            (0x00000000u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_2_SSC_MONITOR_ENABLE_SA_IF_1            (0x00000001u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_2_SSC_MONITOR_ENABLE_SA_IF_2            (0x00000002u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_2_SSC_MONITOR_ENABLE_SA_IF_3            (0x00000003u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_2_SSC_MONITOR_ENABLE_SA_IF_4            (0x00000004u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_2_SSC_MONITOR_ENABLE_SA_IF_5            (0x00000005u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_2_SSC_MONITOR_ENABLE_SA_IF_6            (0x00000006u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_2_SSC_MONITOR_ENABLE_SA_IF_7            (0x00000007u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_2_SSC_MONITOR_ENABLE_SA_IF_8            (0x00000008u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_2_SSC_MONITOR_ENABLE_SA_IF_9            (0x00000009u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_2_SSC_MONITOR_ENABLE_SA_IF_10           (0x0000000Au)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_2_SSC_MONITOR_ENABLE_SA_IF_11           (0x0000000Bu)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_2_SSC_MONITOR_ENABLE_GPTP_UNLOCKED      (0x00000014u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_2_SSC_MONITOR_ENABLE_OTP_CONFIG         (0x00000015u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_2_SSC_MONITOR_ENABLE_SQI_LVL            (0x00000016u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_2_SSC_MONITOR_ENABLE_MANUAL             (0x00000017u)

#define BITP_IO_SSC_SAFE_CHECKS_ENABLE_2_SSC_TIMEOUT_ENABLE_0                  (14u)
#define BITL_IO_SSC_SAFE_CHECKS_ENABLE_2_SSC_TIMEOUT_ENABLE_0                  (1u)
#define BITM_IO_SSC_SAFE_CHECKS_ENABLE_2_SSC_TIMEOUT_ENABLE_0                  (0x4000u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_2_SSC_TIMEOUT_ENABLE_0_TIMEOUT_ENABLED  (0x00000000u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_2_SSC_TIMEOUT_ENABLE_0_TIMEOUT_DISABLED (0x00000001u)

#define BITP_IO_SSC_SAFE_CHECKS_ENABLE_2_SSC_TIMEOUT_ENABLE_1                  (15u)
#define BITL_IO_SSC_SAFE_CHECKS_ENABLE_2_SSC_TIMEOUT_ENABLE_1                  (1u)
#define BITM_IO_SSC_SAFE_CHECKS_ENABLE_2_SSC_TIMEOUT_ENABLE_1                  (0x8000u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_2_SSC_TIMEOUT_ENABLE_1_TIMEOUT_ENABLED  (0x00000000u)
#define ENUM_IO_SSC_SAFE_CHECKS_ENABLE_2_SSC_TIMEOUT_ENABLE_1_TIMEOUT_DISABLED (0x00000001u)

/* Register Name        : SSC_MONITOR_TRIGGERS
 * Register Addr        : 0xC898u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_SSC_MONITOR_TRIGGERS_ADDR                                           (0xC898u)
#define IO_SSC_MONITOR_TRIGGERS_RESET_VAL                                      (0x00000000u)
#define IO_SSC_MONITOR_TRIGGERS_MMS                                            (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | SSC_SW_ADC_MONITOR_0     | Software monitored ADC 0          | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | SSC_SW_ADC_MONITOR_1     | Software monitored ADC 1          | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 2     | SSC_SW_ADC_MONITOR_2     | Software monitored ADC 2          | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 3     | SSC_SW_ADC_MONITOR_3     | Software monitored ADC 3          | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15    | ssc_manual_enter_safe_mod| This Control Is Monitored By the  | 0x00000000  |
 * |       |                          | SSC. Being able to trigger a      |             |
 * |       |                          | manual entering to safe mode      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_SSC_MONITOR_TRIGGERS_SSC_SW_ADC_MONITOR_0                      (0u)
#define BITL_IO_SSC_MONITOR_TRIGGERS_SSC_SW_ADC_MONITOR_0                      (1u)
#define BITM_IO_SSC_MONITOR_TRIGGERS_SSC_SW_ADC_MONITOR_0                      (0x01u)
#define ENUM_IO_SSC_MONITOR_TRIGGERS_SSC_SW_ADC_MONITOR_0_ENUM000              (0x00000000u)
#define ENUM_IO_SSC_MONITOR_TRIGGERS_SSC_SW_ADC_MONITOR_0_ENUM001              (0x00000001u)

#define BITP_IO_SSC_MONITOR_TRIGGERS_SSC_SW_ADC_MONITOR_1                      (1u)
#define BITL_IO_SSC_MONITOR_TRIGGERS_SSC_SW_ADC_MONITOR_1                      (1u)
#define BITM_IO_SSC_MONITOR_TRIGGERS_SSC_SW_ADC_MONITOR_1                      (0x02u)
#define ENUM_IO_SSC_MONITOR_TRIGGERS_SSC_SW_ADC_MONITOR_1_ENUM000              (0x00000000u)
#define ENUM_IO_SSC_MONITOR_TRIGGERS_SSC_SW_ADC_MONITOR_1_ENUM001              (0x00000001u)

#define BITP_IO_SSC_MONITOR_TRIGGERS_SSC_SW_ADC_MONITOR_2                      (2u)
#define BITL_IO_SSC_MONITOR_TRIGGERS_SSC_SW_ADC_MONITOR_2                      (1u)
#define BITM_IO_SSC_MONITOR_TRIGGERS_SSC_SW_ADC_MONITOR_2                      (0x04u)
#define ENUM_IO_SSC_MONITOR_TRIGGERS_SSC_SW_ADC_MONITOR_2_ENUM000              (0x00000000u)
#define ENUM_IO_SSC_MONITOR_TRIGGERS_SSC_SW_ADC_MONITOR_2_ENUM001              (0x00000001u)

#define BITP_IO_SSC_MONITOR_TRIGGERS_SSC_SW_ADC_MONITOR_3                      (3u)
#define BITL_IO_SSC_MONITOR_TRIGGERS_SSC_SW_ADC_MONITOR_3                      (1u)
#define BITM_IO_SSC_MONITOR_TRIGGERS_SSC_SW_ADC_MONITOR_3                      (0x08u)
#define ENUM_IO_SSC_MONITOR_TRIGGERS_SSC_SW_ADC_MONITOR_3_ENUM000              (0x00000000u)
#define ENUM_IO_SSC_MONITOR_TRIGGERS_SSC_SW_ADC_MONITOR_3_ENUM001              (0x00000001u)

#define BITP_IO_SSC_MONITOR_TRIGGERS_SSC_MANUAL_ENTER_SAFE_MODE                (15u)
#define BITL_IO_SSC_MONITOR_TRIGGERS_SSC_MANUAL_ENTER_SAFE_MODE                (1u)
#define BITM_IO_SSC_MONITOR_TRIGGERS_SSC_MANUAL_ENTER_SAFE_MODE                (0x8000u)

/* Register Name        : SSC_MISC
 * Register Addr        : 0xC899u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_SSC_MISC_ADDR                                                       (0xC899u)
#define IO_SSC_MISC_RESET_VAL                                                  (0x00000000u)
#define IO_SSC_MISC_MMS                                                        (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | ssc_device_unnattended_ch| This signal should be             | 0x00000000  |
 * |       |                          | periodically written to 1'b1. If  |             |
 * |       |                          | the writes are not received, a    |             |
 * |       |                          | timeout flag will trigger and     |             |
 * |       |                          | enter Safe mode.                  |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | SSC_CLEAR_ALL_TRIGGERS   | When this signal triggers, all    | 0x00000000  |
 * |       |                          | sticky readback flags are         |             |
 * |       |                          | cleared.                          |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_SSC_MISC_SSC_DEVICE_UNNATTENDED_CHECK                          (0u)
#define BITL_IO_SSC_MISC_SSC_DEVICE_UNNATTENDED_CHECK                          (1u)
#define BITM_IO_SSC_MISC_SSC_DEVICE_UNNATTENDED_CHECK                          (0x01u)
#define ENUM_IO_SSC_MISC_SSC_DEVICE_UNNATTENDED_CHECK_ENUM000                  (0x00000000u)
#define ENUM_IO_SSC_MISC_SSC_DEVICE_UNNATTENDED_CHECK_ENUM001                  (0x00000001u)

#define BITP_IO_SSC_MISC_SSC_CLEAR_ALL_TRIGGERS                                (1u)
#define BITL_IO_SSC_MISC_SSC_CLEAR_ALL_TRIGGERS                                (1u)
#define BITM_IO_SSC_MISC_SSC_CLEAR_ALL_TRIGGERS                                (0x02u)
#define ENUM_IO_SSC_MISC_SSC_CLEAR_ALL_TRIGGERS_INACTIVE                       (0x00000000u)
#define ENUM_IO_SSC_MISC_SSC_CLEAR_ALL_TRIGGERS_TRIGGER                        (0x00000001u)

/* Register Name        : SSC_RECOVERED_DATA_FROM_AO
 * Register Addr        : 0xC89Au
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_SSC_RECOVERED_DATA_FROM_AO_ADDR                                     (0xC89Au)
#define IO_SSC_RECOVERED_DATA_FROM_AO_RESET_VAL                                (0x00000000u)
#define IO_SSC_RECOVERED_DATA_FROM_AO_MMS                                      (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | ssc_triggered_index_from_| Trigger index value received      | 0x00000000  |
 * |       |                          | from the always on domain. This   |             |
 * |       |                          | field is going to be updated      |             |
 * |       |                          | during bootload and represents    |             |
 * |       |                          | which cause made the device       |             |
 * |       |                          | enter safe_mode before the        |             |
 * |       |                          | device went to sleep.             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 5     | SSC_MODE_FROM_AO         | This is the mode value when the   | 0x00000000  |
 * |       |                          | device went to sleep. This field  |             |
 * |       |                          | is going to be updated during     |             |
 * |       |                          | the bootload.                     |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_TRIGGERED_INDEX_FROM_AO         (0u)
#define BITL_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_TRIGGERED_INDEX_FROM_AO         (5u)
#define BITM_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_TRIGGERED_INDEX_FROM_AO         (0x0000001Fu)
#define ENUM_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_TRIGGERED_INDEX_FROM_AO_ENUM000 (0x00000000u)
#define ENUM_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_TRIGGERED_INDEX_FROM_AO_ENUM001 (0x00000001u)
#define ENUM_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_TRIGGERED_INDEX_FROM_AO_ENUM002 (0x00000002u)
#define ENUM_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_TRIGGERED_INDEX_FROM_AO_ENUM003 (0x00000003u)
#define ENUM_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_TRIGGERED_INDEX_FROM_AO_ENUM004 (0x00000004u)
#define ENUM_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_TRIGGERED_INDEX_FROM_AO_ENUM005 (0x00000005u)
#define ENUM_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_TRIGGERED_INDEX_FROM_AO_ENUM006 (0x00000006u)
#define ENUM_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_TRIGGERED_INDEX_FROM_AO_ENUM007 (0x00000007u)
#define ENUM_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_TRIGGERED_INDEX_FROM_AO_ENUM008 (0x00000008u)
#define ENUM_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_TRIGGERED_INDEX_FROM_AO_ENUM009 (0x00000009u)
#define ENUM_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_TRIGGERED_INDEX_FROM_AO_ENUM010 (0x0000000Au)
#define ENUM_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_TRIGGERED_INDEX_FROM_AO_ENUM011 (0x0000000Bu)
#define ENUM_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_TRIGGERED_INDEX_FROM_AO_ENUM020 (0x00000014u)
#define ENUM_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_TRIGGERED_INDEX_FROM_AO_ENUM021 (0x00000015u)
#define ENUM_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_TRIGGERED_INDEX_FROM_AO_ENUM022 (0x00000016u)
#define ENUM_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_TRIGGERED_INDEX_FROM_AO_ENUM023 (0x00000017u)
#define ENUM_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_TRIGGERED_INDEX_FROM_AO_ENUM024 (0x00000018u)
#define ENUM_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_TRIGGERED_INDEX_FROM_AO_ENUM025 (0x00000019u)
#define ENUM_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_TRIGGERED_INDEX_FROM_AO_ENUM026 (0x0000001Au)
#define ENUM_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_TRIGGERED_INDEX_FROM_AO_ENUM027 (0x0000001Bu)
#define ENUM_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_TRIGGERED_INDEX_FROM_AO_ENUM028 (0x0000001Cu)
#define ENUM_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_TRIGGERED_INDEX_FROM_AO_ENUM029 (0x0000001Du)
#define ENUM_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_TRIGGERED_INDEX_FROM_AO_ENUM030 (0x0000001Eu)
#define ENUM_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_TRIGGERED_INDEX_FROM_AO_ENUM031 (0x0000001Fu)

#define BITP_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_MODE_FROM_AO                    (5u)
#define BITL_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_MODE_FROM_AO                    (1u)
#define BITM_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_MODE_FROM_AO                    (0x20u)
#define ENUM_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_MODE_FROM_AO_ENUM000            (0x00000000u)
#define ENUM_IO_SSC_RECOVERED_DATA_FROM_AO_SSC_MODE_FROM_AO_ENUM001            (0x00000001u)

/* Register Name        : BLOCK_RESET_CONTROL
 * Register Addr        : 0xC8FEu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_BLOCK_RESET_CONTROL_ADDR                                            (0xC8FEu)
#define IO_BLOCK_RESET_CONTROL_RESET_VAL                                       (0x00000000u)
#define IO_BLOCK_RESET_CONTROL_MMS                                             (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 1     | LCE_SOFT_RESET           | LCE reset. Self-clearing bit.     | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 2     | BOOT_LOADER_SOFT_RESET   | Bootloader reset. Self-clearing   | 0x00000000  |
 * |       |                          | bit.                              |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 3     | WAKE_SLEEP_SOFT_RESET    | Wake sleep controller reset.      | 0x00000000  |
 * |       |                          | Self-clearing bit.                |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 4     | VMTR_ADC_SOFT_RESET      | VMTR ADC Reset. Self-clearing     | 0x00000000  |
 * |       |                          | bit.                              |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 5     | MAC_PHY_SOFT_RESET       | MAC PHY Soft Reset.               | 0x00000000  |
 * |       |                          | Self-clearing bit.                |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_BLOCK_RESET_CONTROL_LCE_SOFT_RESET                             (1u)
#define BITL_IO_BLOCK_RESET_CONTROL_LCE_SOFT_RESET                             (1u)
#define BITM_IO_BLOCK_RESET_CONTROL_LCE_SOFT_RESET                             (0x02u)
#define ENUM_IO_BLOCK_RESET_CONTROL_LCE_SOFT_RESET_INACTIVE                    (0x00000000u)
#define ENUM_IO_BLOCK_RESET_CONTROL_LCE_SOFT_RESET_TRIGGER                     (0x00000001u)

#define BITP_IO_BLOCK_RESET_CONTROL_BOOT_LOADER_SOFT_RESET                     (2u)
#define BITL_IO_BLOCK_RESET_CONTROL_BOOT_LOADER_SOFT_RESET                     (1u)
#define BITM_IO_BLOCK_RESET_CONTROL_BOOT_LOADER_SOFT_RESET                     (0x04u)
#define ENUM_IO_BLOCK_RESET_CONTROL_BOOT_LOADER_SOFT_RESET_INACTIVE            (0x00000000u)
#define ENUM_IO_BLOCK_RESET_CONTROL_BOOT_LOADER_SOFT_RESET_TRIGGER             (0x00000001u)

#define BITP_IO_BLOCK_RESET_CONTROL_WAKE_SLEEP_SOFT_RESET                      (3u)
#define BITL_IO_BLOCK_RESET_CONTROL_WAKE_SLEEP_SOFT_RESET                      (1u)
#define BITM_IO_BLOCK_RESET_CONTROL_WAKE_SLEEP_SOFT_RESET                      (0x08u)
#define ENUM_IO_BLOCK_RESET_CONTROL_WAKE_SLEEP_SOFT_RESET_INACTIVE             (0x00000000u)
#define ENUM_IO_BLOCK_RESET_CONTROL_WAKE_SLEEP_SOFT_RESET_TRIGGER              (0x00000001u)

#define BITP_IO_BLOCK_RESET_CONTROL_VMTR_ADC_SOFT_RESET                        (4u)
#define BITL_IO_BLOCK_RESET_CONTROL_VMTR_ADC_SOFT_RESET                        (1u)
#define BITM_IO_BLOCK_RESET_CONTROL_VMTR_ADC_SOFT_RESET                        (0x10u)

#define BITP_IO_BLOCK_RESET_CONTROL_MAC_PHY_SOFT_RESET                         (5u)
#define BITL_IO_BLOCK_RESET_CONTROL_MAC_PHY_SOFT_RESET                         (1u)
#define BITM_IO_BLOCK_RESET_CONTROL_MAC_PHY_SOFT_RESET                         (0x20u)

/* Register Name        : RESET_CONTROL
 * Register Addr        : 0xC8FFu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_RESET_CONTROL_ADDR                                                  (0xC8FFu)
#define IO_RESET_CONTROL_RESET_VAL                                             (0x00000000u)
#define IO_RESET_CONTROL_MMS                                                   (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | RESET                    | Main soft reset signature. Must   | 0x00000000  |
 * |       |                          | write a value of 0xA55A to this   |             |
 * |       |                          | field to cause a soft reset of    |             |
 * |       |                          | the LV die.                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_RESET_CONTROL_RESET                                            (0u)
#define BITL_IO_RESET_CONTROL_RESET                                            (16u)
#define BITM_IO_RESET_CONTROL_RESET                                            (0x0000FFFFu)

/* Register Name        : INTER_DIE_SERIAL_COMMUNICATION
 * Register Addr        : 0xC900u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_INTER_DIE_SERIAL_COMMUNICATION_ADDR                                 (0xC900u)
#define IO_INTER_DIE_SERIAL_COMMUNICATION_RESET_VAL                            (0x00000000u)
#define IO_INTER_DIE_SERIAL_COMMUNICATION_MMS                                  (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | hs_comm_bit_stop_err_clea| Bit stop error clean from the     | 0x00000000  |
 * |       |                          | inter-die interface.              |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | HS_COMM_PARITY_ERR_CLEAN | Parity error clean from the       | 0x00000000  |
 * |       |                          | inter-die interface.              |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 2     | hs_comm_timeout_err_clean| Timeout error clean from the      | 0x00000000  |
 * |       |                          | inter-die interface.              |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13    | HS_COMM_BIT_STOP_ERR_RB  | Triggered when no acknowledge is  | 0x00000000  |
 * |       |                          | received from the inter-die       |             |
 * |       |                          | interface. The value will be      |             |
 * |       |                          | kept until it is cleaned with     |             |
 * |       |                          | HS_COMM_BIT_STOP_ERR_CLEAN.       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14    | HS_COMM_PARITY_ERR_RB    | Parity error from the inter-die   | 0x00000000  |
 * |       |                          | interface. The value will be      |             |
 * |       |                          | kept until it is cleaned with     |             |
 * |       |                          | HS_COMM_PARITY_ERR_CLEAN.         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15    | HS_COMM_TIMEOUT_ERR_RB   | Bit stop error from the           | 0x00000000  |
 * |       |                          | inter-die interface. The value    |             |
 * |       |                          | will be kept until it is cleaned  |             |
 * |       |                          | with HS_COMM_TIMEOUT_ERR_CLEAN.   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_BIT_STOP_ERR_CLEAN      (0u)
#define BITL_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_BIT_STOP_ERR_CLEAN      (1u)
#define BITM_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_BIT_STOP_ERR_CLEAN      (0x01u)
#define ENUM_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_BIT_STOP_ERR_CLEAN_TRIGGER (0x00000001u)
#define ENUM_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_BIT_STOP_ERR_CLEAN_INACTIVE (0x00000000u)

#define BITP_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_PARITY_ERR_CLEAN        (1u)
#define BITL_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_PARITY_ERR_CLEAN        (1u)
#define BITM_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_PARITY_ERR_CLEAN        (0x02u)
#define ENUM_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_PARITY_ERR_CLEAN_TRIGGER (0x00000001u)
#define ENUM_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_PARITY_ERR_CLEAN_INACTIVE (0x00000000u)

#define BITP_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_TIMEOUT_ERR_CLEAN       (2u)
#define BITL_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_TIMEOUT_ERR_CLEAN       (1u)
#define BITM_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_TIMEOUT_ERR_CLEAN       (0x04u)
#define ENUM_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_TIMEOUT_ERR_CLEAN_TRIGGER (0x00000001u)
#define ENUM_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_TIMEOUT_ERR_CLEAN_INACTIVE (0x00000000u)

#define BITP_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_BIT_STOP_ERR_RB         (13u)
#define BITL_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_BIT_STOP_ERR_RB         (1u)
#define BITM_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_BIT_STOP_ERR_RB         (0x2000u)
#define ENUM_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_BIT_STOP_ERR_RB_ENUM000 (0x00000000u)
#define ENUM_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_BIT_STOP_ERR_RB_ENUM001 (0x00000001u)

#define BITP_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_PARITY_ERR_RB           (14u)
#define BITL_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_PARITY_ERR_RB           (1u)
#define BITM_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_PARITY_ERR_RB           (0x4000u)
#define ENUM_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_PARITY_ERR_RB_ENUM000   (0x00000000u)
#define ENUM_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_PARITY_ERR_RB_ENUM001   (0x00000001u)

#define BITP_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_TIMEOUT_ERR_RB          (15u)
#define BITL_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_TIMEOUT_ERR_RB          (1u)
#define BITM_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_TIMEOUT_ERR_RB          (0x8000u)
#define ENUM_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_TIMEOUT_ERR_RB_ENUM000  (0x00000000u)
#define ENUM_IO_INTER_DIE_SERIAL_COMMUNICATION_HS_COMM_TIMEOUT_ERR_RB_ENUM001  (0x00000001u)

/* Register Name        : GPTP_SYNC_COUNT
 * Register Addr        : 0xC901u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_GPTP_SYNC_COUNT_ADDR                                                (0xC901u)
#define IO_GPTP_SYNC_COUNT_RESET_VAL                                           (0x00000000u)
#define IO_GPTP_SYNC_COUNT_MMS                                                 (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | GPTP_RX_SYNC_COUNT       | Counts the number of sync         | 0x00000000  |
 * |       |                          | messages received by the gPTP     |             |
 * |       |                          | algorithm                         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_GPTP_SYNC_COUNT_GPTP_RX_SYNC_COUNT                             (0u)
#define BITL_IO_GPTP_SYNC_COUNT_GPTP_RX_SYNC_COUNT                             (16u)
#define BITM_IO_GPTP_SYNC_COUNT_GPTP_RX_SYNC_COUNT                             (0x0000FFFFu)

/* Register Name        : GPTP_SYNC_COUNT_1
 * Register Addr        : 0xC902u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_GPTP_SYNC_COUNT_1_ADDR                                              (0xC902u)
#define IO_GPTP_SYNC_COUNT_1_RESET_VAL                                         (0x00000000u)
#define IO_GPTP_SYNC_COUNT_1_MMS                                               (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | GPTP_RX_SYNC_COUNT       | Counts the number of sync         | 0x00000000  |
 * |       |                          | messages received by the gPTP     |             |
 * |       |                          | algorithm                         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_GPTP_SYNC_COUNT_1_GPTP_RX_SYNC_COUNT                           (0u)
#define BITL_IO_GPTP_SYNC_COUNT_1_GPTP_RX_SYNC_COUNT                           (16u)
#define BITM_IO_GPTP_SYNC_COUNT_1_GPTP_RX_SYNC_COUNT                           (0x0000FFFFu)

/* Register Name        : GPTP_ONESTEP_COUNT
 * Register Addr        : 0xC903u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_GPTP_ONESTEP_COUNT_ADDR                                             (0xC903u)
#define IO_GPTP_ONESTEP_COUNT_RESET_VAL                                        (0x00000000u)
#define IO_GPTP_ONESTEP_COUNT_MMS                                              (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | gptp_rx_one_step_sync_cou| Counts the number of one step     | 0x00000000  |
 * |       |                          | sync messages received by the     |             |
 * |       |                          | gPTP algorithm                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_GPTP_ONESTEP_COUNT_GPTP_RX_ONE_STEP_SYNC_COUNT                 (0u)
#define BITL_IO_GPTP_ONESTEP_COUNT_GPTP_RX_ONE_STEP_SYNC_COUNT                 (16u)
#define BITM_IO_GPTP_ONESTEP_COUNT_GPTP_RX_ONE_STEP_SYNC_COUNT                 (0x0000FFFFu)

/* Register Name        : GPTP_ONESTEP_COUNT_1
 * Register Addr        : 0xC904u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_GPTP_ONESTEP_COUNT_1_ADDR                                           (0xC904u)
#define IO_GPTP_ONESTEP_COUNT_1_RESET_VAL                                      (0x00000000u)
#define IO_GPTP_ONESTEP_COUNT_1_MMS                                            (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | gptp_rx_one_step_sync_cou| Counts the number of one step     | 0x00000000  |
 * |       |                          | sync messages received by the     |             |
 * |       |                          | gPTP algorithm                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_GPTP_ONESTEP_COUNT_1_GPTP_RX_ONE_STEP_SYNC_COUNT               (0u)
#define BITL_IO_GPTP_ONESTEP_COUNT_1_GPTP_RX_ONE_STEP_SYNC_COUNT               (16u)
#define BITM_IO_GPTP_ONESTEP_COUNT_1_GPTP_RX_ONE_STEP_SYNC_COUNT               (0x0000FFFFu)

/* Register Name        : GPTP_FOLLOWUP_COUNT
 * Register Addr        : 0xC905u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_GPTP_FOLLOWUP_COUNT_ADDR                                            (0xC905u)
#define IO_GPTP_FOLLOWUP_COUNT_RESET_VAL                                       (0x00000000u)
#define IO_GPTP_FOLLOWUP_COUNT_MMS                                             (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | GPTP_RX_FOLLOW_UP_COUNT  | Counts the number of follow       | 0x00000000  |
 * |       |                          | messages received by the gPTP     |             |
 * |       |                          | algorithm                         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_GPTP_FOLLOWUP_COUNT_GPTP_RX_FOLLOW_UP_COUNT                    (0u)
#define BITL_IO_GPTP_FOLLOWUP_COUNT_GPTP_RX_FOLLOW_UP_COUNT                    (16u)
#define BITM_IO_GPTP_FOLLOWUP_COUNT_GPTP_RX_FOLLOW_UP_COUNT                    (0x0000FFFFu)

/* Register Name        : GPTP_FOLLOWUP_COUNT_1
 * Register Addr        : 0xC906u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_GPTP_FOLLOWUP_COUNT_1_ADDR                                          (0xC906u)
#define IO_GPTP_FOLLOWUP_COUNT_1_RESET_VAL                                     (0x00000000u)
#define IO_GPTP_FOLLOWUP_COUNT_1_MMS                                           (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | GPTP_RX_FOLLOW_UP_COUNT  | Counts the number of follow       | 0x00000000  |
 * |       |                          | messages received by the gPTP     |             |
 * |       |                          | algorithm                         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_GPTP_FOLLOWUP_COUNT_1_GPTP_RX_FOLLOW_UP_COUNT                  (0u)
#define BITL_IO_GPTP_FOLLOWUP_COUNT_1_GPTP_RX_FOLLOW_UP_COUNT                  (16u)
#define BITM_IO_GPTP_FOLLOWUP_COUNT_1_GPTP_RX_FOLLOW_UP_COUNT                  (0x0000FFFFu)

/* Register Name        : GPTP_NUM_LOCKS
 * Register Addr        : 0xC907u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_GPTP_NUM_LOCKS_ADDR                                                 (0xC907u)
#define IO_GPTP_NUM_LOCKS_RESET_VAL                                            (0x00000000u)
#define IO_GPTP_NUM_LOCKS_MMS                                                  (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | GPTP_RX_NUMBER_OF_LOCKS  | Counts the number of locks done   | 0x00000000  |
 * |       |                          | by the gPTP algorithm             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_GPTP_NUM_LOCKS_GPTP_RX_NUMBER_OF_LOCKS                         (0u)
#define BITL_IO_GPTP_NUM_LOCKS_GPTP_RX_NUMBER_OF_LOCKS                         (16u)
#define BITM_IO_GPTP_NUM_LOCKS_GPTP_RX_NUMBER_OF_LOCKS                         (0x0000FFFFu)

/* Register Name        : GPTP_NUM_UNLOCKS
 * Register Addr        : 0xC908u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_GPTP_NUM_UNLOCKS_ADDR                                               (0xC908u)
#define IO_GPTP_NUM_UNLOCKS_RESET_VAL                                          (0x00000000u)
#define IO_GPTP_NUM_UNLOCKS_MMS                                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | gptp_rx_number_of_unlocks| Counts the number of unlocks      | 0x00000000  |
 * |       |                          | done by the gPTP algorithm        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_GPTP_NUM_UNLOCKS_GPTP_RX_NUMBER_OF_UNLOCKS                     (0u)
#define BITL_IO_GPTP_NUM_UNLOCKS_GPTP_RX_NUMBER_OF_UNLOCKS                     (16u)
#define BITM_IO_GPTP_NUM_UNLOCKS_GPTP_RX_NUMBER_OF_UNLOCKS                     (0x0000FFFFu)

/* Register Name        : GPTP_SEQUENCEID
 * Register Addr        : 0xC909u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_GPTP_SEQUENCEID_ADDR                                                (0xC909u)
#define IO_GPTP_SEQUENCEID_RESET_VAL                                           (0x00000000u)
#define IO_GPTP_SEQUENCEID_MMS                                                 (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | gptp_rx_status_change_seq| The sequence Id of the packet     | 0x00000000  |
 * |       |                          | that procued the last edge in     |             |
 * |       |                          | the locked flag.                  |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_GPTP_SEQUENCEID_GPTP_RX_STATUS_CHANGE_SEQUENCE_ID              (0u)
#define BITL_IO_GPTP_SEQUENCEID_GPTP_RX_STATUS_CHANGE_SEQUENCE_ID              (16u)
#define BITM_IO_GPTP_SEQUENCEID_GPTP_RX_STATUS_CHANGE_SEQUENCE_ID              (0x0000FFFFu)

/* Register Name        : GPTP_LOCK_THRESHOLD
 * Register Addr        : 0xC90Bu
 * Register Reset Value : 0x0000044Cu
 * Register MMS         : 0xAu
 */

#define IO_GPTP_LOCK_THRESHOLD_ADDR                                            (0xC90Bu)
#define IO_GPTP_LOCK_THRESHOLD_RESET_VAL                                       (0x0000044Cu)
#define IO_GPTP_LOCK_THRESHOLD_MMS                                             (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 14-00 | GPTP_LOCK_THRESHOLD      | Threshold uses for the            | 0x0000044c  |
 * |       |                          | gptp_locked field. In             |             |
 * |       |                          | nanoseconds.                      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_GPTP_LOCK_THRESHOLD_GPTP_LOCK_THRESHOLD                        (0u)
#define BITL_IO_GPTP_LOCK_THRESHOLD_GPTP_LOCK_THRESHOLD                        (15u)
#define BITM_IO_GPTP_LOCK_THRESHOLD_GPTP_LOCK_THRESHOLD                        (0x00007FFFu)

/* Register Name        : GPTP_TIME_ERROR
 * Register Addr        : 0xC910u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_GPTP_TIME_ERROR_ADDR                                                (0xC910u)
#define IO_GPTP_TIME_ERROR_RESET_VAL                                           (0x00000000u)
#define IO_GPTP_TIME_ERROR_MMS                                                 (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | GPTP_TIME_ERROR          | Current time error of the gPTP    | 0x00000000  |
 * |       |                          | algorithm measured in             |             |
 * |       |                          | nanoseconds.                      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_GPTP_TIME_ERROR_GPTP_TIME_ERROR                                (0u)
#define BITL_IO_GPTP_TIME_ERROR_GPTP_TIME_ERROR                                (16u)
#define BITM_IO_GPTP_TIME_ERROR_GPTP_TIME_ERROR                                (0x0000FFFFu)

/* Register Name        : GPTP_TIME_ERROR_1
 * Register Addr        : 0xC911u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_GPTP_TIME_ERROR_1_ADDR                                              (0xC911u)
#define IO_GPTP_TIME_ERROR_1_RESET_VAL                                         (0x00000000u)
#define IO_GPTP_TIME_ERROR_1_MMS                                               (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | GPTP_TIME_ERROR          | Current time error of the gPTP    | 0x00000000  |
 * |       |                          | algorithm measured in             |             |
 * |       |                          | nanoseconds.                      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_GPTP_TIME_ERROR_1_GPTP_TIME_ERROR                              (0u)
#define BITL_IO_GPTP_TIME_ERROR_1_GPTP_TIME_ERROR                              (16u)
#define BITM_IO_GPTP_TIME_ERROR_1_GPTP_TIME_ERROR                              (0x0000FFFFu)

/* Register Name        : GPTP_MEAN_LINK_DELAY
 * Register Addr        : 0xC912u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_GPTP_MEAN_LINK_DELAY_ADDR                                           (0xC912u)
#define IO_GPTP_MEAN_LINK_DELAY_RESET_VAL                                      (0x00000000u)
#define IO_GPTP_MEAN_LINK_DELAY_MMS                                            (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | GPTP_MEANLINKDELAY       | Stores the manual latency of the  | 0x00000000  |
 * |       |                          | cable in absense of Pdelay        |             |
 * |       |                          | calculations.                     |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_GPTP_MEAN_LINK_DELAY_GPTP_MEANLINKDELAY                        (0u)
#define BITL_IO_GPTP_MEAN_LINK_DELAY_GPTP_MEANLINKDELAY                        (16u)
#define BITM_IO_GPTP_MEAN_LINK_DELAY_GPTP_MEANLINKDELAY                        (0x0000FFFFu)

/* Register Name        : GPTP_MEAN_LINK_DELAY_1
 * Register Addr        : 0xC913u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_GPTP_MEAN_LINK_DELAY_1_ADDR                                         (0xC913u)
#define IO_GPTP_MEAN_LINK_DELAY_1_RESET_VAL                                    (0x00000000u)
#define IO_GPTP_MEAN_LINK_DELAY_1_MMS                                          (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | GPTP_MEANLINKDELAY       | Stores the manual latency of the  | 0x00000000  |
 * |       |                          | cable in absense of Pdelay        |             |
 * |       |                          | calculations.                     |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_GPTP_MEAN_LINK_DELAY_1_GPTP_MEANLINKDELAY                      (0u)
#define BITL_IO_GPTP_MEAN_LINK_DELAY_1_GPTP_MEANLINKDELAY                      (16u)
#define BITM_IO_GPTP_MEAN_LINK_DELAY_1_GPTP_MEANLINKDELAY                      (0x0000FFFFu)

/* Register Name        : GPTP_STATUS_1
 * Register Addr        : 0xC915u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_GPTP_STATUS_1_ADDR                                                  (0xC915u)
#define IO_GPTP_STATUS_1_RESET_VAL                                             (0x00000000u)
#define IO_GPTP_STATUS_1_MMS                                                   (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 8     | GPTP_LOCKED              | Flags if the gPTP algorithm is    | 0x00000000  |
 * |       |                          | locked                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 9     | gptp_backup_clock_domain_| Indicates if true that the core   | 0x00000000  |
 * |       |                          | is using the backup domain for    |             |
 * |       |                          | synchronization                   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_GPTP_STATUS_1_GPTP_LOCKED                                      (8u)
#define BITL_IO_GPTP_STATUS_1_GPTP_LOCKED                                      (1u)
#define BITM_IO_GPTP_STATUS_1_GPTP_LOCKED                                      (0x0100u)
#define ENUM_IO_GPTP_STATUS_1_GPTP_LOCKED_GPTP_UNLOCKED                        (0x00000000u)
#define ENUM_IO_GPTP_STATUS_1_GPTP_LOCKED_GPTP_LOCKED                          (0x00000001u)

#define BITP_IO_GPTP_STATUS_1_GPTP_BACKUP_CLOCK_DOMAIN_ACTIVE                  (9u)
#define BITL_IO_GPTP_STATUS_1_GPTP_BACKUP_CLOCK_DOMAIN_ACTIVE                  (1u)
#define BITM_IO_GPTP_STATUS_1_GPTP_BACKUP_CLOCK_DOMAIN_ACTIVE                  (0x0200u)
#define ENUM_IO_GPTP_STATUS_1_GPTP_BACKUP_CLOCK_DOMAIN_ACTIVE_ACTIVE_DOMAIN    (0x00000000u)
#define ENUM_IO_GPTP_STATUS_1_GPTP_BACKUP_CLOCK_DOMAIN_ACTIVE_BACKUP_DOMAIN    (0x00000001u)

/* Register Name        : GPTP_RELOCK
 * Register Addr        : 0xC916u
 * Register Reset Value : 0x00050000u
 * Register MMS         : 0xAu
 */

#define IO_GPTP_RELOCK_ADDR                                                    (0xC916u)
#define IO_GPTP_RELOCK_RESET_VAL                                               (0x00050000u)
#define IO_GPTP_RELOCK_MMS                                                     (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | GPTP_RELOCK_THRESHOLD    | Relock threshold of the gptp      | 0x00050000  |
 * |       |                          | engine. In nanoseconds.           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_GPTP_RELOCK_GPTP_RELOCK_THRESHOLD                              (0u)
#define BITL_IO_GPTP_RELOCK_GPTP_RELOCK_THRESHOLD                              (16u)
#define BITM_IO_GPTP_RELOCK_GPTP_RELOCK_THRESHOLD                              (0x0000FFFFu)

/* Register Name        : GPTP_RELOCK_1
 * Register Addr        : 0xC917u
 * Register Reset Value : 0x00000005u
 * Register MMS         : 0xAu
 */

#define IO_GPTP_RELOCK_1_ADDR                                                  (0xC917u)
#define IO_GPTP_RELOCK_1_RESET_VAL                                             (0x00000005u)
#define IO_GPTP_RELOCK_1_MMS                                                   (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | GPTP_RELOCK_THRESHOLD    | Relock threshold of the gptp      | 0x00000005  |
 * |       |                          | engine. In nanoseconds.           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_GPTP_RELOCK_1_GPTP_RELOCK_THRESHOLD                            (0u)
#define BITL_IO_GPTP_RELOCK_1_GPTP_RELOCK_THRESHOLD                            (16u)
#define BITM_IO_GPTP_RELOCK_1_GPTP_RELOCK_THRESHOLD                            (0x0000FFFFu)

/* Register Name        : GPTP_CONFIG
 * Register Addr        : 0xC92Au
 * Register Reset Value : 0x00008928u
 * Register MMS         : 0xAu
 */

#define IO_GPTP_CONFIG_ADDR                                                    (0xC92Au)
#define IO_GPTP_CONFIG_RESET_VAL                                               (0x00008928u)
#define IO_GPTP_CONFIG_MMS                                                     (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | gptp_num_fast_adjust_fram| Number of frames where the core   | 0x00000008  |
 * |       |                          | will be in fast mode              |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 5     | gptp_initial_rate_ratio_c| Uses the algorithm for the        | 0x00000001  |
 * |       |                          | initial synchronization to the    |             |
 * |       |                          | grandmaster                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 07-06 | GPTP_1PPS_MODE           | Configures the 1pps gptp          | 0x00000000  |
 * |       |                          | behavior                          |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 10-08 | gptp_num_missing_syncs_to| Threshold uses for the            | 0x00000001  |
 * |       |                          | gptp_locked field                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13-11 | gptp_num_required_syncs_t| Threshold uses for the            | 0x00000001  |
 * |       |                          | gptp_locked field                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14    | GPTP_REDUNDANCY_MODE     | Sets the redundancy mode          | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15    | gptp_rate_ratio_calculati| Uses the algorithm for the        | 0x00000001  |
 * |       |                          | initial synchronization to the    |             |
 * |       |                          | grandmaster                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_GPTP_CONFIG_GPTP_NUM_FAST_ADJUST_FRAMES                        (0u)
#define BITL_IO_GPTP_CONFIG_GPTP_NUM_FAST_ADJUST_FRAMES                        (5u)
#define BITM_IO_GPTP_CONFIG_GPTP_NUM_FAST_ADJUST_FRAMES                        (0x0000001Fu)

#define BITP_IO_GPTP_CONFIG_GPTP_INITIAL_RATE_RATIO_CALCULATION                (5u)
#define BITL_IO_GPTP_CONFIG_GPTP_INITIAL_RATE_RATIO_CALCULATION                (1u)
#define BITM_IO_GPTP_CONFIG_GPTP_INITIAL_RATE_RATIO_CALCULATION                (0x20u)
#define ENUM_IO_GPTP_CONFIG_GPTP_INITIAL_RATE_RATIO_CALCULATION_STANDARD_STARTUP (0x00000000u)
#define ENUM_IO_GPTP_CONFIG_GPTP_INITIAL_RATE_RATIO_CALCULATION_FAST_STARTUP   (0x00000001u)

#define BITP_IO_GPTP_CONFIG_GPTP_1PPS_MODE                                     (6u)
#define BITL_IO_GPTP_CONFIG_GPTP_1PPS_MODE                                     (2u)
#define BITM_IO_GPTP_CONFIG_GPTP_1PPS_MODE                                     (0x000000C0u)
#define ENUM_IO_GPTP_CONFIG_GPTP_1PPS_MODE_ADI_1PPS                            (0x00000000u)
#define ENUM_IO_GPTP_CONFIG_GPTP_1PPS_MODE_IEEE_1PPS                           (0x00000001u)
#define ENUM_IO_GPTP_CONFIG_GPTP_1PPS_MODE_ADI_1_OVER_8PPS                     (0x00000002u)

#define BITP_IO_GPTP_CONFIG_GPTP_NUM_MISSING_SYNCS_TO_UNLOCK                   (8u)
#define BITL_IO_GPTP_CONFIG_GPTP_NUM_MISSING_SYNCS_TO_UNLOCK                   (3u)
#define BITM_IO_GPTP_CONFIG_GPTP_NUM_MISSING_SYNCS_TO_UNLOCK                   (0x00000700u)

#define BITP_IO_GPTP_CONFIG_GPTP_NUM_REQUIRED_SYNCS_TO_RELOCK                  (11u)
#define BITL_IO_GPTP_CONFIG_GPTP_NUM_REQUIRED_SYNCS_TO_RELOCK                  (3u)
#define BITM_IO_GPTP_CONFIG_GPTP_NUM_REQUIRED_SYNCS_TO_RELOCK                  (0x00003800u)

#define BITP_IO_GPTP_CONFIG_GPTP_REDUNDANCY_MODE                               (14u)
#define BITL_IO_GPTP_CONFIG_GPTP_REDUNDANCY_MODE                               (1u)
#define BITM_IO_GPTP_CONFIG_GPTP_REDUNDANCY_MODE                               (0x4000u)
#define ENUM_IO_GPTP_CONFIG_GPTP_REDUNDANCY_MODE_SINGLE_DOMAIN                 (0x00000000u)
#define ENUM_IO_GPTP_CONFIG_GPTP_REDUNDANCY_MODE_TWO_DOMAINS                   (0x00000001u)

#define BITP_IO_GPTP_CONFIG_GPTP_RATE_RATIO_CALCULATION_ADJUST_PHASE           (15u)
#define BITL_IO_GPTP_CONFIG_GPTP_RATE_RATIO_CALCULATION_ADJUST_PHASE           (1u)
#define BITM_IO_GPTP_CONFIG_GPTP_RATE_RATIO_CALCULATION_ADJUST_PHASE           (0x8000u)
#define ENUM_IO_GPTP_CONFIG_GPTP_RATE_RATIO_CALCULATION_ADJUST_PHASE_ADJUST_PHASE (0x00000001u)
#define ENUM_IO_GPTP_CONFIG_GPTP_RATE_RATIO_CALCULATION_ADJUST_PHASE_DO_NOT_ADJUST_PHASE (0x00000000u)

/* Register Name        : TIC_STATUS_FLAGS_0_AND_1
 * Register Addr        : 0xC936u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_STATUS_FLAGS_0_AND_1_ADDR                                       (0xC936u)
#define IO_TIC_STATUS_FLAGS_0_AND_1_RESET_VAL                                  (0x00000000u)
#define IO_TIC_STATUS_FLAGS_0_AND_1_MMS                                        (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_STATUS_FLAGS_0       | Status flag of FIFO0_READ. The    | 0x00000000  |
 * |       |                          | ENUM table values indicates the   |             |
 * |       |                          | bit position of each interrupt    |             |
 * |       |                          | status.                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_STATUS_FLAGS_1       | Status flag of FIFO0_WRITE. The   | 0x00000000  |
 * |       |                          | ENUM table values indicates the   |             |
 * |       |                          | bit position of each interrupt    |             |
 * |       |                          | status.                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_STATUS_FLAGS_0_AND_1_TIC_STATUS_FLAGS_0                    (0u)
#define BITL_IO_TIC_STATUS_FLAGS_0_AND_1_TIC_STATUS_FLAGS_0                    (5u)
#define BITM_IO_TIC_STATUS_FLAGS_0_AND_1_TIC_STATUS_FLAGS_0                    (0x0000001Fu)
#define ENUM_IO_TIC_STATUS_FLAGS_0_AND_1_TIC_STATUS_FLAGS_0_FIFO0_READ_EMPTY   (0x00000000u)
#define ENUM_IO_TIC_STATUS_FLAGS_0_AND_1_TIC_STATUS_FLAGS_0_FIFO0_READ_THRESHOLD_1 (0x00000001u)
#define ENUM_IO_TIC_STATUS_FLAGS_0_AND_1_TIC_STATUS_FLAGS_0_FIFO0_READ_THRESHOLD_2 (0x00000002u)
#define ENUM_IO_TIC_STATUS_FLAGS_0_AND_1_TIC_STATUS_FLAGS_0_FIFO0_READ_THRESHOLD_3 (0x00000003u)
#define ENUM_IO_TIC_STATUS_FLAGS_0_AND_1_TIC_STATUS_FLAGS_0_FIFO0_READ_FULL    (0x00000004u)

#define BITP_IO_TIC_STATUS_FLAGS_0_AND_1_TIC_STATUS_FLAGS_1                    (8u)
#define BITL_IO_TIC_STATUS_FLAGS_0_AND_1_TIC_STATUS_FLAGS_1                    (5u)
#define BITM_IO_TIC_STATUS_FLAGS_0_AND_1_TIC_STATUS_FLAGS_1                    (0x00001F00u)
#define ENUM_IO_TIC_STATUS_FLAGS_0_AND_1_TIC_STATUS_FLAGS_1_FIFO0_WRITE_EMPTY  (0x00000008u)
#define ENUM_IO_TIC_STATUS_FLAGS_0_AND_1_TIC_STATUS_FLAGS_1_FIFO0_WRITE_THRESHOLD_1 (0x00000009u)
#define ENUM_IO_TIC_STATUS_FLAGS_0_AND_1_TIC_STATUS_FLAGS_1_FIFO0_WRITE_THRESHOLD_2 (0x0000000Au)
#define ENUM_IO_TIC_STATUS_FLAGS_0_AND_1_TIC_STATUS_FLAGS_1_FIFO0_WRITE_THRESHOLD_3 (0x0000000Bu)
#define ENUM_IO_TIC_STATUS_FLAGS_0_AND_1_TIC_STATUS_FLAGS_1_FIFO0_WRITE_FULL   (0x0000000Cu)

/* Register Name        : TIC_STATUS_FLAGS_2_AND_3
 * Register Addr        : 0xC937u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_STATUS_FLAGS_2_AND_3_ADDR                                       (0xC937u)
#define IO_TIC_STATUS_FLAGS_2_AND_3_RESET_VAL                                  (0x00000000u)
#define IO_TIC_STATUS_FLAGS_2_AND_3_MMS                                        (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_STATUS_FLAGS_2       | Status flag of FIFO1_READ. The    | 0x00000000  |
 * |       |                          | ENUM table values indicates the   |             |
 * |       |                          | bit position of each interrupt    |             |
 * |       |                          | status.                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_STATUS_FLAGS_3       | Status flag of FIFO1_WRITE. The   | 0x00000000  |
 * |       |                          | ENUM table values indicates the   |             |
 * |       |                          | bit position of each interrupt    |             |
 * |       |                          | status.                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_STATUS_FLAGS_2_AND_3_TIC_STATUS_FLAGS_2                    (0u)
#define BITL_IO_TIC_STATUS_FLAGS_2_AND_3_TIC_STATUS_FLAGS_2                    (5u)
#define BITM_IO_TIC_STATUS_FLAGS_2_AND_3_TIC_STATUS_FLAGS_2                    (0x0000001Fu)
#define ENUM_IO_TIC_STATUS_FLAGS_2_AND_3_TIC_STATUS_FLAGS_2_FIFO1_READ_EMPTY   (0x00000000u)
#define ENUM_IO_TIC_STATUS_FLAGS_2_AND_3_TIC_STATUS_FLAGS_2_FIFO1_READ_THRESHOLD_1 (0x00000001u)
#define ENUM_IO_TIC_STATUS_FLAGS_2_AND_3_TIC_STATUS_FLAGS_2_FIFO1_READ_THRESHOLD_2 (0x00000002u)
#define ENUM_IO_TIC_STATUS_FLAGS_2_AND_3_TIC_STATUS_FLAGS_2_FIFO1_READ_THRESHOLD_3 (0x00000003u)
#define ENUM_IO_TIC_STATUS_FLAGS_2_AND_3_TIC_STATUS_FLAGS_2_FIFO1_READ_FULL    (0x00000004u)

#define BITP_IO_TIC_STATUS_FLAGS_2_AND_3_TIC_STATUS_FLAGS_3                    (8u)
#define BITL_IO_TIC_STATUS_FLAGS_2_AND_3_TIC_STATUS_FLAGS_3                    (5u)
#define BITM_IO_TIC_STATUS_FLAGS_2_AND_3_TIC_STATUS_FLAGS_3                    (0x00001F00u)
#define ENUM_IO_TIC_STATUS_FLAGS_2_AND_3_TIC_STATUS_FLAGS_3_FIFO1_WRITE_EMPTY  (0x00000008u)
#define ENUM_IO_TIC_STATUS_FLAGS_2_AND_3_TIC_STATUS_FLAGS_3_FIFO1_WRITE_THRESHOLD_1 (0x00000009u)
#define ENUM_IO_TIC_STATUS_FLAGS_2_AND_3_TIC_STATUS_FLAGS_3_FIFO1_WRITE_THRESHOLD_2 (0x0000000Au)
#define ENUM_IO_TIC_STATUS_FLAGS_2_AND_3_TIC_STATUS_FLAGS_3_FIFO1_WRITE_THRESHOLD_3 (0x0000000Bu)
#define ENUM_IO_TIC_STATUS_FLAGS_2_AND_3_TIC_STATUS_FLAGS_3_FIFO1_WRITE_FULL   (0x0000000Cu)

/* Register Name        : TIC_STATUS_FLAGS_4_AND_5
 * Register Addr        : 0xC938u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_STATUS_FLAGS_4_AND_5_ADDR                                       (0xC938u)
#define IO_TIC_STATUS_FLAGS_4_AND_5_RESET_VAL                                  (0x00000000u)
#define IO_TIC_STATUS_FLAGS_4_AND_5_MMS                                        (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_STATUS_FLAGS_4       | Status flag of FIFO2_READ. The    | 0x00000000  |
 * |       |                          | ENUM table values indicates the   |             |
 * |       |                          | bit position of each interrupt    |             |
 * |       |                          | status.                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_STATUS_FLAGS_5       | Status flag of FIFO2_WRITE. The   | 0x00000000  |
 * |       |                          | ENUM table values indicates the   |             |
 * |       |                          | bit position of each interrupt    |             |
 * |       |                          | status.                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_STATUS_FLAGS_4_AND_5_TIC_STATUS_FLAGS_4                    (0u)
#define BITL_IO_TIC_STATUS_FLAGS_4_AND_5_TIC_STATUS_FLAGS_4                    (5u)
#define BITM_IO_TIC_STATUS_FLAGS_4_AND_5_TIC_STATUS_FLAGS_4                    (0x0000001Fu)
#define ENUM_IO_TIC_STATUS_FLAGS_4_AND_5_TIC_STATUS_FLAGS_4_FIFO2_READ_EMPTY   (0x00000000u)
#define ENUM_IO_TIC_STATUS_FLAGS_4_AND_5_TIC_STATUS_FLAGS_4_FIFO2_READ_THRESHOLD_1 (0x00000001u)
#define ENUM_IO_TIC_STATUS_FLAGS_4_AND_5_TIC_STATUS_FLAGS_4_FIFO2_READ_THRESHOLD_2 (0x00000002u)
#define ENUM_IO_TIC_STATUS_FLAGS_4_AND_5_TIC_STATUS_FLAGS_4_FIFO2_READ_THRESHOLD_3 (0x00000003u)
#define ENUM_IO_TIC_STATUS_FLAGS_4_AND_5_TIC_STATUS_FLAGS_4_FIFO2_READ_FULL    (0x00000004u)

#define BITP_IO_TIC_STATUS_FLAGS_4_AND_5_TIC_STATUS_FLAGS_5                    (8u)
#define BITL_IO_TIC_STATUS_FLAGS_4_AND_5_TIC_STATUS_FLAGS_5                    (5u)
#define BITM_IO_TIC_STATUS_FLAGS_4_AND_5_TIC_STATUS_FLAGS_5                    (0x00001F00u)
#define ENUM_IO_TIC_STATUS_FLAGS_4_AND_5_TIC_STATUS_FLAGS_5_FIFO2_WRITE_EMPTY  (0x00000008u)
#define ENUM_IO_TIC_STATUS_FLAGS_4_AND_5_TIC_STATUS_FLAGS_5_FIFO2_WRITE_THRESHOLD_1 (0x00000009u)
#define ENUM_IO_TIC_STATUS_FLAGS_4_AND_5_TIC_STATUS_FLAGS_5_FIFO2_WRITE_THRESHOLD_2 (0x0000000Au)
#define ENUM_IO_TIC_STATUS_FLAGS_4_AND_5_TIC_STATUS_FLAGS_5_FIFO2_WRITE_THRESHOLD_3 (0x0000000Bu)
#define ENUM_IO_TIC_STATUS_FLAGS_4_AND_5_TIC_STATUS_FLAGS_5_FIFO2_WRITE_FULL   (0x0000000Cu)

/* Register Name        : TIC_STATUS_FLAGS_6_AND_7
 * Register Addr        : 0xC939u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_STATUS_FLAGS_6_AND_7_ADDR                                       (0xC939u)
#define IO_TIC_STATUS_FLAGS_6_AND_7_RESET_VAL                                  (0x00000000u)
#define IO_TIC_STATUS_FLAGS_6_AND_7_MMS                                        (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_STATUS_FLAGS_6       | Status flag of FIFO3_READ. The    | 0x00000000  |
 * |       |                          | ENUM table values indicates the   |             |
 * |       |                          | bit position of each interrupt    |             |
 * |       |                          | status.                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_STATUS_FLAGS_7       | Status flag of FIFO3_WRITE. The   | 0x00000000  |
 * |       |                          | ENUM table values indicates the   |             |
 * |       |                          | bit position of each interrupt    |             |
 * |       |                          | status.                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_STATUS_FLAGS_6_AND_7_TIC_STATUS_FLAGS_6                    (0u)
#define BITL_IO_TIC_STATUS_FLAGS_6_AND_7_TIC_STATUS_FLAGS_6                    (5u)
#define BITM_IO_TIC_STATUS_FLAGS_6_AND_7_TIC_STATUS_FLAGS_6                    (0x0000001Fu)
#define ENUM_IO_TIC_STATUS_FLAGS_6_AND_7_TIC_STATUS_FLAGS_6_FIFO3_READ_EMPTY   (0x00000000u)
#define ENUM_IO_TIC_STATUS_FLAGS_6_AND_7_TIC_STATUS_FLAGS_6_FIFO3_READ_THRESHOLD_1 (0x00000001u)
#define ENUM_IO_TIC_STATUS_FLAGS_6_AND_7_TIC_STATUS_FLAGS_6_FIFO3_READ_THRESHOLD_2 (0x00000002u)
#define ENUM_IO_TIC_STATUS_FLAGS_6_AND_7_TIC_STATUS_FLAGS_6_FIFO3_READ_THRESHOLD_3 (0x00000003u)
#define ENUM_IO_TIC_STATUS_FLAGS_6_AND_7_TIC_STATUS_FLAGS_6_FIFO3_READ_FULL    (0x00000004u)

#define BITP_IO_TIC_STATUS_FLAGS_6_AND_7_TIC_STATUS_FLAGS_7                    (8u)
#define BITL_IO_TIC_STATUS_FLAGS_6_AND_7_TIC_STATUS_FLAGS_7                    (5u)
#define BITM_IO_TIC_STATUS_FLAGS_6_AND_7_TIC_STATUS_FLAGS_7                    (0x00001F00u)
#define ENUM_IO_TIC_STATUS_FLAGS_6_AND_7_TIC_STATUS_FLAGS_7_FIFO3_WRITE_EMPTY  (0x00000008u)
#define ENUM_IO_TIC_STATUS_FLAGS_6_AND_7_TIC_STATUS_FLAGS_7_FIFO3_WRITE_THRESHOLD_1 (0x00000009u)
#define ENUM_IO_TIC_STATUS_FLAGS_6_AND_7_TIC_STATUS_FLAGS_7_FIFO3_WRITE_THRESHOLD_2 (0x0000000Au)
#define ENUM_IO_TIC_STATUS_FLAGS_6_AND_7_TIC_STATUS_FLAGS_7_FIFO3_WRITE_THRESHOLD_3 (0x0000000Bu)
#define ENUM_IO_TIC_STATUS_FLAGS_6_AND_7_TIC_STATUS_FLAGS_7_FIFO3_WRITE_FULL   (0x0000000Cu)

/* Register Name        : TIC_STATUS_FLAGS_8_AND_9
 * Register Addr        : 0xC93Au
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_STATUS_FLAGS_8_AND_9_ADDR                                       (0xC93Au)
#define IO_TIC_STATUS_FLAGS_8_AND_9_RESET_VAL                                  (0x00000000u)
#define IO_TIC_STATUS_FLAGS_8_AND_9_MMS                                        (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 06-00 | TIC_STATUS_FLAGS_8       | Status flag of PHY interrupts.    | 0x00000000  |
 * |       |                          | The ENUM table values indicates   |             |
 * |       |                          | the bit position of each          |             |
 * |       |                          | interrupt status.                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_STATUS_FLAGS_9       | Status flag of MAC interrupts.    | 0x00000000  |
 * |       |                          | The ENUM table values indicates   |             |
 * |       |                          | the bit position of each          |             |
 * |       |                          | interrupt status.                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_STATUS_FLAGS_8_AND_9_TIC_STATUS_FLAGS_8                    (0u)
#define BITL_IO_TIC_STATUS_FLAGS_8_AND_9_TIC_STATUS_FLAGS_8                    (7u)
#define BITM_IO_TIC_STATUS_FLAGS_8_AND_9_TIC_STATUS_FLAGS_8                    (0x0000007Fu)
#define ENUM_IO_TIC_STATUS_FLAGS_8_AND_9_TIC_STATUS_FLAGS_8_PHY_PLCA_STATUS    (0x00000002u)
#define ENUM_IO_TIC_STATUS_FLAGS_8_AND_9_TIC_STATUS_FLAGS_8_PHY_PLCA_RECOVER   (0x00000003u)

#define BITP_IO_TIC_STATUS_FLAGS_8_AND_9_TIC_STATUS_FLAGS_9                    (8u)
#define BITL_IO_TIC_STATUS_FLAGS_8_AND_9_TIC_STATUS_FLAGS_9                    (5u)
#define BITM_IO_TIC_STATUS_FLAGS_8_AND_9_TIC_STATUS_FLAGS_9                    (0x00001F00u)
#define ENUM_IO_TIC_STATUS_FLAGS_8_AND_9_TIC_STATUS_FLAGS_9_MAC_RX_FRAME_DROP_FULL (0x00000008u)
#define ENUM_IO_TIC_STATUS_FLAGS_8_AND_9_TIC_STATUS_FLAGS_9_MAC_RX_PHY_ERROR   (0x00000009u)
#define ENUM_IO_TIC_STATUS_FLAGS_8_AND_9_TIC_STATUS_FLAGS_9_MAC_RX_ERROR_CRC   (0x0000000Cu)

/* Register Name        : TIC_STATUS_FLAGS_10_AND_11
 * Register Addr        : 0xC93Bu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_STATUS_FLAGS_10_AND_11_ADDR                                     (0xC93Bu)
#define IO_TIC_STATUS_FLAGS_10_AND_11_RESET_VAL                                (0x00000000u)
#define IO_TIC_STATUS_FLAGS_10_AND_11_MMS                                      (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 02-00 | TIC_STATUS_FLAGS_10      | Status flag. The ENUM table       | 0x00000000  |
 * |       |                          | values indicates the bit          |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | status.                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 8     | TIC_STATUS_FLAGS_11      | Status flag of SPI0 interrupts.   | 0x00000000  |
 * |       |                          | The ENUM table values indicates   |             |
 * |       |                          | the bit position of each          |             |
 * |       |                          | interrupt status.                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_STATUS_FLAGS_10_AND_11_TIC_STATUS_FLAGS_10                 (0u)
#define BITL_IO_TIC_STATUS_FLAGS_10_AND_11_TIC_STATUS_FLAGS_10                 (3u)
#define BITM_IO_TIC_STATUS_FLAGS_10_AND_11_TIC_STATUS_FLAGS_10                 (0x00000007u)
#define ENUM_IO_TIC_STATUS_FLAGS_10_AND_11_TIC_STATUS_FLAGS_10_PLCA_DIAG_RISING (0x00000000u)

#define BITP_IO_TIC_STATUS_FLAGS_10_AND_11_TIC_STATUS_FLAGS_11                 (8u)
#define BITL_IO_TIC_STATUS_FLAGS_10_AND_11_TIC_STATUS_FLAGS_11                 (1u)
#define BITM_IO_TIC_STATUS_FLAGS_10_AND_11_TIC_STATUS_FLAGS_11                 (0x0100u)
#define ENUM_IO_TIC_STATUS_FLAGS_10_AND_11_TIC_STATUS_FLAGS_11_SPI0_BB         (0x00000008u)

/* Register Name        : TIC_STATUS_FLAGS_12_AND_13
 * Register Addr        : 0xC93Cu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_STATUS_FLAGS_12_AND_13_ADDR                                     (0xC93Cu)
#define IO_TIC_STATUS_FLAGS_12_AND_13_RESET_VAL                                (0x00000000u)
#define IO_TIC_STATUS_FLAGS_12_AND_13_MMS                                      (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 06-00 | TIC_STATUS_FLAGS_12      | Status flag of ISELED0            | 0x00000000  |
 * |       |                          | interrupts. The ENUM table        |             |
 * |       |                          | values indicates the bit          |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | status.                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14-08 | TIC_STATUS_FLAGS_13      | Status flag of ISELED1            | 0x00000000  |
 * |       |                          | interrupts. The ENUM table        |             |
 * |       |                          | values indicates the bit          |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | status.                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_STATUS_FLAGS_12_AND_13_TIC_STATUS_FLAGS_12                 (0u)
#define BITL_IO_TIC_STATUS_FLAGS_12_AND_13_TIC_STATUS_FLAGS_12                 (7u)
#define BITM_IO_TIC_STATUS_FLAGS_12_AND_13_TIC_STATUS_FLAGS_12                 (0x0000007Fu)
#define ENUM_IO_TIC_STATUS_FLAGS_12_AND_13_TIC_STATUS_FLAGS_12_ISELED0_CONTENTION (0x00000001u)
#define ENUM_IO_TIC_STATUS_FLAGS_12_AND_13_TIC_STATUS_FLAGS_12_ISELED0_ERROR_EOC (0x00000002u)
#define ENUM_IO_TIC_STATUS_FLAGS_12_AND_13_TIC_STATUS_FLAGS_12_ISELED0_ERROR_FRAME_CRC (0x00000003u)
#define ENUM_IO_TIC_STATUS_FLAGS_12_AND_13_TIC_STATUS_FLAGS_12_ISELED0_ERROR_FRAME_FREQ (0x00000004u)
#define ENUM_IO_TIC_STATUS_FLAGS_12_AND_13_TIC_STATUS_FLAGS_12_ISELED0_ERROR_FRAME_SYNC (0x00000005u)
#define ENUM_IO_TIC_STATUS_FLAGS_12_AND_13_TIC_STATUS_FLAGS_12_ISELED0_ERROR_FRAME_5B4B_ERROR (0x00000006u)

#define BITP_IO_TIC_STATUS_FLAGS_12_AND_13_TIC_STATUS_FLAGS_13                 (8u)
#define BITL_IO_TIC_STATUS_FLAGS_12_AND_13_TIC_STATUS_FLAGS_13                 (7u)
#define BITM_IO_TIC_STATUS_FLAGS_12_AND_13_TIC_STATUS_FLAGS_13                 (0x00007F00u)
#define ENUM_IO_TIC_STATUS_FLAGS_12_AND_13_TIC_STATUS_FLAGS_13_ISELED1_CONTENTION (0x00000009u)
#define ENUM_IO_TIC_STATUS_FLAGS_12_AND_13_TIC_STATUS_FLAGS_13_ISELED1_ERROR_EOC (0x0000000Au)
#define ENUM_IO_TIC_STATUS_FLAGS_12_AND_13_TIC_STATUS_FLAGS_13_ISELED1_ERROR_FRAME_CRC (0x0000000Bu)
#define ENUM_IO_TIC_STATUS_FLAGS_12_AND_13_TIC_STATUS_FLAGS_13_ISELED1_ERROR_FRAME_FREQ (0x0000000Cu)
#define ENUM_IO_TIC_STATUS_FLAGS_12_AND_13_TIC_STATUS_FLAGS_13_ISELED1_ERROR_FRAME_SYNC (0x0000000Du)
#define ENUM_IO_TIC_STATUS_FLAGS_12_AND_13_TIC_STATUS_FLAGS_13_ISELED1_ERROR_FRAME_5B4B_ERROR (0x0000000Eu)

/* Register Name        : TIC_STATUS_FLAGS_14_AND_15
 * Register Addr        : 0xC93Du
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_STATUS_FLAGS_14_AND_15_ADDR                                     (0xC93Du)
#define IO_TIC_STATUS_FLAGS_14_AND_15_RESET_VAL                                (0x00000000u)
#define IO_TIC_STATUS_FLAGS_14_AND_15_MMS                                      (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 06-00 | TIC_STATUS_FLAGS_14      | Status flag of ISELED2            | 0x00000000  |
 * |       |                          | interrupts. The ENUM table        |             |
 * |       |                          | values indicates the bit          |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | status.                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14-08 | TIC_STATUS_FLAGS_15      | Status flag of ISELED3            | 0x00000000  |
 * |       |                          | interrupts. The ENUM table        |             |
 * |       |                          | values indicates the bit          |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | status.                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_STATUS_FLAGS_14_AND_15_TIC_STATUS_FLAGS_14                 (0u)
#define BITL_IO_TIC_STATUS_FLAGS_14_AND_15_TIC_STATUS_FLAGS_14                 (7u)
#define BITM_IO_TIC_STATUS_FLAGS_14_AND_15_TIC_STATUS_FLAGS_14                 (0x0000007Fu)
#define ENUM_IO_TIC_STATUS_FLAGS_14_AND_15_TIC_STATUS_FLAGS_14_ISELED2_CONTENTION (0x00000001u)
#define ENUM_IO_TIC_STATUS_FLAGS_14_AND_15_TIC_STATUS_FLAGS_14_ISELED2_ERROR_EOC (0x00000002u)
#define ENUM_IO_TIC_STATUS_FLAGS_14_AND_15_TIC_STATUS_FLAGS_14_ISELED2_ERROR_FRAME_CRC (0x00000003u)
#define ENUM_IO_TIC_STATUS_FLAGS_14_AND_15_TIC_STATUS_FLAGS_14_ISELED2_ERROR_FRAME_FREQ (0x00000004u)
#define ENUM_IO_TIC_STATUS_FLAGS_14_AND_15_TIC_STATUS_FLAGS_14_ISELED2_ERROR_FRAME_SYNC (0x00000005u)
#define ENUM_IO_TIC_STATUS_FLAGS_14_AND_15_TIC_STATUS_FLAGS_14_ISELED2_ERROR_FRAME_5B4B_ERROR (0x00000006u)

#define BITP_IO_TIC_STATUS_FLAGS_14_AND_15_TIC_STATUS_FLAGS_15                 (8u)
#define BITL_IO_TIC_STATUS_FLAGS_14_AND_15_TIC_STATUS_FLAGS_15                 (7u)
#define BITM_IO_TIC_STATUS_FLAGS_14_AND_15_TIC_STATUS_FLAGS_15                 (0x00007F00u)
#define ENUM_IO_TIC_STATUS_FLAGS_14_AND_15_TIC_STATUS_FLAGS_15_ISELED3_CONTENTION (0x00000009u)
#define ENUM_IO_TIC_STATUS_FLAGS_14_AND_15_TIC_STATUS_FLAGS_15_ISELED3_ERROR_EOC (0x0000000Au)
#define ENUM_IO_TIC_STATUS_FLAGS_14_AND_15_TIC_STATUS_FLAGS_15_ISELED3_ERROR_FRAME_CRC (0x0000000Bu)
#define ENUM_IO_TIC_STATUS_FLAGS_14_AND_15_TIC_STATUS_FLAGS_15_ISELED3_ERROR_FRAME_FREQ (0x0000000Cu)
#define ENUM_IO_TIC_STATUS_FLAGS_14_AND_15_TIC_STATUS_FLAGS_15_ISELED3_ERROR_FRAME_SYNC (0x0000000Du)
#define ENUM_IO_TIC_STATUS_FLAGS_14_AND_15_TIC_STATUS_FLAGS_15_ISELED3_ERROR_FRAME_5B4B_ERROR (0x0000000Eu)

/* Register Name        : TIC_STATUS_FLAGS_16_AND_17
 * Register Addr        : 0xC93Eu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_STATUS_FLAGS_16_AND_17_ADDR                                     (0xC93Eu)
#define IO_TIC_STATUS_FLAGS_16_AND_17_RESET_VAL                                (0x00000000u)
#define IO_TIC_STATUS_FLAGS_16_AND_17_MMS                                      (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | TIC_STATUS_FLAGS_16      | Status flag of PORT_CTRL ACTIVE   | 0x00000000  |
 * |       |                          | interrupts. The ENUM table        |             |
 * |       |                          | values indicates the bit          |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | status.                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11-08 | TIC_STATUS_FLAGS_17      | Status flag of PORT_CTRL ACTIVE   | 0x00000000  |
 * |       |                          | interrupts. The ENUM table        |             |
 * |       |                          | values indicates the bit          |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | status.                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_STATUS_FLAGS_16_AND_17_TIC_STATUS_FLAGS_16                 (0u)
#define BITL_IO_TIC_STATUS_FLAGS_16_AND_17_TIC_STATUS_FLAGS_16                 (8u)
#define BITM_IO_TIC_STATUS_FLAGS_16_AND_17_TIC_STATUS_FLAGS_16                 (0x000000FFu)
#define ENUM_IO_TIC_STATUS_FLAGS_16_AND_17_TIC_STATUS_FLAGS_16_PORT_CTRL_ACTIVE_OUTPUT_0 (0x00000000u)
#define ENUM_IO_TIC_STATUS_FLAGS_16_AND_17_TIC_STATUS_FLAGS_16_PORT_CTRL_ACTIVE_OUTPUT_1 (0x00000001u)
#define ENUM_IO_TIC_STATUS_FLAGS_16_AND_17_TIC_STATUS_FLAGS_16_PORT_CTRL_ACTIVE_OUTPUT_2 (0x00000002u)
#define ENUM_IO_TIC_STATUS_FLAGS_16_AND_17_TIC_STATUS_FLAGS_16_PORT_CTRL_ACTIVE_OUTPUT_3 (0x00000003u)
#define ENUM_IO_TIC_STATUS_FLAGS_16_AND_17_TIC_STATUS_FLAGS_16_PORT_CTRL_ACTIVE_OUTPUT_4 (0x00000004u)
#define ENUM_IO_TIC_STATUS_FLAGS_16_AND_17_TIC_STATUS_FLAGS_16_PORT_CTRL_ACTIVE_OUTPUT_5 (0x00000005u)
#define ENUM_IO_TIC_STATUS_FLAGS_16_AND_17_TIC_STATUS_FLAGS_16_PORT_CTRL_ACTIVE_OUTPUT_6 (0x00000006u)
#define ENUM_IO_TIC_STATUS_FLAGS_16_AND_17_TIC_STATUS_FLAGS_16_PORT_CTRL_ACTIVE_OUTPUT_7 (0x00000007u)

#define BITP_IO_TIC_STATUS_FLAGS_16_AND_17_TIC_STATUS_FLAGS_17                 (8u)
#define BITL_IO_TIC_STATUS_FLAGS_16_AND_17_TIC_STATUS_FLAGS_17                 (4u)
#define BITM_IO_TIC_STATUS_FLAGS_16_AND_17_TIC_STATUS_FLAGS_17                 (0x00000F00u)
#define ENUM_IO_TIC_STATUS_FLAGS_16_AND_17_TIC_STATUS_FLAGS_17_PORT_CTRL_ACTIVE_OUTPUT_8 (0x00000008u)
#define ENUM_IO_TIC_STATUS_FLAGS_16_AND_17_TIC_STATUS_FLAGS_17_PORT_CTRL_ACTIVE_OUTPUT_9 (0x00000009u)
#define ENUM_IO_TIC_STATUS_FLAGS_16_AND_17_TIC_STATUS_FLAGS_17_PORT_CTRL_ACTIVE_OUTPUT_10 (0x0000000Au)
#define ENUM_IO_TIC_STATUS_FLAGS_16_AND_17_TIC_STATUS_FLAGS_17_PORT_CTRL_ACTIVE_OUTPUT_11 (0x0000000Bu)

/* Register Name        : TIC_STATUS_FLAGS_18_AND_19
 * Register Addr        : 0xC93Fu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_STATUS_FLAGS_18_AND_19_ADDR                                     (0xC93Fu)
#define IO_TIC_STATUS_FLAGS_18_AND_19_RESET_VAL                                (0x00000000u)
#define IO_TIC_STATUS_FLAGS_18_AND_19_MMS                                      (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | TIC_STATUS_FLAGS_18      | Status flag of PORT_CTRL          | 0x00000000  |
 * |       |                          | TCH_OUT_OF_RANGE interrupts. The  |             |
 * |       |                          | ENUM table values indicates the   |             |
 * |       |                          | bit position of each interrupt    |             |
 * |       |                          | status.                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14-08 | TIC_STATUS_FLAGS_19      | Status flag of PORT_CTRL          | 0x00000000  |
 * |       |                          | TCH_OUT_OF_RANGE and              |             |
 * |       |                          | AUTOSHUTDOWN interrupts. The      |             |
 * |       |                          | ENUM table values indicates the   |             |
 * |       |                          | bit position of each interrupt    |             |
 * |       |                          | status.                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_STATUS_FLAGS_18_AND_19_TIC_STATUS_FLAGS_18                 (0u)
#define BITL_IO_TIC_STATUS_FLAGS_18_AND_19_TIC_STATUS_FLAGS_18                 (8u)
#define BITM_IO_TIC_STATUS_FLAGS_18_AND_19_TIC_STATUS_FLAGS_18                 (0x000000FFu)
#define ENUM_IO_TIC_STATUS_FLAGS_18_AND_19_TIC_STATUS_FLAGS_18_PORT_CTRL_TCH_OUT_OF_RANGE_0 (0x00000000u)
#define ENUM_IO_TIC_STATUS_FLAGS_18_AND_19_TIC_STATUS_FLAGS_18_PORT_CTRL_TCH_OUT_OF_RANGE_1 (0x00000001u)
#define ENUM_IO_TIC_STATUS_FLAGS_18_AND_19_TIC_STATUS_FLAGS_18_PORT_CTRL_TCH_OUT_OF_RANGE_2 (0x00000002u)
#define ENUM_IO_TIC_STATUS_FLAGS_18_AND_19_TIC_STATUS_FLAGS_18_PORT_CTRL_TCH_OUT_OF_RANGE_3 (0x00000003u)
#define ENUM_IO_TIC_STATUS_FLAGS_18_AND_19_TIC_STATUS_FLAGS_18_PORT_CTRL_TCH_OUT_OF_RANGE_4 (0x00000004u)
#define ENUM_IO_TIC_STATUS_FLAGS_18_AND_19_TIC_STATUS_FLAGS_18_PORT_CTRL_TCH_OUT_OF_RANGE_5 (0x00000005u)
#define ENUM_IO_TIC_STATUS_FLAGS_18_AND_19_TIC_STATUS_FLAGS_18_PORT_CTRL_TCH_OUT_OF_RANGE_6 (0x00000006u)
#define ENUM_IO_TIC_STATUS_FLAGS_18_AND_19_TIC_STATUS_FLAGS_18_PORT_CTRL_TCH_OUT_OF_RANGE_7 (0x00000007u)

#define BITP_IO_TIC_STATUS_FLAGS_18_AND_19_TIC_STATUS_FLAGS_19                 (8u)
#define BITL_IO_TIC_STATUS_FLAGS_18_AND_19_TIC_STATUS_FLAGS_19                 (7u)
#define BITM_IO_TIC_STATUS_FLAGS_18_AND_19_TIC_STATUS_FLAGS_19                 (0x00007F00u)
#define ENUM_IO_TIC_STATUS_FLAGS_18_AND_19_TIC_STATUS_FLAGS_19_PORT_CTRL_TCH_OUT_OF_RANGE_8 (0x00000008u)

/* Register Name        : TIC_STATUS_FLAGS_20_AND_21
 * Register Addr        : 0xC940u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_STATUS_FLAGS_20_AND_21_ADDR                                     (0xC940u)
#define IO_TIC_STATUS_FLAGS_20_AND_21_RESET_VAL                                (0x00000000u)
#define IO_TIC_STATUS_FLAGS_20_AND_21_MMS                                      (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | TIC_STATUS_FLAGS_20      | Status flag of PORT_CTRL          | 0x00000000  |
 * |       |                          | TCH_LOCKED interrupts. The ENUM   |             |
 * |       |                          | table values indicates the bit    |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | status.                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_STATUS_FLAGS_21      | Status flag of PORT_CTRL          | 0x00000000  |
 * |       |                          | TCH_LOCKED interrupts. The ENUM   |             |
 * |       |                          | table values indicates the bit    |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | status.                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_STATUS_FLAGS_20_AND_21_TIC_STATUS_FLAGS_20                 (0u)
#define BITL_IO_TIC_STATUS_FLAGS_20_AND_21_TIC_STATUS_FLAGS_20                 (8u)
#define BITM_IO_TIC_STATUS_FLAGS_20_AND_21_TIC_STATUS_FLAGS_20                 (0x000000FFu)

#define BITP_IO_TIC_STATUS_FLAGS_20_AND_21_TIC_STATUS_FLAGS_21                 (8u)
#define BITL_IO_TIC_STATUS_FLAGS_20_AND_21_TIC_STATUS_FLAGS_21                 (5u)
#define BITM_IO_TIC_STATUS_FLAGS_20_AND_21_TIC_STATUS_FLAGS_21                 (0x00001F00u)
#define ENUM_IO_TIC_STATUS_FLAGS_20_AND_21_TIC_STATUS_FLAGS_21_PORT_CTRL_TCH_LOCKED_8 (0x00000008u)
#define ENUM_IO_TIC_STATUS_FLAGS_20_AND_21_TIC_STATUS_FLAGS_21_PORT_CTRL_TCH_LOCKED_9 (0x00000009u)
#define ENUM_IO_TIC_STATUS_FLAGS_20_AND_21_TIC_STATUS_FLAGS_21_PORT_CTRL_TCH_LOCKED_10 (0x0000000Au)
#define ENUM_IO_TIC_STATUS_FLAGS_20_AND_21_TIC_STATUS_FLAGS_21_PORT_CTRL_TCH_LOCKED_11 (0x0000000Bu)
#define ENUM_IO_TIC_STATUS_FLAGS_20_AND_21_TIC_STATUS_FLAGS_21_PORT_CTRL_TCH_MEAS_CYCLE_END (0x0000000Cu)

/* Register Name        : TIC_STATUS_FLAGS_22_AND_23
 * Register Addr        : 0xC941u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_STATUS_FLAGS_22_AND_23_ADDR                                     (0xC941u)
#define IO_TIC_STATUS_FLAGS_22_AND_23_RESET_VAL                                (0x00000000u)
#define IO_TIC_STATUS_FLAGS_22_AND_23_MMS                                      (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | TIC_STATUS_FLAGS_22      | Status flag of LIN0 interrupts.   | 0x00000000  |
 * |       |                          | The ENUM table values indicates   |             |
 * |       |                          | the bit position of each          |             |
 * |       |                          | interrupt status.                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-08 | TIC_STATUS_FLAGS_23      | Status flag of LIN1 interrupts.   | 0x00000000  |
 * |       |                          | The ENUM table values indicates   |             |
 * |       |                          | the bit position of each          |             |
 * |       |                          | interrupt status.                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_STATUS_FLAGS_22_AND_23_TIC_STATUS_FLAGS_22                 (0u)
#define BITL_IO_TIC_STATUS_FLAGS_22_AND_23_TIC_STATUS_FLAGS_22                 (8u)
#define BITM_IO_TIC_STATUS_FLAGS_22_AND_23_TIC_STATUS_FLAGS_22                 (0x000000FFu)
#define ENUM_IO_TIC_STATUS_FLAGS_22_AND_23_TIC_STATUS_FLAGS_22_LIN0_EN         (0x00000000u)
#define ENUM_IO_TIC_STATUS_FLAGS_22_AND_23_TIC_STATUS_FLAGS_22_LIN0_WAKEUP_DETECTED (0x00000001u)
#define ENUM_IO_TIC_STATUS_FLAGS_22_AND_23_TIC_STATUS_FLAGS_22_LIN0_FRAME_RESPONSE_TOO_SHORT (0x00000002u)
#define ENUM_IO_TIC_STATUS_FLAGS_22_AND_23_TIC_STATUS_FLAGS_22_LIN0_FRAMING_ERROR (0x00000003u)
#define ENUM_IO_TIC_STATUS_FLAGS_22_AND_23_TIC_STATUS_FLAGS_22_LIN0_TX_DATA_CONTENTION (0x00000004u)
#define ENUM_IO_TIC_STATUS_FLAGS_22_AND_23_TIC_STATUS_FLAGS_22_LIN0_PID_FIELD_CONTENTION (0x00000005u)
#define ENUM_IO_TIC_STATUS_FLAGS_22_AND_23_TIC_STATUS_FLAGS_22_LIN0_SYNC_FIELD_CONTENTION (0x00000006u)
#define ENUM_IO_TIC_STATUS_FLAGS_22_AND_23_TIC_STATUS_FLAGS_22_LIN0_BREAK_FIELD_CONTENTION (0x00000007u)

#define BITP_IO_TIC_STATUS_FLAGS_22_AND_23_TIC_STATUS_FLAGS_23                 (8u)
#define BITL_IO_TIC_STATUS_FLAGS_22_AND_23_TIC_STATUS_FLAGS_23                 (8u)
#define BITM_IO_TIC_STATUS_FLAGS_22_AND_23_TIC_STATUS_FLAGS_23                 (0x0000FF00u)
#define ENUM_IO_TIC_STATUS_FLAGS_22_AND_23_TIC_STATUS_FLAGS_23_LIN1_EN         (0x00000008u)
#define ENUM_IO_TIC_STATUS_FLAGS_22_AND_23_TIC_STATUS_FLAGS_23_LIN1_WAKEUP_DETECTED (0x00000009u)
#define ENUM_IO_TIC_STATUS_FLAGS_22_AND_23_TIC_STATUS_FLAGS_23_LIN1_FRAME_RESPONSE_TOO_SHORT (0x0000000Au)
#define ENUM_IO_TIC_STATUS_FLAGS_22_AND_23_TIC_STATUS_FLAGS_23_LIN1_FRAMING_ERROR (0x0000000Bu)
#define ENUM_IO_TIC_STATUS_FLAGS_22_AND_23_TIC_STATUS_FLAGS_23_LIN1_TX_DATA_CONTENTION (0x0000000Cu)
#define ENUM_IO_TIC_STATUS_FLAGS_22_AND_23_TIC_STATUS_FLAGS_23_LIN1_PID_FIELD_CONTENTION (0x0000000Du)
#define ENUM_IO_TIC_STATUS_FLAGS_22_AND_23_TIC_STATUS_FLAGS_23_LIN1_SYNC_FIELD_CONTENTION (0x0000000Eu)
#define ENUM_IO_TIC_STATUS_FLAGS_22_AND_23_TIC_STATUS_FLAGS_23_LIN1_BREAK_FIELD_CONTENTION (0x0000000Fu)

/* Register Name        : TIC_STATUS_FLAGS_24_AND_25
 * Register Addr        : 0xC942u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_STATUS_FLAGS_24_AND_25_ADDR                                     (0xC942u)
#define IO_TIC_STATUS_FLAGS_24_AND_25_RESET_VAL                                (0x00000000u)
#define IO_TIC_STATUS_FLAGS_24_AND_25_MMS                                      (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 01-00 | TIC_STATUS_FLAGS_24      | Status flag of UART0 interrupts.  | 0x00000000  |
 * |       |                          | The ENUM table values indicates   |             |
 * |       |                          | the bit position of each          |             |
 * |       |                          | interrupt status.                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-08 | TIC_STATUS_FLAGS_25      | Status flag of FLEX_IO0           | 0x00000000  |
 * |       |                          | interrupts. The ENUM table        |             |
 * |       |                          | values indicates the bit          |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | status.                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_STATUS_FLAGS_24_AND_25_TIC_STATUS_FLAGS_24                 (0u)
#define BITL_IO_TIC_STATUS_FLAGS_24_AND_25_TIC_STATUS_FLAGS_24                 (2u)
#define BITM_IO_TIC_STATUS_FLAGS_24_AND_25_TIC_STATUS_FLAGS_24                 (0x00000003u)
#define ENUM_IO_TIC_STATUS_FLAGS_24_AND_25_TIC_STATUS_FLAGS_24_UART0_WORD_TRANSMITTED (0x00000000u)
#define ENUM_IO_TIC_STATUS_FLAGS_24_AND_25_TIC_STATUS_FLAGS_24_UART0_WORD_RECEIVED (0x00000001u)

#define BITP_IO_TIC_STATUS_FLAGS_24_AND_25_TIC_STATUS_FLAGS_25                 (8u)
#define BITL_IO_TIC_STATUS_FLAGS_24_AND_25_TIC_STATUS_FLAGS_25                 (8u)
#define BITM_IO_TIC_STATUS_FLAGS_24_AND_25_TIC_STATUS_FLAGS_25                 (0x0000FF00u)
#define ENUM_IO_TIC_STATUS_FLAGS_24_AND_25_TIC_STATUS_FLAGS_25_FLEX_IO0_CONFIG_INT_0 (0x00000008u)
#define ENUM_IO_TIC_STATUS_FLAGS_24_AND_25_TIC_STATUS_FLAGS_25_FLEX_IO0_CONFIG_INT_1 (0x00000009u)
#define ENUM_IO_TIC_STATUS_FLAGS_24_AND_25_TIC_STATUS_FLAGS_25_FLEX_IO0_CONFIG_INT_2 (0x0000000Au)
#define ENUM_IO_TIC_STATUS_FLAGS_24_AND_25_TIC_STATUS_FLAGS_25_FLEX_IO0_CONFIG_INT_3 (0x0000000Bu)
#define ENUM_IO_TIC_STATUS_FLAGS_24_AND_25_TIC_STATUS_FLAGS_25_FLEX_IO0_CONFIG_INT_4 (0x0000000Cu)
#define ENUM_IO_TIC_STATUS_FLAGS_24_AND_25_TIC_STATUS_FLAGS_25_FLEX_IO0_CONFIG_INT_5 (0x0000000Du)
#define ENUM_IO_TIC_STATUS_FLAGS_24_AND_25_TIC_STATUS_FLAGS_25_FLEX_IO0_CONFIG_INT_6 (0x0000000Eu)
#define ENUM_IO_TIC_STATUS_FLAGS_24_AND_25_TIC_STATUS_FLAGS_25_FLEX_IO0_CONFIG_INT_7 (0x0000000Fu)

/* Register Name        : TIC_STATUS_FLAGS_26_AND_27
 * Register Addr        : 0xC943u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_STATUS_FLAGS_26_AND_27_ADDR                                     (0xC943u)
#define IO_TIC_STATUS_FLAGS_26_AND_27_RESET_VAL                                (0x00000000u)
#define IO_TIC_STATUS_FLAGS_26_AND_27_MMS                                      (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | TIC_STATUS_FLAGS_26      | Status flag of FLEX_IO1           | 0x00000000  |
 * |       |                          | interrupts. The ENUM table        |             |
 * |       |                          | values indicates the bit          |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | status.                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 10-08 | TIC_STATUS_FLAGS_27      | Status flag of ADC_INTF           | 0x00000000  |
 * |       |                          | interrupts. The ENUM table        |             |
 * |       |                          | values indicates the bit          |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | status.                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_STATUS_FLAGS_26_AND_27_TIC_STATUS_FLAGS_26                 (0u)
#define BITL_IO_TIC_STATUS_FLAGS_26_AND_27_TIC_STATUS_FLAGS_26                 (8u)
#define BITM_IO_TIC_STATUS_FLAGS_26_AND_27_TIC_STATUS_FLAGS_26                 (0x000000FFu)
#define ENUM_IO_TIC_STATUS_FLAGS_26_AND_27_TIC_STATUS_FLAGS_26_FLEX_IO1_CONFIG_INT_0 (0x00000000u)
#define ENUM_IO_TIC_STATUS_FLAGS_26_AND_27_TIC_STATUS_FLAGS_26_FLEX_IO1_CONFIG_INT_1 (0x00000001u)
#define ENUM_IO_TIC_STATUS_FLAGS_26_AND_27_TIC_STATUS_FLAGS_26_FLEX_IO1_CONFIG_INT_2 (0x00000002u)
#define ENUM_IO_TIC_STATUS_FLAGS_26_AND_27_TIC_STATUS_FLAGS_26_FLEX_IO1_CONFIG_INT_3 (0x00000003u)
#define ENUM_IO_TIC_STATUS_FLAGS_26_AND_27_TIC_STATUS_FLAGS_26_FLEX_IO1_CONFIG_INT_4 (0x00000004u)
#define ENUM_IO_TIC_STATUS_FLAGS_26_AND_27_TIC_STATUS_FLAGS_26_FLEX_IO1_CONFIG_INT_5 (0x00000005u)
#define ENUM_IO_TIC_STATUS_FLAGS_26_AND_27_TIC_STATUS_FLAGS_26_FLEX_IO1_CONFIG_INT_6 (0x00000006u)
#define ENUM_IO_TIC_STATUS_FLAGS_26_AND_27_TIC_STATUS_FLAGS_26_FLEX_IO1_CONFIG_INT_7 (0x00000007u)

#define BITP_IO_TIC_STATUS_FLAGS_26_AND_27_TIC_STATUS_FLAGS_27                 (8u)
#define BITL_IO_TIC_STATUS_FLAGS_26_AND_27_TIC_STATUS_FLAGS_27                 (3u)
#define BITM_IO_TIC_STATUS_FLAGS_26_AND_27_TIC_STATUS_FLAGS_27                 (0x00000700u)

/* Register Name        : TIC_STATUS_FLAGS_28_AND_29
 * Register Addr        : 0xC944u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_STATUS_FLAGS_28_AND_29_ADDR                                     (0xC944u)
#define IO_TIC_STATUS_FLAGS_28_AND_29_RESET_VAL                                (0x00000000u)
#define IO_TIC_STATUS_FLAGS_28_AND_29_MMS                                      (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 06-00 | TIC_STATUS_FLAGS_28      | Status flag of SLPWK interrupts.  | 0x00000000  |
 * |       |                          | The ENUM table values indicates   |             |
 * |       |                          | the bit position of each          |             |
 * |       |                          | interrupt status.                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-08 | TIC_STATUS_FLAGS_29      | Status flag of UMC, HS_COMM,      | 0x00000000  |
 * |       |                          | GPTP, BOOTLOADER and MANUAL       |             |
 * |       |                          | interrupts. The ENUM table        |             |
 * |       |                          | values indicates the bit          |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | status.                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_STATUS_FLAGS_28_AND_29_TIC_STATUS_FLAGS_28                 (0u)
#define BITL_IO_TIC_STATUS_FLAGS_28_AND_29_TIC_STATUS_FLAGS_28                 (7u)
#define BITM_IO_TIC_STATUS_FLAGS_28_AND_29_TIC_STATUS_FLAGS_28                 (0x0000007Fu)
#define ENUM_IO_TIC_STATUS_FLAGS_28_AND_29_TIC_STATUS_FLAGS_28_SLPWK_FLAG_CONFIRM_AWAKE (0x00000001u)
#define ENUM_IO_TIC_STATUS_FLAGS_28_AND_29_TIC_STATUS_FLAGS_28_SLPWK_FLAG_LINE_BUSY (0x00000002u)
#define ENUM_IO_TIC_STATUS_FLAGS_28_AND_29_TIC_STATUS_FLAGS_28_SLPWK_FLAG_SLEEP_ERR (0x00000003u)
#define ENUM_IO_TIC_STATUS_FLAGS_28_AND_29_TIC_STATUS_FLAGS_28_SLPWK_FLAG_STANDBY_ERR (0x00000004u)
#define ENUM_IO_TIC_STATUS_FLAGS_28_AND_29_TIC_STATUS_FLAGS_28_SLPWK_FLAG_RETURNED_FROM_STANDBY (0x00000005u)
#define ENUM_IO_TIC_STATUS_FLAGS_28_AND_29_TIC_STATUS_FLAGS_28_SLPWK_FLAG_REQ_SYSTEM_WAKEUP_CONF (0x00000006u)

#define BITP_IO_TIC_STATUS_FLAGS_28_AND_29_TIC_STATUS_FLAGS_29                 (8u)
#define BITL_IO_TIC_STATUS_FLAGS_28_AND_29_TIC_STATUS_FLAGS_29                 (8u)
#define BITM_IO_TIC_STATUS_FLAGS_28_AND_29_TIC_STATUS_FLAGS_29                 (0x0000FF00u)
#define ENUM_IO_TIC_STATUS_FLAGS_28_AND_29_TIC_STATUS_FLAGS_29_GPTP_LOCK       (0x0000000Bu)
#define ENUM_IO_TIC_STATUS_FLAGS_28_AND_29_TIC_STATUS_FLAGS_29_BOOTLOADER_DONE (0x0000000Cu)
#define ENUM_IO_TIC_STATUS_FLAGS_28_AND_29_TIC_STATUS_FLAGS_29_MANUAL_INTERRUPT (0x0000000Du)
#define ENUM_IO_TIC_STATUS_FLAGS_28_AND_29_TIC_STATUS_FLAGS_29_HS_COMM_ERROR   (0x0000000Fu)

/* Register Name        : TIC_STATUS_FLAGS_30_AND_31
 * Register Addr        : 0xC945u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_STATUS_FLAGS_30_AND_31_ADDR                                     (0xC945u)
#define IO_TIC_STATUS_FLAGS_30_AND_31_RESET_VAL                                (0x00000000u)
#define IO_TIC_STATUS_FLAGS_30_AND_31_MMS                                      (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | TIC_STATUS_FLAGS_30      | Status flag of ADC interrupts.    | 0x00000000  |
 * |       |                          | The ENUM table values indicates   |             |
 * |       |                          | the bit position of each          |             |
 * |       |                          | interrupt status.                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13-08 | TIC_STATUS_FLAGS_31      | Status flag of ADC interrupts.    | 0x00000000  |
 * |       |                          | The ENUM table values indicates   |             |
 * |       |                          | the bit position of each          |             |
 * |       |                          | interrupt status.                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_STATUS_FLAGS_30_AND_31_TIC_STATUS_FLAGS_30                 (0u)
#define BITL_IO_TIC_STATUS_FLAGS_30_AND_31_TIC_STATUS_FLAGS_30                 (8u)
#define BITM_IO_TIC_STATUS_FLAGS_30_AND_31_TIC_STATUS_FLAGS_30                 (0x000000FFu)

#define BITP_IO_TIC_STATUS_FLAGS_30_AND_31_TIC_STATUS_FLAGS_31                 (8u)
#define BITL_IO_TIC_STATUS_FLAGS_30_AND_31_TIC_STATUS_FLAGS_31                 (6u)
#define BITM_IO_TIC_STATUS_FLAGS_30_AND_31_TIC_STATUS_FLAGS_31                 (0x00003F00u)

/* Register Name        : TIC_STATUS_FLAGS_32_AND_33
 * Register Addr        : 0xC946u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_STATUS_FLAGS_32_AND_33_ADDR                                     (0xC946u)
#define IO_TIC_STATUS_FLAGS_32_AND_33_RESET_VAL                                (0x00000000u)
#define IO_TIC_STATUS_FLAGS_32_AND_33_MMS                                      (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | TIC_STATUS_FLAGS_32      | Status flag of LCE_SMC and SQI    | 0x00000000  |
 * |       |                          | interrupts. The ENUM table        |             |
 * |       |                          | values indicates the bit          |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | status.                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-08 | TIC_STATUS_FLAGS_33      | Status flag of GPIO interrupts.   | 0x00000000  |
 * |       |                          | The ENUM table values indicates   |             |
 * |       |                          | the bit position of each          |             |
 * |       |                          | interrupt status.                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_STATUS_FLAGS_32_AND_33_TIC_STATUS_FLAGS_32                 (0u)
#define BITL_IO_TIC_STATUS_FLAGS_32_AND_33_TIC_STATUS_FLAGS_32                 (8u)
#define BITM_IO_TIC_STATUS_FLAGS_32_AND_33_TIC_STATUS_FLAGS_32                 (0x000000FFu)

#define BITP_IO_TIC_STATUS_FLAGS_32_AND_33_TIC_STATUS_FLAGS_33                 (8u)
#define BITL_IO_TIC_STATUS_FLAGS_32_AND_33_TIC_STATUS_FLAGS_33                 (8u)
#define BITM_IO_TIC_STATUS_FLAGS_32_AND_33_TIC_STATUS_FLAGS_33                 (0x0000FF00u)
#define ENUM_IO_TIC_STATUS_FLAGS_32_AND_33_TIC_STATUS_FLAGS_33_SA_IF_0         (0x00000008u)
#define ENUM_IO_TIC_STATUS_FLAGS_32_AND_33_TIC_STATUS_FLAGS_33_SA_IF_1         (0x00000009u)
#define ENUM_IO_TIC_STATUS_FLAGS_32_AND_33_TIC_STATUS_FLAGS_33_SA_IF_2         (0x0000000Au)
#define ENUM_IO_TIC_STATUS_FLAGS_32_AND_33_TIC_STATUS_FLAGS_33_SA_IF_3         (0x0000000Bu)
#define ENUM_IO_TIC_STATUS_FLAGS_32_AND_33_TIC_STATUS_FLAGS_33_SA_IF_4         (0x0000000Cu)
#define ENUM_IO_TIC_STATUS_FLAGS_32_AND_33_TIC_STATUS_FLAGS_33_SA_IF_5         (0x0000000Du)
#define ENUM_IO_TIC_STATUS_FLAGS_32_AND_33_TIC_STATUS_FLAGS_33_SA_IF_6         (0x0000000Eu)
#define ENUM_IO_TIC_STATUS_FLAGS_32_AND_33_TIC_STATUS_FLAGS_33_SA_IF_7         (0x0000000Fu)

/* Register Name        : TIC_STATUS_FLAGS_34_AND_35
 * Register Addr        : 0xC947u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_STATUS_FLAGS_34_AND_35_ADDR                                     (0xC947u)
#define IO_TIC_STATUS_FLAGS_34_AND_35_RESET_VAL                                (0x00000000u)
#define IO_TIC_STATUS_FLAGS_34_AND_35_MMS                                      (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | TIC_STATUS_FLAGS_34      | Status flag of GPIO, GPIO, SSC    | 0x00000000  |
 * |       |                          | and FLEX_IO FLEX_IO interrupts.   |             |
 * |       |                          | The ENUM table values indicates   |             |
 * |       |                          | the bit position of each          |             |
 * |       |                          | interrupt status.                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_STATUS_FLAGS_34_AND_35_TIC_STATUS_FLAGS_34                 (0u)
#define BITL_IO_TIC_STATUS_FLAGS_34_AND_35_TIC_STATUS_FLAGS_34                 (8u)
#define BITM_IO_TIC_STATUS_FLAGS_34_AND_35_TIC_STATUS_FLAGS_34                 (0x000000FFu)
#define ENUM_IO_TIC_STATUS_FLAGS_34_AND_35_TIC_STATUS_FLAGS_34_SA_IF_8_HIGH    (0x00000000u)
#define ENUM_IO_TIC_STATUS_FLAGS_34_AND_35_TIC_STATUS_FLAGS_34_SA_IF_9_HIGH    (0x00000001u)
#define ENUM_IO_TIC_STATUS_FLAGS_34_AND_35_TIC_STATUS_FLAGS_34_SA_IF_10_HIGH   (0x00000002u)
#define ENUM_IO_TIC_STATUS_FLAGS_34_AND_35_TIC_STATUS_FLAGS_34_SA_IF_11_HIGH   (0x00000003u)
#define ENUM_IO_TIC_STATUS_FLAGS_34_AND_35_TIC_STATUS_FLAGS_34_SSC_MODE        (0x00000004u)
#define ENUM_IO_TIC_STATUS_FLAGS_34_AND_35_TIC_STATUS_FLAGS_34_SSC_UNSUCCESSFUL_RETURN_FUNC_HIGH (0x00000005u)
#define ENUM_IO_TIC_STATUS_FLAGS_34_AND_35_TIC_STATUS_FLAGS_34_SQI_REACHES_WARNING_RISING (0x00000006u)
#define ENUM_IO_TIC_STATUS_FLAGS_34_AND_35_TIC_STATUS_FLAGS_34_SQI_REACHES_BAD_RISING (0x00000007u)

/* Register Name        : TIC_CONTROL0
 * Register Addr        : 0xC94Du
 * Register Reset Value : 0x001E8480u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CONTROL0_ADDR                                                   (0xC94Du)
#define IO_TIC_CONTROL0_RESET_VAL                                              (0x001E8480u)
#define IO_TIC_CONTROL0_MMS                                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_RESEND_PERIOD        | TIC resend period in              | 0x001e8480  |
 * |       |                          | nanoseconds. The bit weighting    |             |
 * |       |                          | of time is 1ns, but the value     |             |
 * |       |                          | introduced in the field will be   |             |
 * |       |                          | rounded to the nearest 10ns       |             |
 * |       |                          | multiplier. If the value is 0000  |             |
 * |       |                          | 0000 0000 0000, there will be no  |             |
 * |       |                          | resends.                          |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CONTROL0_TIC_RESEND_PERIOD                                 (0u)
#define BITL_IO_TIC_CONTROL0_TIC_RESEND_PERIOD                                 (16u)
#define BITM_IO_TIC_CONTROL0_TIC_RESEND_PERIOD                                 (0x0000FFFFu)

/* Register Name        : TIC_CONTROL1
 * Register Addr        : 0xC94Eu
 * Register Reset Value : 0x0000041Eu
 * Register MMS         : 0xAu
 */

#define IO_TIC_CONTROL1_ADDR                                                   (0xC94Eu)
#define IO_TIC_CONTROL1_RESET_VAL                                              (0x0000041Eu)
#define IO_TIC_CONTROL1_MMS                                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | TIC_RESEND_PERIOD        | TIC resend period in              | 0x0000001e  |
 * |       |                          | nanoseconds. The bit weighting    |             |
 * |       |                          | of time is 1ns, but the value     |             |
 * |       |                          | introduced in the field will be   |             |
 * |       |                          | rounded to the nearest 10ns       |             |
 * |       |                          | multiplier. If the value is 0000  |             |
 * |       |                          | 0000 0000 0000, there will be no  |             |
 * |       |                          | resends.                          |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 8     | TIC_CLEAR_ALL            | Clears all the interrupts         | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 9     | TIC_EBTP_INT_DISABLE     | If HIGH, the transaction          | 0x00000000  |
 * |       |                          | interrupt controller will not     |             |
 * |       |                          | generate E2B messages over the    |             |
 * |       |                          | T1S interface when an interrupt   |             |
 * |       |                          | trigger.                          |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 10    | TIC_OASPI_INT_DISABLE    | If HIGH, the Transaction          | 0x00000001  |
 * |       |                          | Interrupt Controller will not     |             |
 * |       |                          | generate OA-SPI interrupt when    |             |
 * |       |                          | an interrupt trigger.             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CONTROL1_TIC_RESEND_PERIOD                                 (0u)
#define BITL_IO_TIC_CONTROL1_TIC_RESEND_PERIOD                                 (8u)
#define BITM_IO_TIC_CONTROL1_TIC_RESEND_PERIOD                                 (0x000000FFu)

#define BITP_IO_TIC_CONTROL1_TIC_CLEAR_ALL                                     (8u)
#define BITL_IO_TIC_CONTROL1_TIC_CLEAR_ALL                                     (1u)
#define BITM_IO_TIC_CONTROL1_TIC_CLEAR_ALL                                     (0x0100u)
#define ENUM_IO_TIC_CONTROL1_TIC_CLEAR_ALL_INACTIVE                            (0x00000000u)
#define ENUM_IO_TIC_CONTROL1_TIC_CLEAR_ALL_TRIGGER                             (0x00000001u)

#define BITP_IO_TIC_CONTROL1_TIC_EBTP_INT_DISABLE                              (9u)
#define BITL_IO_TIC_CONTROL1_TIC_EBTP_INT_DISABLE                              (1u)
#define BITM_IO_TIC_CONTROL1_TIC_EBTP_INT_DISABLE                              (0x0200u)
#define ENUM_IO_TIC_CONTROL1_TIC_EBTP_INT_DISABLE_LOW                          (0x00000000u)
#define ENUM_IO_TIC_CONTROL1_TIC_EBTP_INT_DISABLE_HIGH                         (0x00000001u)

#define BITP_IO_TIC_CONTROL1_TIC_OASPI_INT_DISABLE                             (10u)
#define BITL_IO_TIC_CONTROL1_TIC_OASPI_INT_DISABLE                             (1u)
#define BITM_IO_TIC_CONTROL1_TIC_OASPI_INT_DISABLE                             (0x0400u)
#define ENUM_IO_TIC_CONTROL1_TIC_OASPI_INT_DISABLE_LOW                         (0x00000000u)
#define ENUM_IO_TIC_CONTROL1_TIC_OASPI_INT_DISABLE_HIGH                        (0x00000001u)

/* Register Name        : TIC_ENABLE_0_FIFO0_READ_REG0
 * Register Addr        : 0xC951u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_0_FIFO0_READ_REG0_ADDR                                   (0xC951u)
#define IO_TIC_ENABLE_0_FIFO0_READ_REG0_RESET_VAL                              (0x00000000u)
#define IO_TIC_ENABLE_0_FIFO0_READ_REG0_MMS                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_ENABLE_0_RISING      | Interrupts enable FIFO0_READ.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_ENABLE_0_FALLING     | Interrupts enable FIFO0_READ.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_0_FIFO0_READ_REG0_TIC_ENABLE_0_RISING               (0u)
#define BITL_IO_TIC_ENABLE_0_FIFO0_READ_REG0_TIC_ENABLE_0_RISING               (5u)
#define BITM_IO_TIC_ENABLE_0_FIFO0_READ_REG0_TIC_ENABLE_0_RISING               (0x0000001Fu)
#define ENUM_IO_TIC_ENABLE_0_FIFO0_READ_REG0_TIC_ENABLE_0_RISING_FIFO0_READ_EMPTY_RISING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_0_FIFO0_READ_REG0_TIC_ENABLE_0_RISING_FIFO0_READ_THRESHOLD_1_RISING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_0_FIFO0_READ_REG0_TIC_ENABLE_0_RISING_FIFO0_READ_THRESHOLD_2_RISING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_0_FIFO0_READ_REG0_TIC_ENABLE_0_RISING_FIFO0_READ_THRESHOLD_3_RISING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_0_FIFO0_READ_REG0_TIC_ENABLE_0_RISING_FIFO0_READ_FULL_RISING (0x00000004u)

#define BITP_IO_TIC_ENABLE_0_FIFO0_READ_REG0_TIC_ENABLE_0_FALLING              (8u)
#define BITL_IO_TIC_ENABLE_0_FIFO0_READ_REG0_TIC_ENABLE_0_FALLING              (5u)
#define BITM_IO_TIC_ENABLE_0_FIFO0_READ_REG0_TIC_ENABLE_0_FALLING              (0x00001F00u)
#define ENUM_IO_TIC_ENABLE_0_FIFO0_READ_REG0_TIC_ENABLE_0_FALLING_FIFO0_READ_EMPTY_FALLING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_0_FIFO0_READ_REG0_TIC_ENABLE_0_FALLING_FIFO0_READ_THRESHOLD_1_FALLING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_0_FIFO0_READ_REG0_TIC_ENABLE_0_FALLING_FIFO0_READ_THRESHOLD_2_FALLING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_0_FIFO0_READ_REG0_TIC_ENABLE_0_FALLING_FIFO0_READ_THRESHOLD_3_FALLING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_0_FIFO0_READ_REG0_TIC_ENABLE_0_FALLING_FIFO0_READ_FULL_FALLING (0x00000004u)

/* Register Name        : TIC_ENABLE_0_FIFO0_READ_REG1
 * Register Addr        : 0xC952u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_0_FIFO0_READ_REG1_ADDR                                   (0xC952u)
#define IO_TIC_ENABLE_0_FIFO0_READ_REG1_RESET_VAL                              (0x00000000u)
#define IO_TIC_ENABLE_0_FIFO0_READ_REG1_MMS                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_ENABLE_0_HIGH        | Interrupts enable FIFO0_READ.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_ENABLE_0_LOW         | Interrupts enable FIFO0_READ.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_0_FIFO0_READ_REG1_TIC_ENABLE_0_HIGH                 (0u)
#define BITL_IO_TIC_ENABLE_0_FIFO0_READ_REG1_TIC_ENABLE_0_HIGH                 (5u)
#define BITM_IO_TIC_ENABLE_0_FIFO0_READ_REG1_TIC_ENABLE_0_HIGH                 (0x0000001Fu)
#define ENUM_IO_TIC_ENABLE_0_FIFO0_READ_REG1_TIC_ENABLE_0_HIGH_FIFO0_READ_EMPTY_HIGH (0x00000000u)
#define ENUM_IO_TIC_ENABLE_0_FIFO0_READ_REG1_TIC_ENABLE_0_HIGH_FIFO0_READ_THRESHOLD_1_HIGH (0x00000001u)
#define ENUM_IO_TIC_ENABLE_0_FIFO0_READ_REG1_TIC_ENABLE_0_HIGH_FIFO0_READ_THRESHOLD_2_HIGH (0x00000002u)
#define ENUM_IO_TIC_ENABLE_0_FIFO0_READ_REG1_TIC_ENABLE_0_HIGH_FIFO0_READ_THRESHOLD_3_HIGH (0x00000003u)
#define ENUM_IO_TIC_ENABLE_0_FIFO0_READ_REG1_TIC_ENABLE_0_HIGH_FIFO0_READ_FULL_HIGH (0x00000004u)

#define BITP_IO_TIC_ENABLE_0_FIFO0_READ_REG1_TIC_ENABLE_0_LOW                  (8u)
#define BITL_IO_TIC_ENABLE_0_FIFO0_READ_REG1_TIC_ENABLE_0_LOW                  (5u)
#define BITM_IO_TIC_ENABLE_0_FIFO0_READ_REG1_TIC_ENABLE_0_LOW                  (0x00001F00u)
#define ENUM_IO_TIC_ENABLE_0_FIFO0_READ_REG1_TIC_ENABLE_0_LOW_FIFO0_READ_EMPTY_LOW (0x00000000u)
#define ENUM_IO_TIC_ENABLE_0_FIFO0_READ_REG1_TIC_ENABLE_0_LOW_FIFO0_READ_THRESHOLD_1_LOW (0x00000001u)
#define ENUM_IO_TIC_ENABLE_0_FIFO0_READ_REG1_TIC_ENABLE_0_LOW_FIFO0_READ_THRESHOLD_2_LOW (0x00000002u)
#define ENUM_IO_TIC_ENABLE_0_FIFO0_READ_REG1_TIC_ENABLE_0_LOW_FIFO0_READ_THRESHOLD_3_LOW (0x00000003u)
#define ENUM_IO_TIC_ENABLE_0_FIFO0_READ_REG1_TIC_ENABLE_0_LOW_FIFO0_READ_FULL_LOW (0x00000004u)

/* Register Name        : TIC_ENABLE_1_FIFO0_WRITE_REG0
 * Register Addr        : 0xC953u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_1_FIFO0_WRITE_REG0_ADDR                                  (0xC953u)
#define IO_TIC_ENABLE_1_FIFO0_WRITE_REG0_RESET_VAL                             (0x00000000u)
#define IO_TIC_ENABLE_1_FIFO0_WRITE_REG0_MMS                                   (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_ENABLE_1_RISING      | Interrupts enable FIFO0_WRITE.    | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_ENABLE_1_FALLING     | Interrupts enable FIFO0_WRITE.    | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_1_FIFO0_WRITE_REG0_TIC_ENABLE_1_RISING              (0u)
#define BITL_IO_TIC_ENABLE_1_FIFO0_WRITE_REG0_TIC_ENABLE_1_RISING              (5u)
#define BITM_IO_TIC_ENABLE_1_FIFO0_WRITE_REG0_TIC_ENABLE_1_RISING              (0x0000001Fu)
#define ENUM_IO_TIC_ENABLE_1_FIFO0_WRITE_REG0_TIC_ENABLE_1_RISING_FIFO0_WRITE_EMPTY_RISING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_1_FIFO0_WRITE_REG0_TIC_ENABLE_1_RISING_FIFO0_WRITE_THRESHOLD_1_RISING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_1_FIFO0_WRITE_REG0_TIC_ENABLE_1_RISING_FIFO0_WRITE_THRESHOLD_2_RISING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_1_FIFO0_WRITE_REG0_TIC_ENABLE_1_RISING_FIFO0_WRITE_THRESHOLD_3_RISING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_1_FIFO0_WRITE_REG0_TIC_ENABLE_1_RISING_FIFO0_WRITE_FULL_RISING (0x00000004u)

#define BITP_IO_TIC_ENABLE_1_FIFO0_WRITE_REG0_TIC_ENABLE_1_FALLING             (8u)
#define BITL_IO_TIC_ENABLE_1_FIFO0_WRITE_REG0_TIC_ENABLE_1_FALLING             (5u)
#define BITM_IO_TIC_ENABLE_1_FIFO0_WRITE_REG0_TIC_ENABLE_1_FALLING             (0x00001F00u)
#define ENUM_IO_TIC_ENABLE_1_FIFO0_WRITE_REG0_TIC_ENABLE_1_FALLING_FIFO0_WRITE_EMPTY_FALLING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_1_FIFO0_WRITE_REG0_TIC_ENABLE_1_FALLING_FIFO0_WRITE_THRESHOLD_1_FALLING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_1_FIFO0_WRITE_REG0_TIC_ENABLE_1_FALLING_FIFO0_WRITE_THRESHOLD_2_FALLING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_1_FIFO0_WRITE_REG0_TIC_ENABLE_1_FALLING_FIFO0_WRITE_THRESHOLD_3_FALLING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_1_FIFO0_WRITE_REG0_TIC_ENABLE_1_FALLING_FIFO0_WRITE_FULL_FALLING (0x00000004u)

/* Register Name        : TIC_ENABLE_1_FIFO0_WRITE_REG1
 * Register Addr        : 0xC954u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_1_FIFO0_WRITE_REG1_ADDR                                  (0xC954u)
#define IO_TIC_ENABLE_1_FIFO0_WRITE_REG1_RESET_VAL                             (0x00000000u)
#define IO_TIC_ENABLE_1_FIFO0_WRITE_REG1_MMS                                   (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_ENABLE_1_HIGH        | Interrupts enable FIFO0_WRITE.    | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_ENABLE_1_LOW         | Interrupts enable FIFO0_WRITE.    | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_1_FIFO0_WRITE_REG1_TIC_ENABLE_1_HIGH                (0u)
#define BITL_IO_TIC_ENABLE_1_FIFO0_WRITE_REG1_TIC_ENABLE_1_HIGH                (5u)
#define BITM_IO_TIC_ENABLE_1_FIFO0_WRITE_REG1_TIC_ENABLE_1_HIGH                (0x0000001Fu)
#define ENUM_IO_TIC_ENABLE_1_FIFO0_WRITE_REG1_TIC_ENABLE_1_HIGH_FIFO0_WRITE_EMPTY_HIGH (0x00000000u)
#define ENUM_IO_TIC_ENABLE_1_FIFO0_WRITE_REG1_TIC_ENABLE_1_HIGH_FIFO0_WRITE_THRESHOLD_1_HIGH (0x00000001u)
#define ENUM_IO_TIC_ENABLE_1_FIFO0_WRITE_REG1_TIC_ENABLE_1_HIGH_FIFO0_WRITE_THRESHOLD_2_HIGH (0x00000002u)
#define ENUM_IO_TIC_ENABLE_1_FIFO0_WRITE_REG1_TIC_ENABLE_1_HIGH_FIFO0_WRITE_THRESHOLD_3_HIGH (0x00000003u)
#define ENUM_IO_TIC_ENABLE_1_FIFO0_WRITE_REG1_TIC_ENABLE_1_HIGH_FIFO0_WRITE_FULL_HIGH (0x00000004u)

#define BITP_IO_TIC_ENABLE_1_FIFO0_WRITE_REG1_TIC_ENABLE_1_LOW                 (8u)
#define BITL_IO_TIC_ENABLE_1_FIFO0_WRITE_REG1_TIC_ENABLE_1_LOW                 (5u)
#define BITM_IO_TIC_ENABLE_1_FIFO0_WRITE_REG1_TIC_ENABLE_1_LOW                 (0x00001F00u)
#define ENUM_IO_TIC_ENABLE_1_FIFO0_WRITE_REG1_TIC_ENABLE_1_LOW_FIFO0_WRITE_EMPTY_LOW (0x00000000u)
#define ENUM_IO_TIC_ENABLE_1_FIFO0_WRITE_REG1_TIC_ENABLE_1_LOW_FIFO0_WRITE_THRESHOLD_1_LOW (0x00000001u)
#define ENUM_IO_TIC_ENABLE_1_FIFO0_WRITE_REG1_TIC_ENABLE_1_LOW_FIFO0_WRITE_THRESHOLD_2_LOW (0x00000002u)
#define ENUM_IO_TIC_ENABLE_1_FIFO0_WRITE_REG1_TIC_ENABLE_1_LOW_FIFO0_WRITE_THRESHOLD_3_LOW (0x00000003u)
#define ENUM_IO_TIC_ENABLE_1_FIFO0_WRITE_REG1_TIC_ENABLE_1_LOW_FIFO0_WRITE_FULL_LOW (0x00000004u)

/* Register Name        : TIC_ENABLE_2_FIFO1_READ_REG0
 * Register Addr        : 0xC955u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_2_FIFO1_READ_REG0_ADDR                                   (0xC955u)
#define IO_TIC_ENABLE_2_FIFO1_READ_REG0_RESET_VAL                              (0x00000000u)
#define IO_TIC_ENABLE_2_FIFO1_READ_REG0_MMS                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_ENABLE_2_RISING      | Interrupts enable FIFO1_READ.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_ENABLE_2_FALLING     | Interrupts enable FIFO1_READ.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_2_FIFO1_READ_REG0_TIC_ENABLE_2_RISING               (0u)
#define BITL_IO_TIC_ENABLE_2_FIFO1_READ_REG0_TIC_ENABLE_2_RISING               (5u)
#define BITM_IO_TIC_ENABLE_2_FIFO1_READ_REG0_TIC_ENABLE_2_RISING               (0x0000001Fu)
#define ENUM_IO_TIC_ENABLE_2_FIFO1_READ_REG0_TIC_ENABLE_2_RISING_FIFO1_READ_EMPTY_RISING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_2_FIFO1_READ_REG0_TIC_ENABLE_2_RISING_FIFO1_READ_THRESHOLD_1_RISING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_2_FIFO1_READ_REG0_TIC_ENABLE_2_RISING_FIFO1_READ_THRESHOLD_2_RISING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_2_FIFO1_READ_REG0_TIC_ENABLE_2_RISING_FIFO1_READ_THRESHOLD_3_RISING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_2_FIFO1_READ_REG0_TIC_ENABLE_2_RISING_FIFO1_READ_FULL_RISING (0x00000004u)

#define BITP_IO_TIC_ENABLE_2_FIFO1_READ_REG0_TIC_ENABLE_2_FALLING              (8u)
#define BITL_IO_TIC_ENABLE_2_FIFO1_READ_REG0_TIC_ENABLE_2_FALLING              (5u)
#define BITM_IO_TIC_ENABLE_2_FIFO1_READ_REG0_TIC_ENABLE_2_FALLING              (0x00001F00u)
#define ENUM_IO_TIC_ENABLE_2_FIFO1_READ_REG0_TIC_ENABLE_2_FALLING_FIFO1_READ_EMPTY_FALLING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_2_FIFO1_READ_REG0_TIC_ENABLE_2_FALLING_FIFO1_READ_THRESHOLD_1_FALLING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_2_FIFO1_READ_REG0_TIC_ENABLE_2_FALLING_FIFO1_READ_THRESHOLD_2_FALLING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_2_FIFO1_READ_REG0_TIC_ENABLE_2_FALLING_FIFO1_READ_THRESHOLD_3_FALLING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_2_FIFO1_READ_REG0_TIC_ENABLE_2_FALLING_FIFO1_READ_FULL_FALLING (0x00000004u)

/* Register Name        : TIC_ENABLE_2_FIFO1_READ_REG1
 * Register Addr        : 0xC956u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_2_FIFO1_READ_REG1_ADDR                                   (0xC956u)
#define IO_TIC_ENABLE_2_FIFO1_READ_REG1_RESET_VAL                              (0x00000000u)
#define IO_TIC_ENABLE_2_FIFO1_READ_REG1_MMS                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_ENABLE_2_HIGH        | Interrupts enable FIFO1_READ.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_ENABLE_2_LOW         | Interrupts enable FIFO1_READ.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_2_FIFO1_READ_REG1_TIC_ENABLE_2_HIGH                 (0u)
#define BITL_IO_TIC_ENABLE_2_FIFO1_READ_REG1_TIC_ENABLE_2_HIGH                 (5u)
#define BITM_IO_TIC_ENABLE_2_FIFO1_READ_REG1_TIC_ENABLE_2_HIGH                 (0x0000001Fu)
#define ENUM_IO_TIC_ENABLE_2_FIFO1_READ_REG1_TIC_ENABLE_2_HIGH_FIFO1_READ_EMPTY_HIGH (0x00000000u)
#define ENUM_IO_TIC_ENABLE_2_FIFO1_READ_REG1_TIC_ENABLE_2_HIGH_FIFO1_READ_THRESHOLD_1_HIGH (0x00000001u)
#define ENUM_IO_TIC_ENABLE_2_FIFO1_READ_REG1_TIC_ENABLE_2_HIGH_FIFO1_READ_THRESHOLD_2_HIGH (0x00000002u)
#define ENUM_IO_TIC_ENABLE_2_FIFO1_READ_REG1_TIC_ENABLE_2_HIGH_FIFO1_READ_THRESHOLD_3_HIGH (0x00000003u)
#define ENUM_IO_TIC_ENABLE_2_FIFO1_READ_REG1_TIC_ENABLE_2_HIGH_FIFO1_READ_FULL_HIGH (0x00000004u)

#define BITP_IO_TIC_ENABLE_2_FIFO1_READ_REG1_TIC_ENABLE_2_LOW                  (8u)
#define BITL_IO_TIC_ENABLE_2_FIFO1_READ_REG1_TIC_ENABLE_2_LOW                  (5u)
#define BITM_IO_TIC_ENABLE_2_FIFO1_READ_REG1_TIC_ENABLE_2_LOW                  (0x00001F00u)
#define ENUM_IO_TIC_ENABLE_2_FIFO1_READ_REG1_TIC_ENABLE_2_LOW_FIFO1_READ_EMPTY_LOW (0x00000000u)
#define ENUM_IO_TIC_ENABLE_2_FIFO1_READ_REG1_TIC_ENABLE_2_LOW_FIFO1_READ_THRESHOLD_1_LOW (0x00000001u)
#define ENUM_IO_TIC_ENABLE_2_FIFO1_READ_REG1_TIC_ENABLE_2_LOW_FIFO1_READ_THRESHOLD_2_LOW (0x00000002u)
#define ENUM_IO_TIC_ENABLE_2_FIFO1_READ_REG1_TIC_ENABLE_2_LOW_FIFO1_READ_THRESHOLD_3_LOW (0x00000003u)
#define ENUM_IO_TIC_ENABLE_2_FIFO1_READ_REG1_TIC_ENABLE_2_LOW_FIFO1_READ_FULL_LOW (0x00000004u)

/* Register Name        : TIC_ENABLE_3_FIFO1_WRITE_REG0
 * Register Addr        : 0xC957u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_3_FIFO1_WRITE_REG0_ADDR                                  (0xC957u)
#define IO_TIC_ENABLE_3_FIFO1_WRITE_REG0_RESET_VAL                             (0x00000000u)
#define IO_TIC_ENABLE_3_FIFO1_WRITE_REG0_MMS                                   (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_ENABLE_3_RISING      | Interrupts enable FIFO1_WRITE.    | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_ENABLE_3_FALLING     | Interrupts enable FIFO1_WRITE.    | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_3_FIFO1_WRITE_REG0_TIC_ENABLE_3_RISING              (0u)
#define BITL_IO_TIC_ENABLE_3_FIFO1_WRITE_REG0_TIC_ENABLE_3_RISING              (5u)
#define BITM_IO_TIC_ENABLE_3_FIFO1_WRITE_REG0_TIC_ENABLE_3_RISING              (0x0000001Fu)
#define ENUM_IO_TIC_ENABLE_3_FIFO1_WRITE_REG0_TIC_ENABLE_3_RISING_FIFO1_WRITE_EMPTY_RISING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_3_FIFO1_WRITE_REG0_TIC_ENABLE_3_RISING_FIFO1_WRITE_THRESHOLD_1_RISING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_3_FIFO1_WRITE_REG0_TIC_ENABLE_3_RISING_FIFO1_WRITE_THRESHOLD_2_RISING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_3_FIFO1_WRITE_REG0_TIC_ENABLE_3_RISING_FIFO1_WRITE_THRESHOLD_3_RISING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_3_FIFO1_WRITE_REG0_TIC_ENABLE_3_RISING_FIFO1_WRITE_FULL_RISING (0x00000004u)

#define BITP_IO_TIC_ENABLE_3_FIFO1_WRITE_REG0_TIC_ENABLE_3_FALLING             (8u)
#define BITL_IO_TIC_ENABLE_3_FIFO1_WRITE_REG0_TIC_ENABLE_3_FALLING             (5u)
#define BITM_IO_TIC_ENABLE_3_FIFO1_WRITE_REG0_TIC_ENABLE_3_FALLING             (0x00001F00u)
#define ENUM_IO_TIC_ENABLE_3_FIFO1_WRITE_REG0_TIC_ENABLE_3_FALLING_FIFO1_WRITE_EMPTY_FALLING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_3_FIFO1_WRITE_REG0_TIC_ENABLE_3_FALLING_FIFO1_WRITE_THRESHOLD_1_FALLING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_3_FIFO1_WRITE_REG0_TIC_ENABLE_3_FALLING_FIFO1_WRITE_THRESHOLD_2_FALLING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_3_FIFO1_WRITE_REG0_TIC_ENABLE_3_FALLING_FIFO1_WRITE_THRESHOLD_3_FALLING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_3_FIFO1_WRITE_REG0_TIC_ENABLE_3_FALLING_FIFO1_WRITE_FULL_FALLING (0x00000004u)

/* Register Name        : TIC_ENABLE_3_FIFO1_WRITE_REG1
 * Register Addr        : 0xC958u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_3_FIFO1_WRITE_REG1_ADDR                                  (0xC958u)
#define IO_TIC_ENABLE_3_FIFO1_WRITE_REG1_RESET_VAL                             (0x00000000u)
#define IO_TIC_ENABLE_3_FIFO1_WRITE_REG1_MMS                                   (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_ENABLE_3_HIGH        | Interrupts enable FIFO1_WRITE.    | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_ENABLE_3_LOW         | Interrupts enable FIFO1_WRITE.    | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_3_FIFO1_WRITE_REG1_TIC_ENABLE_3_HIGH                (0u)
#define BITL_IO_TIC_ENABLE_3_FIFO1_WRITE_REG1_TIC_ENABLE_3_HIGH                (5u)
#define BITM_IO_TIC_ENABLE_3_FIFO1_WRITE_REG1_TIC_ENABLE_3_HIGH                (0x0000001Fu)
#define ENUM_IO_TIC_ENABLE_3_FIFO1_WRITE_REG1_TIC_ENABLE_3_HIGH_FIFO1_WRITE_EMPTY_HIGH (0x00000000u)
#define ENUM_IO_TIC_ENABLE_3_FIFO1_WRITE_REG1_TIC_ENABLE_3_HIGH_FIFO1_WRITE_THRESHOLD_1_HIGH (0x00000001u)
#define ENUM_IO_TIC_ENABLE_3_FIFO1_WRITE_REG1_TIC_ENABLE_3_HIGH_FIFO1_WRITE_THRESHOLD_2_HIGH (0x00000002u)
#define ENUM_IO_TIC_ENABLE_3_FIFO1_WRITE_REG1_TIC_ENABLE_3_HIGH_FIFO1_WRITE_THRESHOLD_3_HIGH (0x00000003u)
#define ENUM_IO_TIC_ENABLE_3_FIFO1_WRITE_REG1_TIC_ENABLE_3_HIGH_FIFO1_WRITE_FULL_HIGH (0x00000004u)

#define BITP_IO_TIC_ENABLE_3_FIFO1_WRITE_REG1_TIC_ENABLE_3_LOW                 (8u)
#define BITL_IO_TIC_ENABLE_3_FIFO1_WRITE_REG1_TIC_ENABLE_3_LOW                 (5u)
#define BITM_IO_TIC_ENABLE_3_FIFO1_WRITE_REG1_TIC_ENABLE_3_LOW                 (0x00001F00u)
#define ENUM_IO_TIC_ENABLE_3_FIFO1_WRITE_REG1_TIC_ENABLE_3_LOW_FIFO1_WRITE_EMPTY_LOW (0x00000000u)
#define ENUM_IO_TIC_ENABLE_3_FIFO1_WRITE_REG1_TIC_ENABLE_3_LOW_FIFO1_WRITE_THRESHOLD_1_LOW (0x00000001u)
#define ENUM_IO_TIC_ENABLE_3_FIFO1_WRITE_REG1_TIC_ENABLE_3_LOW_FIFO1_WRITE_THRESHOLD_2_LOW (0x00000002u)
#define ENUM_IO_TIC_ENABLE_3_FIFO1_WRITE_REG1_TIC_ENABLE_3_LOW_FIFO1_WRITE_THRESHOLD_3_LOW (0x00000003u)
#define ENUM_IO_TIC_ENABLE_3_FIFO1_WRITE_REG1_TIC_ENABLE_3_LOW_FIFO1_WRITE_FULL_LOW (0x00000004u)

/* Register Name        : TIC_ENABLE_4_FIFO2_READ_REG0
 * Register Addr        : 0xC959u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_4_FIFO2_READ_REG0_ADDR                                   (0xC959u)
#define IO_TIC_ENABLE_4_FIFO2_READ_REG0_RESET_VAL                              (0x00000000u)
#define IO_TIC_ENABLE_4_FIFO2_READ_REG0_MMS                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_ENABLE_4_RISING      | Interrupts enable FIFO2_READ.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_ENABLE_4_FALLING     | Interrupts enable FIFO2_READ.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_4_FIFO2_READ_REG0_TIC_ENABLE_4_RISING               (0u)
#define BITL_IO_TIC_ENABLE_4_FIFO2_READ_REG0_TIC_ENABLE_4_RISING               (5u)
#define BITM_IO_TIC_ENABLE_4_FIFO2_READ_REG0_TIC_ENABLE_4_RISING               (0x0000001Fu)
#define ENUM_IO_TIC_ENABLE_4_FIFO2_READ_REG0_TIC_ENABLE_4_RISING_FIFO2_READ_EMPTY_RISING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_4_FIFO2_READ_REG0_TIC_ENABLE_4_RISING_FIFO2_READ_THRESHOLD_1_RISING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_4_FIFO2_READ_REG0_TIC_ENABLE_4_RISING_FIFO2_READ_THRESHOLD_2_RISING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_4_FIFO2_READ_REG0_TIC_ENABLE_4_RISING_FIFO2_READ_THRESHOLD_3_RISING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_4_FIFO2_READ_REG0_TIC_ENABLE_4_RISING_FIFO2_READ_FULL_RISING (0x00000004u)

#define BITP_IO_TIC_ENABLE_4_FIFO2_READ_REG0_TIC_ENABLE_4_FALLING              (8u)
#define BITL_IO_TIC_ENABLE_4_FIFO2_READ_REG0_TIC_ENABLE_4_FALLING              (5u)
#define BITM_IO_TIC_ENABLE_4_FIFO2_READ_REG0_TIC_ENABLE_4_FALLING              (0x00001F00u)
#define ENUM_IO_TIC_ENABLE_4_FIFO2_READ_REG0_TIC_ENABLE_4_FALLING_FIFO2_READ_EMPTY_LOW (0x00000000u)
#define ENUM_IO_TIC_ENABLE_4_FIFO2_READ_REG0_TIC_ENABLE_4_FALLING_FIFO2_READ_THRESHOLD_1_LOW (0x00000001u)
#define ENUM_IO_TIC_ENABLE_4_FIFO2_READ_REG0_TIC_ENABLE_4_FALLING_FIFO2_READ_THRESHOLD_2_LOW (0x00000002u)
#define ENUM_IO_TIC_ENABLE_4_FIFO2_READ_REG0_TIC_ENABLE_4_FALLING_FIFO2_READ_THRESHOLD_3_LOW (0x00000003u)
#define ENUM_IO_TIC_ENABLE_4_FIFO2_READ_REG0_TIC_ENABLE_4_FALLING_FIFO2_READ_FULL_LOW (0x00000004u)

/* Register Name        : TIC_ENABLE_4_FIFO2_READ_REG1
 * Register Addr        : 0xC95Au
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_4_FIFO2_READ_REG1_ADDR                                   (0xC95Au)
#define IO_TIC_ENABLE_4_FIFO2_READ_REG1_RESET_VAL                              (0x00000000u)
#define IO_TIC_ENABLE_4_FIFO2_READ_REG1_MMS                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_ENABLE_4_HIGH        | Interrupts enable FIFO2_READ.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_ENABLE_4_LOW         | Interrupts enable FIFO2_READ.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_4_FIFO2_READ_REG1_TIC_ENABLE_4_HIGH                 (0u)
#define BITL_IO_TIC_ENABLE_4_FIFO2_READ_REG1_TIC_ENABLE_4_HIGH                 (5u)
#define BITM_IO_TIC_ENABLE_4_FIFO2_READ_REG1_TIC_ENABLE_4_HIGH                 (0x0000001Fu)
#define ENUM_IO_TIC_ENABLE_4_FIFO2_READ_REG1_TIC_ENABLE_4_HIGH_FIFO2_READ_EMPTY_HIGH (0x00000000u)
#define ENUM_IO_TIC_ENABLE_4_FIFO2_READ_REG1_TIC_ENABLE_4_HIGH_FIFO2_READ_THRESHOLD_1_HIGH (0x00000001u)
#define ENUM_IO_TIC_ENABLE_4_FIFO2_READ_REG1_TIC_ENABLE_4_HIGH_FIFO2_READ_THRESHOLD_2_HIGH (0x00000002u)
#define ENUM_IO_TIC_ENABLE_4_FIFO2_READ_REG1_TIC_ENABLE_4_HIGH_FIFO2_READ_THRESHOLD_3_HIGH (0x00000003u)
#define ENUM_IO_TIC_ENABLE_4_FIFO2_READ_REG1_TIC_ENABLE_4_HIGH_FIFO2_READ_FULL_HIGH (0x00000004u)

#define BITP_IO_TIC_ENABLE_4_FIFO2_READ_REG1_TIC_ENABLE_4_LOW                  (8u)
#define BITL_IO_TIC_ENABLE_4_FIFO2_READ_REG1_TIC_ENABLE_4_LOW                  (5u)
#define BITM_IO_TIC_ENABLE_4_FIFO2_READ_REG1_TIC_ENABLE_4_LOW                  (0x00001F00u)
#define ENUM_IO_TIC_ENABLE_4_FIFO2_READ_REG1_TIC_ENABLE_4_LOW_FIFO2_READ_EMPTY_LOW (0x00000000u)
#define ENUM_IO_TIC_ENABLE_4_FIFO2_READ_REG1_TIC_ENABLE_4_LOW_FIFO2_READ_THRESHOLD_1_LOW (0x00000001u)
#define ENUM_IO_TIC_ENABLE_4_FIFO2_READ_REG1_TIC_ENABLE_4_LOW_FIFO2_READ_THRESHOLD_2_LOW (0x00000002u)
#define ENUM_IO_TIC_ENABLE_4_FIFO2_READ_REG1_TIC_ENABLE_4_LOW_FIFO2_READ_THRESHOLD_3_LOW (0x00000003u)
#define ENUM_IO_TIC_ENABLE_4_FIFO2_READ_REG1_TIC_ENABLE_4_LOW_FIFO2_READ_FULL_LOW (0x00000004u)

/* Register Name        : TIC_ENABLE_5_FIFO2_WRITE_REG0
 * Register Addr        : 0xC95Bu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_5_FIFO2_WRITE_REG0_ADDR                                  (0xC95Bu)
#define IO_TIC_ENABLE_5_FIFO2_WRITE_REG0_RESET_VAL                             (0x00000000u)
#define IO_TIC_ENABLE_5_FIFO2_WRITE_REG0_MMS                                   (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_ENABLE_5_RISING      | Interrupts enable FIFO2_WRITE.    | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_ENABLE_5_FALLING     | Interrupts enable FIFO2_WRITE.    | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_5_FIFO2_WRITE_REG0_TIC_ENABLE_5_RISING              (0u)
#define BITL_IO_TIC_ENABLE_5_FIFO2_WRITE_REG0_TIC_ENABLE_5_RISING              (5u)
#define BITM_IO_TIC_ENABLE_5_FIFO2_WRITE_REG0_TIC_ENABLE_5_RISING              (0x0000001Fu)
#define ENUM_IO_TIC_ENABLE_5_FIFO2_WRITE_REG0_TIC_ENABLE_5_RISING_FIFO2_WRITE_EMPTY_RISING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_5_FIFO2_WRITE_REG0_TIC_ENABLE_5_RISING_FIFO2_WRITE_THRESHOLD_1_RISING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_5_FIFO2_WRITE_REG0_TIC_ENABLE_5_RISING_FIFO2_WRITE_THRESHOLD_2_RISING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_5_FIFO2_WRITE_REG0_TIC_ENABLE_5_RISING_FIFO2_WRITE_THRESHOLD_3_RISING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_5_FIFO2_WRITE_REG0_TIC_ENABLE_5_RISING_FIFO2_WRITE_FULL_RISING (0x00000004u)

#define BITP_IO_TIC_ENABLE_5_FIFO2_WRITE_REG0_TIC_ENABLE_5_FALLING             (8u)
#define BITL_IO_TIC_ENABLE_5_FIFO2_WRITE_REG0_TIC_ENABLE_5_FALLING             (5u)
#define BITM_IO_TIC_ENABLE_5_FIFO2_WRITE_REG0_TIC_ENABLE_5_FALLING             (0x00001F00u)
#define ENUM_IO_TIC_ENABLE_5_FIFO2_WRITE_REG0_TIC_ENABLE_5_FALLING_FIFO2_WRITE_EMPTY_FALLING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_5_FIFO2_WRITE_REG0_TIC_ENABLE_5_FALLING_FIFO2_WRITE_THRESHOLD_1_FALLING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_5_FIFO2_WRITE_REG0_TIC_ENABLE_5_FALLING_FIFO2_WRITE_THRESHOLD_2_FALLING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_5_FIFO2_WRITE_REG0_TIC_ENABLE_5_FALLING_FIFO2_WRITE_THRESHOLD_3_FALLING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_5_FIFO2_WRITE_REG0_TIC_ENABLE_5_FALLING_FIFO2_WRITE_FULL_FALLING (0x00000004u)

/* Register Name        : TIC_ENABLE_5_FIFO2_WRITE_REG1
 * Register Addr        : 0xC95Cu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_5_FIFO2_WRITE_REG1_ADDR                                  (0xC95Cu)
#define IO_TIC_ENABLE_5_FIFO2_WRITE_REG1_RESET_VAL                             (0x00000000u)
#define IO_TIC_ENABLE_5_FIFO2_WRITE_REG1_MMS                                   (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_ENABLE_5_HIGH        | Interrupts enable FIFO2_WRITE.    | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_ENABLE_5_LOW         | Interrupts enable FIFO2_WRITE.    | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_5_FIFO2_WRITE_REG1_TIC_ENABLE_5_HIGH                (0u)
#define BITL_IO_TIC_ENABLE_5_FIFO2_WRITE_REG1_TIC_ENABLE_5_HIGH                (5u)
#define BITM_IO_TIC_ENABLE_5_FIFO2_WRITE_REG1_TIC_ENABLE_5_HIGH                (0x0000001Fu)
#define ENUM_IO_TIC_ENABLE_5_FIFO2_WRITE_REG1_TIC_ENABLE_5_HIGH_FIFO2_WRITE_EMPTY_HIGH (0x00000000u)
#define ENUM_IO_TIC_ENABLE_5_FIFO2_WRITE_REG1_TIC_ENABLE_5_HIGH_FIFO2_WRITE_THRESHOLD_1_HIGH (0x00000001u)
#define ENUM_IO_TIC_ENABLE_5_FIFO2_WRITE_REG1_TIC_ENABLE_5_HIGH_FIFO2_WRITE_THRESHOLD_2_HIGH (0x00000002u)
#define ENUM_IO_TIC_ENABLE_5_FIFO2_WRITE_REG1_TIC_ENABLE_5_HIGH_FIFO2_WRITE_THRESHOLD_3_HIGH (0x00000003u)
#define ENUM_IO_TIC_ENABLE_5_FIFO2_WRITE_REG1_TIC_ENABLE_5_HIGH_FIFO2_WRITE_FULL_HIGH (0x00000004u)

#define BITP_IO_TIC_ENABLE_5_FIFO2_WRITE_REG1_TIC_ENABLE_5_LOW                 (8u)
#define BITL_IO_TIC_ENABLE_5_FIFO2_WRITE_REG1_TIC_ENABLE_5_LOW                 (5u)
#define BITM_IO_TIC_ENABLE_5_FIFO2_WRITE_REG1_TIC_ENABLE_5_LOW                 (0x00001F00u)
#define ENUM_IO_TIC_ENABLE_5_FIFO2_WRITE_REG1_TIC_ENABLE_5_LOW_FIFO2_WRITE_EMPTY_LOW (0x00000000u)
#define ENUM_IO_TIC_ENABLE_5_FIFO2_WRITE_REG1_TIC_ENABLE_5_LOW_FIFO2_WRITE_THRESHOLD_1_LOW (0x00000001u)
#define ENUM_IO_TIC_ENABLE_5_FIFO2_WRITE_REG1_TIC_ENABLE_5_LOW_FIFO2_WRITE_THRESHOLD_2_LOW (0x00000002u)
#define ENUM_IO_TIC_ENABLE_5_FIFO2_WRITE_REG1_TIC_ENABLE_5_LOW_FIFO2_WRITE_THRESHOLD_3_LOW (0x00000003u)
#define ENUM_IO_TIC_ENABLE_5_FIFO2_WRITE_REG1_TIC_ENABLE_5_LOW_FIFO2_WRITE_FULL_LOW (0x00000004u)

/* Register Name        : TIC_ENABLE_6_FIFO3_READ_REG0
 * Register Addr        : 0xC95Du
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_6_FIFO3_READ_REG0_ADDR                                   (0xC95Du)
#define IO_TIC_ENABLE_6_FIFO3_READ_REG0_RESET_VAL                              (0x00000000u)
#define IO_TIC_ENABLE_6_FIFO3_READ_REG0_MMS                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_ENABLE_6_RISING      | Interrupts enable FIFO3_READ.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_ENABLE_6_FALLING     | Interrupts enable FIFO3_READ.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_6_FIFO3_READ_REG0_TIC_ENABLE_6_RISING               (0u)
#define BITL_IO_TIC_ENABLE_6_FIFO3_READ_REG0_TIC_ENABLE_6_RISING               (5u)
#define BITM_IO_TIC_ENABLE_6_FIFO3_READ_REG0_TIC_ENABLE_6_RISING               (0x0000001Fu)
#define ENUM_IO_TIC_ENABLE_6_FIFO3_READ_REG0_TIC_ENABLE_6_RISING_FIFO3_READ_EMPTY_RISING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_6_FIFO3_READ_REG0_TIC_ENABLE_6_RISING_FIFO3_READ_THRESHOLD_1_RISING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_6_FIFO3_READ_REG0_TIC_ENABLE_6_RISING_FIFO3_READ_THRESHOLD_2_RISING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_6_FIFO3_READ_REG0_TIC_ENABLE_6_RISING_FIFO3_READ_THRESHOLD_3_RISING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_6_FIFO3_READ_REG0_TIC_ENABLE_6_RISING_FIFO3_READ_FULL_RISING (0x00000004u)

#define BITP_IO_TIC_ENABLE_6_FIFO3_READ_REG0_TIC_ENABLE_6_FALLING              (8u)
#define BITL_IO_TIC_ENABLE_6_FIFO3_READ_REG0_TIC_ENABLE_6_FALLING              (5u)
#define BITM_IO_TIC_ENABLE_6_FIFO3_READ_REG0_TIC_ENABLE_6_FALLING              (0x00001F00u)
#define ENUM_IO_TIC_ENABLE_6_FIFO3_READ_REG0_TIC_ENABLE_6_FALLING_FIFO3_READ_EMPTY_FALLING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_6_FIFO3_READ_REG0_TIC_ENABLE_6_FALLING_FIFO3_READ_THRESHOLD_1_FALLING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_6_FIFO3_READ_REG0_TIC_ENABLE_6_FALLING_FIFO3_READ_THRESHOLD_2_FALLING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_6_FIFO3_READ_REG0_TIC_ENABLE_6_FALLING_FIFO3_READ_THRESHOLD_3_FALLING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_6_FIFO3_READ_REG0_TIC_ENABLE_6_FALLING_FIFO3_READ_FULL_FALLING (0x00000004u)

/* Register Name        : TIC_ENABLE_6_FIFO3_READ_REG1
 * Register Addr        : 0xC95Eu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_6_FIFO3_READ_REG1_ADDR                                   (0xC95Eu)
#define IO_TIC_ENABLE_6_FIFO3_READ_REG1_RESET_VAL                              (0x00000000u)
#define IO_TIC_ENABLE_6_FIFO3_READ_REG1_MMS                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_ENABLE_6_HIGH        | Interrupts enable FIFO3_READ.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_ENABLE_6_LOW         | Interrupts enable FIFO3_READ.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_6_FIFO3_READ_REG1_TIC_ENABLE_6_HIGH                 (0u)
#define BITL_IO_TIC_ENABLE_6_FIFO3_READ_REG1_TIC_ENABLE_6_HIGH                 (5u)
#define BITM_IO_TIC_ENABLE_6_FIFO3_READ_REG1_TIC_ENABLE_6_HIGH                 (0x0000001Fu)
#define ENUM_IO_TIC_ENABLE_6_FIFO3_READ_REG1_TIC_ENABLE_6_HIGH_FIFO3_READ_EMPTY_HIGH (0x00000000u)
#define ENUM_IO_TIC_ENABLE_6_FIFO3_READ_REG1_TIC_ENABLE_6_HIGH_FIFO3_READ_THRESHOLD_1_HIGH (0x00000001u)
#define ENUM_IO_TIC_ENABLE_6_FIFO3_READ_REG1_TIC_ENABLE_6_HIGH_FIFO3_READ_THRESHOLD_2_HIGH (0x00000002u)
#define ENUM_IO_TIC_ENABLE_6_FIFO3_READ_REG1_TIC_ENABLE_6_HIGH_FIFO3_READ_THRESHOLD_3_HIGH (0x00000003u)
#define ENUM_IO_TIC_ENABLE_6_FIFO3_READ_REG1_TIC_ENABLE_6_HIGH_FIFO3_READ_FULL_HIGH (0x00000004u)

#define BITP_IO_TIC_ENABLE_6_FIFO3_READ_REG1_TIC_ENABLE_6_LOW                  (8u)
#define BITL_IO_TIC_ENABLE_6_FIFO3_READ_REG1_TIC_ENABLE_6_LOW                  (5u)
#define BITM_IO_TIC_ENABLE_6_FIFO3_READ_REG1_TIC_ENABLE_6_LOW                  (0x00001F00u)
#define ENUM_IO_TIC_ENABLE_6_FIFO3_READ_REG1_TIC_ENABLE_6_LOW_FIFO3_READ_EMPTY_LOW (0x00000000u)
#define ENUM_IO_TIC_ENABLE_6_FIFO3_READ_REG1_TIC_ENABLE_6_LOW_FIFO3_READ_THRESHOLD_1_LOW (0x00000001u)
#define ENUM_IO_TIC_ENABLE_6_FIFO3_READ_REG1_TIC_ENABLE_6_LOW_FIFO3_READ_THRESHOLD_2_LOW (0x00000002u)
#define ENUM_IO_TIC_ENABLE_6_FIFO3_READ_REG1_TIC_ENABLE_6_LOW_FIFO3_READ_THRESHOLD_3_LOW (0x00000003u)
#define ENUM_IO_TIC_ENABLE_6_FIFO3_READ_REG1_TIC_ENABLE_6_LOW_FIFO3_READ_FULL_LOW (0x00000004u)

/* Register Name        : TIC_ENABLE_7_FIFO3_WRITE_REG0
 * Register Addr        : 0xC95Fu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_7_FIFO3_WRITE_REG0_ADDR                                  (0xC95Fu)
#define IO_TIC_ENABLE_7_FIFO3_WRITE_REG0_RESET_VAL                             (0x00000000u)
#define IO_TIC_ENABLE_7_FIFO3_WRITE_REG0_MMS                                   (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_ENABLE_7_RISING      | Interrupts enable FIFO3_WRITE.    | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_ENABLE_7_FALLING     | Interrupts enable FIFO3_WRITE.    | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_7_FIFO3_WRITE_REG0_TIC_ENABLE_7_RISING              (0u)
#define BITL_IO_TIC_ENABLE_7_FIFO3_WRITE_REG0_TIC_ENABLE_7_RISING              (5u)
#define BITM_IO_TIC_ENABLE_7_FIFO3_WRITE_REG0_TIC_ENABLE_7_RISING              (0x0000001Fu)
#define ENUM_IO_TIC_ENABLE_7_FIFO3_WRITE_REG0_TIC_ENABLE_7_RISING_FIFO3_WRITE_EMPTY_RISING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_7_FIFO3_WRITE_REG0_TIC_ENABLE_7_RISING_FIFO3_WRITE_THRESHOLD_1_RISING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_7_FIFO3_WRITE_REG0_TIC_ENABLE_7_RISING_FIFO3_WRITE_THRESHOLD_2_RISING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_7_FIFO3_WRITE_REG0_TIC_ENABLE_7_RISING_FIFO3_WRITE_THRESHOLD_3_RISING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_7_FIFO3_WRITE_REG0_TIC_ENABLE_7_RISING_FIFO3_WRITE_FULL_RISING (0x00000004u)

#define BITP_IO_TIC_ENABLE_7_FIFO3_WRITE_REG0_TIC_ENABLE_7_FALLING             (8u)
#define BITL_IO_TIC_ENABLE_7_FIFO3_WRITE_REG0_TIC_ENABLE_7_FALLING             (5u)
#define BITM_IO_TIC_ENABLE_7_FIFO3_WRITE_REG0_TIC_ENABLE_7_FALLING             (0x00001F00u)
#define ENUM_IO_TIC_ENABLE_7_FIFO3_WRITE_REG0_TIC_ENABLE_7_FALLING_FIFO3_WRITE_EMPTY_FALLING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_7_FIFO3_WRITE_REG0_TIC_ENABLE_7_FALLING_FIFO3_WRITE_THRESHOLD_1_FALLING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_7_FIFO3_WRITE_REG0_TIC_ENABLE_7_FALLING_FIFO3_WRITE_THRESHOLD_2_FALLING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_7_FIFO3_WRITE_REG0_TIC_ENABLE_7_FALLING_FIFO3_WRITE_THRESHOLD_3_FALLING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_7_FIFO3_WRITE_REG0_TIC_ENABLE_7_FALLING_FIFO3_WRITE_FULL_FALLING (0x00000004u)

/* Register Name        : TIC_ENABLE_7_FIFO3_WRITE_REG1
 * Register Addr        : 0xC960u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_7_FIFO3_WRITE_REG1_ADDR                                  (0xC960u)
#define IO_TIC_ENABLE_7_FIFO3_WRITE_REG1_RESET_VAL                             (0x00000000u)
#define IO_TIC_ENABLE_7_FIFO3_WRITE_REG1_MMS                                   (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_ENABLE_7_HIGH        | Interrupts enable FIFO3_WRITE.    | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_ENABLE_7_LOW         | Interrupts enable FIFO3_WRITE.    | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_7_FIFO3_WRITE_REG1_TIC_ENABLE_7_HIGH                (0u)
#define BITL_IO_TIC_ENABLE_7_FIFO3_WRITE_REG1_TIC_ENABLE_7_HIGH                (5u)
#define BITM_IO_TIC_ENABLE_7_FIFO3_WRITE_REG1_TIC_ENABLE_7_HIGH                (0x0000001Fu)
#define ENUM_IO_TIC_ENABLE_7_FIFO3_WRITE_REG1_TIC_ENABLE_7_HIGH_FIFO3_WRITE_EMPTY_HIGH (0x00000000u)
#define ENUM_IO_TIC_ENABLE_7_FIFO3_WRITE_REG1_TIC_ENABLE_7_HIGH_FIFO3_WRITE_THRESHOLD_1_HIGH (0x00000001u)
#define ENUM_IO_TIC_ENABLE_7_FIFO3_WRITE_REG1_TIC_ENABLE_7_HIGH_FIFO3_WRITE_THRESHOLD_2_HIGH (0x00000002u)
#define ENUM_IO_TIC_ENABLE_7_FIFO3_WRITE_REG1_TIC_ENABLE_7_HIGH_FIFO3_WRITE_THRESHOLD_3_HIGH (0x00000003u)
#define ENUM_IO_TIC_ENABLE_7_FIFO3_WRITE_REG1_TIC_ENABLE_7_HIGH_FIFO3_WRITE_FULL_HIGH (0x00000004u)

#define BITP_IO_TIC_ENABLE_7_FIFO3_WRITE_REG1_TIC_ENABLE_7_LOW                 (8u)
#define BITL_IO_TIC_ENABLE_7_FIFO3_WRITE_REG1_TIC_ENABLE_7_LOW                 (5u)
#define BITM_IO_TIC_ENABLE_7_FIFO3_WRITE_REG1_TIC_ENABLE_7_LOW                 (0x00001F00u)
#define ENUM_IO_TIC_ENABLE_7_FIFO3_WRITE_REG1_TIC_ENABLE_7_LOW_FIFO3_WRITE_EMPTY_LOW (0x00000000u)
#define ENUM_IO_TIC_ENABLE_7_FIFO3_WRITE_REG1_TIC_ENABLE_7_LOW_FIFO3_WRITE_THRESHOLD_1_LOW (0x00000001u)
#define ENUM_IO_TIC_ENABLE_7_FIFO3_WRITE_REG1_TIC_ENABLE_7_LOW_FIFO3_WRITE_THRESHOLD_2_LOW (0x00000002u)
#define ENUM_IO_TIC_ENABLE_7_FIFO3_WRITE_REG1_TIC_ENABLE_7_LOW_FIFO3_WRITE_THRESHOLD_3_LOW (0x00000003u)
#define ENUM_IO_TIC_ENABLE_7_FIFO3_WRITE_REG1_TIC_ENABLE_7_LOW_FIFO3_WRITE_FULL_LOW (0x00000005u)

/* Register Name        : TIC_ENABLE_8_PHY_REG0
 * Register Addr        : 0xC961u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_8_PHY_REG0_ADDR                                          (0xC961u)
#define IO_TIC_ENABLE_8_PHY_REG0_RESET_VAL                                     (0x00000000u)
#define IO_TIC_ENABLE_8_PHY_REG0_MMS                                           (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_ENABLE_8             | Interrupts enable PHY. The        | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_8_PHY_REG0_TIC_ENABLE_8                             (0u)
#define BITL_IO_TIC_ENABLE_8_PHY_REG0_TIC_ENABLE_8                             (16u)
#define BITM_IO_TIC_ENABLE_8_PHY_REG0_TIC_ENABLE_8                             (0x0000FFFFu)
#define ENUM_IO_TIC_ENABLE_8_PHY_REG0_TIC_ENABLE_8_PHY_PLCA_STATUS_RISING      (0x00000002u)
#define ENUM_IO_TIC_ENABLE_8_PHY_REG0_TIC_ENABLE_8_PHY_PLCA_RECOVER_RISING     (0x00000003u)
#define ENUM_IO_TIC_ENABLE_8_PHY_REG0_TIC_ENABLE_8_PHY_PLCA_STATUS_LOW         (0x0000000Au)
#define ENUM_IO_TIC_ENABLE_8_PHY_REG0_TIC_ENABLE_8_PHY_PLCA_RECOVER_LOW        (0x0000000Bu)
#define ENUM_IO_TIC_ENABLE_8_PHY_REG0_TIC_ENABLE_8_PHY_PLCA_STATUS_HIGH        (0x00000012u)
#define ENUM_IO_TIC_ENABLE_8_PHY_REG0_TIC_ENABLE_8_PHY_PLCA_RECOVER_HIGH       (0x00000013u)
#define ENUM_IO_TIC_ENABLE_8_PHY_REG0_TIC_ENABLE_8_PHY_PLCA_STATUS_FALLING     (0x0000001Au)
#define ENUM_IO_TIC_ENABLE_8_PHY_REG0_TIC_ENABLE_8_PHY_PLCA_RECOVER_FALLING    (0x0000001Bu)

/* Register Name        : TIC_ENABLE_8_PHY_REG1
 * Register Addr        : 0xC962u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_8_PHY_REG1_ADDR                                          (0xC962u)
#define IO_TIC_ENABLE_8_PHY_REG1_RESET_VAL                                     (0x00000000u)
#define IO_TIC_ENABLE_8_PHY_REG1_MMS                                           (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_ENABLE_8             | Interrupts enable PHY. The        | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_8_PHY_REG1_TIC_ENABLE_8                             (0u)
#define BITL_IO_TIC_ENABLE_8_PHY_REG1_TIC_ENABLE_8                             (16u)
#define BITM_IO_TIC_ENABLE_8_PHY_REG1_TIC_ENABLE_8                             (0x0000FFFFu)
#define ENUM_IO_TIC_ENABLE_8_PHY_REG1_TIC_ENABLE_8_PHY_PLCA_STATUS_RISING      (0x00000002u)
#define ENUM_IO_TIC_ENABLE_8_PHY_REG1_TIC_ENABLE_8_PHY_PLCA_RECOVER_RISING     (0x00000003u)
#define ENUM_IO_TIC_ENABLE_8_PHY_REG1_TIC_ENABLE_8_PHY_PLCA_STATUS_LOW         (0x0000000Au)
#define ENUM_IO_TIC_ENABLE_8_PHY_REG1_TIC_ENABLE_8_PHY_PLCA_RECOVER_LOW        (0x0000000Bu)
#define ENUM_IO_TIC_ENABLE_8_PHY_REG1_TIC_ENABLE_8_PHY_PLCA_STATUS_HIGH        (0x00000012u)
#define ENUM_IO_TIC_ENABLE_8_PHY_REG1_TIC_ENABLE_8_PHY_PLCA_RECOVER_HIGH       (0x00000013u)
#define ENUM_IO_TIC_ENABLE_8_PHY_REG1_TIC_ENABLE_8_PHY_PLCA_STATUS_FALLING     (0x0000001Au)
#define ENUM_IO_TIC_ENABLE_8_PHY_REG1_TIC_ENABLE_8_PHY_PLCA_RECOVER_FALLING    (0x0000001Bu)

/* Register Name        : TIC_ENABLE_9_MAC_REG0
 * Register Addr        : 0xC963u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_9_MAC_REG0_ADDR                                          (0xC963u)
#define IO_TIC_ENABLE_9_MAC_REG0_RESET_VAL                                     (0x00000000u)
#define IO_TIC_ENABLE_9_MAC_REG0_MMS                                           (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_ENABLE_9_RISING      | Interrupts enable MAC. The        | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_ENABLE_9_FALLING     | Interrupts enable MAC. The        | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_9_MAC_REG0_TIC_ENABLE_9_RISING                      (0u)
#define BITL_IO_TIC_ENABLE_9_MAC_REG0_TIC_ENABLE_9_RISING                      (5u)
#define BITM_IO_TIC_ENABLE_9_MAC_REG0_TIC_ENABLE_9_RISING                      (0x0000001Fu)
#define ENUM_IO_TIC_ENABLE_9_MAC_REG0_TIC_ENABLE_9_RISING_MAC_RX_FRAME_DROP_FULL_RISING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_9_MAC_REG0_TIC_ENABLE_9_RISING_MAC_RX_PHY_ERROR_RISING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_9_MAC_REG0_TIC_ENABLE_9_RISING_MAC_RX_ERROR_CRC_RISING (0x00000004u)

#define BITP_IO_TIC_ENABLE_9_MAC_REG0_TIC_ENABLE_9_FALLING                     (8u)
#define BITL_IO_TIC_ENABLE_9_MAC_REG0_TIC_ENABLE_9_FALLING                     (5u)
#define BITM_IO_TIC_ENABLE_9_MAC_REG0_TIC_ENABLE_9_FALLING                     (0x00001F00u)
#define ENUM_IO_TIC_ENABLE_9_MAC_REG0_TIC_ENABLE_9_FALLING_MAC_RX_FRAME_DROP_FULL_FALLING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_9_MAC_REG0_TIC_ENABLE_9_FALLING_MAC_RX_PHY_ERROR_FALLING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_9_MAC_REG0_TIC_ENABLE_9_FALLING_MAC_RX_ERROR_CRC_FALLING (0x00000004u)

/* Register Name        : TIC_ENABLE_9_MAC_REG1
 * Register Addr        : 0xC964u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_9_MAC_REG1_ADDR                                          (0xC964u)
#define IO_TIC_ENABLE_9_MAC_REG1_RESET_VAL                                     (0x00000000u)
#define IO_TIC_ENABLE_9_MAC_REG1_MMS                                           (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_ENABLE_9_HIGH        | Interrupts enable MAC. The        | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_ENABLE_9_LOW         | Interrupts enable MAC. The        | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_9_MAC_REG1_TIC_ENABLE_9_HIGH                        (0u)
#define BITL_IO_TIC_ENABLE_9_MAC_REG1_TIC_ENABLE_9_HIGH                        (5u)
#define BITM_IO_TIC_ENABLE_9_MAC_REG1_TIC_ENABLE_9_HIGH                        (0x0000001Fu)
#define ENUM_IO_TIC_ENABLE_9_MAC_REG1_TIC_ENABLE_9_HIGH_MAC_RX_FRAME_DROP_FULL_HIGH (0x00000000u)
#define ENUM_IO_TIC_ENABLE_9_MAC_REG1_TIC_ENABLE_9_HIGH_MAC_RX_PHY_ERROR_HIGH  (0x00000001u)
#define ENUM_IO_TIC_ENABLE_9_MAC_REG1_TIC_ENABLE_9_HIGH_MAC_RX_ERROR_CRC_HIGH  (0x00000004u)

#define BITP_IO_TIC_ENABLE_9_MAC_REG1_TIC_ENABLE_9_LOW                         (8u)
#define BITL_IO_TIC_ENABLE_9_MAC_REG1_TIC_ENABLE_9_LOW                         (5u)
#define BITM_IO_TIC_ENABLE_9_MAC_REG1_TIC_ENABLE_9_LOW                         (0x00001F00u)
#define ENUM_IO_TIC_ENABLE_9_MAC_REG1_TIC_ENABLE_9_LOW_MAC_RX_FRAME_DROP_FULL_LOW (0x00000000u)
#define ENUM_IO_TIC_ENABLE_9_MAC_REG1_TIC_ENABLE_9_LOW_MAC_RX_PHY_ERROR_LOW    (0x00000001u)
#define ENUM_IO_TIC_ENABLE_9_MAC_REG1_TIC_ENABLE_9_LOW_MAC_RX_ERROR_CRC_LOW    (0x00000004u)

/* Register Name        : TIC_ENABLE_10_REG0
 * Register Addr        : 0xC965u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_10_REG0_ADDR                                             (0xC965u)
#define IO_TIC_ENABLE_10_REG0_RESET_VAL                                        (0x00000000u)
#define IO_TIC_ENABLE_10_REG0_MMS                                              (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 02-00 | TIC_ENABLE_10_RISING     | Interrupts enable                 | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 10-08 | TIC_ENABLE_10_FALLING    | Interrupts enable                 | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_10_REG0_TIC_ENABLE_10_RISING                        (0u)
#define BITL_IO_TIC_ENABLE_10_REG0_TIC_ENABLE_10_RISING                        (3u)
#define BITM_IO_TIC_ENABLE_10_REG0_TIC_ENABLE_10_RISING                        (0x00000007u)
#define ENUM_IO_TIC_ENABLE_10_REG0_TIC_ENABLE_10_RISING_PLCA_DIAG_RISING       (0x00000000u)

#define BITP_IO_TIC_ENABLE_10_REG0_TIC_ENABLE_10_FALLING                       (8u)
#define BITL_IO_TIC_ENABLE_10_REG0_TIC_ENABLE_10_FALLING                       (3u)
#define BITM_IO_TIC_ENABLE_10_REG0_TIC_ENABLE_10_FALLING                       (0x00000700u)
#define ENUM_IO_TIC_ENABLE_10_REG0_TIC_ENABLE_10_FALLING_PLCA_DIAG_FALLING     (0x00000000u)

/* Register Name        : TIC_ENABLE_11_SPI0_REG0
 * Register Addr        : 0xC967u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_11_SPI0_REG0_ADDR                                        (0xC967u)
#define IO_TIC_ENABLE_11_SPI0_REG0_RESET_VAL                                   (0x00000000u)
#define IO_TIC_ENABLE_11_SPI0_REG0_MMS                                         (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | TIC_ENABLE_11_RISING     | Interrupts enable SPI0. The       | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 8     | TIC_ENABLE_11_FALLING    | Interrupts enable SPI0. The       | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_11_SPI0_REG0_TIC_ENABLE_11_RISING                   (0u)
#define BITL_IO_TIC_ENABLE_11_SPI0_REG0_TIC_ENABLE_11_RISING                   (1u)
#define BITM_IO_TIC_ENABLE_11_SPI0_REG0_TIC_ENABLE_11_RISING                   (0x01u)
#define ENUM_IO_TIC_ENABLE_11_SPI0_REG0_TIC_ENABLE_11_RISING_SPI0_BB_RISING    (0x00000000u)

#define BITP_IO_TIC_ENABLE_11_SPI0_REG0_TIC_ENABLE_11_FALLING                  (8u)
#define BITL_IO_TIC_ENABLE_11_SPI0_REG0_TIC_ENABLE_11_FALLING                  (1u)
#define BITM_IO_TIC_ENABLE_11_SPI0_REG0_TIC_ENABLE_11_FALLING                  (0x0100u)
#define ENUM_IO_TIC_ENABLE_11_SPI0_REG0_TIC_ENABLE_11_FALLING_SPI0_BB_FALLING  (0x00000000u)

/* Register Name        : TIC_ENABLE_12_ISELED0_REG0
 * Register Addr        : 0xC969u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_12_ISELED0_REG0_ADDR                                     (0xC969u)
#define IO_TIC_ENABLE_12_ISELED0_REG0_RESET_VAL                                (0x00000000u)
#define IO_TIC_ENABLE_12_ISELED0_REG0_MMS                                      (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 06-00 | TIC_ENABLE_12_RISING     | Interrupts enable ISELED0. The    | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14-08 | TIC_ENABLE_12_FALLING    | Interrupts enable ISELED0. The    | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_12_ISELED0_REG0_TIC_ENABLE_12_RISING                (0u)
#define BITL_IO_TIC_ENABLE_12_ISELED0_REG0_TIC_ENABLE_12_RISING                (7u)
#define BITM_IO_TIC_ENABLE_12_ISELED0_REG0_TIC_ENABLE_12_RISING                (0x0000007Fu)
#define ENUM_IO_TIC_ENABLE_12_ISELED0_REG0_TIC_ENABLE_12_RISING_ISELED0_CONTENTION_RISING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_12_ISELED0_REG0_TIC_ENABLE_12_RISING_ISELED0_ERROR_EOC_RISING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_12_ISELED0_REG0_TIC_ENABLE_12_RISING_ISELED0_ERROR_FRAME_CRC_RISING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_12_ISELED0_REG0_TIC_ENABLE_12_RISING_ISELED0_ERROR_FRAME_FREQ_RISING (0x00000004u)
#define ENUM_IO_TIC_ENABLE_12_ISELED0_REG0_TIC_ENABLE_12_RISING_ISELED0_ERROR_FRAME_SYNC_RISING (0x00000005u)
#define ENUM_IO_TIC_ENABLE_12_ISELED0_REG0_TIC_ENABLE_12_RISING_ISELED0_ERROR_FRAME_5B4B_ERROR_RISING (0x00000006u)

#define BITP_IO_TIC_ENABLE_12_ISELED0_REG0_TIC_ENABLE_12_FALLING               (8u)
#define BITL_IO_TIC_ENABLE_12_ISELED0_REG0_TIC_ENABLE_12_FALLING               (7u)
#define BITM_IO_TIC_ENABLE_12_ISELED0_REG0_TIC_ENABLE_12_FALLING               (0x00007F00u)
#define ENUM_IO_TIC_ENABLE_12_ISELED0_REG0_TIC_ENABLE_12_FALLING_ISELED0_CONTENTION_FALLING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_12_ISELED0_REG0_TIC_ENABLE_12_FALLING_ISELED0_ERROR_EOC_FALLING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_12_ISELED0_REG0_TIC_ENABLE_12_FALLING_ISELED0_ERROR_FRAME_CRC_FALLING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_12_ISELED0_REG0_TIC_ENABLE_12_FALLING_ISELED0_ERROR_FRAME_FREQ_FALLING (0x00000004u)
#define ENUM_IO_TIC_ENABLE_12_ISELED0_REG0_TIC_ENABLE_12_FALLING_ISELED0_ERROR_FRAME_SYNC_FALLING (0x00000005u)
#define ENUM_IO_TIC_ENABLE_12_ISELED0_REG0_TIC_ENABLE_12_FALLING_ISELED0_ERROR_FRAME_5B4B_ERROR_FALLING (0x00000006u)

/* Register Name        : TIC_ENABLE_13_ISELED1_REG0
 * Register Addr        : 0xC96Bu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_13_ISELED1_REG0_ADDR                                     (0xC96Bu)
#define IO_TIC_ENABLE_13_ISELED1_REG0_RESET_VAL                                (0x00000000u)
#define IO_TIC_ENABLE_13_ISELED1_REG0_MMS                                      (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 06-00 | TIC_ENABLE_13_RISING     | Interrupts enable ISELED1. The    | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14-08 | TIC_ENABLE_13_FALLING    | Interrupts enable ISELED1. The    | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_13_ISELED1_REG0_TIC_ENABLE_13_RISING                (0u)
#define BITL_IO_TIC_ENABLE_13_ISELED1_REG0_TIC_ENABLE_13_RISING                (7u)
#define BITM_IO_TIC_ENABLE_13_ISELED1_REG0_TIC_ENABLE_13_RISING                (0x0000007Fu)
#define ENUM_IO_TIC_ENABLE_13_ISELED1_REG0_TIC_ENABLE_13_RISING_ISELED1_CONTENTION_RISING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_13_ISELED1_REG0_TIC_ENABLE_13_RISING_ISELED1_ERROR_EOC_RISING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_13_ISELED1_REG0_TIC_ENABLE_13_RISING_ISELED1_ERROR_FRAME_CRC_RISING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_13_ISELED1_REG0_TIC_ENABLE_13_RISING_ISELED1_ERROR_FRAME_FREQ_RISING (0x00000004u)
#define ENUM_IO_TIC_ENABLE_13_ISELED1_REG0_TIC_ENABLE_13_RISING_ISELED1_ERROR_FRAME_SYNC_RISING (0x00000005u)
#define ENUM_IO_TIC_ENABLE_13_ISELED1_REG0_TIC_ENABLE_13_RISING_ISELED1_ERROR_FRAME_5B4B_ERROR_RISING (0x00000006u)

#define BITP_IO_TIC_ENABLE_13_ISELED1_REG0_TIC_ENABLE_13_FALLING               (8u)
#define BITL_IO_TIC_ENABLE_13_ISELED1_REG0_TIC_ENABLE_13_FALLING               (7u)
#define BITM_IO_TIC_ENABLE_13_ISELED1_REG0_TIC_ENABLE_13_FALLING               (0x00007F00u)
#define ENUM_IO_TIC_ENABLE_13_ISELED1_REG0_TIC_ENABLE_13_FALLING_ISELED1_CONTENTION_FALLING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_13_ISELED1_REG0_TIC_ENABLE_13_FALLING_ISELED1_ERROR_EOC_FALLING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_13_ISELED1_REG0_TIC_ENABLE_13_FALLING_ISELED1_ERROR_FRAME_CRC_FALLING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_13_ISELED1_REG0_TIC_ENABLE_13_FALLING_ISELED1_ERROR_FRAME_FREQ_FALLING (0x00000004u)
#define ENUM_IO_TIC_ENABLE_13_ISELED1_REG0_TIC_ENABLE_13_FALLING_ISELED1_ERROR_FRAME_SYNC_FALLING (0x00000005u)
#define ENUM_IO_TIC_ENABLE_13_ISELED1_REG0_TIC_ENABLE_13_FALLING_ISELED1_ERROR_FRAME_5B4B_ERROR_FALLING (0x00000006u)

/* Register Name        : TIC_ENABLE_14_ISELED2_REG0
 * Register Addr        : 0xC96Du
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_14_ISELED2_REG0_ADDR                                     (0xC96Du)
#define IO_TIC_ENABLE_14_ISELED2_REG0_RESET_VAL                                (0x00000000u)
#define IO_TIC_ENABLE_14_ISELED2_REG0_MMS                                      (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 06-00 | TIC_ENABLE_14_RISING     | Interrupts enable ISELED2. The    | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14-08 | TIC_ENABLE_14_FALLING    | Interrupts enable ISELED2. The    | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_14_ISELED2_REG0_TIC_ENABLE_14_RISING                (0u)
#define BITL_IO_TIC_ENABLE_14_ISELED2_REG0_TIC_ENABLE_14_RISING                (7u)
#define BITM_IO_TIC_ENABLE_14_ISELED2_REG0_TIC_ENABLE_14_RISING                (0x0000007Fu)
#define ENUM_IO_TIC_ENABLE_14_ISELED2_REG0_TIC_ENABLE_14_RISING_ISELED2_CONTENTION_RISING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_14_ISELED2_REG0_TIC_ENABLE_14_RISING_ISELED2_ERROR_EOC_RISING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_14_ISELED2_REG0_TIC_ENABLE_14_RISING_ISELED2_ERROR_FRAME_CRC_RISING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_14_ISELED2_REG0_TIC_ENABLE_14_RISING_ISELED2_ERROR_FRAME_FREQ_RISING (0x00000004u)
#define ENUM_IO_TIC_ENABLE_14_ISELED2_REG0_TIC_ENABLE_14_RISING_ISELED2_ERROR_FRAME_SYNC_RISING (0x00000005u)
#define ENUM_IO_TIC_ENABLE_14_ISELED2_REG0_TIC_ENABLE_14_RISING_ISELED2_ERROR_FRAME_5B4B_ERROR_RISING (0x00000006u)

#define BITP_IO_TIC_ENABLE_14_ISELED2_REG0_TIC_ENABLE_14_FALLING               (8u)
#define BITL_IO_TIC_ENABLE_14_ISELED2_REG0_TIC_ENABLE_14_FALLING               (7u)
#define BITM_IO_TIC_ENABLE_14_ISELED2_REG0_TIC_ENABLE_14_FALLING               (0x00007F00u)
#define ENUM_IO_TIC_ENABLE_14_ISELED2_REG0_TIC_ENABLE_14_FALLING_ISELED2_CONTENTION_FALLING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_14_ISELED2_REG0_TIC_ENABLE_14_FALLING_ISELED2_ERROR_EOC_FALLING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_14_ISELED2_REG0_TIC_ENABLE_14_FALLING_ISELED2_ERROR_FRAME_CRC_FALLING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_14_ISELED2_REG0_TIC_ENABLE_14_FALLING_ISELED2_ERROR_FRAME_FREQ_FALLING (0x00000004u)
#define ENUM_IO_TIC_ENABLE_14_ISELED2_REG0_TIC_ENABLE_14_FALLING_ISELED2_ERROR_FRAME_SYNC_FALLING (0x00000005u)
#define ENUM_IO_TIC_ENABLE_14_ISELED2_REG0_TIC_ENABLE_14_FALLING_ISELED2_ERROR_FRAME_5B4B_ERROR_FALLING (0x00000006u)

/* Register Name        : TIC_ENABLE_15_ISELED3_REG0
 * Register Addr        : 0xC96Fu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_15_ISELED3_REG0_ADDR                                     (0xC96Fu)
#define IO_TIC_ENABLE_15_ISELED3_REG0_RESET_VAL                                (0x00000000u)
#define IO_TIC_ENABLE_15_ISELED3_REG0_MMS                                      (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 06-00 | TIC_ENABLE_15_RISING     | Interrupts enable ISELED3. The    | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14-08 | TIC_ENABLE_15_FALLING    | Interrupts enable ISELED3. The    | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_15_ISELED3_REG0_TIC_ENABLE_15_RISING                (0u)
#define BITL_IO_TIC_ENABLE_15_ISELED3_REG0_TIC_ENABLE_15_RISING                (7u)
#define BITM_IO_TIC_ENABLE_15_ISELED3_REG0_TIC_ENABLE_15_RISING                (0x0000007Fu)
#define ENUM_IO_TIC_ENABLE_15_ISELED3_REG0_TIC_ENABLE_15_RISING_ISELED3_CONTENTION_RISING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_15_ISELED3_REG0_TIC_ENABLE_15_RISING_ISELED3_ERROR_EOC_RISING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_15_ISELED3_REG0_TIC_ENABLE_15_RISING_ISELED3_ERROR_FRAME_CRC_RISING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_15_ISELED3_REG0_TIC_ENABLE_15_RISING_ISELED3_ERROR_FRAME_FREQ_RISING (0x00000004u)
#define ENUM_IO_TIC_ENABLE_15_ISELED3_REG0_TIC_ENABLE_15_RISING_ISELED3_ERROR_FRAME_SYNC_RISING (0x00000005u)
#define ENUM_IO_TIC_ENABLE_15_ISELED3_REG0_TIC_ENABLE_15_RISING_ISELED3_ERROR_FRAME_5B4B_ERROR_RISING (0x00000006u)

#define BITP_IO_TIC_ENABLE_15_ISELED3_REG0_TIC_ENABLE_15_FALLING               (8u)
#define BITL_IO_TIC_ENABLE_15_ISELED3_REG0_TIC_ENABLE_15_FALLING               (7u)
#define BITM_IO_TIC_ENABLE_15_ISELED3_REG0_TIC_ENABLE_15_FALLING               (0x00007F00u)
#define ENUM_IO_TIC_ENABLE_15_ISELED3_REG0_TIC_ENABLE_15_FALLING_ISELED3_CONTENTION_FALLING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_15_ISELED3_REG0_TIC_ENABLE_15_FALLING_ISELED3_ERROR_EOC_FALLING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_15_ISELED3_REG0_TIC_ENABLE_15_FALLING_ISELED3_ERROR_FRAME_CRC_FALLING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_15_ISELED3_REG0_TIC_ENABLE_15_FALLING_ISELED3_ERROR_FRAME_FREQ_FALLING (0x00000004u)
#define ENUM_IO_TIC_ENABLE_15_ISELED3_REG0_TIC_ENABLE_15_FALLING_ISELED3_ERROR_FRAME_SYNC_FALLING (0x00000005u)
#define ENUM_IO_TIC_ENABLE_15_ISELED3_REG0_TIC_ENABLE_15_FALLING_ISELED3_ERROR_FRAME_5B4B_ERROR_FALLING (0x00000006u)

/* Register Name        : TIC_ENABLE_16_PORT_CTRL_REG0
 * Register Addr        : 0xC971u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_16_PORT_CTRL_REG0_ADDR                                   (0xC971u)
#define IO_TIC_ENABLE_16_PORT_CTRL_REG0_RESET_VAL                              (0x00000000u)
#define IO_TIC_ENABLE_16_PORT_CTRL_REG0_MMS                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_ENABLE_16            | Interrupts enable PORT_CTRL. The  | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16                     (0u)
#define BITL_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16                     (16u)
#define BITM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16                     (0x0000FFFFu)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_0_RISING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_1_RISING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_2_RISING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_3_RISING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_4_RISING (0x00000004u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_5_RISING (0x00000005u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_6_RISING (0x00000006u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_7_RISING (0x00000007u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_0_FALLING (0x00000008u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_1_FALLING (0x00000009u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_2_FALLING (0x0000000Au)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_3_FALLING (0x0000000Bu)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_4_FALLING (0x0000000Cu)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_5_FALLING (0x0000000Du)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_6_FALLING (0x0000000Eu)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_7_FALLING (0x0000000Fu)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_0_HIGH (0x00000010u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_1_HIGH (0x00000011u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_2_HIGH (0x00000012u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_3_HIGH (0x00000013u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_4_HIGH (0x00000014u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_5_HIGH (0x00000015u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_6_HIGH (0x00000016u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_7_HIGH (0x00000017u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_0_LOW (0x00000018u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_1_LOW (0x00000019u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_2_LOW (0x0000001Au)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_3_LOW (0x0000001Bu)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_4_LOW (0x0000001Cu)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_5_LOW (0x0000001Du)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_6_LOW (0x0000001Eu)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG0_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_7_LOW (0x0000001Fu)

/* Register Name        : TIC_ENABLE_16_PORT_CTRL_REG1
 * Register Addr        : 0xC972u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_16_PORT_CTRL_REG1_ADDR                                   (0xC972u)
#define IO_TIC_ENABLE_16_PORT_CTRL_REG1_RESET_VAL                              (0x00000000u)
#define IO_TIC_ENABLE_16_PORT_CTRL_REG1_MMS                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_ENABLE_16            | Interrupts enable PORT_CTRL. The  | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16                     (0u)
#define BITL_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16                     (16u)
#define BITM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16                     (0x0000FFFFu)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_0_RISING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_1_RISING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_2_RISING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_3_RISING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_4_RISING (0x00000004u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_5_RISING (0x00000005u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_6_RISING (0x00000006u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_7_RISING (0x00000007u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_0_FALLING (0x00000008u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_1_FALLING (0x00000009u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_2_FALLING (0x0000000Au)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_3_FALLING (0x0000000Bu)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_4_FALLING (0x0000000Cu)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_5_FALLING (0x0000000Du)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_6_FALLING (0x0000000Eu)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_7_FALLING (0x0000000Fu)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_0_HIGH (0x00000010u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_1_HIGH (0x00000011u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_2_HIGH (0x00000012u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_3_HIGH (0x00000013u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_4_HIGH (0x00000014u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_5_HIGH (0x00000015u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_6_HIGH (0x00000016u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_7_HIGH (0x00000017u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_0_LOW (0x00000018u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_1_LOW (0x00000019u)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_2_LOW (0x0000001Au)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_3_LOW (0x0000001Bu)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_4_LOW (0x0000001Cu)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_5_LOW (0x0000001Du)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_6_LOW (0x0000001Eu)
#define ENUM_IO_TIC_ENABLE_16_PORT_CTRL_REG1_TIC_ENABLE_16_PORT_CTRL_ACTIVE_OUTPUT_7_LOW (0x0000001Fu)

/* Register Name        : TIC_ENABLE_17_PORT_CTRL_REG0
 * Register Addr        : 0xC973u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_17_PORT_CTRL_REG0_ADDR                                   (0xC973u)
#define IO_TIC_ENABLE_17_PORT_CTRL_REG0_RESET_VAL                              (0x00000000u)
#define IO_TIC_ENABLE_17_PORT_CTRL_REG0_MMS                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 03-00 | TIC_ENABLE_17_RISING     | Interrupts enable PORT_CTRL. The  | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11-08 | TIC_ENABLE_17_FALLING    | Interrupts enable PORT_CTRL. The  | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_17_PORT_CTRL_REG0_TIC_ENABLE_17_RISING              (0u)
#define BITL_IO_TIC_ENABLE_17_PORT_CTRL_REG0_TIC_ENABLE_17_RISING              (4u)
#define BITM_IO_TIC_ENABLE_17_PORT_CTRL_REG0_TIC_ENABLE_17_RISING              (0x0000000Fu)
#define ENUM_IO_TIC_ENABLE_17_PORT_CTRL_REG0_TIC_ENABLE_17_RISING_PORT_CTRL_ACTIVE_OUTPUT_8_RISING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_17_PORT_CTRL_REG0_TIC_ENABLE_17_RISING_PORT_CTRL_ACTIVE_OUTPUT_9_RISING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_17_PORT_CTRL_REG0_TIC_ENABLE_17_RISING_PORT_CTRL_ACTIVE_OUTPUT_10_RISING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_17_PORT_CTRL_REG0_TIC_ENABLE_17_RISING_PORT_CTRL_ACTIVE_OUTPUT_11_RISING (0x00000003u)

#define BITP_IO_TIC_ENABLE_17_PORT_CTRL_REG0_TIC_ENABLE_17_FALLING             (8u)
#define BITL_IO_TIC_ENABLE_17_PORT_CTRL_REG0_TIC_ENABLE_17_FALLING             (4u)
#define BITM_IO_TIC_ENABLE_17_PORT_CTRL_REG0_TIC_ENABLE_17_FALLING             (0x00000F00u)
#define ENUM_IO_TIC_ENABLE_17_PORT_CTRL_REG0_TIC_ENABLE_17_FALLING_PORT_CTRL_ACTIVE_OUTPUT_8_FALLING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_17_PORT_CTRL_REG0_TIC_ENABLE_17_FALLING_PORT_CTRL_ACTIVE_OUTPUT_9_FALLING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_17_PORT_CTRL_REG0_TIC_ENABLE_17_FALLING_PORT_CTRL_ACTIVE_OUTPUT_10_FALLING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_17_PORT_CTRL_REG0_TIC_ENABLE_17_FALLING_PORT_CTRL_ACTIVE_OUTPUT_11_FALLING (0x00000003u)

/* Register Name        : TIC_ENABLE_17_PORT_CTRL_REG1
 * Register Addr        : 0xC974u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_17_PORT_CTRL_REG1_ADDR                                   (0xC974u)
#define IO_TIC_ENABLE_17_PORT_CTRL_REG1_RESET_VAL                              (0x00000000u)
#define IO_TIC_ENABLE_17_PORT_CTRL_REG1_MMS                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 03-00 | TIC_ENABLE_17_HIGH       | Interrupts enable PORT_CTRL. The  | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11-08 | TIC_ENABLE_17_LOW        | Interrupts enable PORT_CTRL. The  | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_17_PORT_CTRL_REG1_TIC_ENABLE_17_HIGH                (0u)
#define BITL_IO_TIC_ENABLE_17_PORT_CTRL_REG1_TIC_ENABLE_17_HIGH                (4u)
#define BITM_IO_TIC_ENABLE_17_PORT_CTRL_REG1_TIC_ENABLE_17_HIGH                (0x0000000Fu)
#define ENUM_IO_TIC_ENABLE_17_PORT_CTRL_REG1_TIC_ENABLE_17_HIGH_PORT_CTRL_ACTIVE_OUTPUT_8_HIGH (0x00000000u)
#define ENUM_IO_TIC_ENABLE_17_PORT_CTRL_REG1_TIC_ENABLE_17_HIGH_PORT_CTRL_ACTIVE_OUTPUT_9_HIGH (0x00000001u)
#define ENUM_IO_TIC_ENABLE_17_PORT_CTRL_REG1_TIC_ENABLE_17_HIGH_PORT_CTRL_ACTIVE_OUTPUT_10_HIGH (0x00000002u)
#define ENUM_IO_TIC_ENABLE_17_PORT_CTRL_REG1_TIC_ENABLE_17_HIGH_PORT_CTRL_ACTIVE_OUTPUT_11_HIGH (0x00000003u)

#define BITP_IO_TIC_ENABLE_17_PORT_CTRL_REG1_TIC_ENABLE_17_LOW                 (8u)
#define BITL_IO_TIC_ENABLE_17_PORT_CTRL_REG1_TIC_ENABLE_17_LOW                 (4u)
#define BITM_IO_TIC_ENABLE_17_PORT_CTRL_REG1_TIC_ENABLE_17_LOW                 (0x00000F00u)
#define ENUM_IO_TIC_ENABLE_17_PORT_CTRL_REG1_TIC_ENABLE_17_LOW_PORT_CTRL_ACTIVE_OUTPUT_8_LOW (0x00000000u)
#define ENUM_IO_TIC_ENABLE_17_PORT_CTRL_REG1_TIC_ENABLE_17_LOW_PORT_CTRL_ACTIVE_OUTPUT_9_LOW (0x00000001u)
#define ENUM_IO_TIC_ENABLE_17_PORT_CTRL_REG1_TIC_ENABLE_17_LOW_PORT_CTRL_ACTIVE_OUTPUT_10_LOW (0x00000002u)
#define ENUM_IO_TIC_ENABLE_17_PORT_CTRL_REG1_TIC_ENABLE_17_LOW_PORT_CTRL_ACTIVE_OUTPUT_11_LOW (0x00000003u)

/* Register Name        : TIC_ENABLE_18_PORT_CTRL_REG0
 * Register Addr        : 0xC975u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_18_PORT_CTRL_REG0_ADDR                                   (0xC975u)
#define IO_TIC_ENABLE_18_PORT_CTRL_REG0_RESET_VAL                              (0x00000000u)
#define IO_TIC_ENABLE_18_PORT_CTRL_REG0_MMS                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_ENABLE_18            | Interrupts enable PORT_CTRL. The  | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_18_PORT_CTRL_REG0_TIC_ENABLE_18                     (0u)
#define BITL_IO_TIC_ENABLE_18_PORT_CTRL_REG0_TIC_ENABLE_18                     (16u)
#define BITM_IO_TIC_ENABLE_18_PORT_CTRL_REG0_TIC_ENABLE_18                     (0x0000FFFFu)
#define ENUM_IO_TIC_ENABLE_18_PORT_CTRL_REG0_TIC_ENABLE_18_PORT_CTRL_TCH_OUT_OF_RANGE_0_RISING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_18_PORT_CTRL_REG0_TIC_ENABLE_18_PORT_CTRL_TCH_OUT_OF_RANGE_1_RISING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_18_PORT_CTRL_REG0_TIC_ENABLE_18_PORT_CTRL_TCH_OUT_OF_RANGE_2_RISING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_18_PORT_CTRL_REG0_TIC_ENABLE_18_PORT_CTRL_TCH_OUT_OF_RANGE_3_RISING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_18_PORT_CTRL_REG0_TIC_ENABLE_18_PORT_CTRL_TCH_OUT_OF_RANGE_4_RISING (0x00000004u)
#define ENUM_IO_TIC_ENABLE_18_PORT_CTRL_REG0_TIC_ENABLE_18_PORT_CTRL_TCH_OUT_OF_RANGE_5_RISING (0x00000005u)
#define ENUM_IO_TIC_ENABLE_18_PORT_CTRL_REG0_TIC_ENABLE_18_PORT_CTRL_TCH_OUT_OF_RANGE_6_RISING (0x00000006u)
#define ENUM_IO_TIC_ENABLE_18_PORT_CTRL_REG0_TIC_ENABLE_18_PORT_CTRL_TCH_OUT_OF_RANGE_7_RISING (0x00000007u)
#define ENUM_IO_TIC_ENABLE_18_PORT_CTRL_REG0_TIC_ENABLE_18_PORT_CTRL_TCH_OUT_OF_RANGE_0_FALLING (0x00000008u)
#define ENUM_IO_TIC_ENABLE_18_PORT_CTRL_REG0_TIC_ENABLE_18_PORT_CTRL_TCH_OUT_OF_RANGE_1_FALLING (0x00000009u)
#define ENUM_IO_TIC_ENABLE_18_PORT_CTRL_REG0_TIC_ENABLE_18_PORT_CTRL_TCH_OUT_OF_RANGE_2_FALLING (0x0000000Au)
#define ENUM_IO_TIC_ENABLE_18_PORT_CTRL_REG0_TIC_ENABLE_18_PORT_CTRL_TCH_OUT_OF_RANGE_3_FALLING (0x0000000Bu)
#define ENUM_IO_TIC_ENABLE_18_PORT_CTRL_REG0_TIC_ENABLE_18_PORT_CTRL_TCH_OUT_OF_RANGE_4_FALLING (0x0000000Cu)
#define ENUM_IO_TIC_ENABLE_18_PORT_CTRL_REG0_TIC_ENABLE_18_PORT_CTRL_TCH_OUT_OF_RANGE_5_FALLING (0x0000000Du)
#define ENUM_IO_TIC_ENABLE_18_PORT_CTRL_REG0_TIC_ENABLE_18_PORT_CTRL_TCH_OUT_OF_RANGE_6_FALLING (0x0000000Eu)
#define ENUM_IO_TIC_ENABLE_18_PORT_CTRL_REG0_TIC_ENABLE_18_PORT_CTRL_TCH_OUT_OF_RANGE_7_FALLING (0x0000000Fu)

/* Register Name        : TIC_ENABLE_19_PORT_CTRL_REG0
 * Register Addr        : 0xC977u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_19_PORT_CTRL_REG0_ADDR                                   (0xC977u)
#define IO_TIC_ENABLE_19_PORT_CTRL_REG0_RESET_VAL                              (0x00000000u)
#define IO_TIC_ENABLE_19_PORT_CTRL_REG0_MMS                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 06-00 | TIC_ENABLE_19_RISING     | Interrupts enable PORT_CTRL. The  | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14-08 | TIC_ENABLE_19_FALLING    | Interrupts enable PORT_CTRL. The  | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_19_PORT_CTRL_REG0_TIC_ENABLE_19_RISING              (0u)
#define BITL_IO_TIC_ENABLE_19_PORT_CTRL_REG0_TIC_ENABLE_19_RISING              (7u)
#define BITM_IO_TIC_ENABLE_19_PORT_CTRL_REG0_TIC_ENABLE_19_RISING              (0x0000007Fu)
#define ENUM_IO_TIC_ENABLE_19_PORT_CTRL_REG0_TIC_ENABLE_19_RISING_PORT_CTRL_TCH_OUT_OF_RANGE_8_RISING (0x00000000u)

#define BITP_IO_TIC_ENABLE_19_PORT_CTRL_REG0_TIC_ENABLE_19_FALLING             (8u)
#define BITL_IO_TIC_ENABLE_19_PORT_CTRL_REG0_TIC_ENABLE_19_FALLING             (7u)
#define BITM_IO_TIC_ENABLE_19_PORT_CTRL_REG0_TIC_ENABLE_19_FALLING             (0x00007F00u)
#define ENUM_IO_TIC_ENABLE_19_PORT_CTRL_REG0_TIC_ENABLE_19_FALLING_PORT_CTRL_TCH_OUT_OF_RANGE_8_FALLING (0x00000000u)

/* Register Name        : TIC_ENABLE_20_PORT_CTRL_REG0
 * Register Addr        : 0xC979u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_20_PORT_CTRL_REG0_ADDR                                   (0xC979u)
#define IO_TIC_ENABLE_20_PORT_CTRL_REG0_RESET_VAL                              (0x00000000u)
#define IO_TIC_ENABLE_20_PORT_CTRL_REG0_MMS                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_ENABLE_20            | Interrupts enable PORT_CTRL. The  | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_20_PORT_CTRL_REG0_TIC_ENABLE_20                     (0u)
#define BITL_IO_TIC_ENABLE_20_PORT_CTRL_REG0_TIC_ENABLE_20                     (16u)
#define BITM_IO_TIC_ENABLE_20_PORT_CTRL_REG0_TIC_ENABLE_20                     (0x0000FFFFu)

/* Register Name        : TIC_ENABLE_21_PORT_CTRL_REG0
 * Register Addr        : 0xC97Bu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_21_PORT_CTRL_REG0_ADDR                                   (0xC97Bu)
#define IO_TIC_ENABLE_21_PORT_CTRL_REG0_RESET_VAL                              (0x00000000u)
#define IO_TIC_ENABLE_21_PORT_CTRL_REG0_MMS                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_ENABLE_21_RISING     | Interrupts enable PORT_CTRL. The  | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_ENABLE_21_FALLING    | Interrupts enable PORT_CTRL. The  | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_21_PORT_CTRL_REG0_TIC_ENABLE_21_RISING              (0u)
#define BITL_IO_TIC_ENABLE_21_PORT_CTRL_REG0_TIC_ENABLE_21_RISING              (5u)
#define BITM_IO_TIC_ENABLE_21_PORT_CTRL_REG0_TIC_ENABLE_21_RISING              (0x0000001Fu)
#define ENUM_IO_TIC_ENABLE_21_PORT_CTRL_REG0_TIC_ENABLE_21_RISING_PORT_CTRL_TCH_LOCKED_8_RISING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_21_PORT_CTRL_REG0_TIC_ENABLE_21_RISING_PORT_CTRL_TCH_LOCKED_9_RISING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_21_PORT_CTRL_REG0_TIC_ENABLE_21_RISING_PORT_CTRL_TCH_LOCKED_10_RISING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_21_PORT_CTRL_REG0_TIC_ENABLE_21_RISING_PORT_CTRL_TCH_LOCKED_11_RISING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_21_PORT_CTRL_REG0_TIC_ENABLE_21_RISING_PORT_CTRL_TCH_MEAS_CYCLE_END_RISING (0x00000004u)

#define BITP_IO_TIC_ENABLE_21_PORT_CTRL_REG0_TIC_ENABLE_21_FALLING             (8u)
#define BITL_IO_TIC_ENABLE_21_PORT_CTRL_REG0_TIC_ENABLE_21_FALLING             (5u)
#define BITM_IO_TIC_ENABLE_21_PORT_CTRL_REG0_TIC_ENABLE_21_FALLING             (0x00001F00u)
#define ENUM_IO_TIC_ENABLE_21_PORT_CTRL_REG0_TIC_ENABLE_21_FALLING_PORT_CTRL_TCH_LOCKED_8_FALLING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_21_PORT_CTRL_REG0_TIC_ENABLE_21_FALLING_PORT_CTRL_TCH_LOCKED_9_FALLING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_21_PORT_CTRL_REG0_TIC_ENABLE_21_FALLING_PORT_CTRL_TCH_LOCKED_10_FALLING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_21_PORT_CTRL_REG0_TIC_ENABLE_21_FALLING_PORT_CTRL_TCH_LOCKED_11_FALLING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_21_PORT_CTRL_REG0_TIC_ENABLE_21_FALLING_PORT_CTRL_TCH_MEAS_CYCLE_END_FALLING (0x00000004u)

/* Register Name        : TIC_ENABLE_22_LIN0_REG0
 * Register Addr        : 0xC97Du
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_22_LIN0_REG0_ADDR                                        (0xC97Du)
#define IO_TIC_ENABLE_22_LIN0_REG0_RESET_VAL                                   (0x00000000u)
#define IO_TIC_ENABLE_22_LIN0_REG0_MMS                                         (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_ENABLE_22            | Interrupts enable LIN0. The       | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_22_LIN0_REG0_TIC_ENABLE_22                          (0u)
#define BITL_IO_TIC_ENABLE_22_LIN0_REG0_TIC_ENABLE_22                          (16u)
#define BITM_IO_TIC_ENABLE_22_LIN0_REG0_TIC_ENABLE_22                          (0x0000FFFFu)
#define ENUM_IO_TIC_ENABLE_22_LIN0_REG0_TIC_ENABLE_22_LIN0_EN_RISING           (0x00000000u)
#define ENUM_IO_TIC_ENABLE_22_LIN0_REG0_TIC_ENABLE_22_LIN0_WAKEUP_DETECTED_RISING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_22_LIN0_REG0_TIC_ENABLE_22_LIN0_FRAME_RESPONSE_TOO_SHORT_RISING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_22_LIN0_REG0_TIC_ENABLE_22_LIN0_FRAMING_ERROR_RISING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_22_LIN0_REG0_TIC_ENABLE_22_LIN0_TX_DATA_CONTENTION_RISING (0x00000004u)
#define ENUM_IO_TIC_ENABLE_22_LIN0_REG0_TIC_ENABLE_22_LIN0_PID_FIELD_CONTENTION_RISING (0x00000005u)
#define ENUM_IO_TIC_ENABLE_22_LIN0_REG0_TIC_ENABLE_22_LIN0_SYNC_FIELD_CONTENTION_RISING (0x00000006u)
#define ENUM_IO_TIC_ENABLE_22_LIN0_REG0_TIC_ENABLE_22_LIN0_BREAK_FIELD_CONTENTION_RISING (0x00000007u)
#define ENUM_IO_TIC_ENABLE_22_LIN0_REG0_TIC_ENABLE_22_LIN0_EN_FALLING          (0x00000008u)
#define ENUM_IO_TIC_ENABLE_22_LIN0_REG0_TIC_ENABLE_22_LIN0_WAKEUP_DETECTED_FALLING (0x00000009u)
#define ENUM_IO_TIC_ENABLE_22_LIN0_REG0_TIC_ENABLE_22_LIN0_FRAME_RESPONSE_TOO_SHORT_FALLING (0x0000000Au)
#define ENUM_IO_TIC_ENABLE_22_LIN0_REG0_TIC_ENABLE_22_LIN0_FRAMING_ERROR_FALLING (0x0000000Bu)
#define ENUM_IO_TIC_ENABLE_22_LIN0_REG0_TIC_ENABLE_22_LIN0_TX_DATA_CONTENTION_FALLING (0x0000000Cu)
#define ENUM_IO_TIC_ENABLE_22_LIN0_REG0_TIC_ENABLE_22_LIN0_PID_FIELD_CONTENTION_FALLING (0x0000000Du)
#define ENUM_IO_TIC_ENABLE_22_LIN0_REG0_TIC_ENABLE_22_LIN0_SYNC_FIELD_CONTENTION_FALLING (0x0000000Eu)
#define ENUM_IO_TIC_ENABLE_22_LIN0_REG0_TIC_ENABLE_22_LIN0_BREAK_FIELD_CONTENTION_FALLING (0x0000000Fu)

/* Register Name        : TIC_ENABLE_23_LIN1_REG0
 * Register Addr        : 0xC97Fu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_23_LIN1_REG0_ADDR                                        (0xC97Fu)
#define IO_TIC_ENABLE_23_LIN1_REG0_RESET_VAL                                   (0x00000000u)
#define IO_TIC_ENABLE_23_LIN1_REG0_MMS                                         (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_ENABLE_23            | Interrupts enable LIN1. The       | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_23_LIN1_REG0_TIC_ENABLE_23                          (0u)
#define BITL_IO_TIC_ENABLE_23_LIN1_REG0_TIC_ENABLE_23                          (16u)
#define BITM_IO_TIC_ENABLE_23_LIN1_REG0_TIC_ENABLE_23                          (0x0000FFFFu)
#define ENUM_IO_TIC_ENABLE_23_LIN1_REG0_TIC_ENABLE_23_LIN1_EN_RISING           (0x00000000u)
#define ENUM_IO_TIC_ENABLE_23_LIN1_REG0_TIC_ENABLE_23_LIN1_WAKEUP_DETECTED_RISING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_23_LIN1_REG0_TIC_ENABLE_23_LIN1_FRAME_RESPONSE_TOO_SHORT_RISING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_23_LIN1_REG0_TIC_ENABLE_23_LIN1_FRAMING_ERROR_RISING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_23_LIN1_REG0_TIC_ENABLE_23_LIN1_TX_DATA_CONTENTION_RISING (0x00000004u)
#define ENUM_IO_TIC_ENABLE_23_LIN1_REG0_TIC_ENABLE_23_LIN1_PID_FIELD_CONTENTION_RISING (0x00000005u)
#define ENUM_IO_TIC_ENABLE_23_LIN1_REG0_TIC_ENABLE_23_LIN1_SYNC_FIELD_CONTENTION_RISING (0x00000006u)
#define ENUM_IO_TIC_ENABLE_23_LIN1_REG0_TIC_ENABLE_23_LIN1_BREAK_FIELD_CONTENTION_RISING (0x00000007u)
#define ENUM_IO_TIC_ENABLE_23_LIN1_REG0_TIC_ENABLE_23_LIN1_EN_FALLING          (0x00000008u)
#define ENUM_IO_TIC_ENABLE_23_LIN1_REG0_TIC_ENABLE_23_LIN1_WAKEUP_DETECTED_FALLING (0x00000009u)
#define ENUM_IO_TIC_ENABLE_23_LIN1_REG0_TIC_ENABLE_23_LIN1_FRAME_RESPONSE_TOO_SHORT_FALLING (0x0000000Au)
#define ENUM_IO_TIC_ENABLE_23_LIN1_REG0_TIC_ENABLE_23_LIN1_FRAMING_ERROR_FALLING (0x0000000Bu)
#define ENUM_IO_TIC_ENABLE_23_LIN1_REG0_TIC_ENABLE_23_LIN1_TX_DATA_CONTENTION_FALLING (0x0000000Cu)
#define ENUM_IO_TIC_ENABLE_23_LIN1_REG0_TIC_ENABLE_23_LIN1_PID_FIELD_CONTENTION_FALLING (0x0000000Du)
#define ENUM_IO_TIC_ENABLE_23_LIN1_REG0_TIC_ENABLE_23_LIN1_SYNC_FIELD_CONTENTION_FALLING (0x0000000Eu)
#define ENUM_IO_TIC_ENABLE_23_LIN1_REG0_TIC_ENABLE_23_LIN1_BREAK_FIELD_CONTENTION_FALLING (0x0000000Fu)

/* Register Name        : TIC_ENABLE_24_UART0_REG0
 * Register Addr        : 0xC981u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_24_UART0_REG0_ADDR                                       (0xC981u)
#define IO_TIC_ENABLE_24_UART0_REG0_RESET_VAL                                  (0x00000000u)
#define IO_TIC_ENABLE_24_UART0_REG0_MMS                                        (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 01-00 | TIC_ENABLE_24_RISING     | Interrupts enable UART0. The      | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 09-08 | TIC_ENABLE_24_FALLING    | Interrupts enable UART0. The      | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_24_UART0_REG0_TIC_ENABLE_24_RISING                  (0u)
#define BITL_IO_TIC_ENABLE_24_UART0_REG0_TIC_ENABLE_24_RISING                  (2u)
#define BITM_IO_TIC_ENABLE_24_UART0_REG0_TIC_ENABLE_24_RISING                  (0x00000003u)
#define ENUM_IO_TIC_ENABLE_24_UART0_REG0_TIC_ENABLE_24_RISING_UART0_WORD_TRANSMITTED_RISING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_24_UART0_REG0_TIC_ENABLE_24_RISING_UART0_WORD_RECEIVED_RISING (0x00000001u)

#define BITP_IO_TIC_ENABLE_24_UART0_REG0_TIC_ENABLE_24_FALLING                 (8u)
#define BITL_IO_TIC_ENABLE_24_UART0_REG0_TIC_ENABLE_24_FALLING                 (2u)
#define BITM_IO_TIC_ENABLE_24_UART0_REG0_TIC_ENABLE_24_FALLING                 (0x00000300u)
#define ENUM_IO_TIC_ENABLE_24_UART0_REG0_TIC_ENABLE_24_FALLING_UART0_WORD_TRANSMITTED_FALLING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_24_UART0_REG0_TIC_ENABLE_24_FALLING_UART0_WORD_RECEIVED_FALLING (0x00000001u)

/* Register Name        : TIC_ENABLE_24_UART0_REG1
 * Register Addr        : 0xC982u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_24_UART0_REG1_ADDR                                       (0xC982u)
#define IO_TIC_ENABLE_24_UART0_REG1_RESET_VAL                                  (0x00000000u)
#define IO_TIC_ENABLE_24_UART0_REG1_MMS                                        (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 01-00 | TIC_ENABLE_24_HIGH       | Interrupts enable UART0. The      | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 09-08 | TIC_ENABLE_24_LOW        | Interrupts enable UART0. The      | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_24_UART0_REG1_TIC_ENABLE_24_HIGH                    (0u)
#define BITL_IO_TIC_ENABLE_24_UART0_REG1_TIC_ENABLE_24_HIGH                    (2u)
#define BITM_IO_TIC_ENABLE_24_UART0_REG1_TIC_ENABLE_24_HIGH                    (0x00000003u)
#define ENUM_IO_TIC_ENABLE_24_UART0_REG1_TIC_ENABLE_24_HIGH_UART0_WORD_TRANSMITTED_HIGH (0x00000000u)
#define ENUM_IO_TIC_ENABLE_24_UART0_REG1_TIC_ENABLE_24_HIGH_UART0_WORD_RECEIVED_HIGH (0x00000001u)

#define BITP_IO_TIC_ENABLE_24_UART0_REG1_TIC_ENABLE_24_LOW                     (8u)
#define BITL_IO_TIC_ENABLE_24_UART0_REG1_TIC_ENABLE_24_LOW                     (2u)
#define BITM_IO_TIC_ENABLE_24_UART0_REG1_TIC_ENABLE_24_LOW                     (0x00000300u)
#define ENUM_IO_TIC_ENABLE_24_UART0_REG1_TIC_ENABLE_24_LOW_UART0_WORD_TRANSMITTED_LOW (0x00000000u)
#define ENUM_IO_TIC_ENABLE_24_UART0_REG1_TIC_ENABLE_24_LOW_UART0_WORD_RECEIVED_LOW (0x00000001u)

/* Register Name        : TIC_ENABLE_25_FLEXIO0_REG0
 * Register Addr        : 0xC983u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_25_FLEXIO0_REG0_ADDR                                     (0xC983u)
#define IO_TIC_ENABLE_25_FLEXIO0_REG0_RESET_VAL                                (0x00000000u)
#define IO_TIC_ENABLE_25_FLEXIO0_REG0_MMS                                      (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_ENABLE_25            | Interrupts enable SLEEP_WAKE and  | 0x00000000  |
 * |       |                          | SERIAL_COMM. The enumeration      |             |
 * |       |                          | table values indicates the bit    |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | enable, not the value that has    |             |
 * |       |                          | to be written to do the           |             |
 * |       |                          | interrupt enable. Setting the     |             |
 * |       |                          | bit position to one (1) enables   |             |
 * |       |                          | the interrupt.                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25                       (0u)
#define BITL_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25                       (16u)
#define BITM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25                       (0x0000FFFFu)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_0_RISING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_1_RISING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_2_RISING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_3_RISING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_4_RISING (0x00000004u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_5_RISING (0x00000005u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_6_RISING (0x00000006u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_7_RISING (0x00000007u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_0_FALLING (0x00000008u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_1_FALLING (0x00000009u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_2_FALLING (0x0000000Au)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_3_FALLING (0x0000000Bu)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_4_FALLING (0x0000000Cu)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_5_FALLING (0x0000000Du)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_6_FALLING (0x0000000Eu)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_7_FALLING (0x0000000Fu)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_0_HIGH (0x00000010u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_1_HIGH (0x00000011u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_2_HIGH (0x00000012u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_3_HIGH (0x00000013u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_4_HIGH (0x00000014u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_5_HIGH (0x00000015u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_6_HIGH (0x00000016u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_7_HIGH (0x00000017u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_0_LOW (0x00000018u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_1_LOW (0x00000019u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_2_LOW (0x0000001Au)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_3_LOW (0x0000001Bu)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_4_LOW (0x0000001Cu)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_5_LOW (0x0000001Du)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_6_LOW (0x0000001Eu)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG0_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_7_LOW (0x0000001Fu)

/* Register Name        : TIC_ENABLE_25_FLEXIO0_REG1
 * Register Addr        : 0xC984u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_25_FLEXIO0_REG1_ADDR                                     (0xC984u)
#define IO_TIC_ENABLE_25_FLEXIO0_REG1_RESET_VAL                                (0x00000000u)
#define IO_TIC_ENABLE_25_FLEXIO0_REG1_MMS                                      (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_ENABLE_25            | Interrupts enable SLEEP_WAKE and  | 0x00000000  |
 * |       |                          | SERIAL_COMM. The enumeration      |             |
 * |       |                          | table values indicates the bit    |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | enable, not the value that has    |             |
 * |       |                          | to be written to do the           |             |
 * |       |                          | interrupt enable. Setting the     |             |
 * |       |                          | bit position to one (1) enables   |             |
 * |       |                          | the interrupt.                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25                       (0u)
#define BITL_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25                       (16u)
#define BITM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25                       (0x0000FFFFu)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_0_RISING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_1_RISING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_2_RISING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_3_RISING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_4_RISING (0x00000004u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_5_RISING (0x00000005u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_6_RISING (0x00000006u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_7_RISING (0x00000007u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_0_FALLING (0x00000008u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_1_FALLING (0x00000009u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_2_FALLING (0x0000000Au)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_3_FALLING (0x0000000Bu)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_4_FALLING (0x0000000Cu)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_5_FALLING (0x0000000Du)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_6_FALLING (0x0000000Eu)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_7_FALLING (0x0000000Fu)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_0_HIGH (0x00000010u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_1_HIGH (0x00000011u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_2_HIGH (0x00000012u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_3_HIGH (0x00000013u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_4_HIGH (0x00000014u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_5_HIGH (0x00000015u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_6_HIGH (0x00000016u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_7_HIGH (0x00000017u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_0_LOW (0x00000018u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_1_LOW (0x00000019u)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_2_LOW (0x0000001Au)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_3_LOW (0x0000001Bu)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_4_LOW (0x0000001Cu)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_5_LOW (0x0000001Du)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_6_LOW (0x0000001Eu)
#define ENUM_IO_TIC_ENABLE_25_FLEXIO0_REG1_TIC_ENABLE_25_FLEX_IO0_CONFIG_INT_7_LOW (0x0000001Fu)

/* Register Name        : TIC_ENABLE_26_FLEXIO1_REG0
 * Register Addr        : 0xC985u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_26_FLEXIO1_REG0_ADDR                                     (0xC985u)
#define IO_TIC_ENABLE_26_FLEXIO1_REG0_RESET_VAL                                (0x00000000u)
#define IO_TIC_ENABLE_26_FLEXIO1_REG0_MMS                                      (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_ENABLE_26            | Interrupts enable SLEEP_WAKE and  | 0x00000000  |
 * |       |                          | SERIAL_COMM. The enumeration      |             |
 * |       |                          | table values indicates the bit    |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | enable, not the value that has    |             |
 * |       |                          | to be written to do the           |             |
 * |       |                          | interrupt enable. Setting the     |             |
 * |       |                          | bit position to one (1) enables   |             |
 * |       |                          | the interrupt.                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26                       (0u)
#define BITL_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26                       (16u)
#define BITM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26                       (0x0000FFFFu)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_0_RISING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_1_RISING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_2_RISING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_3_RISING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_4_RISING (0x00000004u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_5_RISING (0x00000005u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_6_RISING (0x00000006u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_7_RISING (0x00000007u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_0_FALLING (0x00000008u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_1_FALLING (0x00000009u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_2_FALLING (0x0000000Au)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_3_FALLING (0x0000000Bu)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_4_FALLING (0x0000000Cu)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_5_FALLING (0x0000000Du)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_6_FALLING (0x0000000Eu)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_7_FALLING (0x0000000Fu)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_0_HIGH (0x00000010u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_1_HIGH (0x00000011u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_2_HIGH (0x00000012u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_3_HIGH (0x00000013u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_4_HIGH (0x00000014u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_5_HIGH (0x00000015u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_6_HIGH (0x00000016u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_7_HIGH (0x00000017u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_0_LOW (0x00000018u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_1_LOW (0x00000019u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_2_LOW (0x0000001Au)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_3_LOW (0x0000001Bu)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_4_LOW (0x0000001Cu)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_5_LOW (0x0000001Du)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_6_LOW (0x0000001Eu)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG0_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_7_LOW (0x0000001Fu)

/* Register Name        : TIC_ENABLE_26_FLEXIO1_REG1
 * Register Addr        : 0xC986u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_26_FLEXIO1_REG1_ADDR                                     (0xC986u)
#define IO_TIC_ENABLE_26_FLEXIO1_REG1_RESET_VAL                                (0x00000000u)
#define IO_TIC_ENABLE_26_FLEXIO1_REG1_MMS                                      (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_ENABLE_26            | Interrupts enable SLEEP_WAKE and  | 0x00000000  |
 * |       |                          | SERIAL_COMM. The enumeration      |             |
 * |       |                          | table values indicates the bit    |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | enable, not the value that has    |             |
 * |       |                          | to be written to do the           |             |
 * |       |                          | interrupt enable. Setting the     |             |
 * |       |                          | bit position to one (1) enables   |             |
 * |       |                          | the interrupt.                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26                       (0u)
#define BITL_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26                       (16u)
#define BITM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26                       (0x0000FFFFu)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_0_RISING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_1_RISING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_2_RISING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_3_RISING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_4_RISING (0x00000004u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_5_RISING (0x00000005u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_6_RISING (0x00000006u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_7_RISING (0x00000007u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_0_FALLING (0x00000008u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_1_FALLING (0x00000009u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_2_FALLING (0x0000000Au)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_3_FALLING (0x0000000Bu)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_4_FALLING (0x0000000Cu)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_5_FALLING (0x0000000Du)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_6_FALLING (0x0000000Eu)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_7_FALLING (0x0000000Fu)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_0_HIGH (0x00000010u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_1_HIGH (0x00000011u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_2_HIGH (0x00000012u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_3_HIGH (0x00000013u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_4_HIGH (0x00000014u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_5_HIGH (0x00000015u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_6_HIGH (0x00000016u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_7_HIGH (0x00000017u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_0_LOW (0x00000018u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_1_LOW (0x00000019u)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_2_LOW (0x0000001Au)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_3_LOW (0x0000001Bu)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_4_LOW (0x0000001Cu)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_5_LOW (0x0000001Du)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_6_LOW (0x0000001Eu)
#define ENUM_IO_TIC_ENABLE_26_FLEXIO1_REG1_TIC_ENABLE_26_FLEX_IO1_CONFIG_INT_7_LOW (0x0000001Fu)

/* Register Name        : TIC_ENABLE_27_ADC_INTF_REG0
 * Register Addr        : 0xC987u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_27_ADC_INTF_REG0_ADDR                                    (0xC987u)
#define IO_TIC_ENABLE_27_ADC_INTF_REG0_RESET_VAL                               (0x00000000u)
#define IO_TIC_ENABLE_27_ADC_INTF_REG0_MMS                                     (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 02-00 | TIC_ENABLE_27_RISING     | Interrupts enable ADC. The        | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 10-08 | TIC_ENABLE_27_FALLING    | Interrupts enable ADC. The        | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_27_ADC_INTF_REG0_TIC_ENABLE_27_RISING               (0u)
#define BITL_IO_TIC_ENABLE_27_ADC_INTF_REG0_TIC_ENABLE_27_RISING               (3u)
#define BITM_IO_TIC_ENABLE_27_ADC_INTF_REG0_TIC_ENABLE_27_RISING               (0x00000007u)

#define BITP_IO_TIC_ENABLE_27_ADC_INTF_REG0_TIC_ENABLE_27_FALLING              (8u)
#define BITL_IO_TIC_ENABLE_27_ADC_INTF_REG0_TIC_ENABLE_27_FALLING              (3u)
#define BITM_IO_TIC_ENABLE_27_ADC_INTF_REG0_TIC_ENABLE_27_FALLING              (0x00000700u)

/* Register Name        : TIC_ENABLE_27_ADC_INTF_REG1
 * Register Addr        : 0xC988u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_27_ADC_INTF_REG1_ADDR                                    (0xC988u)
#define IO_TIC_ENABLE_27_ADC_INTF_REG1_RESET_VAL                               (0x00000000u)
#define IO_TIC_ENABLE_27_ADC_INTF_REG1_MMS                                     (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 02-00 | TIC_ENABLE_27_HIGH       | Interrupts enable ADC. The        | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 10-08 | TIC_ENABLE_27_LOW        | Interrupts enable ADC. The        | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_27_ADC_INTF_REG1_TIC_ENABLE_27_HIGH                 (0u)
#define BITL_IO_TIC_ENABLE_27_ADC_INTF_REG1_TIC_ENABLE_27_HIGH                 (3u)
#define BITM_IO_TIC_ENABLE_27_ADC_INTF_REG1_TIC_ENABLE_27_HIGH                 (0x00000007u)

#define BITP_IO_TIC_ENABLE_27_ADC_INTF_REG1_TIC_ENABLE_27_LOW                  (8u)
#define BITL_IO_TIC_ENABLE_27_ADC_INTF_REG1_TIC_ENABLE_27_LOW                  (3u)
#define BITM_IO_TIC_ENABLE_27_ADC_INTF_REG1_TIC_ENABLE_27_LOW                  (0x00000700u)

/* Register Name        : TIC_ENABLE_28_MISC0_REG0
 * Register Addr        : 0xC989u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_28_MISC0_REG0_ADDR                                       (0xC989u)
#define IO_TIC_ENABLE_28_MISC0_REG0_RESET_VAL                                  (0x00000000u)
#define IO_TIC_ENABLE_28_MISC0_REG0_MMS                                        (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_ENABLE_28            | Interrupts enable SLEEP_WAKE and  | 0x00000000  |
 * |       |                          | SERIAL_COMM. The enumeration      |             |
 * |       |                          | table values indicates the bit    |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | enable, not the value that has    |             |
 * |       |                          | to be written to do the           |             |
 * |       |                          | interrupt enable. Setting the     |             |
 * |       |                          | bit position to one (1) enables   |             |
 * |       |                          | the interrupt.                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28                         (0u)
#define BITL_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28                         (16u)
#define BITM_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28                         (0x0000FFFFu)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28_SLPWK_FLAG_CONTROLLER_MODE_RISING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28_SLPWK_FLAG_CONFIRM_AWAKE_RISING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28_SLPWK_FLAG_LINE_BUSY_RISING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28_SLPWK_FLAG_SLEEP_ERR_RISING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28_SLPWK_FLAG_STANDBY_ERR_RISING (0x00000004u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28_SLPWK_FLAG_RETURNED_FROM_STANDBY_RISING (0x00000005u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28_SLPWK_FLAG_REQ_SYSTEM_WAKEUP_CONF_RISING (0x00000006u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28_SLPWK_FLAG_CONFIRM_AWAKE_FALLING (0x00000009u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28_SLPWK_FLAG_LINE_BUSY_FALLING (0x0000000Au)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28_SLPWK_FLAG_SLEEP_ERR_FALLING (0x0000000Bu)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28_SLPWK_FLAG_STANDBY_ERR_FALLING (0x0000000Cu)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28_SLPWK_FLAG_RETURNED_FROM_STANDBY_FALLING (0x0000000Du)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28_SLPWK_FLAG_REQ_SYSTEM_WAKEUP_CONF_FALLING (0x0000000Eu)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28_SLPWK_FLAG_CONTROLLER_MODE_HIGH (0x00000010u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28_SLPWK_FLAG_CONFIRM_AWAKE_HIGH (0x00000011u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28_SLPWK_FLAG_LINE_BUSY_HIGH (0x00000012u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28_SLPWK_FLAG_SLEEP_ERR_HIGH (0x00000013u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28_SLPWK_FLAG_STANDBY_ERR_HIGH (0x00000014u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28_SLPWK_FLAG_RETURNED_FROM_STANDBY_HIGH (0x00000015u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28_SLPWK_FLAG_REQ_SYSTEM_WAKEUP_CONF_HIGH (0x00000016u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28_SLPWK_FLAG_CONTROLLER_MODE_LOW (0x00000018u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28_SLPWK_FLAG_CONFIRM_AWAKE_LOW (0x00000019u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28_SLPWK_FLAG_LINE_BUSY_LOW (0x0000001Au)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28_SLPWK_FLAG_SLEEP_ERR_LOW (0x0000001Bu)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28_SLPWK_FLAG_STANDBY_ERR_LOW (0x0000001Cu)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28_SLPWK_FLAG_RETURNED_FROM_STANDBY_LOW (0x0000001Du)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG0_TIC_ENABLE_28_SLPWK_FLAG_REQ_SYSTEM_WAKEUP_CONF_LOW (0x0000001Eu)

/* Register Name        : TIC_ENABLE_28_MISC0_REG1
 * Register Addr        : 0xC98Au
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_28_MISC0_REG1_ADDR                                       (0xC98Au)
#define IO_TIC_ENABLE_28_MISC0_REG1_RESET_VAL                                  (0x00000000u)
#define IO_TIC_ENABLE_28_MISC0_REG1_MMS                                        (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_ENABLE_28            | Interrupts enable SLEEP_WAKE and  | 0x00000000  |
 * |       |                          | SERIAL_COMM. The enumeration      |             |
 * |       |                          | table values indicates the bit    |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | enable, not the value that has    |             |
 * |       |                          | to be written to do the           |             |
 * |       |                          | interrupt enable. Setting the     |             |
 * |       |                          | bit position to one (1) enables   |             |
 * |       |                          | the interrupt.                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28                         (0u)
#define BITL_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28                         (16u)
#define BITM_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28                         (0x0000FFFFu)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28_SLPWK_FLAG_CONTROLLER_MODE_RISING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28_SLPWK_FLAG_CONFIRM_AWAKE_RISING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28_SLPWK_FLAG_LINE_BUSY_RISING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28_SLPWK_FLAG_SLEEP_ERR_RISING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28_SLPWK_FLAG_STANDBY_ERR_RISING (0x00000004u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28_SLPWK_FLAG_RETURNED_FROM_STANDBY_RISING (0x00000005u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28_SLPWK_FLAG_REQ_SYSTEM_WAKEUP_CONF_RISING (0x00000006u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28_SLPWK_FLAG_CONFIRM_AWAKE_FALLING (0x00000009u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28_SLPWK_FLAG_LINE_BUSY_FALLING (0x0000000Au)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28_SLPWK_FLAG_SLEEP_ERR_FALLING (0x0000000Bu)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28_SLPWK_FLAG_STANDBY_ERR_FALLING (0x0000000Cu)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28_SLPWK_FLAG_RETURNED_FROM_STANDBY_FALLING (0x0000000Du)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28_SLPWK_FLAG_REQ_SYSTEM_WAKEUP_CONF_FALLING (0x0000000Eu)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28_SLPWK_FLAG_CONTROLLER_MODE_HIGH (0x00000010u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28_SLPWK_FLAG_CONFIRM_AWAKE_HIGH (0x00000011u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28_SLPWK_FLAG_LINE_BUSY_HIGH (0x00000012u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28_SLPWK_FLAG_SLEEP_ERR_HIGH (0x00000013u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28_SLPWK_FLAG_STANDBY_ERR_HIGH (0x00000014u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28_SLPWK_FLAG_RETURNED_FROM_STANDBY_HIGH (0x00000015u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28_SLPWK_FLAG_REQ_SYSTEM_WAKEUP_CONF_HIGH (0x00000016u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28_SLPWK_FLAG_CONTROLLER_MODE_LOW (0x00000018u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28_SLPWK_FLAG_CONFIRM_AWAKE_LOW (0x00000019u)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28_SLPWK_FLAG_LINE_BUSY_LOW (0x0000001Au)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28_SLPWK_FLAG_SLEEP_ERR_LOW (0x0000001Bu)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28_SLPWK_FLAG_STANDBY_ERR_LOW (0x0000001Cu)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28_SLPWK_FLAG_RETURNED_FROM_STANDBY_LOW (0x0000001Du)
#define ENUM_IO_TIC_ENABLE_28_MISC0_REG1_TIC_ENABLE_28_SLPWK_FLAG_REQ_SYSTEM_WAKEUP_CONF_LOW (0x0000001Eu)

/* Register Name        : TIC_ENABLE_29_MISC1_REG0
 * Register Addr        : 0xC98Bu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_29_MISC1_REG0_ADDR                                       (0xC98Bu)
#define IO_TIC_ENABLE_29_MISC1_REG0_RESET_VAL                                  (0x00000000u)
#define IO_TIC_ENABLE_29_MISC1_REG0_MMS                                        (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | TIC_ENABLE_29_RISING     | Interrupts enable UMC - GPTP -    | 0x00000000  |
 * |       |                          | BOOTLOADER - MANUAL. The          |             |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-08 | TIC_ENABLE_29_FALLING    | Interrupts enable UMC - GPTP -    | 0x00000000  |
 * |       |                          | BOOTLOADER - MANUAL. The          |             |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_29_MISC1_REG0_TIC_ENABLE_29_RISING                  (0u)
#define BITL_IO_TIC_ENABLE_29_MISC1_REG0_TIC_ENABLE_29_RISING                  (8u)
#define BITM_IO_TIC_ENABLE_29_MISC1_REG0_TIC_ENABLE_29_RISING                  (0x000000FFu)
#define ENUM_IO_TIC_ENABLE_29_MISC1_REG0_TIC_ENABLE_29_RISING_GPTP_LOCK_RISING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_29_MISC1_REG0_TIC_ENABLE_29_RISING_BOOTLOADER_DONE_RISING (0x00000004u)
#define ENUM_IO_TIC_ENABLE_29_MISC1_REG0_TIC_ENABLE_29_RISING_MANUAL_INTERRUPT_RISING (0x00000005u)
#define ENUM_IO_TIC_ENABLE_29_MISC1_REG0_TIC_ENABLE_29_RISING_EFUSE_CTRL_PRG_FALLING (0x00000006u)
#define ENUM_IO_TIC_ENABLE_29_MISC1_REG0_TIC_ENABLE_29_RISING_HS_COMM_ERROR    (0x00000007u)

#define BITP_IO_TIC_ENABLE_29_MISC1_REG0_TIC_ENABLE_29_FALLING                 (8u)
#define BITL_IO_TIC_ENABLE_29_MISC1_REG0_TIC_ENABLE_29_FALLING                 (8u)
#define BITM_IO_TIC_ENABLE_29_MISC1_REG0_TIC_ENABLE_29_FALLING                 (0x0000FF00u)
#define ENUM_IO_TIC_ENABLE_29_MISC1_REG0_TIC_ENABLE_29_FALLING_GPTP_LOCK_FALLING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_29_MISC1_REG0_TIC_ENABLE_29_FALLING_BOOTLOADER_DONE_FALLING (0x00000004u)
#define ENUM_IO_TIC_ENABLE_29_MISC1_REG0_TIC_ENABLE_29_FALLING_MANUAL_INTERRUPT_FALLING (0x00000005u)
#define ENUM_IO_TIC_ENABLE_29_MISC1_REG0_TIC_ENABLE_29_FALLING_EFUSE_CTRL_PRG_FALLING (0x00000006u)
#define ENUM_IO_TIC_ENABLE_29_MISC1_REG0_TIC_ENABLE_29_FALLING_HS_COMM_ERROR   (0x00000007u)

/* Register Name        : TIC_ENABLE_29_MISC1_REG1
 * Register Addr        : 0xC98Cu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_29_MISC1_REG1_ADDR                                       (0xC98Cu)
#define IO_TIC_ENABLE_29_MISC1_REG1_RESET_VAL                                  (0x00000000u)
#define IO_TIC_ENABLE_29_MISC1_REG1_MMS                                        (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | TIC_ENABLE_29_HIGH       | Interrupts enable UMC - GPTP -    | 0x00000000  |
 * |       |                          | BOOTLOADER - MANUAL. The          |             |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-08 | TIC_ENABLE_29_LOW        | Interrupts enable UMC - GPTP -    | 0x00000000  |
 * |       |                          | BOOTLOADER - MANUAL. The          |             |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_29_MISC1_REG1_TIC_ENABLE_29_HIGH                    (0u)
#define BITL_IO_TIC_ENABLE_29_MISC1_REG1_TIC_ENABLE_29_HIGH                    (8u)
#define BITM_IO_TIC_ENABLE_29_MISC1_REG1_TIC_ENABLE_29_HIGH                    (0x000000FFu)
#define ENUM_IO_TIC_ENABLE_29_MISC1_REG1_TIC_ENABLE_29_HIGH_GPTP_LOCK_HIGH     (0x00000003u)
#define ENUM_IO_TIC_ENABLE_29_MISC1_REG1_TIC_ENABLE_29_HIGH_BOOTLOADER_DONE_HIGH (0x00000004u)
#define ENUM_IO_TIC_ENABLE_29_MISC1_REG1_TIC_ENABLE_29_HIGH_MANUAL_INTERRUPT_HIGH (0x00000005u)
#define ENUM_IO_TIC_ENABLE_29_MISC1_REG1_TIC_ENABLE_29_HIGH_EFUSE_CTRL_PRG_HIGH (0x00000006u)
#define ENUM_IO_TIC_ENABLE_29_MISC1_REG1_TIC_ENABLE_29_HIGH_HS_COMM_ERROR      (0x00000007u)

#define BITP_IO_TIC_ENABLE_29_MISC1_REG1_TIC_ENABLE_29_LOW                     (8u)
#define BITL_IO_TIC_ENABLE_29_MISC1_REG1_TIC_ENABLE_29_LOW                     (8u)
#define BITM_IO_TIC_ENABLE_29_MISC1_REG1_TIC_ENABLE_29_LOW                     (0x0000FF00u)
#define ENUM_IO_TIC_ENABLE_29_MISC1_REG1_TIC_ENABLE_29_LOW_GPTP_LOCK_LOW       (0x00000003u)
#define ENUM_IO_TIC_ENABLE_29_MISC1_REG1_TIC_ENABLE_29_LOW_BOOTLOADER_DONE_LOW (0x00000004u)
#define ENUM_IO_TIC_ENABLE_29_MISC1_REG1_TIC_ENABLE_29_LOW_MANUAL_INTERRUPT_LOW (0x00000005u)
#define ENUM_IO_TIC_ENABLE_29_MISC1_REG1_TIC_ENABLE_29_LOW_EFUSE_CTRL_PRG_LOW  (0x00000006u)
#define ENUM_IO_TIC_ENABLE_29_MISC1_REG1_TIC_ENABLE_29_LOW_HS_COMM_ERROR       (0x00000007u)

/* Register Name        : TIC_ENABLE_30_ADC_REG0
 * Register Addr        : 0xC98Du
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_30_ADC_REG0_ADDR                                         (0xC98Du)
#define IO_TIC_ENABLE_30_ADC_REG0_RESET_VAL                                    (0x00000000u)
#define IO_TIC_ENABLE_30_ADC_REG0_MMS                                          (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_ENABLE_30            | Interrupts enable ADC             | 0x00000000  |
 * |       |                          | controller. The enumeration       |             |
 * |       |                          | table values indicates the bit    |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | enable, not the value that has    |             |
 * |       |                          | to be written to do the           |             |
 * |       |                          | interrupt enable. Setting the     |             |
 * |       |                          | bit position to one (1) enables   |             |
 * |       |                          | the interrupt.                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_30_ADC_REG0_TIC_ENABLE_30                           (0u)
#define BITL_IO_TIC_ENABLE_30_ADC_REG0_TIC_ENABLE_30                           (16u)
#define BITM_IO_TIC_ENABLE_30_ADC_REG0_TIC_ENABLE_30                           (0x0000FFFFu)

/* Register Name        : TIC_ENABLE_30_ADC_REG1
 * Register Addr        : 0xC98Eu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_30_ADC_REG1_ADDR                                         (0xC98Eu)
#define IO_TIC_ENABLE_30_ADC_REG1_RESET_VAL                                    (0x00000000u)
#define IO_TIC_ENABLE_30_ADC_REG1_MMS                                          (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_ENABLE_30            | Interrupts enable ADC             | 0x00000000  |
 * |       |                          | controller. The enumeration       |             |
 * |       |                          | table values indicates the bit    |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | enable, not the value that has    |             |
 * |       |                          | to be written to do the           |             |
 * |       |                          | interrupt enable. Setting the     |             |
 * |       |                          | bit position to one (1) enables   |             |
 * |       |                          | the interrupt.                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_30_ADC_REG1_TIC_ENABLE_30                           (0u)
#define BITL_IO_TIC_ENABLE_30_ADC_REG1_TIC_ENABLE_30                           (16u)
#define BITM_IO_TIC_ENABLE_30_ADC_REG1_TIC_ENABLE_30                           (0x0000FFFFu)

/* Register Name        : TIC_ENABLE_31_ADC_REG0
 * Register Addr        : 0xC98Fu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_31_ADC_REG0_ADDR                                         (0xC98Fu)
#define IO_TIC_ENABLE_31_ADC_REG0_RESET_VAL                                    (0x00000000u)
#define IO_TIC_ENABLE_31_ADC_REG0_MMS                                          (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 05-00 | TIC_ENABLE_31_RISING     | Interrupts enable ADC             | 0x00000000  |
 * |       |                          | controller. The enumeration       |             |
 * |       |                          | table values indicates the bit    |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | enable, not the value that has    |             |
 * |       |                          | to be written to do the           |             |
 * |       |                          | interrupt enable. Setting the     |             |
 * |       |                          | bit position to one (1) enables   |             |
 * |       |                          | the interrupt.                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13-08 | TIC_ENABLE_31_FALLING    | Interrupts enable ADC             | 0x00000000  |
 * |       |                          | controller. The enumeration       |             |
 * |       |                          | table values indicates the bit    |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | enable, not the value that has    |             |
 * |       |                          | to be written to do the           |             |
 * |       |                          | interrupt enable. Setting the     |             |
 * |       |                          | bit position to one (1) enables   |             |
 * |       |                          | the interrupt.                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_31_ADC_REG0_TIC_ENABLE_31_RISING                    (0u)
#define BITL_IO_TIC_ENABLE_31_ADC_REG0_TIC_ENABLE_31_RISING                    (6u)
#define BITM_IO_TIC_ENABLE_31_ADC_REG0_TIC_ENABLE_31_RISING                    (0x0000003Fu)

#define BITP_IO_TIC_ENABLE_31_ADC_REG0_TIC_ENABLE_31_FALLING                   (8u)
#define BITL_IO_TIC_ENABLE_31_ADC_REG0_TIC_ENABLE_31_FALLING                   (6u)
#define BITM_IO_TIC_ENABLE_31_ADC_REG0_TIC_ENABLE_31_FALLING                   (0x00003F00u)

/* Register Name        : TIC_CLEAR_0_FIFO0_READ_REG0
 * Register Addr        : 0xC990u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_0_FIFO0_READ_REG0_ADDR                                    (0xC990u)
#define IO_TIC_CLEAR_0_FIFO0_READ_REG0_RESET_VAL                               (0x00000000u)
#define IO_TIC_CLEAR_0_FIFO0_READ_REG0_MMS                                     (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_CLEAR_0_RISING       | Interrupts clear FIFO0_READ. The  | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_CLEAR_0_FALLING      | Interrupts clear FIFO0_READ. The  | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_0_FIFO0_READ_REG0_TIC_CLEAR_0_RISING                 (0u)
#define BITL_IO_TIC_CLEAR_0_FIFO0_READ_REG0_TIC_CLEAR_0_RISING                 (5u)
#define BITM_IO_TIC_CLEAR_0_FIFO0_READ_REG0_TIC_CLEAR_0_RISING                 (0x0000001Fu)
#define ENUM_IO_TIC_CLEAR_0_FIFO0_READ_REG0_TIC_CLEAR_0_RISING_FIFO0_READ_EMPTY_RISING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_0_FIFO0_READ_REG0_TIC_CLEAR_0_RISING_FIFO0_READ_THRESHOLD_1_RISING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_0_FIFO0_READ_REG0_TIC_CLEAR_0_RISING_FIFO0_READ_THRESHOLD_2_RISING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_0_FIFO0_READ_REG0_TIC_CLEAR_0_RISING_FIFO0_READ_THRESHOLD_3_RISING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_0_FIFO0_READ_REG0_TIC_CLEAR_0_RISING_FIFO0_READ_FULL_RISING (0x00000004u)

#define BITP_IO_TIC_CLEAR_0_FIFO0_READ_REG0_TIC_CLEAR_0_FALLING                (8u)
#define BITL_IO_TIC_CLEAR_0_FIFO0_READ_REG0_TIC_CLEAR_0_FALLING                (5u)
#define BITM_IO_TIC_CLEAR_0_FIFO0_READ_REG0_TIC_CLEAR_0_FALLING                (0x00001F00u)
#define ENUM_IO_TIC_CLEAR_0_FIFO0_READ_REG0_TIC_CLEAR_0_FALLING_FIFO0_READ_EMPTY_FALLING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_0_FIFO0_READ_REG0_TIC_CLEAR_0_FALLING_FIFO0_READ_THRESHOLD_1_FALLING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_0_FIFO0_READ_REG0_TIC_CLEAR_0_FALLING_FIFO0_READ_THRESHOLD_2_FALLING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_0_FIFO0_READ_REG0_TIC_CLEAR_0_FALLING_FIFO0_READ_THRESHOLD_3_FALLING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_0_FIFO0_READ_REG0_TIC_CLEAR_0_FALLING_FIFO0_READ_FULL_FALLING (0x00000004u)

/* Register Name        : TIC_CLEAR_0_FIFO0_READ_REG1
 * Register Addr        : 0xC991u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_0_FIFO0_READ_REG1_ADDR                                    (0xC991u)
#define IO_TIC_CLEAR_0_FIFO0_READ_REG1_RESET_VAL                               (0x00000000u)
#define IO_TIC_CLEAR_0_FIFO0_READ_REG1_MMS                                     (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_CLEAR_0_HIGH         | Interrupts clear FIFO0_READ. The  | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_CLEAR_0_LOW          | Interrupts clear FIFO0_READ. The  | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_0_FIFO0_READ_REG1_TIC_CLEAR_0_HIGH                   (0u)
#define BITL_IO_TIC_CLEAR_0_FIFO0_READ_REG1_TIC_CLEAR_0_HIGH                   (5u)
#define BITM_IO_TIC_CLEAR_0_FIFO0_READ_REG1_TIC_CLEAR_0_HIGH                   (0x0000001Fu)
#define ENUM_IO_TIC_CLEAR_0_FIFO0_READ_REG1_TIC_CLEAR_0_HIGH_FIFO0_READ_EMPTY_HIGH (0x00000008u)
#define ENUM_IO_TIC_CLEAR_0_FIFO0_READ_REG1_TIC_CLEAR_0_HIGH_FIFO0_READ_THRESHOLD_1_HIGH (0x00000009u)
#define ENUM_IO_TIC_CLEAR_0_FIFO0_READ_REG1_TIC_CLEAR_0_HIGH_FIFO0_READ_THRESHOLD_2_HIGH (0x0000000Au)
#define ENUM_IO_TIC_CLEAR_0_FIFO0_READ_REG1_TIC_CLEAR_0_HIGH_FIFO0_READ_THRESHOLD_3_HIGH (0x0000000Bu)
#define ENUM_IO_TIC_CLEAR_0_FIFO0_READ_REG1_TIC_CLEAR_0_HIGH_FIFO0_READ_FULL_HIGH (0x0000000Cu)

#define BITP_IO_TIC_CLEAR_0_FIFO0_READ_REG1_TIC_CLEAR_0_LOW                    (8u)
#define BITL_IO_TIC_CLEAR_0_FIFO0_READ_REG1_TIC_CLEAR_0_LOW                    (5u)
#define BITM_IO_TIC_CLEAR_0_FIFO0_READ_REG1_TIC_CLEAR_0_LOW                    (0x00001F00u)
#define ENUM_IO_TIC_CLEAR_0_FIFO0_READ_REG1_TIC_CLEAR_0_LOW_FIFO0_READ_EMPTY_LOW (0x00000000u)
#define ENUM_IO_TIC_CLEAR_0_FIFO0_READ_REG1_TIC_CLEAR_0_LOW_FIFO0_READ_THRESHOLD_1_LOW (0x00000001u)
#define ENUM_IO_TIC_CLEAR_0_FIFO0_READ_REG1_TIC_CLEAR_0_LOW_FIFO0_READ_THRESHOLD_2_LOW (0x00000002u)
#define ENUM_IO_TIC_CLEAR_0_FIFO0_READ_REG1_TIC_CLEAR_0_LOW_FIFO0_READ_THRESHOLD_3_LOW (0x00000003u)
#define ENUM_IO_TIC_CLEAR_0_FIFO0_READ_REG1_TIC_CLEAR_0_LOW_FIFO0_READ_FULL_LOW (0x00000004u)

/* Register Name        : TIC_CLEAR_1_FIFO0_WRITE_REG0
 * Register Addr        : 0xC992u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_1_FIFO0_WRITE_REG0_ADDR                                   (0xC992u)
#define IO_TIC_CLEAR_1_FIFO0_WRITE_REG0_RESET_VAL                              (0x00000000u)
#define IO_TIC_CLEAR_1_FIFO0_WRITE_REG0_MMS                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_CLEAR_1_RISING       | Interrupts clear FIFO0_WRITE.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_CLEAR_1_FALLING      | Interrupts clear FIFO0_WRITE.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_1_FIFO0_WRITE_REG0_TIC_CLEAR_1_RISING                (0u)
#define BITL_IO_TIC_CLEAR_1_FIFO0_WRITE_REG0_TIC_CLEAR_1_RISING                (5u)
#define BITM_IO_TIC_CLEAR_1_FIFO0_WRITE_REG0_TIC_CLEAR_1_RISING                (0x0000001Fu)
#define ENUM_IO_TIC_CLEAR_1_FIFO0_WRITE_REG0_TIC_CLEAR_1_RISING_FIFO0_WRITE_EMPTY_RISING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_1_FIFO0_WRITE_REG0_TIC_CLEAR_1_RISING_FIFO0_WRITE_THRESHOLD_1_RISING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_1_FIFO0_WRITE_REG0_TIC_CLEAR_1_RISING_FIFO0_WRITE_THRESHOLD_2_RISING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_1_FIFO0_WRITE_REG0_TIC_CLEAR_1_RISING_FIFO0_WRITE_THRESHOLD_3_RISING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_1_FIFO0_WRITE_REG0_TIC_CLEAR_1_RISING_FIFO0_WRITE_FULL_RISING (0x00000004u)

#define BITP_IO_TIC_CLEAR_1_FIFO0_WRITE_REG0_TIC_CLEAR_1_FALLING               (8u)
#define BITL_IO_TIC_CLEAR_1_FIFO0_WRITE_REG0_TIC_CLEAR_1_FALLING               (5u)
#define BITM_IO_TIC_CLEAR_1_FIFO0_WRITE_REG0_TIC_CLEAR_1_FALLING               (0x00001F00u)
#define ENUM_IO_TIC_CLEAR_1_FIFO0_WRITE_REG0_TIC_CLEAR_1_FALLING_FIFO0_WRITE_EMPTY_FALLING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_1_FIFO0_WRITE_REG0_TIC_CLEAR_1_FALLING_FIFO0_WRITE_THRESHOLD_1_FALLING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_1_FIFO0_WRITE_REG0_TIC_CLEAR_1_FALLING_FIFO0_WRITE_THRESHOLD_2_FALLING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_1_FIFO0_WRITE_REG0_TIC_CLEAR_1_FALLING_FIFO0_WRITE_THRESHOLD_3_FALLING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_1_FIFO0_WRITE_REG0_TIC_CLEAR_1_FALLING_FIFO0_WRITE_FULL_FALLING (0x00000004u)

/* Register Name        : TIC_CLEAR_1_FIFO0_WRITE_REG1
 * Register Addr        : 0xC993u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_1_FIFO0_WRITE_REG1_ADDR                                   (0xC993u)
#define IO_TIC_CLEAR_1_FIFO0_WRITE_REG1_RESET_VAL                              (0x00000000u)
#define IO_TIC_CLEAR_1_FIFO0_WRITE_REG1_MMS                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_CLEAR_1_HIGH         | Interrupts clear FIFO0_WRITE.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_CLEAR_1_LOW          | Interrupts clear FIFO0_WRITE.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_1_FIFO0_WRITE_REG1_TIC_CLEAR_1_HIGH                  (0u)
#define BITL_IO_TIC_CLEAR_1_FIFO0_WRITE_REG1_TIC_CLEAR_1_HIGH                  (5u)
#define BITM_IO_TIC_CLEAR_1_FIFO0_WRITE_REG1_TIC_CLEAR_1_HIGH                  (0x0000001Fu)
#define ENUM_IO_TIC_CLEAR_1_FIFO0_WRITE_REG1_TIC_CLEAR_1_HIGH_FIFO0_WRITE_EMPTY_HIGH (0x00000000u)
#define ENUM_IO_TIC_CLEAR_1_FIFO0_WRITE_REG1_TIC_CLEAR_1_HIGH_FIFO0_WRITE_THRESHOLD_1_HIGH (0x00000001u)
#define ENUM_IO_TIC_CLEAR_1_FIFO0_WRITE_REG1_TIC_CLEAR_1_HIGH_FIFO0_WRITE_THRESHOLD_2_HIGH (0x00000002u)
#define ENUM_IO_TIC_CLEAR_1_FIFO0_WRITE_REG1_TIC_CLEAR_1_HIGH_FIFO0_WRITE_THRESHOLD_3_HIGH (0x00000003u)
#define ENUM_IO_TIC_CLEAR_1_FIFO0_WRITE_REG1_TIC_CLEAR_1_HIGH_FIFO0_WRITE_FULL_HIGH (0x00000004u)

#define BITP_IO_TIC_CLEAR_1_FIFO0_WRITE_REG1_TIC_CLEAR_1_LOW                   (8u)
#define BITL_IO_TIC_CLEAR_1_FIFO0_WRITE_REG1_TIC_CLEAR_1_LOW                   (5u)
#define BITM_IO_TIC_CLEAR_1_FIFO0_WRITE_REG1_TIC_CLEAR_1_LOW                   (0x00001F00u)
#define ENUM_IO_TIC_CLEAR_1_FIFO0_WRITE_REG1_TIC_CLEAR_1_LOW_FIFO0_WRITE_EMPTY_LOW (0x00000000u)
#define ENUM_IO_TIC_CLEAR_1_FIFO0_WRITE_REG1_TIC_CLEAR_1_LOW_FIFO0_WRITE_THRESHOLD_1_LOW (0x00000001u)
#define ENUM_IO_TIC_CLEAR_1_FIFO0_WRITE_REG1_TIC_CLEAR_1_LOW_FIFO0_WRITE_THRESHOLD_2_LOW (0x00000002u)
#define ENUM_IO_TIC_CLEAR_1_FIFO0_WRITE_REG1_TIC_CLEAR_1_LOW_FIFO0_WRITE_THRESHOLD_3_LOW (0x00000003u)
#define ENUM_IO_TIC_CLEAR_1_FIFO0_WRITE_REG1_TIC_CLEAR_1_LOW_FIFO0_WRITE_FULL_LOW (0x00000004u)

/* Register Name        : TIC_CLEAR_2_FIFO1_READ_REG0
 * Register Addr        : 0xC994u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_2_FIFO1_READ_REG0_ADDR                                    (0xC994u)
#define IO_TIC_CLEAR_2_FIFO1_READ_REG0_RESET_VAL                               (0x00000000u)
#define IO_TIC_CLEAR_2_FIFO1_READ_REG0_MMS                                     (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_CLEAR_2_RISING       | Interrupts clear FIFO1_READ. The  | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_CLEAR_2_FALLING      | Interrupts clear FIFO1_READ. The  | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_2_FIFO1_READ_REG0_TIC_CLEAR_2_RISING                 (0u)
#define BITL_IO_TIC_CLEAR_2_FIFO1_READ_REG0_TIC_CLEAR_2_RISING                 (5u)
#define BITM_IO_TIC_CLEAR_2_FIFO1_READ_REG0_TIC_CLEAR_2_RISING                 (0x0000001Fu)
#define ENUM_IO_TIC_CLEAR_2_FIFO1_READ_REG0_TIC_CLEAR_2_RISING_FIFO1_READ_EMPTY_RISING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_2_FIFO1_READ_REG0_TIC_CLEAR_2_RISING_FIFO1_READ_THRESHOLD_1_RISING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_2_FIFO1_READ_REG0_TIC_CLEAR_2_RISING_FIFO1_READ_THRESHOLD_2_RISING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_2_FIFO1_READ_REG0_TIC_CLEAR_2_RISING_FIFO1_READ_THRESHOLD_3_RISING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_2_FIFO1_READ_REG0_TIC_CLEAR_2_RISING_FIFO1_READ_FULL_RISING (0x00000004u)

#define BITP_IO_TIC_CLEAR_2_FIFO1_READ_REG0_TIC_CLEAR_2_FALLING                (8u)
#define BITL_IO_TIC_CLEAR_2_FIFO1_READ_REG0_TIC_CLEAR_2_FALLING                (5u)
#define BITM_IO_TIC_CLEAR_2_FIFO1_READ_REG0_TIC_CLEAR_2_FALLING                (0x00001F00u)
#define ENUM_IO_TIC_CLEAR_2_FIFO1_READ_REG0_TIC_CLEAR_2_FALLING_FIFO1_READ_EMPTY_FALLING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_2_FIFO1_READ_REG0_TIC_CLEAR_2_FALLING_FIFO1_READ_THRESHOLD_1_FALLING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_2_FIFO1_READ_REG0_TIC_CLEAR_2_FALLING_FIFO1_READ_THRESHOLD_2_FALLING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_2_FIFO1_READ_REG0_TIC_CLEAR_2_FALLING_FIFO1_READ_THRESHOLD_3_FALLING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_2_FIFO1_READ_REG0_TIC_CLEAR_2_FALLING_FIFO1_READ_FULL_FALLING (0x00000004u)

/* Register Name        : TIC_CLEAR_2_FIFO1_READ_REG1
 * Register Addr        : 0xC995u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_2_FIFO1_READ_REG1_ADDR                                    (0xC995u)
#define IO_TIC_CLEAR_2_FIFO1_READ_REG1_RESET_VAL                               (0x00000000u)
#define IO_TIC_CLEAR_2_FIFO1_READ_REG1_MMS                                     (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_CLEAR_2_HIGH         | Interrupts clear FIFO1_READ. The  | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_CLEAR_2_LOW          | Interrupts clear FIFO1_READ. The  | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_2_FIFO1_READ_REG1_TIC_CLEAR_2_HIGH                   (0u)
#define BITL_IO_TIC_CLEAR_2_FIFO1_READ_REG1_TIC_CLEAR_2_HIGH                   (5u)
#define BITM_IO_TIC_CLEAR_2_FIFO1_READ_REG1_TIC_CLEAR_2_HIGH                   (0x0000001Fu)
#define ENUM_IO_TIC_CLEAR_2_FIFO1_READ_REG1_TIC_CLEAR_2_HIGH_FIFO1_READ_EMPTY_HIGH (0x00000000u)
#define ENUM_IO_TIC_CLEAR_2_FIFO1_READ_REG1_TIC_CLEAR_2_HIGH_FIFO1_READ_THRESHOLD_1_HIGH (0x00000001u)
#define ENUM_IO_TIC_CLEAR_2_FIFO1_READ_REG1_TIC_CLEAR_2_HIGH_FIFO1_READ_THRESHOLD_2_HIGH (0x00000002u)
#define ENUM_IO_TIC_CLEAR_2_FIFO1_READ_REG1_TIC_CLEAR_2_HIGH_FIFO1_READ_THRESHOLD_3_HIGH (0x00000003u)
#define ENUM_IO_TIC_CLEAR_2_FIFO1_READ_REG1_TIC_CLEAR_2_HIGH_FIFO1_READ_FULL_HIGH (0x00000004u)

#define BITP_IO_TIC_CLEAR_2_FIFO1_READ_REG1_TIC_CLEAR_2_LOW                    (8u)
#define BITL_IO_TIC_CLEAR_2_FIFO1_READ_REG1_TIC_CLEAR_2_LOW                    (5u)
#define BITM_IO_TIC_CLEAR_2_FIFO1_READ_REG1_TIC_CLEAR_2_LOW                    (0x00001F00u)
#define ENUM_IO_TIC_CLEAR_2_FIFO1_READ_REG1_TIC_CLEAR_2_LOW_FIFO1_READ_EMPTY_LOW (0x00000000u)
#define ENUM_IO_TIC_CLEAR_2_FIFO1_READ_REG1_TIC_CLEAR_2_LOW_FIFO1_READ_THRESHOLD_1_LOW (0x00000001u)
#define ENUM_IO_TIC_CLEAR_2_FIFO1_READ_REG1_TIC_CLEAR_2_LOW_FIFO1_READ_THRESHOLD_2_LOW (0x00000002u)
#define ENUM_IO_TIC_CLEAR_2_FIFO1_READ_REG1_TIC_CLEAR_2_LOW_FIFO1_READ_THRESHOLD_3_LOW (0x00000003u)
#define ENUM_IO_TIC_CLEAR_2_FIFO1_READ_REG1_TIC_CLEAR_2_LOW_FIFO1_READ_FULL_LOW (0x00000004u)

/* Register Name        : TIC_CLEAR_3_FIFO1_WRITE_REG0
 * Register Addr        : 0xC996u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_3_FIFO1_WRITE_REG0_ADDR                                   (0xC996u)
#define IO_TIC_CLEAR_3_FIFO1_WRITE_REG0_RESET_VAL                              (0x00000000u)
#define IO_TIC_CLEAR_3_FIFO1_WRITE_REG0_MMS                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_CLEAR_3_RISING       | Interrupts clear FIFO1_WRITE.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_CLEAR_3_FALLING      | Interrupts clear FIFO1_WRITE.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_3_FIFO1_WRITE_REG0_TIC_CLEAR_3_RISING                (0u)
#define BITL_IO_TIC_CLEAR_3_FIFO1_WRITE_REG0_TIC_CLEAR_3_RISING                (5u)
#define BITM_IO_TIC_CLEAR_3_FIFO1_WRITE_REG0_TIC_CLEAR_3_RISING                (0x0000001Fu)
#define ENUM_IO_TIC_CLEAR_3_FIFO1_WRITE_REG0_TIC_CLEAR_3_RISING_FIFO1_WRITE_EMPTY_RISING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_3_FIFO1_WRITE_REG0_TIC_CLEAR_3_RISING_FIFO1_WRITE_THRESHOLD_1_RISING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_3_FIFO1_WRITE_REG0_TIC_CLEAR_3_RISING_FIFO1_WRITE_THRESHOLD_2_RISING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_3_FIFO1_WRITE_REG0_TIC_CLEAR_3_RISING_FIFO1_WRITE_THRESHOLD_3_RISING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_3_FIFO1_WRITE_REG0_TIC_CLEAR_3_RISING_FIFO1_WRITE_FULL_RISING (0x00000004u)

#define BITP_IO_TIC_CLEAR_3_FIFO1_WRITE_REG0_TIC_CLEAR_3_FALLING               (8u)
#define BITL_IO_TIC_CLEAR_3_FIFO1_WRITE_REG0_TIC_CLEAR_3_FALLING               (5u)
#define BITM_IO_TIC_CLEAR_3_FIFO1_WRITE_REG0_TIC_CLEAR_3_FALLING               (0x00001F00u)
#define ENUM_IO_TIC_CLEAR_3_FIFO1_WRITE_REG0_TIC_CLEAR_3_FALLING_FIFO1_WRITE_EMPTY_FALLING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_3_FIFO1_WRITE_REG0_TIC_CLEAR_3_FALLING_FIFO1_WRITE_THRESHOLD_1_FALLING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_3_FIFO1_WRITE_REG0_TIC_CLEAR_3_FALLING_FIFO1_WRITE_THRESHOLD_2_FALLING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_3_FIFO1_WRITE_REG0_TIC_CLEAR_3_FALLING_FIFO1_WRITE_THRESHOLD_3_FALLING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_3_FIFO1_WRITE_REG0_TIC_CLEAR_3_FALLING_FIFO1_WRITE_FULL_FALLING (0x00000004u)

/* Register Name        : TIC_CLEAR_3_FIFO1_WRITE_REG1
 * Register Addr        : 0xC997u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_3_FIFO1_WRITE_REG1_ADDR                                   (0xC997u)
#define IO_TIC_CLEAR_3_FIFO1_WRITE_REG1_RESET_VAL                              (0x00000000u)
#define IO_TIC_CLEAR_3_FIFO1_WRITE_REG1_MMS                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_CLEAR_3_HIGH         | Interrupts clear FIFO1_WRITE.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_CLEAR_3_LOW          | Interrupts clear FIFO1_WRITE.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_3_FIFO1_WRITE_REG1_TIC_CLEAR_3_HIGH                  (0u)
#define BITL_IO_TIC_CLEAR_3_FIFO1_WRITE_REG1_TIC_CLEAR_3_HIGH                  (5u)
#define BITM_IO_TIC_CLEAR_3_FIFO1_WRITE_REG1_TIC_CLEAR_3_HIGH                  (0x0000001Fu)
#define ENUM_IO_TIC_CLEAR_3_FIFO1_WRITE_REG1_TIC_CLEAR_3_HIGH_FIFO1_WRITE_EMPTY_HIGH (0x00000000u)
#define ENUM_IO_TIC_CLEAR_3_FIFO1_WRITE_REG1_TIC_CLEAR_3_HIGH_FIFO1_WRITE_THRESHOLD_1_HIGH (0x00000001u)
#define ENUM_IO_TIC_CLEAR_3_FIFO1_WRITE_REG1_TIC_CLEAR_3_HIGH_FIFO1_WRITE_THRESHOLD_2_HIGH (0x00000002u)
#define ENUM_IO_TIC_CLEAR_3_FIFO1_WRITE_REG1_TIC_CLEAR_3_HIGH_FIFO1_WRITE_THRESHOLD_3_HIGH (0x00000003u)
#define ENUM_IO_TIC_CLEAR_3_FIFO1_WRITE_REG1_TIC_CLEAR_3_HIGH_FIFO1_WRITE_FULL_HIGH (0x00000004u)

#define BITP_IO_TIC_CLEAR_3_FIFO1_WRITE_REG1_TIC_CLEAR_3_LOW                   (8u)
#define BITL_IO_TIC_CLEAR_3_FIFO1_WRITE_REG1_TIC_CLEAR_3_LOW                   (5u)
#define BITM_IO_TIC_CLEAR_3_FIFO1_WRITE_REG1_TIC_CLEAR_3_LOW                   (0x00001F00u)
#define ENUM_IO_TIC_CLEAR_3_FIFO1_WRITE_REG1_TIC_CLEAR_3_LOW_FIFO1_WRITE_EMPTY_LOW (0x00000000u)
#define ENUM_IO_TIC_CLEAR_3_FIFO1_WRITE_REG1_TIC_CLEAR_3_LOW_FIFO1_WRITE_THRESHOLD_1_LOW (0x00000001u)
#define ENUM_IO_TIC_CLEAR_3_FIFO1_WRITE_REG1_TIC_CLEAR_3_LOW_FIFO1_WRITE_THRESHOLD_2_LOW (0x00000002u)
#define ENUM_IO_TIC_CLEAR_3_FIFO1_WRITE_REG1_TIC_CLEAR_3_LOW_FIFO1_WRITE_THRESHOLD_3_LOW (0x00000003u)
#define ENUM_IO_TIC_CLEAR_3_FIFO1_WRITE_REG1_TIC_CLEAR_3_LOW_FIFO1_WRITE_FULL_LOW (0x00000004u)

/* Register Name        : TIC_CLEAR_4_FIFO2_READ_REG0
 * Register Addr        : 0xC998u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_4_FIFO2_READ_REG0_ADDR                                    (0xC998u)
#define IO_TIC_CLEAR_4_FIFO2_READ_REG0_RESET_VAL                               (0x00000000u)
#define IO_TIC_CLEAR_4_FIFO2_READ_REG0_MMS                                     (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_CLEAR_4_RISING       | Interrupts clear FIFO2_READ. The  | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_CLEAR_4_FALLING      | Interrupts clear FIFO2_READ. The  | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_4_FIFO2_READ_REG0_TIC_CLEAR_4_RISING                 (0u)
#define BITL_IO_TIC_CLEAR_4_FIFO2_READ_REG0_TIC_CLEAR_4_RISING                 (5u)
#define BITM_IO_TIC_CLEAR_4_FIFO2_READ_REG0_TIC_CLEAR_4_RISING                 (0x0000001Fu)
#define ENUM_IO_TIC_CLEAR_4_FIFO2_READ_REG0_TIC_CLEAR_4_RISING_FIFO2_READ_EMPTY_RISING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_4_FIFO2_READ_REG0_TIC_CLEAR_4_RISING_FIFO2_READ_THRESHOLD_1_RISING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_4_FIFO2_READ_REG0_TIC_CLEAR_4_RISING_FIFO2_READ_THRESHOLD_2_RISING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_4_FIFO2_READ_REG0_TIC_CLEAR_4_RISING_FIFO2_READ_THRESHOLD_3_RISING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_4_FIFO2_READ_REG0_TIC_CLEAR_4_RISING_FIFO2_READ_FULL_RISING (0x00000004u)

#define BITP_IO_TIC_CLEAR_4_FIFO2_READ_REG0_TIC_CLEAR_4_FALLING                (8u)
#define BITL_IO_TIC_CLEAR_4_FIFO2_READ_REG0_TIC_CLEAR_4_FALLING                (5u)
#define BITM_IO_TIC_CLEAR_4_FIFO2_READ_REG0_TIC_CLEAR_4_FALLING                (0x00001F00u)
#define ENUM_IO_TIC_CLEAR_4_FIFO2_READ_REG0_TIC_CLEAR_4_FALLING_FIFO2_READ_EMPTY_FALLING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_4_FIFO2_READ_REG0_TIC_CLEAR_4_FALLING_FIFO2_READ_THRESHOLD_1_FALLING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_4_FIFO2_READ_REG0_TIC_CLEAR_4_FALLING_FIFO2_READ_THRESHOLD_2_FALLING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_4_FIFO2_READ_REG0_TIC_CLEAR_4_FALLING_FIFO2_READ_THRESHOLD_3_FALLING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_4_FIFO2_READ_REG0_TIC_CLEAR_4_FALLING_FIFO2_READ_FULL_FALLING (0x00000004u)

/* Register Name        : TIC_CLEAR_4_FIFO2_READ_REG1
 * Register Addr        : 0xC999u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_4_FIFO2_READ_REG1_ADDR                                    (0xC999u)
#define IO_TIC_CLEAR_4_FIFO2_READ_REG1_RESET_VAL                               (0x00000000u)
#define IO_TIC_CLEAR_4_FIFO2_READ_REG1_MMS                                     (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_CLEAR_4_HIGH         | Interrupts clear FIFO2_READ. The  | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_CLEAR_4_LOW          | Interrupts clear FIFO2_READ. The  | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_4_FIFO2_READ_REG1_TIC_CLEAR_4_HIGH                   (0u)
#define BITL_IO_TIC_CLEAR_4_FIFO2_READ_REG1_TIC_CLEAR_4_HIGH                   (5u)
#define BITM_IO_TIC_CLEAR_4_FIFO2_READ_REG1_TIC_CLEAR_4_HIGH                   (0x0000001Fu)
#define ENUM_IO_TIC_CLEAR_4_FIFO2_READ_REG1_TIC_CLEAR_4_HIGH_FIFO2_READ_EMPTY_HIGH (0x00000000u)
#define ENUM_IO_TIC_CLEAR_4_FIFO2_READ_REG1_TIC_CLEAR_4_HIGH_FIFO2_READ_THRESHOLD_1_HIGH (0x00000001u)
#define ENUM_IO_TIC_CLEAR_4_FIFO2_READ_REG1_TIC_CLEAR_4_HIGH_FIFO2_READ_THRESHOLD_2_HIGH (0x00000002u)
#define ENUM_IO_TIC_CLEAR_4_FIFO2_READ_REG1_TIC_CLEAR_4_HIGH_FIFO2_READ_THRESHOLD_3_HIGH (0x00000003u)
#define ENUM_IO_TIC_CLEAR_4_FIFO2_READ_REG1_TIC_CLEAR_4_HIGH_FIFO2_READ_FULL_HIGH (0x00000004u)

#define BITP_IO_TIC_CLEAR_4_FIFO2_READ_REG1_TIC_CLEAR_4_LOW                    (8u)
#define BITL_IO_TIC_CLEAR_4_FIFO2_READ_REG1_TIC_CLEAR_4_LOW                    (5u)
#define BITM_IO_TIC_CLEAR_4_FIFO2_READ_REG1_TIC_CLEAR_4_LOW                    (0x00001F00u)
#define ENUM_IO_TIC_CLEAR_4_FIFO2_READ_REG1_TIC_CLEAR_4_LOW_FIFO2_READ_EMPTY_LOW (0x00000000u)
#define ENUM_IO_TIC_CLEAR_4_FIFO2_READ_REG1_TIC_CLEAR_4_LOW_FIFO2_READ_THRESHOLD_1_LOW (0x00000001u)
#define ENUM_IO_TIC_CLEAR_4_FIFO2_READ_REG1_TIC_CLEAR_4_LOW_FIFO2_READ_THRESHOLD_2_LOW (0x00000002u)
#define ENUM_IO_TIC_CLEAR_4_FIFO2_READ_REG1_TIC_CLEAR_4_LOW_FIFO2_READ_THRESHOLD_3_LOW (0x00000003u)
#define ENUM_IO_TIC_CLEAR_4_FIFO2_READ_REG1_TIC_CLEAR_4_LOW_FIFO2_READ_FULL_LOW (0x00000004u)

/* Register Name        : TIC_CLEAR_5_FIFO2_WRITE_REG0
 * Register Addr        : 0xC99Au
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_5_FIFO2_WRITE_REG0_ADDR                                   (0xC99Au)
#define IO_TIC_CLEAR_5_FIFO2_WRITE_REG0_RESET_VAL                              (0x00000000u)
#define IO_TIC_CLEAR_5_FIFO2_WRITE_REG0_MMS                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_CLEAR_5_RISING       | Interrupts clear FIFO2_WRITE.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_CLEAR_5_FALLING      | Interrupts clear FIFO2_WRITE.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_5_FIFO2_WRITE_REG0_TIC_CLEAR_5_RISING                (0u)
#define BITL_IO_TIC_CLEAR_5_FIFO2_WRITE_REG0_TIC_CLEAR_5_RISING                (5u)
#define BITM_IO_TIC_CLEAR_5_FIFO2_WRITE_REG0_TIC_CLEAR_5_RISING                (0x0000001Fu)
#define ENUM_IO_TIC_CLEAR_5_FIFO2_WRITE_REG0_TIC_CLEAR_5_RISING_FIFO2_WRITE_EMPTY_RISING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_5_FIFO2_WRITE_REG0_TIC_CLEAR_5_RISING_FIFO2_WRITE_THRESHOLD_1_RISING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_5_FIFO2_WRITE_REG0_TIC_CLEAR_5_RISING_FIFO2_WRITE_THRESHOLD_2_RISING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_5_FIFO2_WRITE_REG0_TIC_CLEAR_5_RISING_FIFO2_WRITE_THRESHOLD_3_RISING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_5_FIFO2_WRITE_REG0_TIC_CLEAR_5_RISING_FIFO2_WRITE_FULL_RISING (0x00000004u)

#define BITP_IO_TIC_CLEAR_5_FIFO2_WRITE_REG0_TIC_CLEAR_5_FALLING               (8u)
#define BITL_IO_TIC_CLEAR_5_FIFO2_WRITE_REG0_TIC_CLEAR_5_FALLING               (5u)
#define BITM_IO_TIC_CLEAR_5_FIFO2_WRITE_REG0_TIC_CLEAR_5_FALLING               (0x00001F00u)
#define ENUM_IO_TIC_CLEAR_5_FIFO2_WRITE_REG0_TIC_CLEAR_5_FALLING_FIFO2_WRITE_EMPTY_FALLING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_5_FIFO2_WRITE_REG0_TIC_CLEAR_5_FALLING_FIFO2_WRITE_THRESHOLD_1_FALLING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_5_FIFO2_WRITE_REG0_TIC_CLEAR_5_FALLING_FIFO2_WRITE_THRESHOLD_2_FALLING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_5_FIFO2_WRITE_REG0_TIC_CLEAR_5_FALLING_FIFO2_WRITE_THRESHOLD_3_FALLING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_5_FIFO2_WRITE_REG0_TIC_CLEAR_5_FALLING_FIFO2_WRITE_FULL_FALLING (0x00000004u)

/* Register Name        : TIC_CLEAR_5_FIFO2_WRITE_REG1
 * Register Addr        : 0xC99Bu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_5_FIFO2_WRITE_REG1_ADDR                                   (0xC99Bu)
#define IO_TIC_CLEAR_5_FIFO2_WRITE_REG1_RESET_VAL                              (0x00000000u)
#define IO_TIC_CLEAR_5_FIFO2_WRITE_REG1_MMS                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_CLEAR_5_HIGH         | Interrupts clear FIFO2_WRITE.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_CLEAR_5_LOW          | Interrupts clear FIFO2_WRITE.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_5_FIFO2_WRITE_REG1_TIC_CLEAR_5_HIGH                  (0u)
#define BITL_IO_TIC_CLEAR_5_FIFO2_WRITE_REG1_TIC_CLEAR_5_HIGH                  (5u)
#define BITM_IO_TIC_CLEAR_5_FIFO2_WRITE_REG1_TIC_CLEAR_5_HIGH                  (0x0000001Fu)
#define ENUM_IO_TIC_CLEAR_5_FIFO2_WRITE_REG1_TIC_CLEAR_5_HIGH_FIFO2_WRITE_EMPTY_HIGH (0x00000000u)
#define ENUM_IO_TIC_CLEAR_5_FIFO2_WRITE_REG1_TIC_CLEAR_5_HIGH_FIFO2_WRITE_THRESHOLD_1_HIGH (0x00000001u)
#define ENUM_IO_TIC_CLEAR_5_FIFO2_WRITE_REG1_TIC_CLEAR_5_HIGH_FIFO2_WRITE_THRESHOLD_2_HIGH (0x00000002u)
#define ENUM_IO_TIC_CLEAR_5_FIFO2_WRITE_REG1_TIC_CLEAR_5_HIGH_FIFO2_WRITE_THRESHOLD_3_HIGH (0x00000003u)
#define ENUM_IO_TIC_CLEAR_5_FIFO2_WRITE_REG1_TIC_CLEAR_5_HIGH_FIFO2_WRITE_FULL_HIGH (0x00000004u)

#define BITP_IO_TIC_CLEAR_5_FIFO2_WRITE_REG1_TIC_CLEAR_5_LOW                   (8u)
#define BITL_IO_TIC_CLEAR_5_FIFO2_WRITE_REG1_TIC_CLEAR_5_LOW                   (5u)
#define BITM_IO_TIC_CLEAR_5_FIFO2_WRITE_REG1_TIC_CLEAR_5_LOW                   (0x00001F00u)
#define ENUM_IO_TIC_CLEAR_5_FIFO2_WRITE_REG1_TIC_CLEAR_5_LOW_FIFO2_WRITE_EMPTY_LOW (0x00000000u)
#define ENUM_IO_TIC_CLEAR_5_FIFO2_WRITE_REG1_TIC_CLEAR_5_LOW_FIFO2_WRITE_THRESHOLD_1_LOW (0x00000001u)
#define ENUM_IO_TIC_CLEAR_5_FIFO2_WRITE_REG1_TIC_CLEAR_5_LOW_FIFO2_WRITE_THRESHOLD_2_LOW (0x00000002u)
#define ENUM_IO_TIC_CLEAR_5_FIFO2_WRITE_REG1_TIC_CLEAR_5_LOW_FIFO2_WRITE_THRESHOLD_3_LOW (0x00000003u)
#define ENUM_IO_TIC_CLEAR_5_FIFO2_WRITE_REG1_TIC_CLEAR_5_LOW_FIFO2_WRITE_FULL_LOW (0x00000004u)

/* Register Name        : TIC_CLEAR_6_FIFO3_READ_REG0
 * Register Addr        : 0xC99Cu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_6_FIFO3_READ_REG0_ADDR                                    (0xC99Cu)
#define IO_TIC_CLEAR_6_FIFO3_READ_REG0_RESET_VAL                               (0x00000000u)
#define IO_TIC_CLEAR_6_FIFO3_READ_REG0_MMS                                     (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_CLEAR_6_RISING       | Interrupts clear FIFO3_READ. The  | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_CLEAR_6_FALLING      | Interrupts clear FIFO3_READ. The  | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_6_FIFO3_READ_REG0_TIC_CLEAR_6_RISING                 (0u)
#define BITL_IO_TIC_CLEAR_6_FIFO3_READ_REG0_TIC_CLEAR_6_RISING                 (5u)
#define BITM_IO_TIC_CLEAR_6_FIFO3_READ_REG0_TIC_CLEAR_6_RISING                 (0x0000001Fu)
#define ENUM_IO_TIC_CLEAR_6_FIFO3_READ_REG0_TIC_CLEAR_6_RISING_FIFO3_READ_EMPTY_RISING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_6_FIFO3_READ_REG0_TIC_CLEAR_6_RISING_FIFO3_READ_THRESHOLD_1_RISING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_6_FIFO3_READ_REG0_TIC_CLEAR_6_RISING_FIFO3_READ_THRESHOLD_2_RISING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_6_FIFO3_READ_REG0_TIC_CLEAR_6_RISING_FIFO3_READ_THRESHOLD_3_RISING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_6_FIFO3_READ_REG0_TIC_CLEAR_6_RISING_FIFO3_READ_FULL_RISING (0x00000004u)

#define BITP_IO_TIC_CLEAR_6_FIFO3_READ_REG0_TIC_CLEAR_6_FALLING                (8u)
#define BITL_IO_TIC_CLEAR_6_FIFO3_READ_REG0_TIC_CLEAR_6_FALLING                (5u)
#define BITM_IO_TIC_CLEAR_6_FIFO3_READ_REG0_TIC_CLEAR_6_FALLING                (0x00001F00u)
#define ENUM_IO_TIC_CLEAR_6_FIFO3_READ_REG0_TIC_CLEAR_6_FALLING_FIFO3_READ_EMPTY_FALLING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_6_FIFO3_READ_REG0_TIC_CLEAR_6_FALLING_FIFO3_READ_THRESHOLD_1_FALLING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_6_FIFO3_READ_REG0_TIC_CLEAR_6_FALLING_FIFO3_READ_THRESHOLD_2_FALLING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_6_FIFO3_READ_REG0_TIC_CLEAR_6_FALLING_FIFO3_READ_THRESHOLD_3_FALLING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_6_FIFO3_READ_REG0_TIC_CLEAR_6_FALLING_FIFO3_READ_FULL_FALLING (0x00000004u)

/* Register Name        : TIC_CLEAR_6_FIFO3_READ_REG1
 * Register Addr        : 0xC99Du
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_6_FIFO3_READ_REG1_ADDR                                    (0xC99Du)
#define IO_TIC_CLEAR_6_FIFO3_READ_REG1_RESET_VAL                               (0x00000000u)
#define IO_TIC_CLEAR_6_FIFO3_READ_REG1_MMS                                     (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_CLEAR_6_HIGH         | Interrupts clear FIFO3_READ. The  | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_CLEAR_6_LOW          | Interrupts clear FIFO3_READ. The  | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_6_FIFO3_READ_REG1_TIC_CLEAR_6_HIGH                   (0u)
#define BITL_IO_TIC_CLEAR_6_FIFO3_READ_REG1_TIC_CLEAR_6_HIGH                   (5u)
#define BITM_IO_TIC_CLEAR_6_FIFO3_READ_REG1_TIC_CLEAR_6_HIGH                   (0x0000001Fu)
#define ENUM_IO_TIC_CLEAR_6_FIFO3_READ_REG1_TIC_CLEAR_6_HIGH_FIFO3_READ_EMPTY_HIGH (0x00000000u)
#define ENUM_IO_TIC_CLEAR_6_FIFO3_READ_REG1_TIC_CLEAR_6_HIGH_FIFO3_READ_THRESHOLD_1_HIGH (0x00000001u)
#define ENUM_IO_TIC_CLEAR_6_FIFO3_READ_REG1_TIC_CLEAR_6_HIGH_FIFO3_READ_THRESHOLD_2_HIGH (0x00000002u)
#define ENUM_IO_TIC_CLEAR_6_FIFO3_READ_REG1_TIC_CLEAR_6_HIGH_FIFO3_READ_THRESHOLD_3_HIGH (0x00000003u)
#define ENUM_IO_TIC_CLEAR_6_FIFO3_READ_REG1_TIC_CLEAR_6_HIGH_FIFO3_READ_FULL_HIGH (0x00000004u)

#define BITP_IO_TIC_CLEAR_6_FIFO3_READ_REG1_TIC_CLEAR_6_LOW                    (8u)
#define BITL_IO_TIC_CLEAR_6_FIFO3_READ_REG1_TIC_CLEAR_6_LOW                    (5u)
#define BITM_IO_TIC_CLEAR_6_FIFO3_READ_REG1_TIC_CLEAR_6_LOW                    (0x00001F00u)
#define ENUM_IO_TIC_CLEAR_6_FIFO3_READ_REG1_TIC_CLEAR_6_LOW_FIFO3_READ_EMPTY_LOW (0x00000000u)
#define ENUM_IO_TIC_CLEAR_6_FIFO3_READ_REG1_TIC_CLEAR_6_LOW_FIFO3_READ_THRESHOLD_1_LOW (0x00000001u)
#define ENUM_IO_TIC_CLEAR_6_FIFO3_READ_REG1_TIC_CLEAR_6_LOW_FIFO3_READ_THRESHOLD_2_LOW (0x00000002u)
#define ENUM_IO_TIC_CLEAR_6_FIFO3_READ_REG1_TIC_CLEAR_6_LOW_FIFO3_READ_THRESHOLD_3_LOW (0x00000003u)
#define ENUM_IO_TIC_CLEAR_6_FIFO3_READ_REG1_TIC_CLEAR_6_LOW_FIFO3_READ_FULL_LOW (0x00000004u)

/* Register Name        : TIC_CLEAR_7_FIFO3_WRITE_REG0
 * Register Addr        : 0xC99Eu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_7_FIFO3_WRITE_REG0_ADDR                                   (0xC99Eu)
#define IO_TIC_CLEAR_7_FIFO3_WRITE_REG0_RESET_VAL                              (0x00000000u)
#define IO_TIC_CLEAR_7_FIFO3_WRITE_REG0_MMS                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_CLEAR_7_RISING       | Interrupts clear FIFO3_WRITE.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_CLEAR_7_FALLING      | Interrupts clear FIFO3_WRITE.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_7_FIFO3_WRITE_REG0_TIC_CLEAR_7_RISING                (0u)
#define BITL_IO_TIC_CLEAR_7_FIFO3_WRITE_REG0_TIC_CLEAR_7_RISING                (5u)
#define BITM_IO_TIC_CLEAR_7_FIFO3_WRITE_REG0_TIC_CLEAR_7_RISING                (0x0000001Fu)
#define ENUM_IO_TIC_CLEAR_7_FIFO3_WRITE_REG0_TIC_CLEAR_7_RISING_FIFO3_WRITE_EMPTY_RISING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_7_FIFO3_WRITE_REG0_TIC_CLEAR_7_RISING_FIFO3_WRITE_THRESHOLD_1_RISING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_7_FIFO3_WRITE_REG0_TIC_CLEAR_7_RISING_FIFO3_WRITE_THRESHOLD_2_RISING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_7_FIFO3_WRITE_REG0_TIC_CLEAR_7_RISING_FIFO3_WRITE_THRESHOLD_3_RISING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_7_FIFO3_WRITE_REG0_TIC_CLEAR_7_RISING_FIFO3_WRITE_FULL_RISING (0x00000004u)

#define BITP_IO_TIC_CLEAR_7_FIFO3_WRITE_REG0_TIC_CLEAR_7_FALLING               (8u)
#define BITL_IO_TIC_CLEAR_7_FIFO3_WRITE_REG0_TIC_CLEAR_7_FALLING               (5u)
#define BITM_IO_TIC_CLEAR_7_FIFO3_WRITE_REG0_TIC_CLEAR_7_FALLING               (0x00001F00u)
#define ENUM_IO_TIC_CLEAR_7_FIFO3_WRITE_REG0_TIC_CLEAR_7_FALLING_FIFO3_WRITE_EMPTY_FALLING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_7_FIFO3_WRITE_REG0_TIC_CLEAR_7_FALLING_FIFO3_WRITE_THRESHOLD_1_FALLING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_7_FIFO3_WRITE_REG0_TIC_CLEAR_7_FALLING_FIFO3_WRITE_THRESHOLD_2_FALLING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_7_FIFO3_WRITE_REG0_TIC_CLEAR_7_FALLING_FIFO3_WRITE_THRESHOLD_3_FALLING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_7_FIFO3_WRITE_REG0_TIC_CLEAR_7_FALLING_FIFO3_WRITE_FULL_FALLING (0x00000004u)

/* Register Name        : TIC_CLEAR_7_FIFO1_WRITE_REG1
 * Register Addr        : 0xC99Fu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_7_FIFO1_WRITE_REG1_ADDR                                   (0xC99Fu)
#define IO_TIC_CLEAR_7_FIFO1_WRITE_REG1_RESET_VAL                              (0x00000000u)
#define IO_TIC_CLEAR_7_FIFO1_WRITE_REG1_MMS                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_CLEAR_7_HIGH         | Interrupts clear FIFO3_WRITE.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_CLEAR_7_LOW          | Interrupts clear FIFO3_WRITE.     | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_7_FIFO1_WRITE_REG1_TIC_CLEAR_7_HIGH                  (0u)
#define BITL_IO_TIC_CLEAR_7_FIFO1_WRITE_REG1_TIC_CLEAR_7_HIGH                  (5u)
#define BITM_IO_TIC_CLEAR_7_FIFO1_WRITE_REG1_TIC_CLEAR_7_HIGH                  (0x0000001Fu)
#define ENUM_IO_TIC_CLEAR_7_FIFO1_WRITE_REG1_TIC_CLEAR_7_HIGH_FIFO3_WRITE_EMPTY_HIGH (0x00000000u)
#define ENUM_IO_TIC_CLEAR_7_FIFO1_WRITE_REG1_TIC_CLEAR_7_HIGH_FIFO3_WRITE_THRESHOLD_1_HIGH (0x00000001u)
#define ENUM_IO_TIC_CLEAR_7_FIFO1_WRITE_REG1_TIC_CLEAR_7_HIGH_FIFO3_WRITE_THRESHOLD_2_HIGH (0x00000002u)
#define ENUM_IO_TIC_CLEAR_7_FIFO1_WRITE_REG1_TIC_CLEAR_7_HIGH_FIFO3_WRITE_THRESHOLD_3_HIGH (0x00000003u)
#define ENUM_IO_TIC_CLEAR_7_FIFO1_WRITE_REG1_TIC_CLEAR_7_HIGH_FIFO3_WRITE_FULL_HIGH (0x00000004u)

#define BITP_IO_TIC_CLEAR_7_FIFO1_WRITE_REG1_TIC_CLEAR_7_LOW                   (8u)
#define BITL_IO_TIC_CLEAR_7_FIFO1_WRITE_REG1_TIC_CLEAR_7_LOW                   (5u)
#define BITM_IO_TIC_CLEAR_7_FIFO1_WRITE_REG1_TIC_CLEAR_7_LOW                   (0x00001F00u)
#define ENUM_IO_TIC_CLEAR_7_FIFO1_WRITE_REG1_TIC_CLEAR_7_LOW_FIFO3_WRITE_EMPTY_LOW (0x00000000u)
#define ENUM_IO_TIC_CLEAR_7_FIFO1_WRITE_REG1_TIC_CLEAR_7_LOW_FIFO3_WRITE_THRESHOLD_1_LOW (0x00000001u)
#define ENUM_IO_TIC_CLEAR_7_FIFO1_WRITE_REG1_TIC_CLEAR_7_LOW_FIFO3_WRITE_THRESHOLD_2_LOW (0x00000002u)
#define ENUM_IO_TIC_CLEAR_7_FIFO1_WRITE_REG1_TIC_CLEAR_7_LOW_FIFO3_WRITE_THRESHOLD_3_LOW (0x00000003u)
#define ENUM_IO_TIC_CLEAR_7_FIFO1_WRITE_REG1_TIC_CLEAR_7_LOW_FIFO3_WRITE_FULL_LOW (0x00000004u)

/* Register Name        : TIC_CLEAR_8_PHY_REG0
 * Register Addr        : 0xC9A0u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_8_PHY_REG0_ADDR                                           (0xC9A0u)
#define IO_TIC_CLEAR_8_PHY_REG0_RESET_VAL                                      (0x00000000u)
#define IO_TIC_CLEAR_8_PHY_REG0_MMS                                            (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_CLEAR_8              | Interrupts clear PHY. The         | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_8_PHY_REG0_TIC_CLEAR_8                               (0u)
#define BITL_IO_TIC_CLEAR_8_PHY_REG0_TIC_CLEAR_8                               (16u)
#define BITM_IO_TIC_CLEAR_8_PHY_REG0_TIC_CLEAR_8                               (0x0000FFFFu)
#define ENUM_IO_TIC_CLEAR_8_PHY_REG0_TIC_CLEAR_8_PHY_PLCA_STATUS_RISING        (0x00000002u)
#define ENUM_IO_TIC_CLEAR_8_PHY_REG0_TIC_CLEAR_8_PHY_PLCA_STATUS_LOW           (0x0000000Au)
#define ENUM_IO_TIC_CLEAR_8_PHY_REG0_TIC_CLEAR_8_PHY_PLCA_STATUS_HIGH          (0x00000012u)
#define ENUM_IO_TIC_CLEAR_8_PHY_REG0_TIC_CLEAR_8_PHY_PLCA_STATUS_FALLING       (0x0000001Au)
#define ENUM_IO_TIC_CLEAR_8_PHY_REG0_TIC_CLEAR_8_PHY_PLCA_RECOVER_RISING       (0x00000003u)
#define ENUM_IO_TIC_CLEAR_8_PHY_REG0_TIC_CLEAR_8_PHY_PLCA_RECOVER_LOW          (0x0000000Bu)
#define ENUM_IO_TIC_CLEAR_8_PHY_REG0_TIC_CLEAR_8_PHY_PLCA_RECOVER_HIGH         (0x00000013u)
#define ENUM_IO_TIC_CLEAR_8_PHY_REG0_TIC_CLEAR_8_PHY_PLCA_RECOVER_FALLING      (0x0000001Bu)

/* Register Name        : TIC_CLEAR_8_PHY_REG1
 * Register Addr        : 0xC9A1u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_8_PHY_REG1_ADDR                                           (0xC9A1u)
#define IO_TIC_CLEAR_8_PHY_REG1_RESET_VAL                                      (0x00000000u)
#define IO_TIC_CLEAR_8_PHY_REG1_MMS                                            (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_CLEAR_8              | Interrupts clear PHY. The         | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_8_PHY_REG1_TIC_CLEAR_8                               (0u)
#define BITL_IO_TIC_CLEAR_8_PHY_REG1_TIC_CLEAR_8                               (16u)
#define BITM_IO_TIC_CLEAR_8_PHY_REG1_TIC_CLEAR_8                               (0x0000FFFFu)
#define ENUM_IO_TIC_CLEAR_8_PHY_REG1_TIC_CLEAR_8_PHY_PLCA_STATUS_RISING        (0x00000002u)
#define ENUM_IO_TIC_CLEAR_8_PHY_REG1_TIC_CLEAR_8_PHY_PLCA_STATUS_LOW           (0x0000000Au)
#define ENUM_IO_TIC_CLEAR_8_PHY_REG1_TIC_CLEAR_8_PHY_PLCA_STATUS_HIGH          (0x00000012u)
#define ENUM_IO_TIC_CLEAR_8_PHY_REG1_TIC_CLEAR_8_PHY_PLCA_STATUS_FALLING       (0x0000001Au)
#define ENUM_IO_TIC_CLEAR_8_PHY_REG1_TIC_CLEAR_8_PHY_PLCA_RECOVER_RISING       (0x00000003u)
#define ENUM_IO_TIC_CLEAR_8_PHY_REG1_TIC_CLEAR_8_PHY_PLCA_RECOVER_LOW          (0x0000000Bu)
#define ENUM_IO_TIC_CLEAR_8_PHY_REG1_TIC_CLEAR_8_PHY_PLCA_RECOVER_HIGH         (0x00000013u)
#define ENUM_IO_TIC_CLEAR_8_PHY_REG1_TIC_CLEAR_8_PHY_PLCA_RECOVER_FALLING      (0x0000001Bu)

/* Register Name        : TIC_CLEAR_9_MAC_REG0
 * Register Addr        : 0xC9A2u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_9_MAC_REG0_ADDR                                           (0xC9A2u)
#define IO_TIC_CLEAR_9_MAC_REG0_RESET_VAL                                      (0x00000000u)
#define IO_TIC_CLEAR_9_MAC_REG0_MMS                                            (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_CLEAR_9_RISING       | Interrupts clear MAC. The         | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_CLEAR_9_FALLING      | Interrupts clear MAC. The         | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_9_MAC_REG0_TIC_CLEAR_9_RISING                        (0u)
#define BITL_IO_TIC_CLEAR_9_MAC_REG0_TIC_CLEAR_9_RISING                        (5u)
#define BITM_IO_TIC_CLEAR_9_MAC_REG0_TIC_CLEAR_9_RISING                        (0x0000001Fu)
#define ENUM_IO_TIC_CLEAR_9_MAC_REG0_TIC_CLEAR_9_RISING_MAC_RX_FRAME_DROP_FULL_RISING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_9_MAC_REG0_TIC_CLEAR_9_RISING_MAC_RX_PHY_ERROR_RISING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_9_MAC_REG0_TIC_CLEAR_9_RISING_MAC_RX_ERROR_CRC_RISING (0x00000004u)

#define BITP_IO_TIC_CLEAR_9_MAC_REG0_TIC_CLEAR_9_FALLING                       (8u)
#define BITL_IO_TIC_CLEAR_9_MAC_REG0_TIC_CLEAR_9_FALLING                       (5u)
#define BITM_IO_TIC_CLEAR_9_MAC_REG0_TIC_CLEAR_9_FALLING                       (0x00001F00u)
#define ENUM_IO_TIC_CLEAR_9_MAC_REG0_TIC_CLEAR_9_FALLING_MAC_RX_FRAME_DROP_FULL_FALLING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_9_MAC_REG0_TIC_CLEAR_9_FALLING_MAC_RX_PHY_ERROR_FALLING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_9_MAC_REG0_TIC_CLEAR_9_FALLING_MAC_RX_ERROR_CRC_FALLING (0x00000004u)

/* Register Name        : TIC_CLEAR_9_MAC_REG1
 * Register Addr        : 0xC9A3u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_9_MAC_REG1_ADDR                                           (0xC9A3u)
#define IO_TIC_CLEAR_9_MAC_REG1_RESET_VAL                                      (0x00000000u)
#define IO_TIC_CLEAR_9_MAC_REG1_MMS                                            (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_CLEAR_9_HIGH         | Interrupts clear MAC. The         | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_CLEAR_9_LOW          | Interrupts clear MAC. The         | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_9_MAC_REG1_TIC_CLEAR_9_HIGH                          (0u)
#define BITL_IO_TIC_CLEAR_9_MAC_REG1_TIC_CLEAR_9_HIGH                          (5u)
#define BITM_IO_TIC_CLEAR_9_MAC_REG1_TIC_CLEAR_9_HIGH                          (0x0000001Fu)
#define ENUM_IO_TIC_CLEAR_9_MAC_REG1_TIC_CLEAR_9_HIGH_MAC_RX_FRAME_DROP_FULL_HIGH (0x00000000u)
#define ENUM_IO_TIC_CLEAR_9_MAC_REG1_TIC_CLEAR_9_HIGH_MAC_RX_PHY_ERROR_HIGH    (0x00000001u)
#define ENUM_IO_TIC_CLEAR_9_MAC_REG1_TIC_CLEAR_9_HIGH_MAC_RX_ERROR_CRC_HIGH    (0x00000004u)

#define BITP_IO_TIC_CLEAR_9_MAC_REG1_TIC_CLEAR_9_LOW                           (8u)
#define BITL_IO_TIC_CLEAR_9_MAC_REG1_TIC_CLEAR_9_LOW                           (5u)
#define BITM_IO_TIC_CLEAR_9_MAC_REG1_TIC_CLEAR_9_LOW                           (0x00001F00u)
#define ENUM_IO_TIC_CLEAR_9_MAC_REG1_TIC_CLEAR_9_LOW_MAC_RX_FRAME_DROP_FULL_LOW (0x00000000u)
#define ENUM_IO_TIC_CLEAR_9_MAC_REG1_TIC_CLEAR_9_LOW_MAC_RX_PHY_ERROR_LOW      (0x00000001u)
#define ENUM_IO_TIC_CLEAR_9_MAC_REG1_TIC_CLEAR_9_LOW_MAC_RX_ERROR_CRC_LOW      (0x00000004u)

/* Register Name        : TIC_CLEAR_10_REG0
 * Register Addr        : 0xC9A4u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_10_REG0_ADDR                                              (0xC9A4u)
#define IO_TIC_CLEAR_10_REG0_RESET_VAL                                         (0x00000000u)
#define IO_TIC_CLEAR_10_REG0_MMS                                               (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 02-00 | TIC_CLEAR_10_RISING      | Interrupts clear                  | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 10-08 | TIC_CLEAR_10_FALLING     | Interrupts clear                  | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_10_REG0_TIC_CLEAR_10_RISING                          (0u)
#define BITL_IO_TIC_CLEAR_10_REG0_TIC_CLEAR_10_RISING                          (3u)
#define BITM_IO_TIC_CLEAR_10_REG0_TIC_CLEAR_10_RISING                          (0x00000007u)
#define ENUM_IO_TIC_CLEAR_10_REG0_TIC_CLEAR_10_RISING_PLCA_DIAG_RISING         (0x00000000u)

#define BITP_IO_TIC_CLEAR_10_REG0_TIC_CLEAR_10_FALLING                         (8u)
#define BITL_IO_TIC_CLEAR_10_REG0_TIC_CLEAR_10_FALLING                         (3u)
#define BITM_IO_TIC_CLEAR_10_REG0_TIC_CLEAR_10_FALLING                         (0x00000700u)
#define ENUM_IO_TIC_CLEAR_10_REG0_TIC_CLEAR_10_FALLING_PLCA_DIAG_FALLING       (0x00000000u)

/* Register Name        : TIC_CLEAR_11_SPI0_REG0
 * Register Addr        : 0xC9A6u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_11_SPI0_REG0_ADDR                                         (0xC9A6u)
#define IO_TIC_CLEAR_11_SPI0_REG0_RESET_VAL                                    (0x00000000u)
#define IO_TIC_CLEAR_11_SPI0_REG0_MMS                                          (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | TIC_CLEAR_11_RISING      | Interrupts clear SPI0. The        | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 8     | TIC_CLEAR_11_FALLING     | Interrupts clear SPI0. The        | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_11_SPI0_REG0_TIC_CLEAR_11_RISING                     (0u)
#define BITL_IO_TIC_CLEAR_11_SPI0_REG0_TIC_CLEAR_11_RISING                     (1u)
#define BITM_IO_TIC_CLEAR_11_SPI0_REG0_TIC_CLEAR_11_RISING                     (0x01u)
#define ENUM_IO_TIC_CLEAR_11_SPI0_REG0_TIC_CLEAR_11_RISING_SPI0_BB_RISING      (0x00000000u)

#define BITP_IO_TIC_CLEAR_11_SPI0_REG0_TIC_CLEAR_11_FALLING                    (8u)
#define BITL_IO_TIC_CLEAR_11_SPI0_REG0_TIC_CLEAR_11_FALLING                    (1u)
#define BITM_IO_TIC_CLEAR_11_SPI0_REG0_TIC_CLEAR_11_FALLING                    (0x0100u)
#define ENUM_IO_TIC_CLEAR_11_SPI0_REG0_TIC_CLEAR_11_FALLING_SPI0_BB_FALLING    (0x00000000u)

/* Register Name        : TIC_CLEAR_12_ISELED0_REG0
 * Register Addr        : 0xC9A8u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_12_ISELED0_REG0_ADDR                                      (0xC9A8u)
#define IO_TIC_CLEAR_12_ISELED0_REG0_RESET_VAL                                 (0x00000000u)
#define IO_TIC_CLEAR_12_ISELED0_REG0_MMS                                       (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 06-00 | TIC_CLEAR_12_RISING      | Interrupts clear ISELED0. The     | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14-08 | TIC_CLEAR_12_FALLING     | Interrupts clear ISELED0. The     | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_12_ISELED0_REG0_TIC_CLEAR_12_RISING                  (0u)
#define BITL_IO_TIC_CLEAR_12_ISELED0_REG0_TIC_CLEAR_12_RISING                  (7u)
#define BITM_IO_TIC_CLEAR_12_ISELED0_REG0_TIC_CLEAR_12_RISING                  (0x0000007Fu)
#define ENUM_IO_TIC_CLEAR_12_ISELED0_REG0_TIC_CLEAR_12_RISING_ISELED0_CONTENTION_RISING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_12_ISELED0_REG0_TIC_CLEAR_12_RISING_ISELED0_ERROR_EOC_RISING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_12_ISELED0_REG0_TIC_CLEAR_12_RISING_ISELED0_ERROR_FRAME_CRC_RISING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_12_ISELED0_REG0_TIC_CLEAR_12_RISING_ISELED0_ERROR_FRAME_FREQ_RISING (0x00000004u)
#define ENUM_IO_TIC_CLEAR_12_ISELED0_REG0_TIC_CLEAR_12_RISING_ISELED0_ERROR_FRAME_SYNC_RISING (0x00000005u)
#define ENUM_IO_TIC_CLEAR_12_ISELED0_REG0_TIC_CLEAR_12_RISING_ISELED0_ERROR_FRAME_5B4B_ERROR_RISING (0x00000006u)

#define BITP_IO_TIC_CLEAR_12_ISELED0_REG0_TIC_CLEAR_12_FALLING                 (8u)
#define BITL_IO_TIC_CLEAR_12_ISELED0_REG0_TIC_CLEAR_12_FALLING                 (7u)
#define BITM_IO_TIC_CLEAR_12_ISELED0_REG0_TIC_CLEAR_12_FALLING                 (0x00007F00u)
#define ENUM_IO_TIC_CLEAR_12_ISELED0_REG0_TIC_CLEAR_12_FALLING_ISELED0_CONTENTION_FALLING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_12_ISELED0_REG0_TIC_CLEAR_12_FALLING_ISELED0_ERROR_EOC_FALLING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_12_ISELED0_REG0_TIC_CLEAR_12_FALLING_ISELED0_ERROR_FRAME_CRC_FALLING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_12_ISELED0_REG0_TIC_CLEAR_12_FALLING_ISELED0_ERROR_FRAME_FREQ_FALLING (0x00000004u)
#define ENUM_IO_TIC_CLEAR_12_ISELED0_REG0_TIC_CLEAR_12_FALLING_ISELED0_ERROR_FRAME_SYNC_FALLING (0x00000005u)
#define ENUM_IO_TIC_CLEAR_12_ISELED0_REG0_TIC_CLEAR_12_FALLING_ISELED0_ERROR_FRAME_5B4B_ERROR_FALLING (0x00000006u)

/* Register Name        : TIC_CLEAR_13_ISELED1_REG0
 * Register Addr        : 0xC9AAu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_13_ISELED1_REG0_ADDR                                      (0xC9AAu)
#define IO_TIC_CLEAR_13_ISELED1_REG0_RESET_VAL                                 (0x00000000u)
#define IO_TIC_CLEAR_13_ISELED1_REG0_MMS                                       (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 06-00 | TIC_CLEAR_13_RISING      | Interrupts clear ISELED1. The     | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14-08 | TIC_CLEAR_13_FALLING     | Interrupts clear ISELED1. The     | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_13_ISELED1_REG0_TIC_CLEAR_13_RISING                  (0u)
#define BITL_IO_TIC_CLEAR_13_ISELED1_REG0_TIC_CLEAR_13_RISING                  (7u)
#define BITM_IO_TIC_CLEAR_13_ISELED1_REG0_TIC_CLEAR_13_RISING                  (0x0000007Fu)
#define ENUM_IO_TIC_CLEAR_13_ISELED1_REG0_TIC_CLEAR_13_RISING_ISELED1_CONTENTION_RISING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_13_ISELED1_REG0_TIC_CLEAR_13_RISING_ISELED1_ERROR_EOC_RISING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_13_ISELED1_REG0_TIC_CLEAR_13_RISING_ISELED1_ERROR_FRAME_CRC_RISING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_13_ISELED1_REG0_TIC_CLEAR_13_RISING_ISELED1_ERROR_FRAME_FREQ_RISING (0x00000004u)
#define ENUM_IO_TIC_CLEAR_13_ISELED1_REG0_TIC_CLEAR_13_RISING_ISELED1_ERROR_FRAME_SYNC_RISING (0x00000005u)
#define ENUM_IO_TIC_CLEAR_13_ISELED1_REG0_TIC_CLEAR_13_RISING_ISELED1_ERROR_FRAME_5B4B_ERROR_RISING (0x00000006u)

#define BITP_IO_TIC_CLEAR_13_ISELED1_REG0_TIC_CLEAR_13_FALLING                 (8u)
#define BITL_IO_TIC_CLEAR_13_ISELED1_REG0_TIC_CLEAR_13_FALLING                 (7u)
#define BITM_IO_TIC_CLEAR_13_ISELED1_REG0_TIC_CLEAR_13_FALLING                 (0x00007F00u)
#define ENUM_IO_TIC_CLEAR_13_ISELED1_REG0_TIC_CLEAR_13_FALLING_ISELED1_CONTENTION_FALLING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_13_ISELED1_REG0_TIC_CLEAR_13_FALLING_ISELED1_ERROR_EOC_FALLING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_13_ISELED1_REG0_TIC_CLEAR_13_FALLING_ISELED1_ERROR_FRAME_CRC_FALLING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_13_ISELED1_REG0_TIC_CLEAR_13_FALLING_ISELED1_ERROR_FRAME_FREQ_FALLING (0x00000004u)
#define ENUM_IO_TIC_CLEAR_13_ISELED1_REG0_TIC_CLEAR_13_FALLING_ISELED1_ERROR_FRAME_SYNC_FALLING (0x00000005u)
#define ENUM_IO_TIC_CLEAR_13_ISELED1_REG0_TIC_CLEAR_13_FALLING_ISELED1_ERROR_FRAME_5B4B_ERROR_FALLING (0x00000006u)

/* Register Name        : TIC_CLEAR_14_ISELED2_REG0
 * Register Addr        : 0xC9ACu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_14_ISELED2_REG0_ADDR                                      (0xC9ACu)
#define IO_TIC_CLEAR_14_ISELED2_REG0_RESET_VAL                                 (0x00000000u)
#define IO_TIC_CLEAR_14_ISELED2_REG0_MMS                                       (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 06-00 | TIC_CLEAR_14_RISING      | Interrupts clear ISELED2. The     | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14-08 | TIC_CLEAR_14_FALLING     | Interrupts clear ISELED2. The     | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_14_ISELED2_REG0_TIC_CLEAR_14_RISING                  (0u)
#define BITL_IO_TIC_CLEAR_14_ISELED2_REG0_TIC_CLEAR_14_RISING                  (7u)
#define BITM_IO_TIC_CLEAR_14_ISELED2_REG0_TIC_CLEAR_14_RISING                  (0x0000007Fu)
#define ENUM_IO_TIC_CLEAR_14_ISELED2_REG0_TIC_CLEAR_14_RISING_ISELED2_CONTENTION_RISING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_14_ISELED2_REG0_TIC_CLEAR_14_RISING_ISELED2_ERROR_EOC_RISING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_14_ISELED2_REG0_TIC_CLEAR_14_RISING_ISELED2_ERROR_FRAME_CRC_RISING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_14_ISELED2_REG0_TIC_CLEAR_14_RISING_ISELED2_ERROR_FRAME_FREQ_RISING (0x00000004u)
#define ENUM_IO_TIC_CLEAR_14_ISELED2_REG0_TIC_CLEAR_14_RISING_ISELED2_ERROR_FRAME_SYNC_RISING (0x00000005u)
#define ENUM_IO_TIC_CLEAR_14_ISELED2_REG0_TIC_CLEAR_14_RISING_ISELED2_ERROR_FRAME_5B4B_ERROR_RISING (0x00000006u)

#define BITP_IO_TIC_CLEAR_14_ISELED2_REG0_TIC_CLEAR_14_FALLING                 (8u)
#define BITL_IO_TIC_CLEAR_14_ISELED2_REG0_TIC_CLEAR_14_FALLING                 (7u)
#define BITM_IO_TIC_CLEAR_14_ISELED2_REG0_TIC_CLEAR_14_FALLING                 (0x00007F00u)
#define ENUM_IO_TIC_CLEAR_14_ISELED2_REG0_TIC_CLEAR_14_FALLING_ISELED2_CONTENTION_FALLING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_14_ISELED2_REG0_TIC_CLEAR_14_FALLING_ISELED2_ERROR_EOC_FALLING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_14_ISELED2_REG0_TIC_CLEAR_14_FALLING_ISELED2_ERROR_FRAME_CRC_FALLING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_14_ISELED2_REG0_TIC_CLEAR_14_FALLING_ISELED2_ERROR_FRAME_FREQ_FALLING (0x00000004u)
#define ENUM_IO_TIC_CLEAR_14_ISELED2_REG0_TIC_CLEAR_14_FALLING_ISELED2_ERROR_FRAME_SYNC_FALLING (0x00000005u)
#define ENUM_IO_TIC_CLEAR_14_ISELED2_REG0_TIC_CLEAR_14_FALLING_ISELED2_ERROR_FRAME_5B4B_ERROR_FALLING (0x00000006u)

/* Register Name        : TIC_CLEAR_15_ISELED3_REG0
 * Register Addr        : 0xC9AEu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_15_ISELED3_REG0_ADDR                                      (0xC9AEu)
#define IO_TIC_CLEAR_15_ISELED3_REG0_RESET_VAL                                 (0x00000000u)
#define IO_TIC_CLEAR_15_ISELED3_REG0_MMS                                       (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 06-00 | TIC_CLEAR_15_RISING      | Interrupts clear ISELED3. The     | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14-08 | TIC_CLEAR_15_FALLING     | Interrupts clear ISELED3. The     | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_15_ISELED3_REG0_TIC_CLEAR_15_RISING                  (0u)
#define BITL_IO_TIC_CLEAR_15_ISELED3_REG0_TIC_CLEAR_15_RISING                  (7u)
#define BITM_IO_TIC_CLEAR_15_ISELED3_REG0_TIC_CLEAR_15_RISING                  (0x0000007Fu)
#define ENUM_IO_TIC_CLEAR_15_ISELED3_REG0_TIC_CLEAR_15_RISING_ISELED3_CONTENTION_RISING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_15_ISELED3_REG0_TIC_CLEAR_15_RISING_ISELED3_ERROR_EOC_RISING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_15_ISELED3_REG0_TIC_CLEAR_15_RISING_ISELED3_ERROR_FRAME_CRC_RISING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_15_ISELED3_REG0_TIC_CLEAR_15_RISING_ISELED3_ERROR_FRAME_FREQ_RISING (0x00000004u)
#define ENUM_IO_TIC_CLEAR_15_ISELED3_REG0_TIC_CLEAR_15_RISING_ISELED3_ERROR_FRAME_SYNC_RISING (0x00000005u)
#define ENUM_IO_TIC_CLEAR_15_ISELED3_REG0_TIC_CLEAR_15_RISING_ISELED3_ERROR_FRAME_5B4B_ERROR_RISING (0x00000006u)

#define BITP_IO_TIC_CLEAR_15_ISELED3_REG0_TIC_CLEAR_15_FALLING                 (8u)
#define BITL_IO_TIC_CLEAR_15_ISELED3_REG0_TIC_CLEAR_15_FALLING                 (7u)
#define BITM_IO_TIC_CLEAR_15_ISELED3_REG0_TIC_CLEAR_15_FALLING                 (0x00007F00u)
#define ENUM_IO_TIC_CLEAR_15_ISELED3_REG0_TIC_CLEAR_15_FALLING_ISELED3_CONTENTION_FALLING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_15_ISELED3_REG0_TIC_CLEAR_15_FALLING_ISELED3_ERROR_EOC_FALLING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_15_ISELED3_REG0_TIC_CLEAR_15_FALLING_ISELED3_ERROR_FRAME_CRC_FALLING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_15_ISELED3_REG0_TIC_CLEAR_15_FALLING_ISELED3_ERROR_FRAME_FREQ_FALLING (0x00000004u)
#define ENUM_IO_TIC_CLEAR_15_ISELED3_REG0_TIC_CLEAR_15_FALLING_ISELED3_ERROR_FRAME_SYNC_FALLING (0x00000005u)
#define ENUM_IO_TIC_CLEAR_15_ISELED3_REG0_TIC_CLEAR_15_FALLING_ISELED3_ERROR_FRAME_5B4B_ERROR_FALLING (0x00000006u)

/* Register Name        : TIC_CLEAR_16_PORT_CTRL_REG0
 * Register Addr        : 0xC9B0u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_16_PORT_CTRL_REG0_ADDR                                    (0xC9B0u)
#define IO_TIC_CLEAR_16_PORT_CTRL_REG0_RESET_VAL                               (0x00000000u)
#define IO_TIC_CLEAR_16_PORT_CTRL_REG0_MMS                                     (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_CLEAR_16             | Interrupts clear PORT_CTRL. The   | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16                       (0u)
#define BITL_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16                       (16u)
#define BITM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16                       (0x0000FFFFu)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_0_RISING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_1_RISING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_2_RISING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_3_RISING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_4_RISING (0x00000004u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_5_RISING (0x00000005u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_6_RISING (0x00000006u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_7_RISING (0x00000007u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_0_FALLING (0x00000008u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_1_FALLING (0x00000009u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_2_FALLING (0x0000000Au)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_3_FALLING (0x0000000Bu)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_4_FALLING (0x0000000Cu)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_5_FALLING (0x0000000Du)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_6_FALLING (0x0000000Eu)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_7_FALLING (0x0000000Fu)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_0_HIGH (0x00000010u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_1_HIGH (0x00000011u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_2_HIGH (0x00000012u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_3_HIGH (0x00000013u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_4_HIGH (0x00000014u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_5_HIGH (0x00000015u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_6_HIGH (0x00000016u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_7_HIGH (0x00000017u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_0_LOW (0x00000018u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_1_LOW (0x00000019u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_2_LOW (0x0000001Au)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_3_LOW (0x0000001Bu)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_4_LOW (0x0000001Cu)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_5_LOW (0x0000001Du)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_6_LOW (0x0000001Eu)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG0_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_7_LOW (0x0000001Fu)

/* Register Name        : TIC_CLEAR_16_PORT_CTRL_REG1
 * Register Addr        : 0xC9B1u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_16_PORT_CTRL_REG1_ADDR                                    (0xC9B1u)
#define IO_TIC_CLEAR_16_PORT_CTRL_REG1_RESET_VAL                               (0x00000000u)
#define IO_TIC_CLEAR_16_PORT_CTRL_REG1_MMS                                     (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_CLEAR_16             | Interrupts clear PORT_CTRL. The   | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16                       (0u)
#define BITL_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16                       (16u)
#define BITM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16                       (0x0000FFFFu)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_0_RISING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_1_RISING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_2_RISING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_3_RISING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_4_RISING (0x00000004u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_5_RISING (0x00000005u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_6_RISING (0x00000006u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_7_RISING (0x00000007u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_0_FALLING (0x00000008u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_1_FALLING (0x00000009u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_2_FALLING (0x0000000Au)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_3_FALLING (0x0000000Bu)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_4_FALLING (0x0000000Cu)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_5_FALLING (0x0000000Du)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_6_FALLING (0x0000000Eu)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_7_FALLING (0x0000000Fu)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_0_HIGH (0x00000010u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_1_HIGH (0x00000011u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_2_HIGH (0x00000012u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_3_HIGH (0x00000013u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_4_HIGH (0x00000014u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_5_HIGH (0x00000015u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_6_HIGH (0x00000016u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_7_HIGH (0x00000017u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_0_LOW (0x00000018u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_1_LOW (0x00000019u)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_2_LOW (0x0000001Au)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_3_LOW (0x0000001Bu)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_4_LOW (0x0000001Cu)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_5_LOW (0x0000001Du)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_6_LOW (0x0000001Eu)
#define ENUM_IO_TIC_CLEAR_16_PORT_CTRL_REG1_TIC_CLEAR_16_PORT_CTRL_ACTIVE_OUTPUT_7_LOW (0x0000001Fu)

/* Register Name        : TIC_CLEAR_17_PORT_CTRL_REG0
 * Register Addr        : 0xC9B2u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_17_PORT_CTRL_REG0_ADDR                                    (0xC9B2u)
#define IO_TIC_CLEAR_17_PORT_CTRL_REG0_RESET_VAL                               (0x00000000u)
#define IO_TIC_CLEAR_17_PORT_CTRL_REG0_MMS                                     (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 03-00 | TIC_CLEAR_17_RISING      | Interrupts clear PORT_CTRL. The   | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11-08 | TIC_CLEAR_17_FALLING     | Interrupts clear PORT_CTRL. The   | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_17_PORT_CTRL_REG0_TIC_CLEAR_17_RISING                (0u)
#define BITL_IO_TIC_CLEAR_17_PORT_CTRL_REG0_TIC_CLEAR_17_RISING                (4u)
#define BITM_IO_TIC_CLEAR_17_PORT_CTRL_REG0_TIC_CLEAR_17_RISING                (0x0000000Fu)
#define ENUM_IO_TIC_CLEAR_17_PORT_CTRL_REG0_TIC_CLEAR_17_RISING_PORT_CTRL_ACTIVE_OUTPUT_8_RISING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_17_PORT_CTRL_REG0_TIC_CLEAR_17_RISING_PORT_CTRL_ACTIVE_OUTPUT_9_RISING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_17_PORT_CTRL_REG0_TIC_CLEAR_17_RISING_PORT_CTRL_ACTIVE_OUTPUT_10_RISING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_17_PORT_CTRL_REG0_TIC_CLEAR_17_RISING_PORT_CTRL_ACTIVE_OUTPUT_11_RISING (0x00000003u)

#define BITP_IO_TIC_CLEAR_17_PORT_CTRL_REG0_TIC_CLEAR_17_FALLING               (8u)
#define BITL_IO_TIC_CLEAR_17_PORT_CTRL_REG0_TIC_CLEAR_17_FALLING               (4u)
#define BITM_IO_TIC_CLEAR_17_PORT_CTRL_REG0_TIC_CLEAR_17_FALLING               (0x00000F00u)
#define ENUM_IO_TIC_CLEAR_17_PORT_CTRL_REG0_TIC_CLEAR_17_FALLING_PORT_CTRL_ACTIVE_OUTPUT_8_FALLING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_17_PORT_CTRL_REG0_TIC_CLEAR_17_FALLING_PORT_CTRL_ACTIVE_OUTPUT_9_FALLING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_17_PORT_CTRL_REG0_TIC_CLEAR_17_FALLING_PORT_CTRL_ACTIVE_OUTPUT_10_FALLING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_17_PORT_CTRL_REG0_TIC_CLEAR_17_FALLING_PORT_CTRL_ACTIVE_OUTPUT_11_FALLING (0x00000003u)

/* Register Name        : TIC_CLEAR_17_PORT_CTRL_REG1
 * Register Addr        : 0xC9B3u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_17_PORT_CTRL_REG1_ADDR                                    (0xC9B3u)
#define IO_TIC_CLEAR_17_PORT_CTRL_REG1_RESET_VAL                               (0x00000000u)
#define IO_TIC_CLEAR_17_PORT_CTRL_REG1_MMS                                     (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 03-00 | TIC_CLEAR_17_HIGH        | Interrupts clear PORT_CTRL. The   | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11-08 | TIC_CLEAR_17_LOW         | Interrupts clear PORT_CTRL. The   | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_17_PORT_CTRL_REG1_TIC_CLEAR_17_HIGH                  (0u)
#define BITL_IO_TIC_CLEAR_17_PORT_CTRL_REG1_TIC_CLEAR_17_HIGH                  (4u)
#define BITM_IO_TIC_CLEAR_17_PORT_CTRL_REG1_TIC_CLEAR_17_HIGH                  (0x0000000Fu)
#define ENUM_IO_TIC_CLEAR_17_PORT_CTRL_REG1_TIC_CLEAR_17_HIGH_PORT_CTRL_ACTIVE_OUTPUT_8_HIGH (0x00000000u)
#define ENUM_IO_TIC_CLEAR_17_PORT_CTRL_REG1_TIC_CLEAR_17_HIGH_PORT_CTRL_ACTIVE_OUTPUT_9_HIGH (0x00000001u)
#define ENUM_IO_TIC_CLEAR_17_PORT_CTRL_REG1_TIC_CLEAR_17_HIGH_PORT_CTRL_ACTIVE_OUTPUT_10_HIGH (0x00000002u)
#define ENUM_IO_TIC_CLEAR_17_PORT_CTRL_REG1_TIC_CLEAR_17_HIGH_PORT_CTRL_ACTIVE_OUTPUT_11_HIGH (0x00000003u)

#define BITP_IO_TIC_CLEAR_17_PORT_CTRL_REG1_TIC_CLEAR_17_LOW                   (8u)
#define BITL_IO_TIC_CLEAR_17_PORT_CTRL_REG1_TIC_CLEAR_17_LOW                   (4u)
#define BITM_IO_TIC_CLEAR_17_PORT_CTRL_REG1_TIC_CLEAR_17_LOW                   (0x00000F00u)
#define ENUM_IO_TIC_CLEAR_17_PORT_CTRL_REG1_TIC_CLEAR_17_LOW_PORT_CTRL_ACTIVE_OUTPUT_8_LOW (0x00000000u)
#define ENUM_IO_TIC_CLEAR_17_PORT_CTRL_REG1_TIC_CLEAR_17_LOW_PORT_CTRL_ACTIVE_OUTPUT_9_LOW (0x00000001u)
#define ENUM_IO_TIC_CLEAR_17_PORT_CTRL_REG1_TIC_CLEAR_17_LOW_PORT_CTRL_ACTIVE_OUTPUT_10_LOW (0x00000002u)
#define ENUM_IO_TIC_CLEAR_17_PORT_CTRL_REG1_TIC_CLEAR_17_LOW_PORT_CTRL_ACTIVE_OUTPUT_11_LOW (0x00000003u)

/* Register Name        : TIC_CLEAR_18_PORT_CTRL_REG0
 * Register Addr        : 0xC9B4u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_18_PORT_CTRL_REG0_ADDR                                    (0xC9B4u)
#define IO_TIC_CLEAR_18_PORT_CTRL_REG0_RESET_VAL                               (0x00000000u)
#define IO_TIC_CLEAR_18_PORT_CTRL_REG0_MMS                                     (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_CLEAR_18             | Interrupts clear PORT_CTRL. The   | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_18_PORT_CTRL_REG0_TIC_CLEAR_18                       (0u)
#define BITL_IO_TIC_CLEAR_18_PORT_CTRL_REG0_TIC_CLEAR_18                       (16u)
#define BITM_IO_TIC_CLEAR_18_PORT_CTRL_REG0_TIC_CLEAR_18                       (0x0000FFFFu)
#define ENUM_IO_TIC_CLEAR_18_PORT_CTRL_REG0_TIC_CLEAR_18_PORT_CTRL_TCH_OUT_OF_RANGE_0_RISING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_18_PORT_CTRL_REG0_TIC_CLEAR_18_PORT_CTRL_TCH_OUT_OF_RANGE_1_RISING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_18_PORT_CTRL_REG0_TIC_CLEAR_18_PORT_CTRL_TCH_OUT_OF_RANGE_2_RISING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_18_PORT_CTRL_REG0_TIC_CLEAR_18_PORT_CTRL_TCH_OUT_OF_RANGE_3_RISING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_18_PORT_CTRL_REG0_TIC_CLEAR_18_PORT_CTRL_TCH_OUT_OF_RANGE_4_RISING (0x00000004u)
#define ENUM_IO_TIC_CLEAR_18_PORT_CTRL_REG0_TIC_CLEAR_18_PORT_CTRL_TCH_OUT_OF_RANGE_5_RISING (0x00000005u)
#define ENUM_IO_TIC_CLEAR_18_PORT_CTRL_REG0_TIC_CLEAR_18_PORT_CTRL_TCH_OUT_OF_RANGE_6_RISING (0x00000006u)
#define ENUM_IO_TIC_CLEAR_18_PORT_CTRL_REG0_TIC_CLEAR_18_PORT_CTRL_TCH_OUT_OF_RANGE_7_RISING (0x00000007u)
#define ENUM_IO_TIC_CLEAR_18_PORT_CTRL_REG0_TIC_CLEAR_18_PORT_CTRL_TCH_OUT_OF_RANGE_0_FALLING (0x00000008u)
#define ENUM_IO_TIC_CLEAR_18_PORT_CTRL_REG0_TIC_CLEAR_18_PORT_CTRL_TCH_OUT_OF_RANGE_1_FALLING (0x00000009u)
#define ENUM_IO_TIC_CLEAR_18_PORT_CTRL_REG0_TIC_CLEAR_18_PORT_CTRL_TCH_OUT_OF_RANGE_2_FALLING (0x0000000Au)
#define ENUM_IO_TIC_CLEAR_18_PORT_CTRL_REG0_TIC_CLEAR_18_PORT_CTRL_TCH_OUT_OF_RANGE_3_FALLING (0x0000000Bu)
#define ENUM_IO_TIC_CLEAR_18_PORT_CTRL_REG0_TIC_CLEAR_18_PORT_CTRL_TCH_OUT_OF_RANGE_4_FALLING (0x0000000Cu)
#define ENUM_IO_TIC_CLEAR_18_PORT_CTRL_REG0_TIC_CLEAR_18_PORT_CTRL_TCH_OUT_OF_RANGE_5_FALLING (0x0000000Du)
#define ENUM_IO_TIC_CLEAR_18_PORT_CTRL_REG0_TIC_CLEAR_18_PORT_CTRL_TCH_OUT_OF_RANGE_6_FALLING (0x0000000Eu)
#define ENUM_IO_TIC_CLEAR_18_PORT_CTRL_REG0_TIC_CLEAR_18_PORT_CTRL_TCH_OUT_OF_RANGE_7_FALLING (0x0000000Fu)

/* Register Name        : TIC_CLEAR_19_PORT_CTRL_REG0
 * Register Addr        : 0xC9B6u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_19_PORT_CTRL_REG0_ADDR                                    (0xC9B6u)
#define IO_TIC_CLEAR_19_PORT_CTRL_REG0_RESET_VAL                               (0x00000000u)
#define IO_TIC_CLEAR_19_PORT_CTRL_REG0_MMS                                     (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 06-00 | TIC_CLEAR_19_RISING      | Interrupts clear PORT_CTRL. The   | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14-08 | TIC_CLEAR_19_FALLING     | Interrupts clear PORT_CTRL. The   | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_19_PORT_CTRL_REG0_TIC_CLEAR_19_RISING                (0u)
#define BITL_IO_TIC_CLEAR_19_PORT_CTRL_REG0_TIC_CLEAR_19_RISING                (7u)
#define BITM_IO_TIC_CLEAR_19_PORT_CTRL_REG0_TIC_CLEAR_19_RISING                (0x0000007Fu)
#define ENUM_IO_TIC_CLEAR_19_PORT_CTRL_REG0_TIC_CLEAR_19_RISING_PORT_CTRL_TCH_OUT_OF_RANGE_8_RISING (0x00000000u)

#define BITP_IO_TIC_CLEAR_19_PORT_CTRL_REG0_TIC_CLEAR_19_FALLING               (8u)
#define BITL_IO_TIC_CLEAR_19_PORT_CTRL_REG0_TIC_CLEAR_19_FALLING               (7u)
#define BITM_IO_TIC_CLEAR_19_PORT_CTRL_REG0_TIC_CLEAR_19_FALLING               (0x00007F00u)
#define ENUM_IO_TIC_CLEAR_19_PORT_CTRL_REG0_TIC_CLEAR_19_FALLING_PORT_CTRL_TCH_OUT_OF_RANGE_8_FALLING (0x00000000u)

/* Register Name        : TIC_CLEAR_20_PORT_CTRL_REG0
 * Register Addr        : 0xC9B8u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_20_PORT_CTRL_REG0_ADDR                                    (0xC9B8u)
#define IO_TIC_CLEAR_20_PORT_CTRL_REG0_RESET_VAL                               (0x00000000u)
#define IO_TIC_CLEAR_20_PORT_CTRL_REG0_MMS                                     (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_CLEAR_20             | Interrupts clear PORT_CTRL. The   | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_20_PORT_CTRL_REG0_TIC_CLEAR_20                       (0u)
#define BITL_IO_TIC_CLEAR_20_PORT_CTRL_REG0_TIC_CLEAR_20                       (16u)
#define BITM_IO_TIC_CLEAR_20_PORT_CTRL_REG0_TIC_CLEAR_20                       (0x0000FFFFu)

/* Register Name        : TIC_CLEAR_21_PORT_CTRL_REG0
 * Register Addr        : 0xC9BAu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_21_PORT_CTRL_REG0_ADDR                                    (0xC9BAu)
#define IO_TIC_CLEAR_21_PORT_CTRL_REG0_RESET_VAL                               (0x00000000u)
#define IO_TIC_CLEAR_21_PORT_CTRL_REG0_MMS                                     (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 04-00 | TIC_CLEAR_21_RISING      | Interrupts clear PORT_CTRL. The   | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-08 | TIC_CLEAR_21_FALLING     | Interrupts clear PORT_CTRL. The   | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_21_PORT_CTRL_REG0_TIC_CLEAR_21_RISING                (0u)
#define BITL_IO_TIC_CLEAR_21_PORT_CTRL_REG0_TIC_CLEAR_21_RISING                (5u)
#define BITM_IO_TIC_CLEAR_21_PORT_CTRL_REG0_TIC_CLEAR_21_RISING                (0x0000001Fu)
#define ENUM_IO_TIC_CLEAR_21_PORT_CTRL_REG0_TIC_CLEAR_21_RISING_PORT_CTRL_TCH_LOCKED_8_RISING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_21_PORT_CTRL_REG0_TIC_CLEAR_21_RISING_PORT_CTRL_TCH_LOCKED_9_RISING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_21_PORT_CTRL_REG0_TIC_CLEAR_21_RISING_PORT_CTRL_TCH_LOCKED_10_RISING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_21_PORT_CTRL_REG0_TIC_CLEAR_21_RISING_PORT_CTRL_TCH_LOCKED_11_RISING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_21_PORT_CTRL_REG0_TIC_CLEAR_21_RISING_PORT_CTRL_TCH_MEAS_CYCLE_END_RISING (0x00000004u)

#define BITP_IO_TIC_CLEAR_21_PORT_CTRL_REG0_TIC_CLEAR_21_FALLING               (8u)
#define BITL_IO_TIC_CLEAR_21_PORT_CTRL_REG0_TIC_CLEAR_21_FALLING               (5u)
#define BITM_IO_TIC_CLEAR_21_PORT_CTRL_REG0_TIC_CLEAR_21_FALLING               (0x00001F00u)
#define ENUM_IO_TIC_CLEAR_21_PORT_CTRL_REG0_TIC_CLEAR_21_FALLING_PORT_CTRL_TCH_LOCKED_8_FALLING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_21_PORT_CTRL_REG0_TIC_CLEAR_21_FALLING_PORT_CTRL_TCH_LOCKED_9_FALLING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_21_PORT_CTRL_REG0_TIC_CLEAR_21_FALLING_PORT_CTRL_TCH_LOCKED_10_FALLING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_21_PORT_CTRL_REG0_TIC_CLEAR_21_FALLING_PORT_CTRL_TCH_LOCKED_11_FALLING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_21_PORT_CTRL_REG0_TIC_CLEAR_21_FALLING_PORT_CTRL_TCH_MEAS_CYCLE_END_FALLING (0x00000004u)

/* Register Name        : TIC_CLEAR_22_LIN0_REG0
 * Register Addr        : 0xC9BCu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_22_LIN0_REG0_ADDR                                         (0xC9BCu)
#define IO_TIC_CLEAR_22_LIN0_REG0_RESET_VAL                                    (0x00000000u)
#define IO_TIC_CLEAR_22_LIN0_REG0_MMS                                          (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_CLEAR_22             | Interrupts clear LIN0. The        | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_22_LIN0_REG0_TIC_CLEAR_22                            (0u)
#define BITL_IO_TIC_CLEAR_22_LIN0_REG0_TIC_CLEAR_22                            (16u)
#define BITM_IO_TIC_CLEAR_22_LIN0_REG0_TIC_CLEAR_22                            (0x0000FFFFu)
#define ENUM_IO_TIC_CLEAR_22_LIN0_REG0_TIC_CLEAR_22_LIN0_EN_RISING             (0x00000000u)
#define ENUM_IO_TIC_CLEAR_22_LIN0_REG0_TIC_CLEAR_22_LIN0_WAKEUP_DETECTED_RISING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_22_LIN0_REG0_TIC_CLEAR_22_LIN0_FRAME_RESPONSE_TOO_SHORT_RISING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_22_LIN0_REG0_TIC_CLEAR_22_LIN0_FRAMING_ERROR_RISING  (0x00000003u)
#define ENUM_IO_TIC_CLEAR_22_LIN0_REG0_TIC_CLEAR_22_LIN0_TX_DATA_CONTENTION_RISING (0x00000004u)
#define ENUM_IO_TIC_CLEAR_22_LIN0_REG0_TIC_CLEAR_22_LIN0_PID_FIELD_CONTENTION_RISING (0x00000005u)
#define ENUM_IO_TIC_CLEAR_22_LIN0_REG0_TIC_CLEAR_22_LIN0_SYNC_FIELD_CONTENTION_RISING (0x00000006u)
#define ENUM_IO_TIC_CLEAR_22_LIN0_REG0_TIC_CLEAR_22_LIN0_BREAK_FIELD_CONTENTION_RISING (0x00000007u)
#define ENUM_IO_TIC_CLEAR_22_LIN0_REG0_TIC_CLEAR_22_LIN0_EN_FALLING            (0x00000008u)
#define ENUM_IO_TIC_CLEAR_22_LIN0_REG0_TIC_CLEAR_22_LIN0_WAKEUP_DETECTED_FALLING (0x00000009u)
#define ENUM_IO_TIC_CLEAR_22_LIN0_REG0_TIC_CLEAR_22_LIN0_FRAME_RESPONSE_TOO_SHORT_FALLING (0x0000000Au)
#define ENUM_IO_TIC_CLEAR_22_LIN0_REG0_TIC_CLEAR_22_LIN0_FRAMING_ERROR_FALLING (0x0000000Bu)
#define ENUM_IO_TIC_CLEAR_22_LIN0_REG0_TIC_CLEAR_22_LIN0_TX_DATA_CONTENTION_FALLING (0x0000000Cu)
#define ENUM_IO_TIC_CLEAR_22_LIN0_REG0_TIC_CLEAR_22_LIN0_PID_FIELD_CONTENTION_FALLING (0x0000000Du)
#define ENUM_IO_TIC_CLEAR_22_LIN0_REG0_TIC_CLEAR_22_LIN0_SYNC_FIELD_CONTENTION_FALLING (0x0000000Eu)
#define ENUM_IO_TIC_CLEAR_22_LIN0_REG0_TIC_CLEAR_22_LIN0_BREAK_FIELD_CONTENTION_FALLING (0x0000000Fu)

/* Register Name        : TIC_CLEAR_23_LIN1_REG0
 * Register Addr        : 0xC9BEu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_23_LIN1_REG0_ADDR                                         (0xC9BEu)
#define IO_TIC_CLEAR_23_LIN1_REG0_RESET_VAL                                    (0x00000000u)
#define IO_TIC_CLEAR_23_LIN1_REG0_MMS                                          (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_CLEAR_23             | Interrupts clear LIN1. The        | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_23_LIN1_REG0_TIC_CLEAR_23                            (0u)
#define BITL_IO_TIC_CLEAR_23_LIN1_REG0_TIC_CLEAR_23                            (16u)
#define BITM_IO_TIC_CLEAR_23_LIN1_REG0_TIC_CLEAR_23                            (0x0000FFFFu)
#define ENUM_IO_TIC_CLEAR_23_LIN1_REG0_TIC_CLEAR_23_LIN1_EN_RISING             (0x00000000u)
#define ENUM_IO_TIC_CLEAR_23_LIN1_REG0_TIC_CLEAR_23_LIN1_WAKEUP_DETECTED_RISING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_23_LIN1_REG0_TIC_CLEAR_23_LIN1_FRAME_RESPONSE_TOO_SHORT_RISING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_23_LIN1_REG0_TIC_CLEAR_23_LIN1_FRAMING_ERROR_RISING  (0x00000003u)
#define ENUM_IO_TIC_CLEAR_23_LIN1_REG0_TIC_CLEAR_23_LIN1_TX_DATA_CONTENTION_RISING (0x00000004u)
#define ENUM_IO_TIC_CLEAR_23_LIN1_REG0_TIC_CLEAR_23_LIN1_PID_FIELD_CONTENTION_RISING (0x00000005u)
#define ENUM_IO_TIC_CLEAR_23_LIN1_REG0_TIC_CLEAR_23_LIN1_SYNC_FIELD_CONTENTION_RISING (0x00000006u)
#define ENUM_IO_TIC_CLEAR_23_LIN1_REG0_TIC_CLEAR_23_LIN1_BREAK_FIELD_CONTENTION_RISING (0x00000007u)
#define ENUM_IO_TIC_CLEAR_23_LIN1_REG0_TIC_CLEAR_23_LIN1_EN_FALLING            (0x00000008u)
#define ENUM_IO_TIC_CLEAR_23_LIN1_REG0_TIC_CLEAR_23_LIN1_WAKEUP_DETECTED_FALLING (0x00000009u)
#define ENUM_IO_TIC_CLEAR_23_LIN1_REG0_TIC_CLEAR_23_LIN1_FRAME_RESPONSE_TOO_SHORT_FALLING (0x0000000Au)
#define ENUM_IO_TIC_CLEAR_23_LIN1_REG0_TIC_CLEAR_23_LIN1_FRAMING_ERROR_FALLING (0x0000000Bu)
#define ENUM_IO_TIC_CLEAR_23_LIN1_REG0_TIC_CLEAR_23_LIN1_TX_DATA_CONTENTION_FALLING (0x0000000Cu)
#define ENUM_IO_TIC_CLEAR_23_LIN1_REG0_TIC_CLEAR_23_LIN1_PID_FIELD_CONTENTION_FALLING (0x0000000Du)
#define ENUM_IO_TIC_CLEAR_23_LIN1_REG0_TIC_CLEAR_23_LIN1_SYNC_FIELD_CONTENTION_FALLING (0x0000000Eu)
#define ENUM_IO_TIC_CLEAR_23_LIN1_REG0_TIC_CLEAR_23_LIN1_BREAK_FIELD_CONTENTION_FALLING (0x0000000Fu)

/* Register Name        : TIC_CLEAR_24_UART0_REG0
 * Register Addr        : 0xC9C0u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_24_UART0_REG0_ADDR                                        (0xC9C0u)
#define IO_TIC_CLEAR_24_UART0_REG0_RESET_VAL                                   (0x00000000u)
#define IO_TIC_CLEAR_24_UART0_REG0_MMS                                         (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 01-00 | TIC_CLEAR_24_RISING      | Interrupts clear UART0. The       | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 09-08 | TIC_CLEAR_24_FALLING     | Interrupts clear UART0. The       | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_24_UART0_REG0_TIC_CLEAR_24_RISING                    (0u)
#define BITL_IO_TIC_CLEAR_24_UART0_REG0_TIC_CLEAR_24_RISING                    (2u)
#define BITM_IO_TIC_CLEAR_24_UART0_REG0_TIC_CLEAR_24_RISING                    (0x00000003u)
#define ENUM_IO_TIC_CLEAR_24_UART0_REG0_TIC_CLEAR_24_RISING_UART0_WORD_TRANSMITTED_RISING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_24_UART0_REG0_TIC_CLEAR_24_RISING_UART0_WORD_RECEIVED_RISING (0x00000001u)

#define BITP_IO_TIC_CLEAR_24_UART0_REG0_TIC_CLEAR_24_FALLING                   (8u)
#define BITL_IO_TIC_CLEAR_24_UART0_REG0_TIC_CLEAR_24_FALLING                   (2u)
#define BITM_IO_TIC_CLEAR_24_UART0_REG0_TIC_CLEAR_24_FALLING                   (0x00000300u)
#define ENUM_IO_TIC_CLEAR_24_UART0_REG0_TIC_CLEAR_24_FALLING_UART0_WORD_TRANSMITTED_FALLING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_24_UART0_REG0_TIC_CLEAR_24_FALLING_UART0_WORD_RECEIVED_FALLING (0x00000001u)

/* Register Name        : TIC_CLEAR_24_UART0_REG1
 * Register Addr        : 0xC9C1u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_24_UART0_REG1_ADDR                                        (0xC9C1u)
#define IO_TIC_CLEAR_24_UART0_REG1_RESET_VAL                                   (0x00000000u)
#define IO_TIC_CLEAR_24_UART0_REG1_MMS                                         (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 01-00 | TIC_CLEAR_24_HIGH        | Interrupts clear UART0. The       | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 09-08 | TIC_CLEAR_24_LOW         | Interrupts clear UART0. The       | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_24_UART0_REG1_TIC_CLEAR_24_HIGH                      (0u)
#define BITL_IO_TIC_CLEAR_24_UART0_REG1_TIC_CLEAR_24_HIGH                      (2u)
#define BITM_IO_TIC_CLEAR_24_UART0_REG1_TIC_CLEAR_24_HIGH                      (0x00000003u)
#define ENUM_IO_TIC_CLEAR_24_UART0_REG1_TIC_CLEAR_24_HIGH_UART0_WORD_TRANSMITTED_HIGH (0x00000000u)
#define ENUM_IO_TIC_CLEAR_24_UART0_REG1_TIC_CLEAR_24_HIGH_UART0_WORD_RECEIVED_HIGH (0x00000001u)

#define BITP_IO_TIC_CLEAR_24_UART0_REG1_TIC_CLEAR_24_LOW                       (8u)
#define BITL_IO_TIC_CLEAR_24_UART0_REG1_TIC_CLEAR_24_LOW                       (2u)
#define BITM_IO_TIC_CLEAR_24_UART0_REG1_TIC_CLEAR_24_LOW                       (0x00000300u)
#define ENUM_IO_TIC_CLEAR_24_UART0_REG1_TIC_CLEAR_24_LOW_UART0_WORD_TRANSMITTED_LOW (0x00000000u)
#define ENUM_IO_TIC_CLEAR_24_UART0_REG1_TIC_CLEAR_24_LOW_UART0_WORD_RECEIVED_LOW (0x00000001u)

/* Register Name        : TIC_CLEAR_25_FLEXIO0_REG0
 * Register Addr        : 0xC9C2u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_25_FLEXIO0_REG0_ADDR                                      (0xC9C2u)
#define IO_TIC_CLEAR_25_FLEXIO0_REG0_RESET_VAL                                 (0x00000000u)
#define IO_TIC_CLEAR_25_FLEXIO0_REG0_MMS                                       (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_CLEAR_25             | Interrupts clear FLEX_IO0. The    | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25                         (0u)
#define BITL_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25                         (16u)
#define BITM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25                         (0x0000FFFFu)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_0_RISING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_1_RISING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_2_RISING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_3_RISING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_4_RISING (0x00000004u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_5_RISING (0x00000005u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_6_RISING (0x00000006u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_7_RISING (0x00000007u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_0_FALLING (0x00000008u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_1_FALLING (0x00000009u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_2_FALLING (0x0000000Au)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_3_FALLING (0x0000000Bu)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_4_FALLING (0x0000000Cu)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_5_FALLING (0x0000000Du)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_6_FALLING (0x0000000Eu)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_7_FALLING (0x0000000Fu)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_0_HIGH (0x00000010u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_1_HIGH (0x00000011u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_2_HIGH (0x00000012u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_3_HIGH (0x00000013u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_4_HIGH (0x00000014u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_5_HIGH (0x00000015u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_6_HIGH (0x00000016u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_7_HIGH (0x00000017u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_0_LOW (0x00000018u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_1_LOW (0x00000019u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_2_LOW (0x0000001Au)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_3_LOW (0x0000001Bu)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_4_LOW (0x0000001Cu)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_5_LOW (0x0000001Du)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_6_LOW (0x0000001Eu)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG0_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_7_LOW (0x0000001Fu)

/* Register Name        : TIC_CLEAR_25_FLEXIO0_REG1
 * Register Addr        : 0xC9C3u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_25_FLEXIO0_REG1_ADDR                                      (0xC9C3u)
#define IO_TIC_CLEAR_25_FLEXIO0_REG1_RESET_VAL                                 (0x00000000u)
#define IO_TIC_CLEAR_25_FLEXIO0_REG1_MMS                                       (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_CLEAR_25             | Interrupts clear FLEX_IO0. The    | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25                         (0u)
#define BITL_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25                         (16u)
#define BITM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25                         (0x0000FFFFu)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_0_RISING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_1_RISING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_2_RISING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_3_RISING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_4_RISING (0x00000004u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_5_RISING (0x00000005u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_6_RISING (0x00000006u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_7_RISING (0x00000007u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_0_FALLING (0x00000008u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_1_FALLING (0x00000009u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_2_FALLING (0x0000000Au)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_3_FALLING (0x0000000Bu)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_4_FALLING (0x0000000Cu)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_5_FALLING (0x0000000Du)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_6_FALLING (0x0000000Eu)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_7_FALLING (0x0000000Fu)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_0_HIGH (0x00000010u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_1_HIGH (0x00000011u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_2_HIGH (0x00000012u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_3_HIGH (0x00000013u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_4_HIGH (0x00000014u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_5_HIGH (0x00000015u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_6_HIGH (0x00000016u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_7_HIGH (0x00000017u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_0_LOW (0x00000018u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_1_LOW (0x00000019u)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_2_LOW (0x0000001Au)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_3_LOW (0x0000001Bu)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_4_LOW (0x0000001Cu)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_5_LOW (0x0000001Du)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_6_LOW (0x0000001Eu)
#define ENUM_IO_TIC_CLEAR_25_FLEXIO0_REG1_TIC_CLEAR_25_FLEX_IO0_CONFIG_INT_7_LOW (0x0000001Fu)

/* Register Name        : TIC_CLEAR_26_FLEXIO1_REG0
 * Register Addr        : 0xC9C4u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_26_FLEXIO1_REG0_ADDR                                      (0xC9C4u)
#define IO_TIC_CLEAR_26_FLEXIO1_REG0_RESET_VAL                                 (0x00000000u)
#define IO_TIC_CLEAR_26_FLEXIO1_REG0_MMS                                       (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_CLEAR_26             | Interrupts clear FLEX_IO1. The    | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26                         (0u)
#define BITL_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26                         (16u)
#define BITM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26                         (0x0000FFFFu)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_0_RISING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_1_RISING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_2_RISING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_3_RISING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_4_RISING (0x00000004u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_5_RISING (0x00000005u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_6_RISING (0x00000006u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_7_RISING (0x00000007u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_0_FALLING (0x00000008u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_1_FALLING (0x00000009u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_2_FALLING (0x0000000Au)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_3_FALLING (0x0000000Bu)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_4_FALLING (0x0000000Cu)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_5_FALLING (0x0000000Du)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_6_FALLING (0x0000000Eu)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_7_FALLING (0x0000000Fu)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_0_HIGH (0x00000010u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_1_HIGH (0x00000011u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_2_HIGH (0x00000012u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_3_HIGH (0x00000013u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_4_HIGH (0x00000014u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_5_HIGH (0x00000015u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_6_HIGH (0x00000016u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_7_HIGH (0x00000017u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_0_LOW (0x00000018u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_1_LOW (0x00000019u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_2_LOW (0x0000001Au)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_3_LOW (0x0000001Bu)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_4_LOW (0x0000001Cu)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_5_LOW (0x0000001Du)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_6_LOW (0x0000001Eu)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG0_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_7_LOW (0x0000001Fu)

/* Register Name        : TIC_CLEAR_26_FLEXIO1_REG1
 * Register Addr        : 0xC9C5u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_26_FLEXIO1_REG1_ADDR                                      (0xC9C5u)
#define IO_TIC_CLEAR_26_FLEXIO1_REG1_RESET_VAL                                 (0x00000000u)
#define IO_TIC_CLEAR_26_FLEXIO1_REG1_MMS                                       (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_CLEAR_26             | Interrupts clear FLEX_IO1. The    | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26                         (0u)
#define BITL_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26                         (16u)
#define BITM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26                         (0x0000FFFFu)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_0_RISING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_1_RISING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_2_RISING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_3_RISING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_4_RISING (0x00000004u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_5_RISING (0x00000005u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_6_RISING (0x00000006u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_7_RISING (0x00000007u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_0_FALLING (0x00000008u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_1_FALLING (0x00000009u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_2_FALLING (0x0000000Au)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_3_FALLING (0x0000000Bu)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_4_FALLING (0x0000000Cu)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_5_FALLING (0x0000000Du)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_6_FALLING (0x0000000Eu)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_7_FALLING (0x0000000Fu)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_0_HIGH (0x00000010u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_1_HIGH (0x00000011u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_2_HIGH (0x00000012u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_3_HIGH (0x00000013u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_4_HIGH (0x00000014u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_5_HIGH (0x00000015u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_6_HIGH (0x00000016u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_7_HIGH (0x00000017u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_0_LOW (0x00000018u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_1_LOW (0x00000019u)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_2_LOW (0x0000001Au)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_3_LOW (0x0000001Bu)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_4_LOW (0x0000001Cu)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_5_LOW (0x0000001Du)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_6_LOW (0x0000001Eu)
#define ENUM_IO_TIC_CLEAR_26_FLEXIO1_REG1_TIC_CLEAR_26_FLEX_IO1_CONFIG_INT_7_LOW (0x0000001Fu)

/* Register Name        : TIC_CLEAR_27_ADC_INTF_REG0
 * Register Addr        : 0xC9C6u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_27_ADC_INTF_REG0_ADDR                                     (0xC9C6u)
#define IO_TIC_CLEAR_27_ADC_INTF_REG0_RESET_VAL                                (0x00000000u)
#define IO_TIC_CLEAR_27_ADC_INTF_REG0_MMS                                      (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 02-00 | TIC_CLEAR_27_RISING      | Interrupts clear ADC. The         | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 10-08 | TIC_CLEAR_27_FALLING     | Interrupts clear ADC. The         | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_27_ADC_INTF_REG0_TIC_CLEAR_27_RISING                 (0u)
#define BITL_IO_TIC_CLEAR_27_ADC_INTF_REG0_TIC_CLEAR_27_RISING                 (3u)
#define BITM_IO_TIC_CLEAR_27_ADC_INTF_REG0_TIC_CLEAR_27_RISING                 (0x00000007u)

#define BITP_IO_TIC_CLEAR_27_ADC_INTF_REG0_TIC_CLEAR_27_FALLING                (8u)
#define BITL_IO_TIC_CLEAR_27_ADC_INTF_REG0_TIC_CLEAR_27_FALLING                (3u)
#define BITM_IO_TIC_CLEAR_27_ADC_INTF_REG0_TIC_CLEAR_27_FALLING                (0x00000700u)

/* Register Name        : TIC_CLEAR_27_ADC_INTF_REG1
 * Register Addr        : 0xC9C7u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_27_ADC_INTF_REG1_ADDR                                     (0xC9C7u)
#define IO_TIC_CLEAR_27_ADC_INTF_REG1_RESET_VAL                                (0x00000000u)
#define IO_TIC_CLEAR_27_ADC_INTF_REG1_MMS                                      (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 02-00 | TIC_CLEAR_27_HIGH        | Interrupts clear ADC. The         | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 10-08 | TIC_CLEAR_27_LOW         | Interrupts clear ADC. The         | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_27_ADC_INTF_REG1_TIC_CLEAR_27_HIGH                   (0u)
#define BITL_IO_TIC_CLEAR_27_ADC_INTF_REG1_TIC_CLEAR_27_HIGH                   (3u)
#define BITM_IO_TIC_CLEAR_27_ADC_INTF_REG1_TIC_CLEAR_27_HIGH                   (0x00000007u)

#define BITP_IO_TIC_CLEAR_27_ADC_INTF_REG1_TIC_CLEAR_27_LOW                    (8u)
#define BITL_IO_TIC_CLEAR_27_ADC_INTF_REG1_TIC_CLEAR_27_LOW                    (3u)
#define BITM_IO_TIC_CLEAR_27_ADC_INTF_REG1_TIC_CLEAR_27_LOW                    (0x00000700u)

/* Register Name        : TIC_CLEAR_28_MISC0_REG0
 * Register Addr        : 0xC9C8u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_28_MISC0_REG0_ADDR                                        (0xC9C8u)
#define IO_TIC_CLEAR_28_MISC0_REG0_RESET_VAL                                   (0x00000000u)
#define IO_TIC_CLEAR_28_MISC0_REG0_MMS                                         (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_CLEAR_28             | Interrupts Clear SLEEP_WAKE and   | 0x00000000  |
 * |       |                          | SERIAL_COMM. The enumeration      |             |
 * |       |                          | table values indicates the bit    |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | clear, not the value that has to  |             |
 * |       |                          | be written to do the interrupt    |             |
 * |       |                          | clear. Setting the bit position   |             |
 * |       |                          | to one (1) enables the            |             |
 * |       |                          | interrupt.                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28                           (0u)
#define BITL_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28                           (16u)
#define BITM_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28                           (0x0000FFFFu)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28_SLPWK_FLAG_CONTROLLER_MODE_RISING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28_SLPWK_FLAG_CONFIRM_AWAKE_RISING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28_SLPWK_FLAG_LINE_BUSY_RISING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28_SLPWK_FLAG_SLEEP_ERR_RISING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28_SLPWK_FLAG_STANDBY_ERR_RISING (0x00000004u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28_SLPWK_FLAG_RETURNED_FROM_STANDBY_RISING (0x00000005u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28_SLPWK_FLAG_REQ_SYSTEM_WAKEUP_CONF_RISING (0x00000006u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28_SLPWK_FLAG_CONFIRM_AWAKE_FALLING (0x00000009u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28_SLPWK_FLAG_LINE_BUSY_FALLING (0x0000000Au)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28_SLPWK_FLAG_SLEEP_ERR_FALLING (0x0000000Bu)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28_SLPWK_FLAG_STANDBY_ERR_FALLING (0x0000000Cu)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28_SLPWK_FLAG_RETURNED_FROM_STANDBY_FALLING (0x0000000Du)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28_SLPWK_FLAG_REQ_SYSTEM_WAKEUP_CONF_FALLING (0x0000000Eu)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28_SLPWK_FLAG_CONTROLLER_MODE_HIGH (0x00000010u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28_SLPWK_FLAG_CONFIRM_AWAKE_HIGH (0x00000011u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28_SLPWK_FLAG_LINE_BUSY_HIGH (0x00000012u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28_SLPWK_FLAG_SLEEP_ERR_HIGH (0x00000013u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28_SLPWK_FLAG_STANDBY_ERR_HIGH (0x00000014u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28_SLPWK_FLAG_RETURNED_FROM_STANDBY_HIGH (0x00000015u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28_SLPWK_FLAG_REQ_SYSTEM_WAKEUP_CONF_HIGH (0x00000016u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28_SLPWK_FLAG_CONTROLLER_MODE_LOW (0x00000018u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28_SLPWK_FLAG_CONFIRM_AWAKE_LOW (0x00000019u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28_SLPWK_FLAG_LINE_BUSY_LOW  (0x0000001Au)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28_SLPWK_FLAG_SLEEP_ERR_LOW  (0x0000001Bu)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28_SLPWK_FLAG_STANDBY_ERR_LOW (0x0000001Cu)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28_SLPWK_FLAG_RETURNED_FROM_STANDBY_LOW (0x0000001Du)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG0_TIC_CLEAR_28_SLPWK_FLAG_REQ_SYSTEM_WAKEUP_CONF_LOW (0x0000001Eu)

/* Register Name        : TIC_CLEAR_28_MISC0_REG1
 * Register Addr        : 0xC9C9u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_28_MISC0_REG1_ADDR                                        (0xC9C9u)
#define IO_TIC_CLEAR_28_MISC0_REG1_RESET_VAL                                   (0x00000000u)
#define IO_TIC_CLEAR_28_MISC0_REG1_MMS                                         (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_CLEAR_28             | Interrupts Clear SLEEP_WAKE and   | 0x00000000  |
 * |       |                          | SERIAL_COMM. The enumeration      |             |
 * |       |                          | table values indicates the bit    |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | clear, not the value that has to  |             |
 * |       |                          | be written to do the interrupt    |             |
 * |       |                          | clear. Setting the bit position   |             |
 * |       |                          | to one (1) enables the            |             |
 * |       |                          | interrupt.                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28                           (0u)
#define BITL_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28                           (16u)
#define BITM_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28                           (0x0000FFFFu)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28_SLPWK_FLAG_CONTROLLER_MODE_RISING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28_SLPWK_FLAG_CONFIRM_AWAKE_RISING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28_SLPWK_FLAG_LINE_BUSY_RISING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28_SLPWK_FLAG_SLEEP_ERR_RISING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28_SLPWK_FLAG_STANDBY_ERR_RISING (0x00000004u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28_SLPWK_FLAG_RETURNED_FROM_STANDBY_RISING (0x00000005u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28_SLPWK_FLAG_REQ_SYSTEM_WAKEUP_CONF_RISING (0x00000006u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28_SLPWK_FLAG_CONFIRM_AWAKE_FALLING (0x00000009u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28_SLPWK_FLAG_LINE_BUSY_FALLING (0x0000000Au)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28_SLPWK_FLAG_SLEEP_ERR_FALLING (0x0000000Bu)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28_SLPWK_FLAG_STANDBY_ERR_FALLING (0x0000000Cu)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28_SLPWK_FLAG_RETURNED_FROM_STANDBY_FALLING (0x0000000Du)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28_SLPWK_FLAG_REQ_SYSTEM_WAKEUP_CONF_FALLING (0x0000000Eu)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28_SLPWK_FLAG_CONTROLLER_MODE_HIGH (0x00000010u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28_SLPWK_FLAG_CONFIRM_AWAKE_HIGH (0x00000011u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28_SLPWK_FLAG_LINE_BUSY_HIGH (0x00000012u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28_SLPWK_FLAG_SLEEP_ERR_HIGH (0x00000013u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28_SLPWK_FLAG_STANDBY_ERR_HIGH (0x00000014u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28_SLPWK_FLAG_RETURNED_FROM_STANDBY_HIGH (0x00000015u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28_SLPWK_FLAG_REQ_SYSTEM_WAKEUP_CONF_HIGH (0x00000016u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28_SLPWK_FLAG_CONTROLLER_MODE_LOW (0x00000018u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28_SLPWK_FLAG_CONFIRM_AWAKE_LOW (0x00000019u)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28_SLPWK_FLAG_LINE_BUSY_LOW  (0x0000001Au)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28_SLPWK_FLAG_SLEEP_ERR_LOW  (0x0000001Bu)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28_SLPWK_FLAG_STANDBY_ERR_LOW (0x0000001Cu)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28_SLPWK_FLAG_RETURNED_FROM_STANDBY_LOW (0x0000001Du)
#define ENUM_IO_TIC_CLEAR_28_MISC0_REG1_TIC_CLEAR_28_SLPWK_FLAG_REQ_SYSTEM_WAKEUP_CONF_LOW (0x0000001Eu)

/* Register Name        : TIC_CLEAR_29_MISC1_REG0
 * Register Addr        : 0xC9CAu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_29_MISC1_REG0_ADDR                                        (0xC9CAu)
#define IO_TIC_CLEAR_29_MISC1_REG0_RESET_VAL                                   (0x00000000u)
#define IO_TIC_CLEAR_29_MISC1_REG0_MMS                                         (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | TIC_CLEAR_29_RISING      | Interrupts Clear UMC - GPTP -     | 0x00000000  |
 * |       |                          | BOOTLOADER - MANUAL. The          |             |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-08 | TIC_CLEAR_29_FALLING     | Interrupts Clear UMC - GPTP -     | 0x00000000  |
 * |       |                          | BOOTLOADER - MANUAL. The          |             |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_29_MISC1_REG0_TIC_CLEAR_29_RISING                    (0u)
#define BITL_IO_TIC_CLEAR_29_MISC1_REG0_TIC_CLEAR_29_RISING                    (8u)
#define BITM_IO_TIC_CLEAR_29_MISC1_REG0_TIC_CLEAR_29_RISING                    (0x000000FFu)
#define ENUM_IO_TIC_CLEAR_29_MISC1_REG0_TIC_CLEAR_29_RISING_GPTP_LOCK_RISING   (0x00000003u)
#define ENUM_IO_TIC_CLEAR_29_MISC1_REG0_TIC_CLEAR_29_RISING_BOOTLOADER_DONE_RISING (0x00000004u)
#define ENUM_IO_TIC_CLEAR_29_MISC1_REG0_TIC_CLEAR_29_RISING_MANUAL_INTERRUPT_RISING (0x00000005u)
#define ENUM_IO_TIC_CLEAR_29_MISC1_REG0_TIC_CLEAR_29_RISING_EFUSE_CTRL_PROG_INT_RISING (0x00000006u)
#define ENUM_IO_TIC_CLEAR_29_MISC1_REG0_TIC_CLEAR_29_RISING_HS_COMM_ERROR_RISING (0x00000007u)

#define BITP_IO_TIC_CLEAR_29_MISC1_REG0_TIC_CLEAR_29_FALLING                   (8u)
#define BITL_IO_TIC_CLEAR_29_MISC1_REG0_TIC_CLEAR_29_FALLING                   (8u)
#define BITM_IO_TIC_CLEAR_29_MISC1_REG0_TIC_CLEAR_29_FALLING                   (0x0000FF00u)
#define ENUM_IO_TIC_CLEAR_29_MISC1_REG0_TIC_CLEAR_29_FALLING_GPTP_LOCK_FALLING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_29_MISC1_REG0_TIC_CLEAR_29_FALLING_BOOTLOADER_DONE_FALLING (0x00000004u)
#define ENUM_IO_TIC_CLEAR_29_MISC1_REG0_TIC_CLEAR_29_FALLING_MANUAL_INTERRUPT_FALLING (0x00000005u)
#define ENUM_IO_TIC_CLEAR_29_MISC1_REG0_TIC_CLEAR_29_FALLING_EFUSE_CTRL_PROG_INT_FALLING (0x00000006u)
#define ENUM_IO_TIC_CLEAR_29_MISC1_REG0_TIC_CLEAR_29_FALLING_HS_COMM_ERROR_FALLING (0x00000007u)

/* Register Name        : TIC_CLEAR_29_MISC1_REG1
 * Register Addr        : 0xC9CBu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_29_MISC1_REG1_ADDR                                        (0xC9CBu)
#define IO_TIC_CLEAR_29_MISC1_REG1_RESET_VAL                                   (0x00000000u)
#define IO_TIC_CLEAR_29_MISC1_REG1_MMS                                         (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | TIC_CLEAR_29_HIGH        | Interrupts Clear UMC - GPTP -     | 0x00000000  |
 * |       |                          | BOOTLOADER - MANUAL. The          |             |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-08 | TIC_CLEAR_29_LOW         | Interrupts Clear UMC - GPTP -     | 0x00000000  |
 * |       |                          | BOOTLOADER - MANUAL. The          |             |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_29_MISC1_REG1_TIC_CLEAR_29_HIGH                      (0u)
#define BITL_IO_TIC_CLEAR_29_MISC1_REG1_TIC_CLEAR_29_HIGH                      (8u)
#define BITM_IO_TIC_CLEAR_29_MISC1_REG1_TIC_CLEAR_29_HIGH                      (0x000000FFu)
#define ENUM_IO_TIC_CLEAR_29_MISC1_REG1_TIC_CLEAR_29_HIGH_GPTP_LOCK_HIGH       (0x00000003u)
#define ENUM_IO_TIC_CLEAR_29_MISC1_REG1_TIC_CLEAR_29_HIGH_BOOTLOADER_DONE_HIGH (0x00000004u)
#define ENUM_IO_TIC_CLEAR_29_MISC1_REG1_TIC_CLEAR_29_HIGH_MANUAL_INTERRUPT_HIGH (0x00000005u)
#define ENUM_IO_TIC_CLEAR_29_MISC1_REG1_TIC_CLEAR_29_HIGH_EFUSE_CTRL_PROG_INT_HIGH (0x00000006u)
#define ENUM_IO_TIC_CLEAR_29_MISC1_REG1_TIC_CLEAR_29_HIGH_HS_COMM_ERROR_HIGH   (0x00000007u)

#define BITP_IO_TIC_CLEAR_29_MISC1_REG1_TIC_CLEAR_29_LOW                       (8u)
#define BITL_IO_TIC_CLEAR_29_MISC1_REG1_TIC_CLEAR_29_LOW                       (8u)
#define BITM_IO_TIC_CLEAR_29_MISC1_REG1_TIC_CLEAR_29_LOW                       (0x0000FF00u)
#define ENUM_IO_TIC_CLEAR_29_MISC1_REG1_TIC_CLEAR_29_LOW_GPTP_LOCK_LOW         (0x00000003u)
#define ENUM_IO_TIC_CLEAR_29_MISC1_REG1_TIC_CLEAR_29_LOW_BOOTLOADER_DONE_LOW   (0x00000004u)
#define ENUM_IO_TIC_CLEAR_29_MISC1_REG1_TIC_CLEAR_29_LOW_MANUAL_INTERRUPT_LOW  (0x00000005u)
#define ENUM_IO_TIC_CLEAR_29_MISC1_REG1_TIC_CLEAR_29_LOW_EFUSE_CTRL_PROG_INT_LOW (0x00000006u)
#define ENUM_IO_TIC_CLEAR_29_MISC1_REG1_TIC_CLEAR_29_LOW_HS_COMM_ERROR_LOW     (0x00000007u)

/* Register Name        : TIC_CLEAR_30_ADC_CONTROLLER_REG0
 * Register Addr        : 0xC9CCu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_30_ADC_CONTROLLER_REG0_ADDR                               (0xC9CCu)
#define IO_TIC_CLEAR_30_ADC_CONTROLLER_REG0_RESET_VAL                          (0x00000000u)
#define IO_TIC_CLEAR_30_ADC_CONTROLLER_REG0_MMS                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_CLEAR_30             | Interrupts clear ADC controller.  | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_30_ADC_CONTROLLER_REG0_TIC_CLEAR_30                  (0u)
#define BITL_IO_TIC_CLEAR_30_ADC_CONTROLLER_REG0_TIC_CLEAR_30                  (16u)
#define BITM_IO_TIC_CLEAR_30_ADC_CONTROLLER_REG0_TIC_CLEAR_30                  (0x0000FFFFu)

/* Register Name        : TIC_CLEAR_30_ADC_CONTROLLER_REG1
 * Register Addr        : 0xC9CDu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_30_ADC_CONTROLLER_REG1_ADDR                               (0xC9CDu)
#define IO_TIC_CLEAR_30_ADC_CONTROLLER_REG1_RESET_VAL                          (0x00000000u)
#define IO_TIC_CLEAR_30_ADC_CONTROLLER_REG1_MMS                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_CLEAR_30             | Interrupts clear ADC controller.  | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_30_ADC_CONTROLLER_REG1_TIC_CLEAR_30                  (0u)
#define BITL_IO_TIC_CLEAR_30_ADC_CONTROLLER_REG1_TIC_CLEAR_30                  (16u)
#define BITM_IO_TIC_CLEAR_30_ADC_CONTROLLER_REG1_TIC_CLEAR_30                  (0x0000FFFFu)

/* Register Name        : CLOCK_GENERATION_OUTPUTS
 * Register Addr        : 0xC9CEu
 * Register Reset Value : 0x00003C57u
 * Register MMS         : 0xAu
 */

#define IO_CLOCK_GENERATION_OUTPUTS_ADDR                                       (0xC9CEu)
#define IO_CLOCK_GENERATION_OUTPUTS_RESET_VAL                                  (0x00003C57u)
#define IO_CLOCK_GENERATION_OUTPUTS_MMS                                        (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 10    | TA_XTAL_GM_EN_VDD        | Enable the XTAL Oscillator        | 0x00000001  |
 * |       |                          | Amplifier                         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_CLOCK_GENERATION_OUTPUTS_TA_XTAL_GM_EN_VDD                     (10u)
#define BITL_IO_CLOCK_GENERATION_OUTPUTS_TA_XTAL_GM_EN_VDD                     (1u)
#define BITM_IO_CLOCK_GENERATION_OUTPUTS_TA_XTAL_GM_EN_VDD                     (0x0400u)
#define ENUM_IO_CLOCK_GENERATION_OUTPUTS_TA_XTAL_GM_EN_VDD_ENUM000             (0x00000000u)
#define ENUM_IO_CLOCK_GENERATION_OUTPUTS_TA_XTAL_GM_EN_VDD_ENUM001             (0x00000001u)

/* Register Name        : CLOCK_GENERATION_OUTPUTS2
 * Register Addr        : 0xC9CFu
 * Register Reset Value : 0x00000412u
 * Register MMS         : 0xAu
 */

#define IO_CLOCK_GENERATION_OUTPUTS2_ADDR                                      (0xC9CFu)
#define IO_CLOCK_GENERATION_OUTPUTS2_RESET_VAL                                 (0x00000412u)
#define IO_CLOCK_GENERATION_OUTPUTS2_MMS                                       (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 10    | TA_XTAL_EN_VDD           | Enable the XTAL oscillator        | 0x00000001  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11    | XTAL_EN_IN_STANDBY       | State of the XTAL oscillator      | 0x00000000  |
 * |       |                          | during standby. When disabled     |             |
 * |       |                          | provides better (lower) power     |             |
 * |       |                          | consumption, when disabled        |             |
 * |       |                          | provides better (shorter)         |             |
 * |       |                          | wake-up time from standby         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_CLOCK_GENERATION_OUTPUTS2_TA_XTAL_EN_VDD                       (10u)
#define BITL_IO_CLOCK_GENERATION_OUTPUTS2_TA_XTAL_EN_VDD                       (1u)
#define BITM_IO_CLOCK_GENERATION_OUTPUTS2_TA_XTAL_EN_VDD                       (0x0400u)
#define ENUM_IO_CLOCK_GENERATION_OUTPUTS2_TA_XTAL_EN_VDD_ENUM000               (0x00000000u)
#define ENUM_IO_CLOCK_GENERATION_OUTPUTS2_TA_XTAL_EN_VDD_ENUM001               (0x00000001u)

#define BITP_IO_CLOCK_GENERATION_OUTPUTS2_XTAL_EN_IN_STANDBY                   (11u)
#define BITL_IO_CLOCK_GENERATION_OUTPUTS2_XTAL_EN_IN_STANDBY                   (1u)
#define BITM_IO_CLOCK_GENERATION_OUTPUTS2_XTAL_EN_IN_STANDBY                   (0x0800u)
#define ENUM_IO_CLOCK_GENERATION_OUTPUTS2_XTAL_EN_IN_STANDBY_ENUM000           (0x00000000u)
#define ENUM_IO_CLOCK_GENERATION_OUTPUTS2_XTAL_EN_IN_STANDBY_ENUM001           (0x00000001u)

/* Register Name        : TP_OUT_EN_SA_IF
 * Register Addr        : 0xC9DFu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TP_OUT_EN_SA_IF_ADDR                                                (0xC9DFu)
#define IO_TP_OUT_EN_SA_IF_RESET_VAL                                           (0x00000000u)
#define IO_TP_OUT_EN_SA_IF_MMS                                                 (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | TP_OUT_EN_SA_IF_0        | Enable the output driver on       | 0x00000000  |
 * |       |                          | SA_IF0                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | TP_OUT_EN_SA_IF_1        | Enable the output driver on       | 0x00000000  |
 * |       |                          | SA_IF1                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 2     | TP_OUT_EN_SA_IF_2        | Enable the output driver on       | 0x00000000  |
 * |       |                          | SA_IF2                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 3     | TP_OUT_EN_SA_IF_3        | Enable the output driver on       | 0x00000000  |
 * |       |                          | SA_IF3                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 4     | TP_OUT_EN_SA_IF_4        | Enable the output driver on       | 0x00000000  |
 * |       |                          | SA_IF4                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 5     | TP_OUT_EN_SA_IF_5        | Enable the output driver on       | 0x00000000  |
 * |       |                          | SA_IF5                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 6     | TP_OUT_EN_SA_IF_6        | Enable the output driver on       | 0x00000000  |
 * |       |                          | SA_IF6                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 7     | TP_OUT_EN_SA_IF_7        | Enable the output driver on       | 0x00000000  |
 * |       |                          | SA_IF7                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 8     | TP_OUT_EN_SA_IF_8        | Enable the output driver on       | 0x00000000  |
 * |       |                          | SA_IF8                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 9     | TP_OUT_EN_SA_IF_9        | Enable the output driver on       | 0x00000000  |
 * |       |                          | SA_IF9                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 10    | TP_OUT_EN_SA_IF_10       | Enable the output driver on       | 0x00000000  |
 * |       |                          | SA_IF10                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11    | TP_OUT_EN_SA_IF_11       | Enable the output driver on       | 0x00000000  |
 * |       |                          | SA_IF11                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_0                              (0u)
#define BITL_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_0                              (1u)
#define BITM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_0                              (0x01u)
#define ENUM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_0_ENUM000                      (0x00000000u)
#define ENUM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_0_ENUM001                      (0x00000001u)

#define BITP_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_1                              (1u)
#define BITL_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_1                              (1u)
#define BITM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_1                              (0x02u)
#define ENUM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_1_ENUM000                      (0x00000000u)
#define ENUM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_1_ENUM001                      (0x00000001u)

#define BITP_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_2                              (2u)
#define BITL_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_2                              (1u)
#define BITM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_2                              (0x04u)
#define ENUM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_2_ENUM000                      (0x00000000u)
#define ENUM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_2_ENUM001                      (0x00000001u)

#define BITP_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_3                              (3u)
#define BITL_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_3                              (1u)
#define BITM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_3                              (0x08u)
#define ENUM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_3_ENUM000                      (0x00000000u)
#define ENUM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_3_ENUM001                      (0x00000001u)

#define BITP_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_4                              (4u)
#define BITL_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_4                              (1u)
#define BITM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_4                              (0x10u)
#define ENUM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_4_ENUM000                      (0x00000000u)
#define ENUM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_4_ENUM001                      (0x00000001u)

#define BITP_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_5                              (5u)
#define BITL_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_5                              (1u)
#define BITM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_5                              (0x20u)
#define ENUM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_5_ENUM000                      (0x00000000u)
#define ENUM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_5_ENUM001                      (0x00000001u)

#define BITP_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_6                              (6u)
#define BITL_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_6                              (1u)
#define BITM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_6                              (0x40u)
#define ENUM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_6_ENUM000                      (0x00000000u)
#define ENUM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_6_ENUM001                      (0x00000001u)

#define BITP_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_7                              (7u)
#define BITL_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_7                              (1u)
#define BITM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_7                              (0x80u)
#define ENUM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_7_ENUM000                      (0x00000000u)
#define ENUM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_7_ENUM001                      (0x00000001u)

#define BITP_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_8                              (8u)
#define BITL_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_8                              (1u)
#define BITM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_8                              (0x0100u)
#define ENUM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_8_ENUM000                      (0x00000000u)
#define ENUM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_8_ENUM001                      (0x00000001u)

#define BITP_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_9                              (9u)
#define BITL_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_9                              (1u)
#define BITM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_9                              (0x0200u)
#define ENUM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_9_ENUM000                      (0x00000000u)
#define ENUM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_9_ENUM001                      (0x00000001u)

#define BITP_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_10                             (10u)
#define BITL_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_10                             (1u)
#define BITM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_10                             (0x0400u)
#define ENUM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_10_ENUM000                     (0x00000000u)
#define ENUM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_10_ENUM001                     (0x00000001u)

#define BITP_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_11                             (11u)
#define BITL_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_11                             (1u)
#define BITM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_11                             (0x0800u)
#define ENUM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_11_ENUM000                     (0x00000000u)
#define ENUM_IO_TP_OUT_EN_SA_IF_TP_OUT_EN_SA_IF_11_ENUM001                     (0x00000001u)

/* Register Name        : TP_IP_EN_SA_IF
 * Register Addr        : 0xC9E0u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TP_IP_EN_SA_IF_ADDR                                                 (0xC9E0u)
#define IO_TP_IP_EN_SA_IF_RESET_VAL                                            (0x00000000u)
#define IO_TP_IP_EN_SA_IF_MMS                                                  (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | TP_IP_EN_SA_IF_0         | Enable the input receiver on      | 0x00000000  |
 * |       |                          | SA_IF0                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | TP_IP_EN_SA_IF_1         | Enable the input receiver on      | 0x00000000  |
 * |       |                          | SA_IF1                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 2     | TP_IP_EN_SA_IF_2         | Enable the input receiver on      | 0x00000000  |
 * |       |                          | SA_IF2                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 3     | TP_IP_EN_SA_IF_3         | Enable the input receiver on      | 0x00000000  |
 * |       |                          | SA_IF3                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 4     | TP_IP_EN_SA_IF_4         | Enable the input receiver on      | 0x00000000  |
 * |       |                          | SA_IF4                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 5     | TP_IP_EN_SA_IF_5         | Enable the input receiver on      | 0x00000000  |
 * |       |                          | SA_IF5                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 6     | TP_IP_EN_SA_IF_6         | Enable the input receiver on      | 0x00000000  |
 * |       |                          | SA_IF6                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 7     | TP_IP_EN_SA_IF_7         | Enable the input receiver on      | 0x00000000  |
 * |       |                          | SA_IF7                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 8     | TP_IP_EN_SA_IF_8         | Enable the input receiver on      | 0x00000000  |
 * |       |                          | SA_IF8                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 9     | TP_IP_EN_SA_IF_9         | Enable the input receiver on      | 0x00000000  |
 * |       |                          | SA_IF9                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 10    | TP_IP_EN_SA_IF_10        | Enable the input receiver on      | 0x00000000  |
 * |       |                          | SA_IF10                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11    | TP_IP_EN_SA_IF_11        | Enable the input receiver on      | 0x00000000  |
 * |       |                          | SA_IF11                           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_0                                (0u)
#define BITL_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_0                                (1u)
#define BITM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_0                                (0x01u)
#define ENUM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_0_ENUM000                        (0x00000000u)
#define ENUM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_0_ENUM001                        (0x00000001u)

#define BITP_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_1                                (1u)
#define BITL_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_1                                (1u)
#define BITM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_1                                (0x02u)
#define ENUM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_1_ENUM000                        (0x00000000u)
#define ENUM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_1_ENUM001                        (0x00000001u)

#define BITP_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_2                                (2u)
#define BITL_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_2                                (1u)
#define BITM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_2                                (0x04u)
#define ENUM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_2_ENUM000                        (0x00000000u)
#define ENUM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_2_ENUM001                        (0x00000001u)

#define BITP_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_3                                (3u)
#define BITL_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_3                                (1u)
#define BITM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_3                                (0x08u)
#define ENUM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_3_ENUM000                        (0x00000000u)
#define ENUM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_3_ENUM001                        (0x00000001u)

#define BITP_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_4                                (4u)
#define BITL_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_4                                (1u)
#define BITM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_4                                (0x10u)
#define ENUM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_4_ENUM000                        (0x00000000u)
#define ENUM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_4_ENUM001                        (0x00000001u)

#define BITP_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_5                                (5u)
#define BITL_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_5                                (1u)
#define BITM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_5                                (0x20u)
#define ENUM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_5_ENUM000                        (0x00000000u)
#define ENUM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_5_ENUM001                        (0x00000001u)

#define BITP_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_6                                (6u)
#define BITL_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_6                                (1u)
#define BITM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_6                                (0x40u)
#define ENUM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_6_ENUM000                        (0x00000000u)
#define ENUM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_6_ENUM001                        (0x00000001u)

#define BITP_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_7                                (7u)
#define BITL_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_7                                (1u)
#define BITM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_7                                (0x80u)
#define ENUM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_7_ENUM000                        (0x00000000u)
#define ENUM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_7_ENUM001                        (0x00000001u)

#define BITP_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_8                                (8u)
#define BITL_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_8                                (1u)
#define BITM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_8                                (0x0100u)
#define ENUM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_8_ENUM000                        (0x00000000u)
#define ENUM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_8_ENUM001                        (0x00000001u)

#define BITP_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_9                                (9u)
#define BITL_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_9                                (1u)
#define BITM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_9                                (0x0200u)
#define ENUM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_9_ENUM000                        (0x00000000u)
#define ENUM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_9_ENUM001                        (0x00000001u)

#define BITP_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_10                               (10u)
#define BITL_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_10                               (1u)
#define BITM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_10                               (0x0400u)
#define ENUM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_10_ENUM000                       (0x00000000u)
#define ENUM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_10_ENUM001                       (0x00000001u)

#define BITP_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_11                               (11u)
#define BITL_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_11                               (1u)
#define BITM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_11                               (0x0800u)
#define ENUM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_11_ENUM000                       (0x00000000u)
#define ENUM_IO_TP_IP_EN_SA_IF_TP_IP_EN_SA_IF_11_ENUM001                       (0x00000001u)

/* Register Name        : SA_IF_I2C_MODE_AND_DRV_SEL
 * Register Addr        : 0xC9E1u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_SA_IF_I2C_MODE_AND_DRV_SEL_ADDR                                     (0xC9E1u)
#define IO_SA_IF_I2C_MODE_AND_DRV_SEL_RESET_VAL                                (0x00000000u)
#define IO_SA_IF_I2C_MODE_AND_DRV_SEL_MMS                                      (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | TP_I2C_MODE_SA_IF_9      | Control the operational mode of   | 0x00000000  |
 * |       |                          | the SA_IF9 pad                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | TP_I2C_MODE_SA_IF_10     | Control the operational mode of   | 0x00000000  |
 * |       |                          | the SA_IF10 pad                   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 2     | TP_DRV_SEL_SA_IF_9       | Drive strength setting for        | 0x00000000  |
 * |       |                          | SA_IF9 output driver              |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 3     | TP_DRV_SEL_SA_IF_10      | Drive strength setting for        | 0x00000000  |
 * |       |                          | SA_IF10 output driver             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_SA_IF_I2C_MODE_AND_DRV_SEL_TP_I2C_MODE_SA_IF_9                 (0u)
#define BITL_IO_SA_IF_I2C_MODE_AND_DRV_SEL_TP_I2C_MODE_SA_IF_9                 (1u)
#define BITM_IO_SA_IF_I2C_MODE_AND_DRV_SEL_TP_I2C_MODE_SA_IF_9                 (0x01u)
#define ENUM_IO_SA_IF_I2C_MODE_AND_DRV_SEL_TP_I2C_MODE_SA_IF_9_ENUM000         (0x00000000u)
#define ENUM_IO_SA_IF_I2C_MODE_AND_DRV_SEL_TP_I2C_MODE_SA_IF_9_ENUM001         (0x00000001u)

#define BITP_IO_SA_IF_I2C_MODE_AND_DRV_SEL_TP_I2C_MODE_SA_IF_10                (1u)
#define BITL_IO_SA_IF_I2C_MODE_AND_DRV_SEL_TP_I2C_MODE_SA_IF_10                (1u)
#define BITM_IO_SA_IF_I2C_MODE_AND_DRV_SEL_TP_I2C_MODE_SA_IF_10                (0x02u)
#define ENUM_IO_SA_IF_I2C_MODE_AND_DRV_SEL_TP_I2C_MODE_SA_IF_10_ENUM000        (0x00000000u)
#define ENUM_IO_SA_IF_I2C_MODE_AND_DRV_SEL_TP_I2C_MODE_SA_IF_10_ENUM001        (0x00000001u)

#define BITP_IO_SA_IF_I2C_MODE_AND_DRV_SEL_TP_DRV_SEL_SA_IF_9                  (2u)
#define BITL_IO_SA_IF_I2C_MODE_AND_DRV_SEL_TP_DRV_SEL_SA_IF_9                  (1u)
#define BITM_IO_SA_IF_I2C_MODE_AND_DRV_SEL_TP_DRV_SEL_SA_IF_9                  (0x04u)
#define ENUM_IO_SA_IF_I2C_MODE_AND_DRV_SEL_TP_DRV_SEL_SA_IF_9_ENUM000          (0x00000000u)
#define ENUM_IO_SA_IF_I2C_MODE_AND_DRV_SEL_TP_DRV_SEL_SA_IF_9_ENUM001          (0x00000001u)

#define BITP_IO_SA_IF_I2C_MODE_AND_DRV_SEL_TP_DRV_SEL_SA_IF_10                 (3u)
#define BITL_IO_SA_IF_I2C_MODE_AND_DRV_SEL_TP_DRV_SEL_SA_IF_10                 (1u)
#define BITM_IO_SA_IF_I2C_MODE_AND_DRV_SEL_TP_DRV_SEL_SA_IF_10                 (0x08u)
#define ENUM_IO_SA_IF_I2C_MODE_AND_DRV_SEL_TP_DRV_SEL_SA_IF_10_ENUM000         (0x00000000u)
#define ENUM_IO_SA_IF_I2C_MODE_AND_DRV_SEL_TP_DRV_SEL_SA_IF_10_ENUM001         (0x00000001u)

/* Register Name        : EFUSE_REG
 * Register Addr        : 0xC9E2u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_EFUSE_REG_ADDR                                                      (0xC9E2u)
#define IO_EFUSE_REG_RESET_VAL                                                 (0x00000000u)
#define IO_EFUSE_REG_MMS                                                       (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | EFUSE_MVL_PASS           | Efuse majority voting logic pass  | 0x00000000  |
 * |       |                          | readback                          |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_EFUSE_REG_EFUSE_MVL_PASS                                       (0u)
#define BITL_IO_EFUSE_REG_EFUSE_MVL_PASS                                       (1u)
#define BITM_IO_EFUSE_REG_EFUSE_MVL_PASS                                       (0x01u)
#define ENUM_IO_EFUSE_REG_EFUSE_MVL_PASS_FAIL                                  (0x00000000u)
#define ENUM_IO_EFUSE_REG_EFUSE_MVL_PASS_PASS                                  (0x00000001u)

/* Register Name        : TIC_ENABLE_31_ADC_REG1
 * Register Addr        : 0xC9EAu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_31_ADC_REG1_ADDR                                         (0xC9EAu)
#define IO_TIC_ENABLE_31_ADC_REG1_RESET_VAL                                    (0x00000000u)
#define IO_TIC_ENABLE_31_ADC_REG1_MMS                                          (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 05-00 | TIC_ENABLE_31_HIGH       | Interrupts enable ADC             | 0x00000000  |
 * |       |                          | controller. The enumeration       |             |
 * |       |                          | table values indicates the bit    |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | enable, not the value that has    |             |
 * |       |                          | to be written to do the           |             |
 * |       |                          | interrupt enable. Setting the     |             |
 * |       |                          | bit position to one (1) enables   |             |
 * |       |                          | the interrupt.                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13-08 | TIC_ENABLE_31_LOW        | Interrupts enable ADC             | 0x00000000  |
 * |       |                          | controller. The enumeration       |             |
 * |       |                          | table values indicates the bit    |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | enable, not the value that has    |             |
 * |       |                          | to be written to do the           |             |
 * |       |                          | interrupt enable. Setting the     |             |
 * |       |                          | bit position to one (1) enables   |             |
 * |       |                          | the interrupt.                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_31_ADC_REG1_TIC_ENABLE_31_HIGH                      (0u)
#define BITL_IO_TIC_ENABLE_31_ADC_REG1_TIC_ENABLE_31_HIGH                      (6u)
#define BITM_IO_TIC_ENABLE_31_ADC_REG1_TIC_ENABLE_31_HIGH                      (0x0000003Fu)

#define BITP_IO_TIC_ENABLE_31_ADC_REG1_TIC_ENABLE_31_LOW                       (8u)
#define BITL_IO_TIC_ENABLE_31_ADC_REG1_TIC_ENABLE_31_LOW                       (6u)
#define BITM_IO_TIC_ENABLE_31_ADC_REG1_TIC_ENABLE_31_LOW                       (0x00003F00u)

/* Register Name        : TIC_CLEAR_31_ADC_CONTROLLER_REG0
 * Register Addr        : 0xC9EBu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_31_ADC_CONTROLLER_REG0_ADDR                               (0xC9EBu)
#define IO_TIC_CLEAR_31_ADC_CONTROLLER_REG0_RESET_VAL                          (0x00000000u)
#define IO_TIC_CLEAR_31_ADC_CONTROLLER_REG0_MMS                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 05-00 | TIC_CLEAR_31_RISING      | Interrupts clear ADC controller.  | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13-08 | TIC_CLEAR_31_FALLING     | Interrupts clear ADC controller.  | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_31_ADC_CONTROLLER_REG0_TIC_CLEAR_31_RISING           (0u)
#define BITL_IO_TIC_CLEAR_31_ADC_CONTROLLER_REG0_TIC_CLEAR_31_RISING           (6u)
#define BITM_IO_TIC_CLEAR_31_ADC_CONTROLLER_REG0_TIC_CLEAR_31_RISING           (0x0000003Fu)

#define BITP_IO_TIC_CLEAR_31_ADC_CONTROLLER_REG0_TIC_CLEAR_31_FALLING          (8u)
#define BITL_IO_TIC_CLEAR_31_ADC_CONTROLLER_REG0_TIC_CLEAR_31_FALLING          (6u)
#define BITM_IO_TIC_CLEAR_31_ADC_CONTROLLER_REG0_TIC_CLEAR_31_FALLING          (0x00003F00u)

/* Register Name        : TIC_CLEAR_31_ADC_CONTROLLER_REG1
 * Register Addr        : 0xC9ECu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_31_ADC_CONTROLLER_REG1_ADDR                               (0xC9ECu)
#define IO_TIC_CLEAR_31_ADC_CONTROLLER_REG1_RESET_VAL                          (0x00000000u)
#define IO_TIC_CLEAR_31_ADC_CONTROLLER_REG1_MMS                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 05-00 | TIC_CLEAR_31_HIGH        | Interrupts clear ADC controller.  | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13-08 | TIC_CLEAR_31_LOW         | Interrupts clear ADC controller.  | 0x00000000  |
 * |       |                          | The enumeration table values      |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_31_ADC_CONTROLLER_REG1_TIC_CLEAR_31_HIGH             (0u)
#define BITL_IO_TIC_CLEAR_31_ADC_CONTROLLER_REG1_TIC_CLEAR_31_HIGH             (6u)
#define BITM_IO_TIC_CLEAR_31_ADC_CONTROLLER_REG1_TIC_CLEAR_31_HIGH             (0x0000003Fu)

#define BITP_IO_TIC_CLEAR_31_ADC_CONTROLLER_REG1_TIC_CLEAR_31_LOW              (8u)
#define BITL_IO_TIC_CLEAR_31_ADC_CONTROLLER_REG1_TIC_CLEAR_31_LOW              (6u)
#define BITM_IO_TIC_CLEAR_31_ADC_CONTROLLER_REG1_TIC_CLEAR_31_LOW              (0x00003F00u)

/* Register Name        : GPTP_DOMAINS
 * Register Addr        : 0xC9EFu
 * Register Reset Value : 0x00000100u
 * Register MMS         : 0xAu
 */

#define IO_GPTP_DOMAINS_ADDR                                                   (0xC9EFu)
#define IO_GPTP_DOMAINS_RESET_VAL                                              (0x00000100u)
#define IO_GPTP_DOMAINS_MMS                                                    (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | GPTP_ACTIVE_DOMAIN       | Sets the active domain of the     | 0x00000000  |
 * |       |                          | gPTP algorithm                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-08 | GPTP_BACKUP_DOMAIN       | Sets the backup domain of the     | 0x00000001  |
 * |       |                          | gPTP algorithm when redundancy    |             |
 * |       |                          | is enabled                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_GPTP_DOMAINS_GPTP_ACTIVE_DOMAIN                                (0u)
#define BITL_IO_GPTP_DOMAINS_GPTP_ACTIVE_DOMAIN                                (8u)
#define BITM_IO_GPTP_DOMAINS_GPTP_ACTIVE_DOMAIN                                (0x000000FFu)

#define BITP_IO_GPTP_DOMAINS_GPTP_BACKUP_DOMAIN                                (8u)
#define BITL_IO_GPTP_DOMAINS_GPTP_BACKUP_DOMAIN                                (8u)
#define BITM_IO_GPTP_DOMAINS_GPTP_BACKUP_DOMAIN                                (0x0000FF00u)

/* Register Name        : TIC_CLEAR_32_LCE_SMC_SQI_REG0
 * Register Addr        : 0xC9F0u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_32_LCE_SMC_SQI_REG0_ADDR                                  (0xC9F0u)
#define IO_TIC_CLEAR_32_LCE_SMC_SQI_REG0_RESET_VAL                             (0x00000000u)
#define IO_TIC_CLEAR_32_LCE_SMC_SQI_REG0_MMS                                   (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | TIC_CLEAR_32_RISING      | Interrupts Clear LCE SMC and      | 0x00000000  |
 * |       |                          | SQI. The enumeration table        |             |
 * |       |                          | values indicates the bit          |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | clear, not the value that has to  |             |
 * |       |                          | be written to do the interrupt    |             |
 * |       |                          | clear. Setting the bit position   |             |
 * |       |                          | to one (1) enables the            |             |
 * |       |                          | interrupt.                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-08 | TIC_CLEAR_32_FALLING     | Interrupts Clear LCE SMC and      | 0x00000000  |
 * |       |                          | SQI. The enumeration table        |             |
 * |       |                          | values indicates the bit          |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | clear, not the value that has to  |             |
 * |       |                          | be written to do the interrupt    |             |
 * |       |                          | clear. Setting the bit position   |             |
 * |       |                          | to one (1) enables the            |             |
 * |       |                          | interrupt.                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG0_TIC_CLEAR_32_RISING              (0u)
#define BITL_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG0_TIC_CLEAR_32_RISING              (8u)
#define BITM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG0_TIC_CLEAR_32_RISING              (0x000000FFu)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG0_TIC_CLEAR_32_RISING_LCE_SMC_REGION_COLLISION_RISING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG0_TIC_CLEAR_32_RISING_LCE_SMC_ITERATION_END_RISING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG0_TIC_CLEAR_32_RISING_LCE_SMC_ITERATION_SKIP_RISING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG0_TIC_CLEAR_32_RISING_LCE_SMC_SELECTED_CONFIGURATION_CHANGE_RISING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG0_TIC_CLEAR_32_RISING_LCE_E2B_MESSAGE_DROP_RISING (0x00000004u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG0_TIC_CLEAR_32_RISING_LCE_TRANSPORT_DECODER_WATCHDOG_RISING (0x00000005u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG0_TIC_CLEAR_32_RISING_FLEX_IO0_PARITY_ERROR_RISING (0x00000006u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG0_TIC_CLEAR_32_RISING_FLEX_IO1_PARITY_ERROR_RISING (0x00000007u)

#define BITP_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG0_TIC_CLEAR_32_FALLING             (8u)
#define BITL_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG0_TIC_CLEAR_32_FALLING             (8u)
#define BITM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG0_TIC_CLEAR_32_FALLING             (0x0000FF00u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG0_TIC_CLEAR_32_FALLING_LCE_SMC_REGION_COLLISION_FALLING (0x00000000u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG0_TIC_CLEAR_32_FALLING_LCE_SMC_ITERATION_END_FALLING (0x00000001u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG0_TIC_CLEAR_32_FALLING_LCE_SMC_ITERATION_SKIP_FALLING (0x00000002u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG0_TIC_CLEAR_32_FALLING_LCE_SMC_SELECTED_CONFIGURATION_CHANGE_FALLING (0x00000003u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG0_TIC_CLEAR_32_FALLING_LCE_E2B_MESSAGE_DROP_FALLING (0x00000004u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG0_TIC_CLEAR_32_FALLING_LCE_TRANSPORT_DECODER_WATCHDOG_FALLING (0x00000005u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG0_TIC_CLEAR_32_FALLING_FLEX_IO0_PARITY_ERROR_FALLING (0x00000006u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG0_TIC_CLEAR_32_FALLING_FLEX_IO1_PARITY_ERROR_FALLING (0x00000007u)

/* Register Name        : TIC_CLEAR_32_LCE_SMC_SQI_REG1
 * Register Addr        : 0xC9F1u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_32_LCE_SMC_SQI_REG1_ADDR                                  (0xC9F1u)
#define IO_TIC_CLEAR_32_LCE_SMC_SQI_REG1_RESET_VAL                             (0x00000000u)
#define IO_TIC_CLEAR_32_LCE_SMC_SQI_REG1_MMS                                   (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | TIC_CLEAR_32_HIGH        | Interrupts Clear LCE SMC and      | 0x00000000  |
 * |       |                          | SQI. The enumeration table        |             |
 * |       |                          | values indicates the bit          |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | clear, not the value that has to  |             |
 * |       |                          | be written to do the interrupt    |             |
 * |       |                          | clear. Setting the bit position   |             |
 * |       |                          | to one (1) enables the            |             |
 * |       |                          | interrupt.                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-08 | TIC_CLEAR_32_LOW         | Interrupts Clear LCE SMC and      | 0x00000000  |
 * |       |                          | SQI. The enumeration table        |             |
 * |       |                          | values indicates the bit          |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | clear, not the value that has to  |             |
 * |       |                          | be written to do the interrupt    |             |
 * |       |                          | clear. Setting the bit position   |             |
 * |       |                          | to one (1) enables the            |             |
 * |       |                          | interrupt.                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG1_TIC_CLEAR_32_HIGH                (0u)
#define BITL_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG1_TIC_CLEAR_32_HIGH                (8u)
#define BITM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG1_TIC_CLEAR_32_HIGH                (0x000000FFu)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG1_TIC_CLEAR_32_HIGH_LCE_SMC_REGION_COLLISION_HIGH (0x00000000u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG1_TIC_CLEAR_32_HIGH_LCE_SMC_ITERATION_END_HIGH (0x00000001u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG1_TIC_CLEAR_32_HIGH_LCE_SMC_ITERATION_SKIP_HIGH (0x00000002u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG1_TIC_CLEAR_32_HIGH_LCE_SMC_SELECTED_CONFIGURATION_CHANGE_HIGH (0x00000003u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG1_TIC_CLEAR_32_HIGH_LCE_E2B_MESSAGE_DROP_HIGH (0x00000004u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG1_TIC_CLEAR_32_HIGH_LCE_TRANSPORT_DECODER_WATCHDOG_HIGH (0x00000005u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG1_TIC_CLEAR_32_HIGH_FLEX_IO0_PARITY_ERROR_HIGH (0x00000006u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG1_TIC_CLEAR_32_HIGH_FLEX_IO1_PARITY_ERROR_HIGH (0x00000007u)

#define BITP_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG1_TIC_CLEAR_32_LOW                 (8u)
#define BITL_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG1_TIC_CLEAR_32_LOW                 (8u)
#define BITM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG1_TIC_CLEAR_32_LOW                 (0x0000FF00u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG1_TIC_CLEAR_32_LOW_LCE_SMC_REGION_COLLISION_LOW (0x00000000u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG1_TIC_CLEAR_32_LOW_LCE_SMC_ITERATION_END_LOW (0x00000001u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG1_TIC_CLEAR_32_LOW_LCE_SMC_ITERATION_SKIP_LOW (0x00000002u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG1_TIC_CLEAR_32_LOW_LCE_SMC_SELECTED_CONFIGURATION_CHANGE_LOW (0x00000003u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG1_TIC_CLEAR_32_LOW_LCE_E2B_MESSAGE_DROP_LOW (0x00000004u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG1_TIC_CLEAR_32_LOW_LCE_TRANSPORT_DECODER_WATCHDOG_LOW (0x00000005u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG1_TIC_CLEAR_32_LOW_FLEX_IO0_PARITY_ERROR_LOW (0x00000006u)
#define ENUM_IO_TIC_CLEAR_32_LCE_SMC_SQI_REG1_TIC_CLEAR_32_LOW_FLEX_IO1_PARITY_ERROR_LOW (0x00000007u)

/* Register Name        : TIC_ENABLE_32_LCE_SMC_SQI_REG0
 * Register Addr        : 0xC9F2u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_32_LCE_SMC_SQI_REG0_ADDR                                 (0xC9F2u)
#define IO_TIC_ENABLE_32_LCE_SMC_SQI_REG0_RESET_VAL                            (0x00000000u)
#define IO_TIC_ENABLE_32_LCE_SMC_SQI_REG0_MMS                                  (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | TIC_ENABLE_32_RISING     | Interrupts Enable LCE SMC and     | 0x00000000  |
 * |       |                          | SQI. The enumeration table        |             |
 * |       |                          | values indicates the bit          |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | enable, not the value that has    |             |
 * |       |                          | to be written to do the           |             |
 * |       |                          | interrupt enable. Setting the     |             |
 * |       |                          | bit position to one (1) enables   |             |
 * |       |                          | the interrupt.                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-08 | TIC_ENABLE_32_FALLING    | Interrupts Enable LCE SMC and     | 0x00000000  |
 * |       |                          | SQI. The enumeration table        |             |
 * |       |                          | values indicates the bit          |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | enable, not the value that has    |             |
 * |       |                          | to be written to do the           |             |
 * |       |                          | interrupt enable. Setting the     |             |
 * |       |                          | bit position to one (1) enables   |             |
 * |       |                          | the interrupt.                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG0_TIC_ENABLE_32_RISING            (0u)
#define BITL_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG0_TIC_ENABLE_32_RISING            (8u)
#define BITM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG0_TIC_ENABLE_32_RISING            (0x000000FFu)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG0_TIC_ENABLE_32_RISING_LCE_SMC_REGION_COLLISION_RISING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG0_TIC_ENABLE_32_RISING_LCE_SMC_ITERATION_END_RISING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG0_TIC_ENABLE_32_RISING_LCE_SMC_ITERATION_SKIP_RISING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG0_TIC_ENABLE_32_RISING_LCE_SMC_SELECTED_CONFIGURATION_CHANGE_RISING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG0_TIC_ENABLE_32_RISING_LCE_E2B_MESSAGE_DROP_RISING (0x00000004u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG0_TIC_ENABLE_32_RISING_LCE_TRANSPORT_DECODER_WATCHDOG_RISING (0x00000005u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG0_TIC_ENABLE_32_RISING_FLEX_IO0_PARITY_ERROR_RISING (0x00000006u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG0_TIC_ENABLE_32_RISING_FLEX_IO1_PARITY_ERROR_RISING (0x00000007u)

#define BITP_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG0_TIC_ENABLE_32_FALLING           (8u)
#define BITL_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG0_TIC_ENABLE_32_FALLING           (8u)
#define BITM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG0_TIC_ENABLE_32_FALLING           (0x0000FF00u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG0_TIC_ENABLE_32_FALLING_LCE_SMC_REGION_COLLISION_FALLING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG0_TIC_ENABLE_32_FALLING_LCE_SMC_ITERATION_END_FALLING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG0_TIC_ENABLE_32_FALLING_LCE_SMC_ITERATION_SKIP_FALLING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG0_TIC_ENABLE_32_FALLING_LCE_SMC_SELECTED_CONFIGURATION_CHANGE_FALLING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG0_TIC_ENABLE_32_FALLING_LCE_E2B_MESSAGE_DROP_FALLING (0x00000004u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG0_TIC_ENABLE_32_FALLING_LCE_TRANSPORT_DECODER_WATCHDOG_FALLING (0x00000005u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG0_TIC_ENABLE_32_FALLING_FLEX_IO0_PARITY_ERROR_FALLING (0x00000006u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG0_TIC_ENABLE_32_FALLING_FLEX_IO1_PARITY_ERROR_FALLING (0x00000007u)

/* Register Name        : TIC_ENABLE_32_LCE_SMC_SQI_REG1
 * Register Addr        : 0xC9F3u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_32_LCE_SMC_SQI_REG1_ADDR                                 (0xC9F3u)
#define IO_TIC_ENABLE_32_LCE_SMC_SQI_REG1_RESET_VAL                            (0x00000000u)
#define IO_TIC_ENABLE_32_LCE_SMC_SQI_REG1_MMS                                  (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | TIC_ENABLE_32_HIGH       | Interrupts Enable LCE SMC and     | 0x00000000  |
 * |       |                          | SQI. The enumeration table        |             |
 * |       |                          | values indicates the bit          |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | enable, not the value that has    |             |
 * |       |                          | to be written to do the           |             |
 * |       |                          | interrupt enable. Setting the     |             |
 * |       |                          | bit position to one (1) enables   |             |
 * |       |                          | the interrupt.                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-08 | TIC_ENABLE_32_LOW        | Interrupts Enable LCE SMC and     | 0x00000000  |
 * |       |                          | SQI. The enumeration table        |             |
 * |       |                          | values indicates the bit          |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | enable, not the value that has    |             |
 * |       |                          | to be written to do the           |             |
 * |       |                          | interrupt enable. Setting the     |             |
 * |       |                          | bit position to one (1) enables   |             |
 * |       |                          | the interrupt.                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG1_TIC_ENABLE_32_HIGH              (0u)
#define BITL_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG1_TIC_ENABLE_32_HIGH              (8u)
#define BITM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG1_TIC_ENABLE_32_HIGH              (0x000000FFu)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG1_TIC_ENABLE_32_HIGH_LCE_SMC_REGION_COLLISION_HIGH (0x00000000u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG1_TIC_ENABLE_32_HIGH_LCE_SMC_ITERATION_END_HIGH (0x00000001u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG1_TIC_ENABLE_32_HIGH_LCE_SMC_ITERATION_SKIP_HIGH (0x00000002u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG1_TIC_ENABLE_32_HIGH_LCE_SMC_SELECTED_CONFIGURATION_CHANGE_HIGH (0x00000003u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG1_TIC_ENABLE_32_HIGH_LCE_E2B_MESSAGE_DROP_HIGH (0x00000004u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG1_TIC_ENABLE_32_HIGH_LCE_TRANSPORT_DECODER_WATCHDOG_HIGH (0x00000005u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG1_TIC_ENABLE_32_HIGH_FLEX_IO0_PARITY_ERROR_HIGH (0x00000006u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG1_TIC_ENABLE_32_HIGH_FLEX_IO1_PARITY_ERROR_HIGH (0x00000007u)

#define BITP_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG1_TIC_ENABLE_32_LOW               (8u)
#define BITL_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG1_TIC_ENABLE_32_LOW               (8u)
#define BITM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG1_TIC_ENABLE_32_LOW               (0x0000FF00u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG1_TIC_ENABLE_32_LOW_LCE_SMC_REGION_COLLISION_LOW (0x00000000u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG1_TIC_ENABLE_32_LOW_LCE_SMC_ITERATION_END_LOW (0x00000001u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG1_TIC_ENABLE_32_LOW_LCE_SMC_ITERATION_SKIP_LOW (0x00000002u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG1_TIC_ENABLE_32_LOW_LCE_SMC_SELECTED_CONFIGURATION_CHANGE_LOW (0x00000003u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG1_TIC_ENABLE_32_LOW_LCE_E2B_MESSAGE_DROP_LOW (0x00000004u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG1_TIC_ENABLE_32_LOW_LCE_TRANSPORT_DECODER_WATCHDOG_LOW (0x00000005u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG1_TIC_ENABLE_32_LOW_FLEX_IO0_PARITY_ERROR_LOW (0x00000006u)
#define ENUM_IO_TIC_ENABLE_32_LCE_SMC_SQI_REG1_TIC_ENABLE_32_LOW_FLEX_IO1_PARITY_ERROR_LOW (0x00000007u)

/* Register Name        : TIC_ENABLE_33_GPIO0_REG0
 * Register Addr        : 0xC9F4u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_33_GPIO0_REG0_ADDR                                       (0xC9F4u)
#define IO_TIC_ENABLE_33_GPIO0_REG0_RESET_VAL                                  (0x00000000u)
#define IO_TIC_ENABLE_33_GPIO0_REG0_MMS                                        (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_ENABLE_33            | Interrupts enable GPIO. The       | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33                         (0u)
#define BITL_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33                         (16u)
#define BITM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33                         (0x0000FFFFu)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_0_RISING          (0x00000000u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_1_RISING          (0x00000001u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_2_RISING          (0x00000002u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_3_RISING          (0x00000003u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_4_RISING          (0x00000004u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_5_RISING          (0x00000005u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_6_RISING          (0x00000006u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_7_RISING          (0x00000007u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_0_FALLING         (0x00000008u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_1_FALLING         (0x00000009u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_2_FALLING         (0x0000000Au)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_3_FALLING         (0x0000000Bu)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_4_FALLING         (0x0000000Cu)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_5_FALLING         (0x0000000Du)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_6_FALLING         (0x0000000Eu)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_7_FALLING         (0x0000000Fu)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_0_HIGH            (0x00000010u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_1_HIGH            (0x00000011u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_2_HIGH            (0x00000012u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_3_HIGH            (0x00000013u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_4_HIGH            (0x00000014u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_5_HIGH            (0x00000015u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_6_HIGH            (0x00000016u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_7_HIGH            (0x00000017u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_0_LOW             (0x00000018u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_1_LOW             (0x00000019u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_2_LOW             (0x0000001Au)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_3_LOW             (0x0000001Bu)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_4_LOW             (0x0000001Cu)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_5_LOW             (0x0000001Du)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_6_LOW             (0x0000001Eu)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG0_TIC_ENABLE_33_SA_IF_7_LOW             (0x0000001Fu)

/* Register Name        : TIC_ENABLE_33_GPIO0_REG1
 * Register Addr        : 0xC9F5u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_33_GPIO0_REG1_ADDR                                       (0xC9F5u)
#define IO_TIC_ENABLE_33_GPIO0_REG1_RESET_VAL                                  (0x00000000u)
#define IO_TIC_ENABLE_33_GPIO0_REG1_MMS                                        (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_ENABLE_33            | Interrupts enable GPIO. The       | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt enable, not the    |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt enable. Setting  |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33                         (0u)
#define BITL_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33                         (16u)
#define BITM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33                         (0x0000FFFFu)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_0_RISING          (0x00000000u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_1_RISING          (0x00000001u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_2_RISING          (0x00000002u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_3_RISING          (0x00000003u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_4_RISING          (0x00000004u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_5_RISING          (0x00000005u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_6_RISING          (0x00000006u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_7_RISING          (0x00000007u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_0_FALLING         (0x00000008u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_1_FALLING         (0x00000009u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_2_FALLING         (0x0000000Au)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_3_FALLING         (0x0000000Bu)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_4_FALLING         (0x0000000Cu)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_5_FALLING         (0x0000000Du)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_6_FALLING         (0x0000000Eu)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_7_FALLING         (0x0000000Fu)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_0_HIGH            (0x00000010u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_1_HIGH            (0x00000011u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_2_HIGH            (0x00000012u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_3_HIGH            (0x00000013u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_4_HIGH            (0x00000014u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_5_HIGH            (0x00000015u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_6_HIGH            (0x00000016u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_7_HIGH            (0x00000017u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_0_LOW             (0x00000018u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_1_LOW             (0x00000019u)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_2_LOW             (0x0000001Au)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_3_LOW             (0x0000001Bu)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_4_LOW             (0x0000001Cu)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_5_LOW             (0x0000001Du)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_6_LOW             (0x0000001Eu)
#define ENUM_IO_TIC_ENABLE_33_GPIO0_REG1_TIC_ENABLE_33_SA_IF_7_LOW             (0x0000001Fu)

/* Register Name        : TIC_ENABLE_34_GPIO1_REG0
 * Register Addr        : 0xC9F6u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_34_GPIO1_REG0_ADDR                                       (0xC9F6u)
#define IO_TIC_ENABLE_34_GPIO1_REG0_RESET_VAL                                  (0x00000000u)
#define IO_TIC_ENABLE_34_GPIO1_REG0_MMS                                        (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | TIC_ENABLE_34_RISING     | Interrupts Enable GPIO, SSC and   | 0x00000000  |
 * |       |                          | FLEX_IO. The enumeration table    |             |
 * |       |                          | values indicates the bit          |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | enable, not the value that has    |             |
 * |       |                          | to be written to do the           |             |
 * |       |                          | interrupt enable. Setting the     |             |
 * |       |                          | bit position to one (1) enables   |             |
 * |       |                          | the interrupt.                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-08 | TIC_ENABLE_34_FALLING    | Interrupts Enable GPIO, SSC and   | 0x00000000  |
 * |       |                          | FLEX_IO. The enumeration table    |             |
 * |       |                          | values indicates the bit          |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | enable, not the value that has    |             |
 * |       |                          | to be written to do the           |             |
 * |       |                          | interrupt enable. Setting the     |             |
 * |       |                          | bit position to one (1) enables   |             |
 * |       |                          | the interrupt.                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_34_GPIO1_REG0_TIC_ENABLE_34_RISING                  (0u)
#define BITL_IO_TIC_ENABLE_34_GPIO1_REG0_TIC_ENABLE_34_RISING                  (8u)
#define BITM_IO_TIC_ENABLE_34_GPIO1_REG0_TIC_ENABLE_34_RISING                  (0x000000FFu)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG0_TIC_ENABLE_34_RISING_SA_IF_8_RISING   (0x00000000u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG0_TIC_ENABLE_34_RISING_SA_IF_9_RISING   (0x00000001u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG0_TIC_ENABLE_34_RISING_SA_IF_10_RISING  (0x00000002u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG0_TIC_ENABLE_34_RISING_SA_IF_11_RISING  (0x00000003u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG0_TIC_ENABLE_34_RISING_SSC_MODE_CHANGE_FLAG_RISING (0x00000004u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG0_TIC_ENABLE_34_RISING_SSC_UNSUCCESSFUL_RETURN_FUNC_RISING (0x00000005u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG0_TIC_ENABLE_34_RISING_SQI_REACHES_WARNING_RISING (0x00000006u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG0_TIC_ENABLE_34_RISING_SQI_REACHES_BAD_RISING (0x00000007u)

#define BITP_IO_TIC_ENABLE_34_GPIO1_REG0_TIC_ENABLE_34_FALLING                 (8u)
#define BITL_IO_TIC_ENABLE_34_GPIO1_REG0_TIC_ENABLE_34_FALLING                 (8u)
#define BITM_IO_TIC_ENABLE_34_GPIO1_REG0_TIC_ENABLE_34_FALLING                 (0x0000FF00u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG0_TIC_ENABLE_34_FALLING_SA_IF_8_FALLING (0x00000000u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG0_TIC_ENABLE_34_FALLING_SA_IF_9_FALLING (0x00000001u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG0_TIC_ENABLE_34_FALLING_SA_IF_10_FALLING (0x00000002u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG0_TIC_ENABLE_34_FALLING_SA_IF_11_FALLING (0x00000003u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG0_TIC_ENABLE_34_FALLING_SSC_MODE_CHANGE_FLAG_FALLING (0x00000004u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG0_TIC_ENABLE_34_FALLING_SSC_UNSUCCESSFUL_RETURN_FUNC_FALLING (0x00000005u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG0_TIC_ENABLE_34_FALLING_SQI_REACHES_WARNING_FALLING (0x00000006u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG0_TIC_ENABLE_34_FALLING_SQI_REACHES_BAD_FALLING (0x00000007u)

/* Register Name        : TIC_ENABLE_34_GPIO1_REG1
 * Register Addr        : 0xC9F7u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_ENABLE_34_GPIO1_REG1_ADDR                                       (0xC9F7u)
#define IO_TIC_ENABLE_34_GPIO1_REG1_RESET_VAL                                  (0x00000000u)
#define IO_TIC_ENABLE_34_GPIO1_REG1_MMS                                        (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | TIC_ENABLE_34_HIGH       | Interrupts Enable GPIO, SSC and   | 0x00000000  |
 * |       |                          | FLEX_IO. The enumeration table    |             |
 * |       |                          | values indicates the bit          |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | enable, not the value that has    |             |
 * |       |                          | to be written to do the           |             |
 * |       |                          | interrupt enable. Setting the     |             |
 * |       |                          | bit position to one (1) enables   |             |
 * |       |                          | the interrupt.                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-08 | TIC_ENABLE_34_LOW        | Interrupts Enable GPIO, SSC and   | 0x00000000  |
 * |       |                          | FLEX_IO. The enumeration table    |             |
 * |       |                          | values indicates the bit          |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | enable, not the value that has    |             |
 * |       |                          | to be written to do the           |             |
 * |       |                          | interrupt enable. Setting the     |             |
 * |       |                          | bit position to one (1) enables   |             |
 * |       |                          | the interrupt.                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_ENABLE_34_GPIO1_REG1_TIC_ENABLE_34_HIGH                    (0u)
#define BITL_IO_TIC_ENABLE_34_GPIO1_REG1_TIC_ENABLE_34_HIGH                    (8u)
#define BITM_IO_TIC_ENABLE_34_GPIO1_REG1_TIC_ENABLE_34_HIGH                    (0x000000FFu)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG1_TIC_ENABLE_34_HIGH_SA_IF_8_HIGH       (0x00000000u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG1_TIC_ENABLE_34_HIGH_SA_IF_9_HIGH       (0x00000001u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG1_TIC_ENABLE_34_HIGH_SA_IF_10_HIGH      (0x00000002u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG1_TIC_ENABLE_34_HIGH_SA_IF_11_HIGH      (0x00000003u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG1_TIC_ENABLE_34_HIGH_SSC_MODE_CHANGE_FLAG_HIGH (0x00000004u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG1_TIC_ENABLE_34_HIGH_SSC_UNSUCCESSFUL_RETURN_FUNC_HIGH (0x00000005u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG1_TIC_ENABLE_34_HIGH_SQI_REACHES_WARNING_HIGH (0x00000006u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG1_TIC_ENABLE_34_HIGH_SQI_REACHES_BAD_HIGH (0x00000007u)

#define BITP_IO_TIC_ENABLE_34_GPIO1_REG1_TIC_ENABLE_34_LOW                     (8u)
#define BITL_IO_TIC_ENABLE_34_GPIO1_REG1_TIC_ENABLE_34_LOW                     (8u)
#define BITM_IO_TIC_ENABLE_34_GPIO1_REG1_TIC_ENABLE_34_LOW                     (0x0000FF00u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG1_TIC_ENABLE_34_LOW_SA_IF_8_LOW         (0x00000000u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG1_TIC_ENABLE_34_LOW_SA_IF_9_LOW         (0x00000001u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG1_TIC_ENABLE_34_LOW_SA_IF_10_LOW        (0x00000002u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG1_TIC_ENABLE_34_LOW_SA_IF_11_LOW        (0x00000003u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG1_TIC_ENABLE_34_LOW_SSC_MODE_CHANGE_FLAG_LOW (0x00000004u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG1_TIC_ENABLE_34_LOW_SSC_UNSUCCESSFUL_RETURN_FUNC_LOW (0x00000005u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG1_TIC_ENABLE_34_LOW_SQI_REACHES_WARNING_LOW (0x00000006u)
#define ENUM_IO_TIC_ENABLE_34_GPIO1_REG1_TIC_ENABLE_34_LOW_SQI_REACHES_BAD_LOW (0x00000007u)

/* Register Name        : TIC_CLEAR_33_GPIO0_REG0
 * Register Addr        : 0xC9F8u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_33_GPIO0_REG0_ADDR                                        (0xC9F8u)
#define IO_TIC_CLEAR_33_GPIO0_REG0_RESET_VAL                                   (0x00000000u)
#define IO_TIC_CLEAR_33_GPIO0_REG0_MMS                                         (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_CLEAR_33             | Interrupts clear GPIO. The        | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33                           (0u)
#define BITL_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33                           (16u)
#define BITM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33                           (0x0000FFFFu)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_0_RISING            (0x00000000u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_1_RISING            (0x00000001u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_2_RISING            (0x00000002u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_3_RISING            (0x00000003u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_4_RISING            (0x00000004u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_5_RISING            (0x00000005u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_6_RISING            (0x00000006u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_7_RISING            (0x00000007u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_0_FALLING           (0x00000008u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_1_FALLING           (0x00000009u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_2_FALLING           (0x0000000Au)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_3_FALLING           (0x0000000Bu)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_4_FALLING           (0x0000000Cu)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_5_FALLING           (0x0000000Du)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_6_FALLING           (0x0000000Eu)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_7_FALLING           (0x0000000Fu)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_0_HIGH              (0x00000010u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_1_HIGH              (0x00000011u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_2_HIGH              (0x00000012u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_3_HIGH              (0x00000013u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_4_HIGH              (0x00000014u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_5_HIGH              (0x00000015u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_6_HIGH              (0x00000016u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_7_HIGH              (0x00000017u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_0_LOW               (0x00000018u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_1_LOW               (0x00000019u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_2_LOW               (0x0000001Au)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_3_LOW               (0x0000001Bu)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_4_LOW               (0x0000001Cu)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_5_LOW               (0x0000001Du)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_6_LOW               (0x0000001Eu)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG0_TIC_CLEAR_33_SA_IF_7_LOW               (0x0000001Fu)

/* Register Name        : TIC_CLEAR_33_GPIO0_REG1
 * Register Addr        : 0xC9F9u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_33_GPIO0_REG1_ADDR                                        (0xC9F9u)
#define IO_TIC_CLEAR_33_GPIO0_REG1_RESET_VAL                                   (0x00000000u)
#define IO_TIC_CLEAR_33_GPIO0_REG1_MMS                                         (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TIC_CLEAR_33             | Interrupts clear GPIO. The        | 0x00000000  |
 * |       |                          | enumeration table values          |             |
 * |       |                          | indicates the bit position of     |             |
 * |       |                          | each interrupt clear, not the     |             |
 * |       |                          | value that has to be written to   |             |
 * |       |                          | do the interrupt clear. Setting   |             |
 * |       |                          | the bit position to one (1)       |             |
 * |       |                          | enables the interrupt.            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33                           (0u)
#define BITL_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33                           (16u)
#define BITM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33                           (0x0000FFFFu)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_0_RISING            (0x00000000u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_1_RISING            (0x00000001u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_2_RISING            (0x00000002u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_3_RISING            (0x00000003u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_4_RISING            (0x00000004u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_5_RISING            (0x00000005u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_6_RISING            (0x00000006u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_7_RISING            (0x00000007u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_0_FALLING           (0x00000008u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_1_FALLING           (0x00000009u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_2_FALLING           (0x0000000Au)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_3_FALLING           (0x0000000Bu)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_4_FALLING           (0x0000000Cu)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_5_FALLING           (0x0000000Du)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_6_FALLING           (0x0000000Eu)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_7_FALLING           (0x0000000Fu)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_0_HIGH              (0x00000010u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_1_HIGH              (0x00000011u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_2_HIGH              (0x00000012u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_3_HIGH              (0x00000013u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_4_HIGH              (0x00000014u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_5_HIGH              (0x00000015u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_6_HIGH              (0x00000016u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_7_HIGH              (0x00000017u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_0_LOW               (0x00000018u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_1_LOW               (0x00000019u)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_2_LOW               (0x0000001Au)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_3_LOW               (0x0000001Bu)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_4_LOW               (0x0000001Cu)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_5_LOW               (0x0000001Du)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_6_LOW               (0x0000001Eu)
#define ENUM_IO_TIC_CLEAR_33_GPIO0_REG1_TIC_CLEAR_33_SA_IF_7_LOW               (0x0000001Fu)

/* Register Name        : TIC_CLEAR_34_GPIO1_REG0
 * Register Addr        : 0xC9FAu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_34_GPIO1_REG0_ADDR                                        (0xC9FAu)
#define IO_TIC_CLEAR_34_GPIO1_REG0_RESET_VAL                                   (0x00000000u)
#define IO_TIC_CLEAR_34_GPIO1_REG0_MMS                                         (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | TIC_CLEAR_34_RISING      | Interrupts Clear GPIO, SSC and    | 0x00000000  |
 * |       |                          | FLEX_IO. The enumeration table    |             |
 * |       |                          | values indicates the bit          |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | clear, not the value that has to  |             |
 * |       |                          | be written to do the interrupt    |             |
 * |       |                          | clear. Setting the bit position   |             |
 * |       |                          | to one (1) enables the            |             |
 * |       |                          | interrupt.                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-08 | TIC_CLEAR_34_FALLING     | Interrupts Clear GPIO, SSC and    | 0x00000000  |
 * |       |                          | FLEX_IO. The enumeration table    |             |
 * |       |                          | values indicates the bit          |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | clear, not the value that has to  |             |
 * |       |                          | be written to do the interrupt    |             |
 * |       |                          | clear. Setting the bit position   |             |
 * |       |                          | to one (1) enables the            |             |
 * |       |                          | interrupt.                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_34_GPIO1_REG0_TIC_CLEAR_34_RISING                    (0u)
#define BITL_IO_TIC_CLEAR_34_GPIO1_REG0_TIC_CLEAR_34_RISING                    (8u)
#define BITM_IO_TIC_CLEAR_34_GPIO1_REG0_TIC_CLEAR_34_RISING                    (0x000000FFu)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG0_TIC_CLEAR_34_RISING_SA_IF_8_RISING     (0x00000000u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG0_TIC_CLEAR_34_RISING_SA_IF_9_RISING     (0x00000001u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG0_TIC_CLEAR_34_RISING_SA_IF_10_RISING    (0x00000002u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG0_TIC_CLEAR_34_RISING_SA_IF_11_RISING    (0x00000003u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG0_TIC_CLEAR_34_RISING_SSC_MODE_CHANGE_FLAG_RISING (0x00000004u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG0_TIC_CLEAR_34_RISING_SSC_UNSUCCESSFUL_RETURN_FUNC_RISING (0x00000005u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG0_TIC_CLEAR_34_RISING_SQI_REACHES_WARNING_RISING (0x00000006u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG0_TIC_CLEAR_34_RISING_SQI_REACHES_BAD_RISING (0x00000007u)

#define BITP_IO_TIC_CLEAR_34_GPIO1_REG0_TIC_CLEAR_34_FALLING                   (8u)
#define BITL_IO_TIC_CLEAR_34_GPIO1_REG0_TIC_CLEAR_34_FALLING                   (8u)
#define BITM_IO_TIC_CLEAR_34_GPIO1_REG0_TIC_CLEAR_34_FALLING                   (0x0000FF00u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG0_TIC_CLEAR_34_FALLING_SA_IF_8_FALLING   (0x00000000u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG0_TIC_CLEAR_34_FALLING_SA_IF_9_FALLING   (0x00000001u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG0_TIC_CLEAR_34_FALLING_SA_IF_10_FALLING  (0x00000002u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG0_TIC_CLEAR_34_FALLING_SA_IF_11_FALLING  (0x00000003u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG0_TIC_CLEAR_34_FALLING_SSC_MODE_CHANGE_FLAG_FALLING (0x00000004u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG0_TIC_CLEAR_34_FALLING_SSC_UNSUCCESSFUL_RETURN_FUNC_FALLING (0x00000005u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG0_TIC_CLEAR_34_FALLING_SQI_REACHES_WARNING_FALLING (0x00000006u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG0_TIC_CLEAR_34_FALLING_SQI_REACHES_BAD_FALLING (0x00000007u)

/* Register Name        : TIC_CLEAR_34_GPIO1_REG1
 * Register Addr        : 0xC9FBu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_TIC_CLEAR_34_GPIO1_REG1_ADDR                                        (0xC9FBu)
#define IO_TIC_CLEAR_34_GPIO1_REG1_RESET_VAL                                   (0x00000000u)
#define IO_TIC_CLEAR_34_GPIO1_REG1_MMS                                         (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | TIC_CLEAR_34_HIGH        | Interrupts Clear GPIO, SSC and    | 0x00000000  |
 * |       |                          | FLEX_IO. The enumeration table    |             |
 * |       |                          | values indicates the bit          |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | clear, not the value that has to  |             |
 * |       |                          | be written to do the interrupt    |             |
 * |       |                          | clear. Setting the bit position   |             |
 * |       |                          | to one (1) enables the            |             |
 * |       |                          | interrupt.                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-08 | TIC_CLEAR_34_LOW         | Interrupts Clear GPIO, SSC and    | 0x00000000  |
 * |       |                          | FLEX_IO. The enumeration table    |             |
 * |       |                          | values indicates the bit          |             |
 * |       |                          | position of each interrupt        |             |
 * |       |                          | clear, not the value that has to  |             |
 * |       |                          | be written to do the interrupt    |             |
 * |       |                          | clear. Setting the bit position   |             |
 * |       |                          | to one (1) enables the            |             |
 * |       |                          | interrupt.                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_TIC_CLEAR_34_GPIO1_REG1_TIC_CLEAR_34_HIGH                      (0u)
#define BITL_IO_TIC_CLEAR_34_GPIO1_REG1_TIC_CLEAR_34_HIGH                      (8u)
#define BITM_IO_TIC_CLEAR_34_GPIO1_REG1_TIC_CLEAR_34_HIGH                      (0x000000FFu)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG1_TIC_CLEAR_34_HIGH_SA_IF_8_HIGH         (0x00000000u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG1_TIC_CLEAR_34_HIGH_SA_IF_9_HIGH         (0x00000001u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG1_TIC_CLEAR_34_HIGH_SA_IF_10_HIGH        (0x00000002u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG1_TIC_CLEAR_34_HIGH_SA_IF_11_HIGH        (0x00000003u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG1_TIC_CLEAR_34_HIGH_SSC_MODE_CHANGE_FLAG_HIGH (0x00000004u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG1_TIC_CLEAR_34_HIGH_SSC_UNSUCCESSFUL_RETURN_FUNC_HIGH (0x00000005u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG1_TIC_CLEAR_34_HIGH_SQI_REACHES_WARNING_HIGH (0x00000006u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG1_TIC_CLEAR_34_HIGH_SQI_REACHES_BAD_HIGH (0x00000007u)

#define BITP_IO_TIC_CLEAR_34_GPIO1_REG1_TIC_CLEAR_34_LOW                       (8u)
#define BITL_IO_TIC_CLEAR_34_GPIO1_REG1_TIC_CLEAR_34_LOW                       (8u)
#define BITM_IO_TIC_CLEAR_34_GPIO1_REG1_TIC_CLEAR_34_LOW                       (0x0000FF00u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG1_TIC_CLEAR_34_LOW_SA_IF_8_LOW           (0x00000000u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG1_TIC_CLEAR_34_LOW_SA_IF_9_LOW           (0x00000001u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG1_TIC_CLEAR_34_LOW_SA_IF_10_LOW          (0x00000002u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG1_TIC_CLEAR_34_LOW_SA_IF_11_LOW          (0x00000003u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG1_TIC_CLEAR_34_LOW_SSC_MODE_CHANGE_FLAG_LOW (0x00000004u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG1_TIC_CLEAR_34_LOW_SSC_UNSUCCESSFUL_RETURN_FUNC_LOW (0x00000005u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG1_TIC_CLEAR_34_LOW_SQI_REACHES_WARNING_LOW (0x00000006u)
#define ENUM_IO_TIC_CLEAR_34_GPIO1_REG1_TIC_CLEAR_34_LOW_SQI_REACHES_BAD_LOW   (0x00000007u)

/* Register Name        : UMC_READBACKS0
 * Register Addr        : 0xC9FCu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_UMC_READBACKS0_ADDR                                                 (0xC9FCu)
#define IO_UMC_READBACKS0_RESET_VAL                                            (0x00000000u)
#define IO_UMC_READBACKS0_MMS                                                  (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 12-00 | umc_last_corrupted_word_a| Physical memory address of the    | 0x00000000  |
 * |       |                          | last memory word found corrupted  |             |
 * |       |                          | by the UMC.                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13    | umc_last_corrupted_word_i| Logical index of the last memory  | 0x00000000  |
 * |       |                          | word found corrupted by the UMC.  |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_UMC_READBACKS0_UMC_LAST_CORRUPTED_WORD_ADDRESS_RB              (0u)
#define BITL_IO_UMC_READBACKS0_UMC_LAST_CORRUPTED_WORD_ADDRESS_RB              (13u)
#define BITM_IO_UMC_READBACKS0_UMC_LAST_CORRUPTED_WORD_ADDRESS_RB              (0x00001FFFu)

#define BITP_IO_UMC_READBACKS0_UMC_LAST_CORRUPTED_WORD_INDEX_RB                (13u)
#define BITL_IO_UMC_READBACKS0_UMC_LAST_CORRUPTED_WORD_INDEX_RB                (1u)
#define BITM_IO_UMC_READBACKS0_UMC_LAST_CORRUPTED_WORD_INDEX_RB                (0x2000u)

/* Register Name        : UMC_READBACKS1
 * Register Addr        : 0xC9FDu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_UMC_READBACKS1_ADDR                                                 (0xC9FDu)
#define IO_UMC_READBACKS1_RESET_VAL                                            (0x00000000u)
#define IO_UMC_READBACKS1_MMS                                                  (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | umc_unrecoverable_error_c| Number of unrecoverable memory    | 0x00000000  |
 * |       |                          | errors detected by the UMC since  |             |
 * |       |                          | reset.                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_UMC_READBACKS1_UMC_UNRECOVERABLE_ERROR_COUNT_RB                (0u)
#define BITL_IO_UMC_READBACKS1_UMC_UNRECOVERABLE_ERROR_COUNT_RB                (8u)
#define BITM_IO_UMC_READBACKS1_UMC_UNRECOVERABLE_ERROR_COUNT_RB                (0x000000FFu)

#endif /* ADI_IO_LV_REG_H */
