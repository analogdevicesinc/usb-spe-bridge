/**
 * Copyright © 2026 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/****************************************************************************
 *   @file   adi_phy_oa_reg.h
 *   @brief  This header file provides register descriptions for the
 *           PHY Open Alliance.
 ***************************************************************************/

#ifndef ADI_PHY_OA_REG_H
#define ADI_PHY_OA_REG_H

#define PHY_OA_NUM_REGS                                        (41u)

/* Register Name        : TWEAKS_1
 * Register Addr        : 0x0000u
 * Register Reset Value : 0x000000C0u
 * Register MMS         : 4u
 */

#define PHY_OA_TWEAKS_1_ADDR                                   (0x0000u)
#define PHY_OA_TWEAKS_1_RESET_VAL                              (0x000000C0u)
#define PHY_OA_TWEAKS_1_MMS                                    (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 10    | NO_COL_COUNT             | Disable collision detection       | 0x00000000  |
 * |       |                          | counting in PLCA mode             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12    | txc_auto_reset_cmd_on_stu| Automatically send reset          | 0x00000000  |
 * |       |                          | commands to the 3pin interface    |             |
 * |       |                          | on the other die, if the RX/ED    |             |
 * |       |                          | pins are detected static (with    |             |
 * |       |                          | ED=1) for 1us.                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_TWEAKS_1_NO_COL_COUNT                      (10u)
#define BITL_PHY_OA_TWEAKS_1_NO_COL_COUNT                      (1u)
#define BITM_PHY_OA_TWEAKS_1_NO_COL_COUNT                      (0x0400u)
#define ENUM_PHY_OA_TWEAKS_1_NO_COL_COUNT_ENUM000              (0x00000000u)
#define ENUM_PHY_OA_TWEAKS_1_NO_COL_COUNT_ENUM001              (0x00000001u)

#define BITP_PHY_OA_TWEAKS_1_TXC_AUTO_RESET_CMD_ON_STUCK_RX_ED_DIS (12u)
#define BITL_PHY_OA_TWEAKS_1_TXC_AUTO_RESET_CMD_ON_STUCK_RX_ED_DIS (1u)
#define BITM_PHY_OA_TWEAKS_1_TXC_AUTO_RESET_CMD_ON_STUCK_RX_ED_DIS (0x1000u)
#define ENUM_PHY_OA_TWEAKS_1_TXC_AUTO_RESET_CMD_ON_STUCK_RX_ED_DIS_ENUM000 (0x00000000u)
#define ENUM_PHY_OA_TWEAKS_1_TXC_AUTO_RESET_CMD_ON_STUCK_RX_ED_DIS_ENUM001 (0x00000001u)

/* Register Name        : MANUAL_CTRL_REG_1
 * Register Addr        : 0x0003u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 4u
 */

#define PHY_OA_MANUAL_CTRL_REG_1_ADDR                          (0x0003u)
#define PHY_OA_MANUAL_CTRL_REG_1_RESET_VAL                     (0x00000000u)
#define PHY_OA_MANUAL_CTRL_REG_1_MMS                           (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 9     | PD_DLL                   | DLL power down                    | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 10    | PD_XTAL_BUFFER           | XTAL buffer power down            | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_MANUAL_CTRL_REG_1_PD_DLL                   (9u)
#define BITL_PHY_OA_MANUAL_CTRL_REG_1_PD_DLL                   (1u)
#define BITM_PHY_OA_MANUAL_CTRL_REG_1_PD_DLL                   (0x0200u)
#define ENUM_PHY_OA_MANUAL_CTRL_REG_1_PD_DLL_ENUM000           (0x00000000u)
#define ENUM_PHY_OA_MANUAL_CTRL_REG_1_PD_DLL_ENUM001           (0x00000001u)

#define BITP_PHY_OA_MANUAL_CTRL_REG_1_PD_XTAL_BUFFER           (10u)
#define BITL_PHY_OA_MANUAL_CTRL_REG_1_PD_XTAL_BUFFER           (1u)
#define BITM_PHY_OA_MANUAL_CTRL_REG_1_PD_XTAL_BUFFER           (0x0400u)
#define ENUM_PHY_OA_MANUAL_CTRL_REG_1_PD_XTAL_BUFFER_ENUM000   (0x00000000u)
#define ENUM_PHY_OA_MANUAL_CTRL_REG_1_PD_XTAL_BUFFER_ENUM001   (0x00000001u)

/* Register Name        : PLCA_EXT
 * Register Addr        : 0x000Fu
 * Register Reset Value : 0x00000800u
 * Register MMS         : 4u
 */

#define PHY_OA_PLCA_EXT_ADDR                                   (0x000Fu)
#define PHY_OA_PLCA_EXT_RESET_VAL                              (0x00000800u)
#define PHY_OA_PLCA_EXT_MMS                                    (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | PLCALEADER               | When PLCALEADEREN is asserted,    | 0x00000000  |
 * |       |                          | this bit elects the node as PLCA  |             |
 * |       |                          | leader despite the value of its   |             |
 * |       |                          | assigned node ID                  |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | PLCALEADEREN             | When asserted high (1), this bit  | 0x00000000  |
 * |       |                          | allows electing a node with ID    |             |
 * |       |                          | other than 0 as the PLCA leader.  |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12    | PLCAPRECEN               | This setting enables (1) or       | 0x00000000  |
 * |       |                          | disables (0) the PLCA precedence  |             |
 * |       |                          | mode feature.                     |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_PLCA_EXT_PLCALEADER                        (0u)
#define BITL_PHY_OA_PLCA_EXT_PLCALEADER                        (1u)
#define BITM_PHY_OA_PLCA_EXT_PLCALEADER                        (0x01u)
#define ENUM_PHY_OA_PLCA_EXT_PLCALEADER_NO_PLCA_LEADER         (0x00000000u)
#define ENUM_PHY_OA_PLCA_EXT_PLCALEADER_PLCA_LEADER            (0x00000001u)

#define BITP_PHY_OA_PLCA_EXT_PLCALEADEREN                      (1u)
#define BITL_PHY_OA_PLCA_EXT_PLCALEADEREN                      (1u)
#define BITM_PHY_OA_PLCA_EXT_PLCALEADEREN                      (0x02u)
#define ENUM_PHY_OA_PLCA_EXT_PLCALEADEREN_DISABLE              (0x00000000u)
#define ENUM_PHY_OA_PLCA_EXT_PLCALEADEREN_ENABLE               (0x00000001u)

#define BITP_PHY_OA_PLCA_EXT_PLCAPRECEN                        (12u)
#define BITL_PHY_OA_PLCA_EXT_PLCAPRECEN                        (1u)
#define BITM_PHY_OA_PLCA_EXT_PLCAPRECEN                        (0x1000u)
#define ENUM_PHY_OA_PLCA_EXT_PLCAPRECEN_DISABLE                (0x00000000u)
#define ENUM_PHY_OA_PLCA_EXT_PLCAPRECEN_ENABLE                 (0x00000001u)

/* Register Name        : PLCA_CTRL2
 * Register Addr        : 0x0018u
 * Register Reset Value : 0x0000FFFFu
 * Register MMS         : 4u
 */

#define PHY_OA_PLCA_CTRL2_ADDR                                 (0x0018u)
#define PHY_OA_PLCA_CTRL2_RESET_VAL                            (0x0000FFFFu)
#define PHY_OA_PLCA_CTRL2_MMS                                  (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | PLCALOCALID1             | Multiple PLCA IDs - ID1           | 0x000000ff  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-08 | PLCALOCALID2             | Multiple PLCA IDs - ID2           | 0x000000ff  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_PLCA_CTRL2_PLCALOCALID1                    (0u)
#define BITL_PHY_OA_PLCA_CTRL2_PLCALOCALID1                    (8u)
#define BITM_PHY_OA_PLCA_CTRL2_PLCALOCALID1                    (0x000000FFu)

#define BITP_PHY_OA_PLCA_CTRL2_PLCALOCALID2                    (8u)
#define BITL_PHY_OA_PLCA_CTRL2_PLCALOCALID2                    (8u)
#define BITM_PHY_OA_PLCA_CTRL2_PLCALOCALID2                    (0x0000FF00u)

/* Register Name        : PLCA_CTRL3
 * Register Addr        : 0x0019u
 * Register Reset Value : 0x0000FFFFu
 * Register MMS         : 4u
 */

