/**
 * Copyright © 2026 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/********************************************************************************
 *   @file   adi_ao_reg.h
 *   @brief  This header file provides register descriptions for the
 *           Always-On Domain.
 *******************************************************************************/

#ifndef ADI_AO_REG_H
#define ADI_AO_REG_H

#define AO_NUM_REGS                                                (2u)

/* Register Name        : CONFIGURATION_FIELDS_0
 * Register Addr        : 0xB702u
 * Register Reset Value : 0x00000023u
 * Register MMS         : 0xAu
 */

#define AO_CONFIGURATION_FIELDS_0_ADDR                             (0xB702u)
#define AO_CONFIGURATION_FIELDS_0_RESET_VAL                        (0x00000023u)
#define AO_CONFIGURATION_FIELDS_0_MMS                              (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 02-00 | CFG_DUV_THRESHOLD        | Deep under voltage threshold      | 0x00000003  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 05-03 | CFG_UV_THRESHOLD         | Under voltage threshold           | 0x00000004  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 6     | CFG_WAKE_PIN_POL         | Polarity of the wake pin.         | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_AO_CONFIGURATION_FIELDS_0_CFG_DUV_THRESHOLD           (0u)
#define BITL_AO_CONFIGURATION_FIELDS_0_CFG_DUV_THRESHOLD           (3u)
#define BITM_AO_CONFIGURATION_FIELDS_0_CFG_DUV_THRESHOLD           (0x00000007u)
#define ENUM_AO_CONFIGURATION_FIELDS_0_CFG_DUV_THRESHOLD_ENUM000   (0x00000000u)
#define ENUM_AO_CONFIGURATION_FIELDS_0_CFG_DUV_THRESHOLD_ENUM001   (0x00000001u)
#define ENUM_AO_CONFIGURATION_FIELDS_0_CFG_DUV_THRESHOLD_ENUM002   (0x00000002u)
#define ENUM_AO_CONFIGURATION_FIELDS_0_CFG_DUV_THRESHOLD_ENUM003   (0x00000003u)
#define ENUM_AO_CONFIGURATION_FIELDS_0_CFG_DUV_THRESHOLD_ENUM004   (0x00000004u)
#define ENUM_AO_CONFIGURATION_FIELDS_0_CFG_DUV_THRESHOLD_ENUM005   (0x00000005u)
#define ENUM_AO_CONFIGURATION_FIELDS_0_CFG_DUV_THRESHOLD_ENUM006   (0x00000006u)
#define ENUM_AO_CONFIGURATION_FIELDS_0_CFG_DUV_THRESHOLD_ENUM007   (0x00000007u)

#define BITP_AO_CONFIGURATION_FIELDS_0_CFG_UV_THRESHOLD            (3u)
#define BITL_AO_CONFIGURATION_FIELDS_0_CFG_UV_THRESHOLD            (3u)
#define BITM_AO_CONFIGURATION_FIELDS_0_CFG_UV_THRESHOLD            (0x00000038u)
#define ENUM_AO_CONFIGURATION_FIELDS_0_CFG_UV_THRESHOLD_ENUM000    (0x00000000u)
#define ENUM_AO_CONFIGURATION_FIELDS_0_CFG_UV_THRESHOLD_ENUM001    (0x00000001u)
#define ENUM_AO_CONFIGURATION_FIELDS_0_CFG_UV_THRESHOLD_ENUM002    (0x00000002u)
#define ENUM_AO_CONFIGURATION_FIELDS_0_CFG_UV_THRESHOLD_ENUM003    (0x00000003u)
#define ENUM_AO_CONFIGURATION_FIELDS_0_CFG_UV_THRESHOLD_ENUM004    (0x00000004u)
#define ENUM_AO_CONFIGURATION_FIELDS_0_CFG_UV_THRESHOLD_ENUM005    (0x00000005u)
#define ENUM_AO_CONFIGURATION_FIELDS_0_CFG_UV_THRESHOLD_ENUM006    (0x00000006u)
#define ENUM_AO_CONFIGURATION_FIELDS_0_CFG_UV_THRESHOLD_ENUM007    (0x00000007u)

#define BITP_AO_CONFIGURATION_FIELDS_0_CFG_WAKE_PIN_POL            (6u)
#define BITL_AO_CONFIGURATION_FIELDS_0_CFG_WAKE_PIN_POL            (1u)
#define BITM_AO_CONFIGURATION_FIELDS_0_CFG_WAKE_PIN_POL            (0x40u)
#define ENUM_AO_CONFIGURATION_FIELDS_0_CFG_WAKE_PIN_POL_ENUM000    (0x00000000u)
#define ENUM_AO_CONFIGURATION_FIELDS_0_CFG_WAKE_PIN_POL_ENUM001    (0x00000001u)

/* Register Name        : CONFIGURATION_FIELDS_1
 * Register Addr        : 0xB703u
 * Register Reset Value : 0x00000004u
 * Register MMS         : 0xAu
 */