#define PHY_OA_PLCA_CTRL3_ADDR                                 (0x0019u)
#define PHY_OA_PLCA_CTRL3_RESET_VAL                            (0x0000FFFFu)
#define PHY_OA_PLCA_CTRL3_MMS                                  (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | PLCALOCALID3             | Multiple PLCA IDs - ID3           | 0x000000ff  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-08 | PLCALOCALID4             | Multiple PLCA IDs - ID4           | 0x000000ff  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_PLCA_CTRL3_PLCALOCALID3                    (0u)
#define BITL_PHY_OA_PLCA_CTRL3_PLCALOCALID3                    (8u)
#define BITM_PHY_OA_PLCA_CTRL3_PLCALOCALID3                    (0x000000FFu)

#define BITP_PHY_OA_PLCA_CTRL3_PLCALOCALID4                    (8u)
#define BITL_PHY_OA_PLCA_CTRL3_PLCALOCALID4                    (8u)
#define BITM_PHY_OA_PLCA_CTRL3_PLCALOCALID4                    (0x0000FF00u)

/* Register Name        : PLCA_CTRL4
 * Register Addr        : 0x001Au
 * Register Reset Value : 0x0000FFFFu
 * Register MMS         : 4u
 */

#define PHY_OA_PLCA_CTRL4_ADDR                                 (0x001Au)
#define PHY_OA_PLCA_CTRL4_RESET_VAL                            (0x0000FFFFu)
#define PHY_OA_PLCA_CTRL4_MMS                                  (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | PLCALOCALID5             | Multiple PLCA IDs - ID5           | 0x000000ff  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-08 | PLCALOCALID6             | Multiple PLCA IDs - ID6           | 0x000000ff  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_PLCA_CTRL4_PLCALOCALID5                    (0u)
#define BITL_PHY_OA_PLCA_CTRL4_PLCALOCALID5                    (8u)
#define BITM_PHY_OA_PLCA_CTRL4_PLCALOCALID5                    (0x000000FFu)

#define BITP_PHY_OA_PLCA_CTRL4_PLCALOCALID6                    (8u)
#define BITL_PHY_OA_PLCA_CTRL4_PLCALOCALID6                    (8u)
#define BITM_PHY_OA_PLCA_CTRL4_PLCALOCALID6                    (0x0000FF00u)

/* Register Name        : PLCA_CTRL5
 * Register Addr        : 0x001Bu
 * Register Reset Value : 0x000001FFu
 * Register MMS         : 4u
 */

#define PHY_OA_PLCA_CTRL5_ADDR                                 (0x001Bu)
#define PHY_OA_PLCA_CTRL5_RESET_VAL                            (0x000001FFu)
#define PHY_OA_PLCA_CTRL5_MMS                                  (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | PLCALOCALID7             | Multiple PLCA IDs - ID7           | 0x000000ff  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-08 | PLCALOCALID_EN           | Bit 0 of this field enable        | 0x00000001  |
 * |       |                          | PLCALOCALID, bit 1 enables        |             |
 * |       |                          | PLCALOCALID1, bit 2 enable        |             |
 * |       |                          | PLCALOCALID2 and so on etc.       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_PLCA_CTRL5_PLCALOCALID7                    (0u)
#define BITL_PHY_OA_PLCA_CTRL5_PLCALOCALID7                    (8u)
#define BITM_PHY_OA_PLCA_CTRL5_PLCALOCALID7                    (0x000000FFu)

#define BITP_PHY_OA_PLCA_CTRL5_PLCALOCALID_EN                  (8u)
#define BITL_PHY_OA_PLCA_CTRL5_PLCALOCALID_EN                  (8u)
#define BITM_PHY_OA_PLCA_CTRL5_PLCALOCALID_EN                  (0x0000FF00u)
#define ENUM_PHY_OA_PLCA_CTRL5_PLCALOCALID_EN_PLCALOCALID_0_EN (0x00000008u)
#define ENUM_PHY_OA_PLCA_CTRL5_PLCALOCALID_EN_PLCALOCALID_1_EN (0x00000009u)
#define ENUM_PHY_OA_PLCA_CTRL5_PLCALOCALID_EN_PLCALOCALID_2_EN (0x0000000Au)
#define ENUM_PHY_OA_PLCA_CTRL5_PLCALOCALID_EN_PLCALOCALID_3_EN (0x0000000Bu)
#define ENUM_PHY_OA_PLCA_CTRL5_PLCALOCALID_EN_PLCALOCALID_4_EN (0x0000000Cu)
#define ENUM_PHY_OA_PLCA_CTRL5_PLCALOCALID_EN_PLCALOCALID_5_EN (0x0000000Du)
#define ENUM_PHY_OA_PLCA_CTRL5_PLCALOCALID_EN_PLCALOCALID_6_EN (0x0000000Eu)
#define ENUM_PHY_OA_PLCA_CTRL5_PLCALOCALID_EN_PLCALOCALID_7_EN (0x0000000Fu)

/* Register Name        : PLCA_LUT_REG0
 * Register Addr        : 0x001Cu
 * Register Reset Value : 0x00003210u
 * Register MMS         : 4u
 */

#define PHY_OA_PLCA_LUT_REG0_ADDR                              (0x001Cu)
#define PHY_OA_PLCA_LUT_REG0_RESET_VAL                         (0x00003210u)
#define PHY_OA_PLCA_LUT_REG0_MMS                               (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 03-00 | PLCA_LUT_CODE0           | Value of the plcaLocalID0[3:0]    | 0x00000000  |
 * |       |                          | when the 4 SAIF device pins       |             |
 * |       |                          | represent code 0                  |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 07-04 | PLCA_LUT_CODE1           | Value of the plcaLocalID0[3:0]    | 0x00000001  |
 * |       |                          | when the 4 SAIF device pins       |             |
 * |       |                          | represent code 1                  |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11-08 | PLCA_LUT_CODE2           | Value of the plcaLocalID0[3:0]    | 0x00000002  |
 * |       |                          | when the 4 SAIF device pins       |             |
 * |       |                          | represent code 2                  |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-12 | PLCA_LUT_CODE3           | Value of the plcaLocalID0[3:0]    | 0x00000003  |
 * |       |                          | when the 4 SAIF device pins       |             |
 * |       |                          | represent code 3                  |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_PLCA_LUT_REG0_PLCA_LUT_CODE0               (0u)
#define BITL_PHY_OA_PLCA_LUT_REG0_PLCA_LUT_CODE0               (4u)
#define BITM_PHY_OA_PLCA_LUT_REG0_PLCA_LUT_CODE0               (0x0000000Fu)

#define BITP_PHY_OA_PLCA_LUT_REG0_PLCA_LUT_CODE1               (4u)
#define BITL_PHY_OA_PLCA_LUT_REG0_PLCA_LUT_CODE1               (4u)
#define BITM_PHY_OA_PLCA_LUT_REG0_PLCA_LUT_CODE1               (0x000000F0u)

#define BITP_PHY_OA_PLCA_LUT_REG0_PLCA_LUT_CODE2               (8u)
#define BITL_PHY_OA_PLCA_LUT_REG0_PLCA_LUT_CODE2               (4u)
#define BITM_PHY_OA_PLCA_LUT_REG0_PLCA_LUT_CODE2               (0x00000F00u)

#define BITP_PHY_OA_PLCA_LUT_REG0_PLCA_LUT_CODE3               (12u)
#define BITL_PHY_OA_PLCA_LUT_REG0_PLCA_LUT_CODE3               (4u)
#define BITM_PHY_OA_PLCA_LUT_REG0_PLCA_LUT_CODE3               (0x0000F000u)

/* Register Name        : PLCA_LUT_REG1
 * Register Addr        : 0x001Du
 * Register Reset Value : 0x00007654u
 * Register MMS         : 4u
 */

#define PHY_OA_PLCA_LUT_REG1_ADDR                              (0x001Du)
#define PHY_OA_PLCA_LUT_REG1_RESET_VAL                         (0x00007654u)
#define PHY_OA_PLCA_LUT_REG1_MMS                               (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 03-00 | PLCA_LUT_CODE4           | Value of the plcaLocalID0[3:0]    | 0x00000004  |
 * |       |                          | when the 4 SAIF device pins       |             |
 * |       |                          | represent code 4                  |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 07-04 | PLCA_LUT_CODE5           | Value of the plcaLocalID0[3:0]    | 0x00000005  |
 * |       |                          | when the 4 SAIF device pins       |             |
 * |       |                          | represent code 5                  |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11-08 | PLCA_LUT_CODE6           | Value of the plcaLocalID0[3:0]    | 0x00000006  |
 * |       |                          | when the 4 SAIF device pins       |             |
 * |       |                          | represent code 6                  |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-12 | PLCA_LUT_CODE7           | Value of the plcaLocalID0[3:0]    | 0x00000007  |
 * |       |                          | when the 4 SAIF device pins       |             |
 * |       |                          | represent code 7                  |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_PLCA_LUT_REG1_PLCA_LUT_CODE4               (0u)
#define BITL_PHY_OA_PLCA_LUT_REG1_PLCA_LUT_CODE4               (4u)
#define BITM_PHY_OA_PLCA_LUT_REG1_PLCA_LUT_CODE4               (0x0000000Fu)

#define BITP_PHY_OA_PLCA_LUT_REG1_PLCA_LUT_CODE5               (4u)
#define BITL_PHY_OA_PLCA_LUT_REG1_PLCA_LUT_CODE5               (4u)
#define BITM_PHY_OA_PLCA_LUT_REG1_PLCA_LUT_CODE5               (0x000000F0u)

#define BITP_PHY_OA_PLCA_LUT_REG1_PLCA_LUT_CODE6               (8u)
#define BITL_PHY_OA_PLCA_LUT_REG1_PLCA_LUT_CODE6               (4u)
#define BITM_PHY_OA_PLCA_LUT_REG1_PLCA_LUT_CODE6               (0x00000F00u)

#define BITP_PHY_OA_PLCA_LUT_REG1_PLCA_LUT_CODE7               (12u)
#define BITL_PHY_OA_PLCA_LUT_REG1_PLCA_LUT_CODE7               (4u)
#define BITM_PHY_OA_PLCA_LUT_REG1_PLCA_LUT_CODE7               (0x0000F000u)

/* Register Name        : PLCA_LUT_REG2
 * Register Addr        : 0x001Eu
 * Register Reset Value : 0x0000BA98u
 * Register MMS         : 4u
 */

#define PHY_OA_PLCA_LUT_REG2_ADDR                              (0x001Eu)
#define PHY_OA_PLCA_LUT_REG2_RESET_VAL                         (0x0000BA98u)
#define PHY_OA_PLCA_LUT_REG2_MMS                               (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 03-00 | PLCA_LUT_CODE8           | Value of the plcaLocalID0[3:0]    | 0x00000008  |
 * |       |                          | when the 4 SAIF device pins       |             |
 * |       |                          | represent code 8                  |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 07-04 | PLCA_LUT_CODE9           | Value of the plcaLocalID0[3:0]    | 0x00000009  |
 * |       |                          | when the 4 SAIF device pins       |             |
 * |       |                          | represent code 9                  |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11-08 | PLCA_LUT_CODE10          | Value of the plcaLocalID0[3:0]    | 0x0000000a  |
 * |       |                          | when the 4 SAIF device pins       |             |
 * |       |                          | represent code 10                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-12 | PLCA_LUT_CODE11          | Value of the plcaLocalID0[3:0]    | 0x0000000b  |
 * |       |                          | when the 4 SAIF device pins       |             |
 * |       |                          | represent code 11                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_PLCA_LUT_REG2_PLCA_LUT_CODE8               (0u)
#define BITL_PHY_OA_PLCA_LUT_REG2_PLCA_LUT_CODE8               (4u)
#define BITM_PHY_OA_PLCA_LUT_REG2_PLCA_LUT_CODE8               (0x0000000Fu)

#define BITP_PHY_OA_PLCA_LUT_REG2_PLCA_LUT_CODE9               (4u)
#define BITL_PHY_OA_PLCA_LUT_REG2_PLCA_LUT_CODE9               (4u)
#define BITM_PHY_OA_PLCA_LUT_REG2_PLCA_LUT_CODE9               (0x000000F0u)

#define BITP_PHY_OA_PLCA_LUT_REG2_PLCA_LUT_CODE10              (8u)
#define BITL_PHY_OA_PLCA_LUT_REG2_PLCA_LUT_CODE10              (4u)
#define BITM_PHY_OA_PLCA_LUT_REG2_PLCA_LUT_CODE10              (0x00000F00u)

#define BITP_PHY_OA_PLCA_LUT_REG2_PLCA_LUT_CODE11              (12u)
#define BITL_PHY_OA_PLCA_LUT_REG2_PLCA_LUT_CODE11              (4u)
#define BITM_PHY_OA_PLCA_LUT_REG2_PLCA_LUT_CODE11              (0x0000F000u)

/* Register Name        : PLCA_LUT_REG3
 * Register Addr        : 0x001Fu
 * Register Reset Value : 0x0000FEDCu
 * Register MMS         : 4u
 */

#define PHY_OA_PLCA_LUT_REG3_ADDR                              (0x001Fu)
#define PHY_OA_PLCA_LUT_REG3_RESET_VAL                         (0x0000FEDCu)
#define PHY_OA_PLCA_LUT_REG3_MMS                               (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 03-00 | PLCA_LUT_CODE12          | Value of the plcaLocalID0[3:0]    | 0x0000000c  |
 * |       |                          | when the 4 SAIF device pins       |             |
 * |       |                          | represent code 12                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 07-04 | PLCA_LUT_CODE13          | Value of the plcaLocalID0[3:0]    | 0x0000000d  |
 * |       |                          | when the 4 SAIF device pins       |             |
 * |       |                          | represent code 13                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 11-08 | PLCA_LUT_CODE14          | Value of the plcaLocalID0[3:0]    | 0x0000000e  |
 * |       |                          | when the 4 SAIF device pins       |             |
 * |       |                          | represent code 14                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-12 | PLCA_LUT_CODE15          | Value of the plcaLocalID0[3:0]    | 0x0000000f  |
 * |       |                          | when the 4 SAIF device pins       |             |
 * |       |                          | represent code 15                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_PLCA_LUT_REG3_PLCA_LUT_CODE12              (0u)
#define BITL_PHY_OA_PLCA_LUT_REG3_PLCA_LUT_CODE12              (4u)
#define BITM_PHY_OA_PLCA_LUT_REG3_PLCA_LUT_CODE12              (0x0000000Fu)

#define BITP_PHY_OA_PLCA_LUT_REG3_PLCA_LUT_CODE13              (4u)
#define BITL_PHY_OA_PLCA_LUT_REG3_PLCA_LUT_CODE13              (4u)
#define BITM_PHY_OA_PLCA_LUT_REG3_PLCA_LUT_CODE13              (0x000000F0u)

#define BITP_PHY_OA_PLCA_LUT_REG3_PLCA_LUT_CODE14              (8u)
#define BITL_PHY_OA_PLCA_LUT_REG3_PLCA_LUT_CODE14              (4u)
#define BITM_PHY_OA_PLCA_LUT_REG3_PLCA_LUT_CODE14              (0x00000F00u)

#define BITP_PHY_OA_PLCA_LUT_REG3_PLCA_LUT_CODE15              (12u)
#define BITL_PHY_OA_PLCA_LUT_REG3_PLCA_LUT_CODE15              (4u)
#define BITM_PHY_OA_PLCA_LUT_REG3_PLCA_LUT_CODE15              (0x0000F000u)

/* Register Name        : PLCA_LUT_CTRL
 * Register Addr        : 0x0020u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 4u
 */

#define PHY_OA_PLCA_LUT_CTRL_ADDR                              (0x0020u)
#define PHY_OA_PLCA_LUT_CTRL_RESET_VAL                         (0x00000000u)
#define PHY_OA_PLCA_LUT_CTRL_MMS                               (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | PIN_TO_PLCA_LUT_EN       | Enable the use of 4 SAIF device   | 0x00000000  |
 * |       |                          | pins to set plcaLocalID[3:0]      |             |
 * |       |                          | from programmable LUT             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_PLCA_LUT_CTRL_PIN_TO_PLCA_LUT_EN           (0u)
#define BITL_PHY_OA_PLCA_LUT_CTRL_PIN_TO_PLCA_LUT_EN           (1u)
#define BITM_PHY_OA_PLCA_LUT_CTRL_PIN_TO_PLCA_LUT_EN           (0x01u)
#define ENUM_PHY_OA_PLCA_LUT_CTRL_PIN_TO_PLCA_LUT_EN_ENUM000   (0x00000000u)
#define ENUM_PHY_OA_PLCA_LUT_CTRL_PIN_TO_PLCA_LUT_EN_ENUM001   (0x00000001u)

/* Register Name        : PLCA_LUT_DBG
 * Register Addr        : 0x0021u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 4u
 */