#define AO_CONFIGURATION_FIELDS_1_ADDR                             (0xB703u)
#define AO_CONFIGURATION_FIELDS_1_RESET_VAL                        (0x00000004u)
#define AO_CONFIGURATION_FIELDS_1_MMS                              (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 02-00 | CFG_OV_THRESHOLD         | Over voltage threshold            | 0x00000004  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 4     | CFG_VBAT_DEEP_UV_FLAG_EN | Enable Vbat monitor for deep      | 0x00000000  |
 * |       |                          | undervoltage                      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 5     | CFG_VBAT_UV_FLAG_EN      | Enable Vbat monitor for long      | 0x00000000  |
 * |       |                          | term undervoltage                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 6     | CFG_VBAT_OV_FLAG_EN      | Enable Vbat monitor for           | 0x00000000  |
 * |       |                          | overvoltage                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 7     | CFG_VALID                | Validate all configuration (cfg)  | 0x00000000  |
 * |       |                          | controls                          |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_AO_CONFIGURATION_FIELDS_1_CFG_OV_THRESHOLD            (0u)
#define BITL_AO_CONFIGURATION_FIELDS_1_CFG_OV_THRESHOLD            (3u)
#define BITM_AO_CONFIGURATION_FIELDS_1_CFG_OV_THRESHOLD            (0x00000007u)
#define ENUM_AO_CONFIGURATION_FIELDS_1_CFG_OV_THRESHOLD_ENUM000    (0x00000000u)
#define ENUM_AO_CONFIGURATION_FIELDS_1_CFG_OV_THRESHOLD_ENUM001    (0x00000001u)
#define ENUM_AO_CONFIGURATION_FIELDS_1_CFG_OV_THRESHOLD_ENUM002    (0x00000002u)
#define ENUM_AO_CONFIGURATION_FIELDS_1_CFG_OV_THRESHOLD_ENUM003    (0x00000003u)
#define ENUM_AO_CONFIGURATION_FIELDS_1_CFG_OV_THRESHOLD_ENUM004    (0x00000004u)
#define ENUM_AO_CONFIGURATION_FIELDS_1_CFG_OV_THRESHOLD_ENUM005    (0x00000005u)
#define ENUM_AO_CONFIGURATION_FIELDS_1_CFG_OV_THRESHOLD_ENUM006    (0x00000006u)
#define ENUM_AO_CONFIGURATION_FIELDS_1_CFG_OV_THRESHOLD_ENUM007    (0x00000007u)

#define BITP_AO_CONFIGURATION_FIELDS_1_CFG_VBAT_DEEP_UV_FLAG_EN    (4u)
#define BITL_AO_CONFIGURATION_FIELDS_1_CFG_VBAT_DEEP_UV_FLAG_EN    (1u)
#define BITM_AO_CONFIGURATION_FIELDS_1_CFG_VBAT_DEEP_UV_FLAG_EN    (0x10u)
#define ENUM_AO_CONFIGURATION_FIELDS_1_CFG_VBAT_DEEP_UV_FLAG_EN_DISABLE (0x00000000u)
#define ENUM_AO_CONFIGURATION_FIELDS_1_CFG_VBAT_DEEP_UV_FLAG_EN_ENABLE (0x00000001u)

#define BITP_AO_CONFIGURATION_FIELDS_1_CFG_VBAT_UV_FLAG_EN         (5u)
#define BITL_AO_CONFIGURATION_FIELDS_1_CFG_VBAT_UV_FLAG_EN         (1u)
#define BITM_AO_CONFIGURATION_FIELDS_1_CFG_VBAT_UV_FLAG_EN         (0x20u)
#define ENUM_AO_CONFIGURATION_FIELDS_1_CFG_VBAT_UV_FLAG_EN_DISABLE (0x00000000u)
#define ENUM_AO_CONFIGURATION_FIELDS_1_CFG_VBAT_UV_FLAG_EN_ENABLE  (0x00000001u)

#define BITP_AO_CONFIGURATION_FIELDS_1_CFG_VBAT_OV_FLAG_EN         (6u)
#define BITL_AO_CONFIGURATION_FIELDS_1_CFG_VBAT_OV_FLAG_EN         (1u)
#define BITM_AO_CONFIGURATION_FIELDS_1_CFG_VBAT_OV_FLAG_EN         (0x40u)
#define ENUM_AO_CONFIGURATION_FIELDS_1_CFG_VBAT_OV_FLAG_EN_DISABLE (0x00000000u)
#define ENUM_AO_CONFIGURATION_FIELDS_1_CFG_VBAT_OV_FLAG_EN_ENABLE  (0x00000001u)

#define BITP_AO_CONFIGURATION_FIELDS_1_CFG_VALID                   (7u)
#define BITL_AO_CONFIGURATION_FIELDS_1_CFG_VALID                   (1u)
#define BITM_AO_CONFIGURATION_FIELDS_1_CFG_VALID                   (0x80u)
#define ENUM_AO_CONFIGURATION_FIELDS_1_CFG_VALID_DISABLE           (0x00000000u)
#define ENUM_AO_CONFIGURATION_FIELDS_1_CFG_VALID_ENABLE            (0x00000001u)

#endif /* ADI_AO_REG_H */