#define PHY_OA_PLCA_LUT_DBG_ADDR                               (0x0021u)
#define PHY_OA_PLCA_LUT_DBG_RESET_VAL                          (0x00000000u)
#define PHY_OA_PLCA_LUT_DBG_MMS                                (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | RB_EFFECTIVE_PLCA_ID0    | Effective PLCA ID0 value,         | 0x00000000  |
 * |       |                          | considering whether the PLCA LUT  |             |
 * |       |                          | was enabled and which code was    |             |
 * |       |                          | selected based on the interface   |             |
 * |       |                          | pins. For debug purposes          |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15    | RB_EFFECTIVE_PLCA_EN     | Effective PLCA En value,          | 0x00000000  |
 * |       |                          | considering the double-buffering  |             |
 * |       |                          | while receiving. For debug        |             |
 * |       |                          | purposes                          |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_PLCA_LUT_DBG_RB_EFFECTIVE_PLCA_ID0         (0u)
#define BITL_PHY_OA_PLCA_LUT_DBG_RB_EFFECTIVE_PLCA_ID0         (8u)
#define BITM_PHY_OA_PLCA_LUT_DBG_RB_EFFECTIVE_PLCA_ID0         (0x000000FFu)

#define BITP_PHY_OA_PLCA_LUT_DBG_RB_EFFECTIVE_PLCA_EN          (15u)
#define BITL_PHY_OA_PLCA_LUT_DBG_RB_EFFECTIVE_PLCA_EN          (1u)
#define BITM_PHY_OA_PLCA_LUT_DBG_RB_EFFECTIVE_PLCA_EN          (0x8000u)

/* Register Name        : TD_VS_REG1
 * Register Addr        : 0x0061u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 4u
 */

#define PHY_OA_TD_VS_REG1_ADDR                                 (0x0061u)
#define PHY_OA_TD_VS_REG1_RESET_VAL                            (0x00000000u)
#define PHY_OA_TD_VS_REG1_MMS                                  (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | TD_DM_TO_DIS             | Topology Discovery - Disable the  | 0x00000000  |
 * |       |                          | TD_DM_TO hardware timer, and      |             |
 * |       |                          | instead rely on SW control of a   |             |
 * |       |                          | (longer) timer. In this case the  |             |
 * |       |                          | timeout abort is executed by the  |             |
 * |       |                          | SW bringing TX_EN low             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_TD_VS_REG1_TD_DM_TO_DIS                    (0u)
#define BITL_PHY_OA_TD_VS_REG1_TD_DM_TO_DIS                    (1u)
#define BITM_PHY_OA_TD_VS_REG1_TD_DM_TO_DIS                    (0x01u)
#define ENUM_PHY_OA_TD_VS_REG1_TD_DM_TO_DIS_ENUM000            (0x00000000u)
#define ENUM_PHY_OA_TD_VS_REG1_TD_DM_TO_DIS_ENUM001            (0x00000001u)

/* Register Name        : DCQ_JM_CFG0
 * Register Addr        : 0x008Au
 * Register Reset Value : 0x0000FF01u
 * Register MMS         : 4u
 */

#define PHY_OA_DCQ_JM_CFG0_ADDR                                (0x008Au)
#define PHY_OA_DCQ_JM_CFG0_RESET_VAL                           (0x0000FF01u)
#define PHY_OA_DCQ_JM_CFG0_MMS                                 (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | CFG_JM_EN                | Jitter monitor - Main enable      | 0x00000001  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | CFG_JM_PAUSE             | Jitter monitor - Pauses updates   | 0x00000000  |
 * |       |                          | of readback data while active     |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-08 | CFG_JM_PLCA_ID_SEL       | Jitter monitor - Selected PLCA    | 0x000000ff  |
 * |       |                          | Transmit Opportunity ID to        |             |
 * |       |                          | monitor (use 0xFF to monitor all  |             |
 * |       |                          | IDs)                              |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_DCQ_JM_CFG0_CFG_JM_EN                      (0u)
#define BITL_PHY_OA_DCQ_JM_CFG0_CFG_JM_EN                      (1u)
#define BITM_PHY_OA_DCQ_JM_CFG0_CFG_JM_EN                      (0x01u)
#define ENUM_PHY_OA_DCQ_JM_CFG0_CFG_JM_EN_DISABLE              (0x00000000u)
#define ENUM_PHY_OA_DCQ_JM_CFG0_CFG_JM_EN_ENABLE               (0x00000001u)

#define BITP_PHY_OA_DCQ_JM_CFG0_CFG_JM_PAUSE                   (1u)
#define BITL_PHY_OA_DCQ_JM_CFG0_CFG_JM_PAUSE                   (1u)
#define BITM_PHY_OA_DCQ_JM_CFG0_CFG_JM_PAUSE                   (0x02u)
#define ENUM_PHY_OA_DCQ_JM_CFG0_CFG_JM_PAUSE_DISABLE           (0x00000000u)
#define ENUM_PHY_OA_DCQ_JM_CFG0_CFG_JM_PAUSE_ENABLE            (0x00000001u)

#define BITP_PHY_OA_DCQ_JM_CFG0_CFG_JM_PLCA_ID_SEL             (8u)
#define BITL_PHY_OA_DCQ_JM_CFG0_CFG_JM_PLCA_ID_SEL             (8u)
#define BITM_PHY_OA_DCQ_JM_CFG0_CFG_JM_PLCA_ID_SEL             (0x0000FF00u)

/* Register Name        : DCQ_JM_CFG1
 * Register Addr        : 0x008Bu
 * Register Reset Value : 0x00000002u
 * Register MMS         : 4u
 */

#define PHY_OA_DCQ_JM_CFG1_ADDR                                (0x008Bu)
#define PHY_OA_DCQ_JM_CFG1_RESET_VAL                           (0x00000002u)
#define PHY_OA_DCQ_JM_CFG1_MMS                                 (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 01-00 | CFG_JM_SETTLED_RANGE_SEL | Jitter monitor - Selects the      | 0x00000002  |
 * |       |                          | number of packets that need to    |             |
 * |       |                          | be received for the integrator    |             |
 * |       |                          | to settle, includes value needed  |             |
 * |       |                          | to reach maximum shift (16K       |             |
 * |       |                          | frames).                          |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_DCQ_JM_CFG1_CFG_JM_SETTLED_RANGE_SEL       (0u)
#define BITL_PHY_OA_DCQ_JM_CFG1_CFG_JM_SETTLED_RANGE_SEL       (2u)
#define BITM_PHY_OA_DCQ_JM_CFG1_CFG_JM_SETTLED_RANGE_SEL       (0x00000003u)
#define ENUM_PHY_OA_DCQ_JM_CFG1_CFG_JM_SETTLED_RANGE_SEL_SETTLED_16K (0x00000000u)
#define ENUM_PHY_OA_DCQ_JM_CFG1_CFG_JM_SETTLED_RANGE_SEL_SETTLED_60K (0x00000001u)
#define ENUM_PHY_OA_DCQ_JM_CFG1_CFG_JM_SETTLED_RANGE_SEL_SETTLED_80K (0x00000002u)
#define ENUM_PHY_OA_DCQ_JM_CFG1_CFG_JM_SETTLED_RANGE_SEL_SETTLED_100K (0x00000003u)

/* Register Name        : DCQ_JM_CFG2
 * Register Addr        : 0x008Cu
 * Register Reset Value : 0x0000FFFFu
 * Register MMS         : 4u
 */

#define PHY_OA_DCQ_JM_CFG2_ADDR                                (0x008Cu)
#define PHY_OA_DCQ_JM_CFG2_RESET_VAL                           (0x0000FFFFu)
#define PHY_OA_DCQ_JM_CFG2_MMS                                 (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | CFG_JM_TH_LOW_MID_ERR    | Jitter monitor - Threshold for    | 0x0000ffff  |
 * |       |                          | low-to-mid level on combined      |             |
 * |       |                          | metric                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_DCQ_JM_CFG2_CFG_JM_TH_LOW_MID_ERR          (0u)
#define BITL_PHY_OA_DCQ_JM_CFG2_CFG_JM_TH_LOW_MID_ERR          (16u)
#define BITM_PHY_OA_DCQ_JM_CFG2_CFG_JM_TH_LOW_MID_ERR          (0x0000FFFFu)

/* Register Name        : DCQ_JM_CFG3
 * Register Addr        : 0x008Du
 * Register Reset Value : 0x0000FFFFu
 * Register MMS         : 4u
 */

#define PHY_OA_DCQ_JM_CFG3_ADDR                                (0x008Du)
#define PHY_OA_DCQ_JM_CFG3_RESET_VAL                           (0x0000FFFFu)
#define PHY_OA_DCQ_JM_CFG3_MMS                                 (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | CFG_JM_TH_MID_HIGH_ERR   | Jitter monitor - Threshold for    | 0x0000ffff  |
 * |       |                          | mid-to-high level on combined     |             |
 * |       |                          | metric                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_DCQ_JM_CFG3_CFG_JM_TH_MID_HIGH_ERR         (0u)
#define BITL_PHY_OA_DCQ_JM_CFG3_CFG_JM_TH_MID_HIGH_ERR         (16u)
#define BITM_PHY_OA_DCQ_JM_CFG3_CFG_JM_TH_MID_HIGH_ERR         (0x0000FFFFu)

/* Register Name        : DCQ_JM_CFG4
 * Register Addr        : 0x008Eu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 4u
 */

#define PHY_OA_DCQ_JM_CFG4_ADDR                                (0x008Eu)
#define PHY_OA_DCQ_JM_CFG4_RESET_VAL                           (0x00000000u)
#define PHY_OA_DCQ_JM_CFG4_MMS                                 (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | CFG_JM_TH_HIGH_MID_ERR   | Jitter monitor - Threshold for    | 0x00000000  |
 * |       |                          | high-to-mid level on combined     |             |
 * |       |                          | metric                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_DCQ_JM_CFG4_CFG_JM_TH_HIGH_MID_ERR         (0u)
#define BITL_PHY_OA_DCQ_JM_CFG4_CFG_JM_TH_HIGH_MID_ERR         (16u)
#define BITM_PHY_OA_DCQ_JM_CFG4_CFG_JM_TH_HIGH_MID_ERR         (0x0000FFFFu)

/* Register Name        : DCQ_JM_CFG5
 * Register Addr        : 0x008Fu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 4u
 */

#define PHY_OA_DCQ_JM_CFG5_ADDR                                (0x008Fu)
#define PHY_OA_DCQ_JM_CFG5_RESET_VAL                           (0x00000000u)
#define PHY_OA_DCQ_JM_CFG5_MMS                                 (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | CFG_JM_TH_MID_LOW_ERR    | Jitter monitor - Threshold for    | 0x00000000  |
 * |       |                          | mid-to-low level on combined      |             |
 * |       |                          | metric                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_DCQ_JM_CFG5_CFG_JM_TH_MID_LOW_ERR          (0u)
#define BITL_PHY_OA_DCQ_JM_CFG5_CFG_JM_TH_MID_LOW_ERR          (16u)
#define BITM_PHY_OA_DCQ_JM_CFG5_CFG_JM_TH_MID_LOW_ERR          (0x0000FFFFu)

/* Register Name        : DCQ_JM_RB0
 * Register Addr        : 0x0093u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 4u
 */

#define PHY_OA_DCQ_JM_RB0_ADDR                                 (0x0093u)
#define PHY_OA_DCQ_JM_RB0_RESET_VAL                            (0x00000000u)
#define PHY_OA_DCQ_JM_RB0_MMS                                  (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 14    | RB_JM_OUT_VALID          | Jitter monitor - Flags when the   | 0x00000000  |
 * |       |                          | metric read-backs are valid       |             |
 * |       |                          | (integrator reached maximum       |             |
 * |       |                          | shift) but the additional         |             |
 * |       |                          | settling time might have not      |             |
 * |       |                          | elapsed.                          |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15    | RB_JM_OUT_SETTLED        | Jitter monitor - Flags when the   | 0x00000000  |
 * |       |                          | metric read-backs are valid       |             |
 * |       |                          | (integrator reached maximum       |             |
 * |       |                          | shift) and additional settling    |             |
 * |       |                          | time has elapsed.                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_DCQ_JM_RB0_RB_JM_OUT_VALID                 (14u)
#define BITL_PHY_OA_DCQ_JM_RB0_RB_JM_OUT_VALID                 (1u)
#define BITM_PHY_OA_DCQ_JM_RB0_RB_JM_OUT_VALID                 (0x4000u)
#define ENUM_PHY_OA_DCQ_JM_RB0_RB_JM_OUT_VALID_JM_NOT_VALID    (0x00000000u)
#define ENUM_PHY_OA_DCQ_JM_RB0_RB_JM_OUT_VALID_JM_VALID        (0x00000001u)

#define BITP_PHY_OA_DCQ_JM_RB0_RB_JM_OUT_SETTLED               (15u)
#define BITL_PHY_OA_DCQ_JM_RB0_RB_JM_OUT_SETTLED               (1u)
#define BITM_PHY_OA_DCQ_JM_RB0_RB_JM_OUT_SETTLED               (0x8000u)
#define ENUM_PHY_OA_DCQ_JM_RB0_RB_JM_OUT_SETTLED_JM_NOT_SETTLED (0x00000000u)
#define ENUM_PHY_OA_DCQ_JM_RB0_RB_JM_OUT_SETTLED_JM_SETTLED    (0x00000001u)

/* Register Name        : DCQ_JM_RB4
 * Register Addr        : 0x0097u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 4u
 */

#define PHY_OA_DCQ_JM_RB4_ADDR                                 (0x0097u)
#define PHY_OA_DCQ_JM_RB4_RESET_VAL                            (0x00000000u)
#define PHY_OA_DCQ_JM_RB4_MMS                                  (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-13 | RB_JM_QUALITY_INDEX      | Jitter monitor - Quality index    | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_DCQ_JM_RB4_RB_JM_QUALITY_INDEX             (13u)
#define BITL_PHY_OA_DCQ_JM_RB4_RB_JM_QUALITY_INDEX             (3u)
#define BITM_PHY_OA_DCQ_JM_RB4_RB_JM_QUALITY_INDEX             (0x0000E000u)
#define ENUM_PHY_OA_DCQ_JM_RB4_RB_JM_QUALITY_INDEX_ENUM_SQI2   (0x00000004u)
#define ENUM_PHY_OA_DCQ_JM_RB4_RB_JM_QUALITY_INDEX_ENUM_SQI1   (0x00000002u)
#define ENUM_PHY_OA_DCQ_JM_RB4_RB_JM_QUALITY_INDEX_ENUM_SQI0   (0x00000000u)

/* Register Name        : DCQ_JM_RB5
 * Register Addr        : 0x0098u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 4u
 */

#define PHY_OA_DCQ_JM_RB5_ADDR                                 (0x0098u)
#define PHY_OA_DCQ_JM_RB5_RESET_VAL                            (0x00000000u)
#define PHY_OA_DCQ_JM_RB5_MMS                                  (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | RB_JM_COMB_METRIC        | Jitter monitor - Jitter metric    | 0x00000000  |
 * |       |                          | on combined metric, normalized    |             |
 * |       |                          | per frame length. Notation is     |             |
 * |       |                          | fixed point 0.14 (divide this     |             |
 * |       |                          | integer by 16384.0)               |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_DCQ_JM_RB5_RB_JM_COMB_METRIC               (0u)
#define BITL_PHY_OA_DCQ_JM_RB5_RB_JM_COMB_METRIC               (16u)
#define BITM_PHY_OA_DCQ_JM_RB5_RB_JM_COMB_METRIC               (0x0000FFFFu)

/* Register Name        : PLCA_IDVER
 * Register Addr        : 0xCA00u
 * Register Reset Value : 0x00000A10u
 * Register MMS         : 4u
 */

#define PHY_OA_PLCA_IDVER_ADDR                                 (0xCA00u)
#define PHY_OA_PLCA_IDVER_RESET_VAL                            (0x00000A10u)
#define PHY_OA_PLCA_IDVER_MMS                                  (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | PLCAVER                  | This Field Indicates The Version  | 0x00000010  |
 * |       |                          | of The OA Memory Map Definition   |             |
 * |       |                          | This Layout Adheres To            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-08 | PLCAIDM                  | This Field is The Memory Map      | 0x0000000a  |
 * |       |                          | Identifier Which Indicates        |             |
 * |       |                          | Compatibility With The OA PLCA    |             |
 * |       |                          | Memory Map Definition             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_PLCA_IDVER_PLCAVER                         (0u)
#define BITL_PHY_OA_PLCA_IDVER_PLCAVER                         (8u)
#define BITM_PHY_OA_PLCA_IDVER_PLCAVER                         (0x000000FFu)

#define BITP_PHY_OA_PLCA_IDVER_PLCAIDM                         (8u)
#define BITL_PHY_OA_PLCA_IDVER_PLCAIDM                         (8u)
#define BITM_PHY_OA_PLCA_IDVER_PLCAIDM                         (0x0000FF00u)

/* Register Name        : PLCA_CTRL0
 * Register Addr        : 0xCA01u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 4u
 */

#define PHY_OA_PLCA_CTRL0_ADDR                                 (0xCA01u)
#define PHY_OA_PLCA_CTRL0_RESET_VAL                            (0x00000000u)
#define PHY_OA_PLCA_CTRL0_MMS                                  (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 14    | PLCARST                  | PLCA reset. Self-clearing bit     | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15    | PLCAEN                   | PLCA enable                       | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_PLCA_CTRL0_PLCARST                         (14u)
#define BITL_PHY_OA_PLCA_CTRL0_PLCARST                         (1u)
#define BITM_PHY_OA_PLCA_CTRL0_PLCARST                         (0x4000u)
#define ENUM_PHY_OA_PLCA_CTRL0_PLCARST_INACTIVE                (0x00000000u)
#define ENUM_PHY_OA_PLCA_CTRL0_PLCARST_TRIGGER                 (0x00000001u)

#define BITP_PHY_OA_PLCA_CTRL0_PLCAEN                          (15u)
#define BITL_PHY_OA_PLCA_CTRL0_PLCAEN                          (1u)
#define BITM_PHY_OA_PLCA_CTRL0_PLCAEN                          (0x8000u)
#define ENUM_PHY_OA_PLCA_CTRL0_PLCAEN_DISABLED                 (0x00000000u)
#define ENUM_PHY_OA_PLCA_CTRL0_PLCAEN_ENABLED                  (0x00000001u)

/* Register Name        : PLCA_CTRL1
 * Register Addr        : 0xCA02u
 * Register Reset Value : 0x000008FFu
 * Register MMS         : 4u
 */

#define PHY_OA_PLCA_CTRL1_ADDR                                 (0xCA02u)
#define PHY_OA_PLCA_CTRL1_RESET_VAL                            (0x000008FFu)
#define PHY_OA_PLCA_CTRL1_MMS                                  (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | PLCALOCALID              | PLCA local ID                     | 0x000000ff  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-08 | PLCANODECOUNT            | PLCA node count                   | 0x00000008  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_PLCA_CTRL1_PLCALOCALID                     (0u)
#define BITL_PHY_OA_PLCA_CTRL1_PLCALOCALID                     (8u)
#define BITM_PHY_OA_PLCA_CTRL1_PLCALOCALID                     (0x000000FFu)

#define BITP_PHY_OA_PLCA_CTRL1_PLCANODECOUNT                   (8u)
#define BITL_PHY_OA_PLCA_CTRL1_PLCANODECOUNT                   (8u)
#define BITM_PHY_OA_PLCA_CTRL1_PLCANODECOUNT                   (0x0000FF00u)

/* Register Name        : PLCA_STATUS
 * Register Addr        : 0xCA03u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 4u
 */

#define PHY_OA_PLCA_STATUS_ADDR                                (0xCA03u)
#define PHY_OA_PLCA_STATUS_RESET_VAL                           (0x00000000u)
#define PHY_OA_PLCA_STATUS_MMS                                 (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15    | PLCASTATUS               | PLCA status                       | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_PLCA_STATUS_PLCASTATUS                     (15u)
#define BITL_PHY_OA_PLCA_STATUS_PLCASTATUS                     (1u)
#define BITM_PHY_OA_PLCA_STATUS_PLCASTATUS                     (0x8000u)
#define ENUM_PHY_OA_PLCA_STATUS_PLCASTATUS_ENUM000             (0x00000000u)
#define ENUM_PHY_OA_PLCA_STATUS_PLCASTATUS_ENUM001             (0x00000001u)

/* Register Name        : PLCA_TOTMR
 * Register Addr        : 0xCA04u
 * Register Reset Value : 0x00000020u
 * Register MMS         : 4u
 */

#define PHY_OA_PLCA_TOTMR_ADDR                                 (0xCA04u)
#define PHY_OA_PLCA_TOTMR_RESET_VAL                            (0x00000020u)
#define PHY_OA_PLCA_TOTMR_MMS                                  (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | PLCATOTIMER              | These bits configure the minimum  | 0x00000020  |
 * |       |                          | duration of the PLCA transmit     |             |
 * |       |                          | opportunity in units of Tbits     |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_PLCA_TOTMR_PLCATOTIMER                     (0u)
#define BITL_PHY_OA_PLCA_TOTMR_PLCATOTIMER                     (8u)
#define BITM_PHY_OA_PLCA_TOTMR_PLCATOTIMER                     (0x000000FFu)

/* Register Name        : PLCA_BURST
 * Register Addr        : 0xCA05u
 * Register Reset Value : 0x00000080u
 * Register MMS         : 4u
 */

#define PHY_OA_PLCA_BURST_ADDR                                 (0xCA05u)
#define PHY_OA_PLCA_BURST_RESET_VAL                            (0x00000080u)
#define PHY_OA_PLCA_BURST_MMS                                  (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | PLCABURSTTIMER           | These bits configure the maximum  | 0x00000080  |
 * |       |                          | time to wait for a new packet     |             |
 * |       |                          | from the MAC after successful     |             |
 * |       |                          | transmission (100ns units of      |             |
 * |       |                          | time)                             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-08 | PLCAMAXBURSTCNT          | PLCA maximum burst count          | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_PLCA_BURST_PLCABURSTTIMER                  (0u)
#define BITL_PHY_OA_PLCA_BURST_PLCABURSTTIMER                  (8u)
#define BITM_PHY_OA_PLCA_BURST_PLCABURSTTIMER                  (0x000000FFu)

#define BITP_PHY_OA_PLCA_BURST_PLCAMAXBURSTCNT                 (8u)
#define BITL_PHY_OA_PLCA_BURST_PLCAMAXBURSTCNT                 (8u)
#define BITM_PHY_OA_PLCA_BURST_PLCAMAXBURSTCNT                 (0x0000FF00u)

/* Register Name        : PLCA_DIAG
 * Register Addr        : 0xCA06u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 4u
 */

#define PHY_OA_PLCA_DIAG_ADDR                                  (0xCA06u)
#define PHY_OA_PLCA_DIAG_RESET_VAL                             (0x00000000u)
#define PHY_OA_PLCA_DIAG_MMS                                   (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | PLCADIAGBCNBFTO          | PLCA diagnostic beacon before     | 0x00000000  |
 * |       |                          | transmit opportunity              |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | PLCADIAGUNEXPB           | PLCA diagnostic unexpected        | 0x00000000  |
 * |       |                          | beacon                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 2     | PLCADIAGRXINTO           | PLCA diagnostic RX In transmit    | 0x00000000  |
 * |       |                          | opportunity                       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_PLCA_DIAG_PLCADIAGBCNBFTO                  (0u)
#define BITL_PHY_OA_PLCA_DIAG_PLCADIAGBCNBFTO                  (1u)
#define BITM_PHY_OA_PLCA_DIAG_PLCADIAGBCNBFTO                  (0x01u)
#define ENUM_PHY_OA_PLCA_DIAG_PLCADIAGBCNBFTO_ENUM000          (0x00000000u)
#define ENUM_PHY_OA_PLCA_DIAG_PLCADIAGBCNBFTO_ENUM001          (0x00000001u)

#define BITP_PHY_OA_PLCA_DIAG_PLCADIAGUNEXPB                   (1u)
#define BITL_PHY_OA_PLCA_DIAG_PLCADIAGUNEXPB                   (1u)
#define BITM_PHY_OA_PLCA_DIAG_PLCADIAGUNEXPB                   (0x02u)
#define ENUM_PHY_OA_PLCA_DIAG_PLCADIAGUNEXPB_ENUM000           (0x00000000u)
#define ENUM_PHY_OA_PLCA_DIAG_PLCADIAGUNEXPB_ENUM001           (0x00000001u)

#define BITP_PHY_OA_PLCA_DIAG_PLCADIAGRXINTO                   (2u)
#define BITL_PHY_OA_PLCA_DIAG_PLCADIAGRXINTO                   (1u)
#define BITM_PHY_OA_PLCA_DIAG_PLCADIAGRXINTO                   (0x04u)
#define ENUM_PHY_OA_PLCA_DIAG_PLCADIAGRXINTO_ENUM000           (0x00000000u)
#define ENUM_PHY_OA_PLCA_DIAG_PLCADIAGRXINTO_ENUM001           (0x00000001u)

/* Register Name        : TD_CTRL
 * Register Addr        : 0xCE00u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 4u
 */

#define PHY_OA_TD_CTRL_ADDR                                    (0xCE00u)
#define PHY_OA_TD_CTRL_RESET_VAL                               (0x00000000u)
#define PHY_OA_TD_CTRL_MMS                                     (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 7     | TD_AUTO_START            | Topology Discovery - Run the      | 0x00000000  |
 * |       |                          | automatic flow                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 8     | TD_DM_START              | Topology Discovery - Run the      | 0x00000000  |
 * |       |                          | Distance Measurement Step         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12-09 | TD_DM_DUR                | Topology Discovery - Set the      | 0x00000000  |
 * |       |                          | duration of Measurement in ms (0  |             |
 * |       |                          | = 1ms)                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13    | TD_DLYM_START            | Topology Discovery - Run the      | 0x00000000  |
 * |       |                          | internal delay measurement Step   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14    | TD_REFN                  | Topology Discovery - Define       | 0x00000000  |
 * |       |                          | which type of node this is.       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15    | TD_EN                    | Topology Discovery - Main         | 0x00000000  |
 * |       |                          | enable. The topology discovery    |             |
 * |       |                          | takes over transmit path while    |             |
 * |       |                          | disabling it for data frames      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_TD_CTRL_TD_AUTO_START                      (7u)
#define BITL_PHY_OA_TD_CTRL_TD_AUTO_START                      (1u)
#define BITM_PHY_OA_TD_CTRL_TD_AUTO_START                      (0x80u)
#define ENUM_PHY_OA_TD_CTRL_TD_AUTO_START_INACTIVE             (0x00000000u)
#define ENUM_PHY_OA_TD_CTRL_TD_AUTO_START_TRIGGER              (0x00000001u)

#define BITP_PHY_OA_TD_CTRL_TD_DM_START                        (8u)
#define BITL_PHY_OA_TD_CTRL_TD_DM_START                        (1u)
#define BITM_PHY_OA_TD_CTRL_TD_DM_START                        (0x0100u)
#define ENUM_PHY_OA_TD_CTRL_TD_DM_START_INACTIVE               (0x00000000u)
#define ENUM_PHY_OA_TD_CTRL_TD_DM_START_TRIGGER                (0x00000001u)

#define BITP_PHY_OA_TD_CTRL_TD_DM_DUR                          (9u)
#define BITL_PHY_OA_TD_CTRL_TD_DM_DUR                          (4u)
#define BITM_PHY_OA_TD_CTRL_TD_DM_DUR                          (0x00001E00u)

#define BITP_PHY_OA_TD_CTRL_TD_DLYM_START                      (13u)
#define BITL_PHY_OA_TD_CTRL_TD_DLYM_START                      (1u)
#define BITM_PHY_OA_TD_CTRL_TD_DLYM_START                      (0x2000u)
#define ENUM_PHY_OA_TD_CTRL_TD_DLYM_START_INACTIVE             (0x00000000u)
#define ENUM_PHY_OA_TD_CTRL_TD_DLYM_START_TRIGGER              (0x00000001u)

#define BITP_PHY_OA_TD_CTRL_TD_REFN                            (14u)
#define BITL_PHY_OA_TD_CTRL_TD_REFN                            (1u)
#define BITM_PHY_OA_TD_CTRL_TD_REFN                            (0x4000u)
#define ENUM_PHY_OA_TD_CTRL_TD_REFN_ENUM000                    (0x00000000u)
#define ENUM_PHY_OA_TD_CTRL_TD_REFN_ENUM001                    (0x00000001u)

#define BITP_PHY_OA_TD_CTRL_TD_EN                              (15u)
#define BITL_PHY_OA_TD_CTRL_TD_EN                              (1u)
#define BITM_PHY_OA_TD_CTRL_TD_EN                              (0x8000u)
#define ENUM_PHY_OA_TD_CTRL_TD_EN_DISABLED                     (0x00000000u)
#define ENUM_PHY_OA_TD_CTRL_TD_EN_ENABLED                      (0x00000001u)

/* Register Name        : TD_STAT
 * Register Addr        : 0xCE01u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 4u
 */

#define PHY_OA_TD_STAT_ADDR                                    (0xCE01u)
#define PHY_OA_TD_STAT_RESET_VAL                               (0x00000000u)
#define PHY_OA_TD_STAT_MMS                                     (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 11    | TD_AUTO_ERR              | Topology Discovery - Error in     | 0x00000000  |
 * |       |                          | the automatic flow                |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 12    | TD_DM_ERR                | Topology Discovery - Error in     | 0x00000000  |
 * |       |                          | Distance Measurement              |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 13    | TD_DM_DONE               | Topology Discovery - Distance     | 0x00000000  |
 * |       |                          | Measurement Done                  |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 14    | TD_DLYM_ERR              | Topology Discovery - Error in     | 0x00000000  |
 * |       |                          | the internal delay measurement    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15    | TD_DLYM_DONE             | Topology Discovery - Internal     | 0x00000000  |
 * |       |                          | delay measurement Done            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_TD_STAT_TD_AUTO_ERR                        (11u)
#define BITL_PHY_OA_TD_STAT_TD_AUTO_ERR                        (1u)
#define BITM_PHY_OA_TD_STAT_TD_AUTO_ERR                        (0x0800u)
#define ENUM_PHY_OA_TD_STAT_TD_AUTO_ERR_ENUM000                (0x00000000u)
#define ENUM_PHY_OA_TD_STAT_TD_AUTO_ERR_ENUM001                (0x00000001u)

#define BITP_PHY_OA_TD_STAT_TD_DM_ERR                          (12u)
#define BITL_PHY_OA_TD_STAT_TD_DM_ERR                          (1u)
#define BITM_PHY_OA_TD_STAT_TD_DM_ERR                          (0x1000u)
#define ENUM_PHY_OA_TD_STAT_TD_DM_ERR_ENUM000                  (0x00000000u)
#define ENUM_PHY_OA_TD_STAT_TD_DM_ERR_ENUM001                  (0x00000001u)

#define BITP_PHY_OA_TD_STAT_TD_DM_DONE                         (13u)
#define BITL_PHY_OA_TD_STAT_TD_DM_DONE                         (1u)
#define BITM_PHY_OA_TD_STAT_TD_DM_DONE                         (0x2000u)
#define ENUM_PHY_OA_TD_STAT_TD_DM_DONE_ENUM000                 (0x00000000u)
#define ENUM_PHY_OA_TD_STAT_TD_DM_DONE_ENUM001                 (0x00000001u)

#define BITP_PHY_OA_TD_STAT_TD_DLYM_ERR                        (14u)
#define BITL_PHY_OA_TD_STAT_TD_DLYM_ERR                        (1u)
#define BITM_PHY_OA_TD_STAT_TD_DLYM_ERR                        (0x4000u)
#define ENUM_PHY_OA_TD_STAT_TD_DLYM_ERR_ENUM000                (0x00000000u)
#define ENUM_PHY_OA_TD_STAT_TD_DLYM_ERR_ENUM001                (0x00000001u)

#define BITP_PHY_OA_TD_STAT_TD_DLYM_DONE                       (15u)
#define BITL_PHY_OA_TD_STAT_TD_DLYM_DONE                       (1u)
#define BITM_PHY_OA_TD_STAT_TD_DLYM_DONE                       (0x8000u)
#define ENUM_PHY_OA_TD_STAT_TD_DLYM_DONE_ENUM000               (0x00000000u)
#define ENUM_PHY_OA_TD_STAT_TD_DLYM_DONE_ENUM001               (0x00000001u)

/* Register Name        : TD_DIST_RES_LOW
 * Register Addr        : 0xCE02u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 4u
 */

#define PHY_OA_TD_DIST_RES_LOW_ADDR                            (0xCE02u)
#define PHY_OA_TD_DIST_RES_LOW_RESET_VAL                       (0x00000000u)
#define PHY_OA_TD_DIST_RES_LOW_MMS                             (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TD_DIST_MR               | Topology Discovery - Result of    | 0x00000000  |
 * |       |                          | the Distance Measurement in       |             |
 * |       |                          | Number of Pulses Received         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_TD_DIST_RES_LOW_TD_DIST_MR                 (0u)
#define BITL_PHY_OA_TD_DIST_RES_LOW_TD_DIST_MR                 (16u)
#define BITM_PHY_OA_TD_DIST_RES_LOW_TD_DIST_MR                 (0x0000FFFFu)

/* Register Name        : TD_DIST_RES_UP
 * Register Addr        : 0xCE03u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 4u
 */

#define PHY_OA_TD_DIST_RES_UP_ADDR                             (0xCE03u)
#define PHY_OA_TD_DIST_RES_UP_RESET_VAL                        (0x00000000u)
#define PHY_OA_TD_DIST_RES_UP_MMS                              (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TD_DIST_MR               | Topology Discovery - Result of    | 0x00000000  |
 * |       |                          | the Distance Measurement in       |             |
 * |       |                          | Number of Pulses Received         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_TD_DIST_RES_UP_TD_DIST_MR                  (0u)
#define BITL_PHY_OA_TD_DIST_RES_UP_TD_DIST_MR                  (16u)
#define BITM_PHY_OA_TD_DIST_RES_UP_TD_DIST_MR                  (0x0000FFFFu)

/* Register Name        : TD_DLY_RES_LOW
 * Register Addr        : 0xCE04u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 4u
 */

#define PHY_OA_TD_DLY_RES_LOW_ADDR                             (0xCE04u)
#define PHY_OA_TD_DLY_RES_LOW_RESET_VAL                        (0x00000000u)
#define PHY_OA_TD_DLY_RES_LOW_MMS                              (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TD_DLYM_MR               | Topology Discovery - Result of    | 0x00000000  |
 * |       |                          | the Internal Delay Measurement    |             |
 * |       |                          | in Number of Pulses Received      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_TD_DLY_RES_LOW_TD_DLYM_MR                  (0u)
#define BITL_PHY_OA_TD_DLY_RES_LOW_TD_DLYM_MR                  (16u)
#define BITM_PHY_OA_TD_DLY_RES_LOW_TD_DLYM_MR                  (0x0000FFFFu)

/* Register Name        : TD_DLY_RES_UP
 * Register Addr        : 0xCE05u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 4u
 */

#define PHY_OA_TD_DLY_RES_UP_ADDR                              (0xCE05u)
#define PHY_OA_TD_DLY_RES_UP_RESET_VAL                         (0x00000000u)
#define PHY_OA_TD_DLY_RES_UP_MMS                               (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TD_DLYM_MR               | Topology Discovery - Result of    | 0x00000000  |
 * |       |                          | the Internal Delay Measurement    |             |
 * |       |                          | in Number of Pulses Received      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_TD_DLY_RES_UP_TD_DLYM_MR                   (0u)
#define BITL_PHY_OA_TD_DLY_RES_UP_TD_DLYM_MR                   (16u)
#define BITM_PHY_OA_TD_DLY_RES_UP_TD_DLYM_MR                   (0x0000FFFFu)

/* Register Name        : TD_MNDLY_RES_LOW
 * Register Addr        : 0xCE06u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 4u
 */

#define PHY_OA_TD_MNDLY_RES_LOW_ADDR                           (0xCE06u)
#define PHY_OA_TD_MNDLY_RES_LOW_RESET_VAL                      (0x00000000u)
#define PHY_OA_TD_MNDLY_RES_LOW_MMS                            (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TD_REMOTE_DLYM_MR        | Topology Discovery - Result of    | 0x00000000  |
 * |       |                          | the remote node's Internal Delay  |             |
 * |       |                          | Measurement in Number of Pulses   |             |
 * |       |                          | Received (auto mode)              |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_TD_MNDLY_RES_LOW_TD_REMOTE_DLYM_MR         (0u)
#define BITL_PHY_OA_TD_MNDLY_RES_LOW_TD_REMOTE_DLYM_MR         (16u)
#define BITM_PHY_OA_TD_MNDLY_RES_LOW_TD_REMOTE_DLYM_MR         (0x0000FFFFu)

/* Register Name        : TD_MNDLY_RES_UP
 * Register Addr        : 0xCE07u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 4u
 */

#define PHY_OA_TD_MNDLY_RES_UP_ADDR                            (0xCE07u)
#define PHY_OA_TD_MNDLY_RES_UP_RESET_VAL                       (0x00000000u)
#define PHY_OA_TD_MNDLY_RES_UP_MMS                             (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | TD_REMOTE_DLYM_MR        | Topology Discovery - Result of    | 0x00000000  |
 * |       |                          | the remote node's Internal Delay  |             |
 * |       |                          | Measurement in Number of Pulses   |             |
 * |       |                          | Received (auto mode)              |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_TD_MNDLY_RES_UP_TD_REMOTE_DLYM_MR          (0u)
#define BITL_PHY_OA_TD_MNDLY_RES_UP_TD_REMOTE_DLYM_MR          (16u)
#define BITM_PHY_OA_TD_MNDLY_RES_UP_TD_REMOTE_DLYM_MR          (0x0000FFFFu)

/* Register Name        : TD_MNDLY_DUR
 * Register Addr        : 0xCE08u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 4u
 */

#define PHY_OA_TD_MNDLY_DUR_ADDR                               (0xCE08u)
#define PHY_OA_TD_MNDLY_DUR_RESET_VAL                          (0x00000000u)
#define PHY_OA_TD_MNDLY_DUR_MMS                                (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-12 | TD_REMOTE_DLYM_DUR       | Topology Discovery - Estimated    | 0x00000000  |
 * |       |                          | duration of the remote node's     |             |
 * |       |                          | Internal Delay Measurement in ms  |             |
 * |       |                          | (0 = 1ms) (auto mode)             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_TD_MNDLY_DUR_TD_REMOTE_DLYM_DUR            (12u)
#define BITL_PHY_OA_TD_MNDLY_DUR_TD_REMOTE_DLYM_DUR            (4u)
#define BITM_PHY_OA_TD_MNDLY_DUR_TD_REMOTE_DLYM_DUR            (0x0000F000u)

/* Register Name        : WS_STATUS
 * Register Addr        : 0xD000u
 * Register Reset Value : 0x00008000u
 * Register MMS         : 4u
 */

#define PHY_OA_WS_STATUS_ADDR                                  (0xD000u)
#define PHY_OA_WS_STATUS_RESET_VAL                             (0x00008000u)
#define PHY_OA_WS_STATUS_MMS                                   (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 14    | WS_LPFAIL                | Sleep/Wake - Low power entry      | 0x00000000  |
 * |       |                          | request status. This bit is       |             |
 * |       |                          | cleared when a request to         |             |
 * |       |                          | transition to LOW POWER is        |             |
 * |       |                          | received                          |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15    | WS_LPCAP                 | Sleep/Wake - PM client            | 0x00000001  |
 * |       |                          | capability                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_WS_STATUS_WS_LPFAIL                        (14u)
#define BITL_PHY_OA_WS_STATUS_WS_LPFAIL                        (1u)
#define BITM_PHY_OA_WS_STATUS_WS_LPFAIL                        (0x4000u)
#define ENUM_PHY_OA_WS_STATUS_WS_LPFAIL_ENUM000                (0x00000000u)
#define ENUM_PHY_OA_WS_STATUS_WS_LPFAIL_ENUM001                (0x00000001u)

#define BITP_PHY_OA_WS_STATUS_WS_LPCAP                         (15u)
#define BITL_PHY_OA_WS_STATUS_WS_LPCAP                         (1u)
#define BITM_PHY_OA_WS_STATUS_WS_LPCAP                         (0x8000u)
#define ENUM_PHY_OA_WS_STATUS_WS_LPCAP_ENUM000                 (0x00000000u)
#define ENUM_PHY_OA_WS_STATUS_WS_LPCAP_ENUM001                 (0x00000001u)

/* Register Name        : WS_CTRL
 * Register Addr        : 0xD001u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 4u
 */

#define PHY_OA_WS_CTRL_ADDR                                    (0xD001u)
#define PHY_OA_WS_CTRL_RESET_VAL                               (0x00000000u)
#define PHY_OA_WS_CTRL_MMS                                     (4u)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 14    | WS_LPEXIT                | Sleep/Wake - Request transition   | 0x00000000  |
 * |       |                          | from low power on network         |             |
 * |       |                          | segment. Send Wake-Up Signal      |             |
 * |       |                          | (WUS). Self-clearing bit          |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15    | WS_LPREQ                 | Sleep/Wake - Request transition   | 0x00000000  |
 * |       |                          | to low power on local node. Go    |             |
 * |       |                          | to sleep. Self-clearing bit       |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_PHY_OA_WS_CTRL_WS_LPEXIT                          (14u)
#define BITL_PHY_OA_WS_CTRL_WS_LPEXIT                          (1u)
#define BITM_PHY_OA_WS_CTRL_WS_LPEXIT                          (0x4000u)
#define ENUM_PHY_OA_WS_CTRL_WS_LPEXIT_INACTIVE                 (0x00000000u)
#define ENUM_PHY_OA_WS_CTRL_WS_LPEXIT_TRIGGER                  (0x00000001u)

#define BITP_PHY_OA_WS_CTRL_WS_LPREQ                           (15u)
#define BITL_PHY_OA_WS_CTRL_WS_LPREQ                           (1u)
#define BITM_PHY_OA_WS_CTRL_WS_LPREQ                           (0x8000u)
#define ENUM_PHY_OA_WS_CTRL_WS_LPREQ_INACTIVE                  (0x00000000u)
#define ENUM_PHY_OA_WS_CTRL_WS_LPREQ_TRIGGER                   (0x00000001u)

#endif /* ADI_PHY_OA_REG_H */
