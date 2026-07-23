/**
 * Copyright © 2026 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/****************************************************************
 *   @file   adi_otp_reg.h
 *   @brief  This header file provides register descriptions for the
 *           OTP (One-Time Programmable).
 ***************************************************************/

#ifndef ADI_OTP_REG_H
#define ADI_OTP_REG_H

#define OTP_NUM_REGS                               (8u)

/* Register Name        : OMC
 * Register Addr        : 0xB000u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define OTP_OMC_ADDR                               (0xB000u)
#define OTP_OMC_RESET_VAL                          (0x00000000u)
#define OTP_OMC_MMS                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | PROG_MODE_REG            | Places the OTP Controller in      | 0x00000000  |
 * |       |                          | program mode; must be set before  |             |
 * |       |                          | attempting a program operation.   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | WR_PENDING               | Must be asserted to enable the    | 0x00000000  |
 * |       |                          | controller to begin a program     |             |
 * |       |                          | operation. Prior to asserting     |             |
 * |       |                          | this bit, all intended address    |             |
 * |       |                          | and data information must be      |             |
 * |       |                          | set. *See section on memory       |             |
 * |       |                          | programming for a full            |             |
 * |       |                          | explanation.                      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 2     | AUTO_INCR_EN_REG         | Allows the automatic increment    | 0x00000000  |
 * |       |                          | of address values during program  |             |
 * |       |                          | or read operations; value of      |             |
 * |       |                          | increment is given by register    |             |
 * |       |                          | OTP_OMC[5:4]                      |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 3     | VERIFY_AND_SOAK_REG      | If asserted, the programming      | 0x00000000  |
 * |       |                          | algorithm will skip the initial   |             |
 * |       |                          | program phase and skip directly   |             |
 * |       |                          | to the verify and soak portion:   |             |
 * |       |                          | This is done by comparing the     |             |
 * |       |                          | data in register OTP_WDL to what  |             |
 * |       |                          | is currently in the memory at     |             |
 * |       |                          | the address indicated by          |             |
 * |       |                          | OTP_WAH/OTP_WAL.                  |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 05-04 | AI_ADDR_OFFSET_REG       | Valid only if OTP_OMC[2] = 1.     | 0x00000000  |
 * |       |                          | Variable offset control for the   |             |
 * |       |                          | automatic increment of the        |             |
 * |       |                          | address after a program or read   |             |
 * |       |                          | operation.                        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_OTP_OMC_PROG_MODE_REG                 (0u)
#define BITL_OTP_OMC_PROG_MODE_REG                 (1u)
#define BITM_OTP_OMC_PROG_MODE_REG                 (0x01u)
#define ENUM_OTP_OMC_PROG_MODE_REG_DISABLE         (0x00000000u)
#define ENUM_OTP_OMC_PROG_MODE_REG_ENABLE          (0x00000001u)

#define BITP_OTP_OMC_WR_PENDING                    (1u)
#define BITL_OTP_OMC_WR_PENDING                    (1u)
#define BITM_OTP_OMC_WR_PENDING                    (0x02u)
#define ENUM_OTP_OMC_WR_PENDING_DISABLE            (0x00000000u)
#define ENUM_OTP_OMC_WR_PENDING_ENABLE             (0x00000001u)

#define BITP_OTP_OMC_AUTO_INCR_EN_REG              (2u)
#define BITL_OTP_OMC_AUTO_INCR_EN_REG              (1u)
#define BITM_OTP_OMC_AUTO_INCR_EN_REG              (0x04u)
#define ENUM_OTP_OMC_AUTO_INCR_EN_REG_DISABLE      (0x00000000u)
#define ENUM_OTP_OMC_AUTO_INCR_EN_REG_ENABLE       (0x00000001u)

#define BITP_OTP_OMC_VERIFY_AND_SOAK_REG           (3u)
#define BITL_OTP_OMC_VERIFY_AND_SOAK_REG           (1u)
#define BITM_OTP_OMC_VERIFY_AND_SOAK_REG           (0x08u)
#define ENUM_OTP_OMC_VERIFY_AND_SOAK_REG_DISABLE   (0x00000000u)
#define ENUM_OTP_OMC_VERIFY_AND_SOAK_REG_ENABLE    (0x00000001u)

#define BITP_OTP_OMC_AI_ADDR_OFFSET_REG            (4u)
#define BITL_OTP_OMC_AI_ADDR_OFFSET_REG            (2u)
#define BITM_OTP_OMC_AI_ADDR_OFFSET_REG            (0x00000030u)
#define ENUM_OTP_OMC_AI_ADDR_OFFSET_REG_ENUM000    (0x00000000u)
#define ENUM_OTP_OMC_AI_ADDR_OFFSET_REG_ENUM001    (0x00000001u)
#define ENUM_OTP_OMC_AI_ADDR_OFFSET_REG_ENUM002    (0x00000002u)
#define ENUM_OTP_OMC_AI_ADDR_OFFSET_REG_ENUM003    (0x00000003u)

/* Register Name        : WAL
 * Register Addr        : 0xB001u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define OTP_WAL_ADDR                               (0xB001u)
#define OTP_WAL_RESET_VAL                          (0x00000000u)
#define OTP_WAL_MMS                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | WR_ADDR_REGL             | Low read/write address register   | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_OTP_WAL_WR_ADDR_REGL                  (0u)
#define BITL_OTP_WAL_WR_ADDR_REGL                  (8u)
#define BITM_OTP_WAL_WR_ADDR_REGL                  (0x000000FFu)

/* Register Name        : WAH
 * Register Addr        : 0xB002u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define OTP_WAH_ADDR                               (0xB002u)
#define OTP_WAH_RESET_VAL                          (0x00000000u)
#define OTP_WAH_MMS                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 02-00 | WR_ADDR_REGH             | High read/write address register  | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_OTP_WAH_WR_ADDR_REGH                  (0u)
#define BITL_OTP_WAH_WR_ADDR_REGH                  (3u)
#define BITM_OTP_WAH_WR_ADDR_REGH                  (0x00000007u)

/* Register Name        : WDL
 * Register Addr        : 0xB003u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define OTP_WDL_ADDR                               (0xB003u)
#define OTP_WDL_RESET_VAL                          (0x00000000u)
#define OTP_WDL_MMS                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | WR_DATA_REGL             | Contains the data to be           | 0x00000000  |
 * |       |                          | programmed for the LSBs           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_OTP_WDL_WR_DATA_REGL                  (0u)
#define BITL_OTP_WDL_WR_DATA_REGL                  (8u)
#define BITM_OTP_WDL_WR_DATA_REGL                  (0x000000FFu)

/* Register Name        : WDH
 * Register Addr        : 0xB004u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define OTP_WDH_ADDR                               (0xB004u)
#define OTP_WDH_RESET_VAL                          (0x00000000u)
#define OTP_WDH_MMS                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 07-00 | WR_DATA_REGH             | Contains the data to be           | 0x00000000  |
 * |       |                          | programmed for the MSBs           |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_OTP_WDH_WR_DATA_REGH                  (0u)
#define BITL_OTP_WDH_WR_DATA_REGH                  (8u)
#define BITM_OTP_WDH_WR_DATA_REGH                  (0x000000FFu)

/* Register Name        : WRC
 * Register Addr        : 0xB005u
 * Register Reset Value : 0x00000040u
 * Register MMS         : 0xAu
 */

#define OTP_WRC_ADDR                               (0xB005u)
#define OTP_WRC_RESET_VAL                          (0x00000040u)
#define OTP_WRC_MMS                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 7     | VPP_EN_REG               | Enables the IPS program power     | 0x00000000  |
 * |       |                          | supply charge pump to program     |             |
 * |       |                          | bytes into the OTP memory. This   |             |
 * |       |                          | bit should be 0 when using        |             |
 * |       |                          | external VPP.                     |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_OTP_WRC_VPP_EN_REG                    (7u)
#define BITL_OTP_WRC_VPP_EN_REG                    (1u)
#define BITM_OTP_WRC_VPP_EN_REG                    (0x80u)
#define ENUM_OTP_WRC_VPP_EN_REG_DISABLE            (0x00000000u)
#define ENUM_OTP_WRC_VPP_EN_REG_ENABLE             (0x00000001u)

/* Register Name        : CMD
 * Register Addr        : 0xB006u
 * Register Reset Value : 0x00000060u
 * Register MMS         : 0xAu
 */

#define OTP_CMD_ADDR                               (0xB006u)
#define OTP_CMD_RESET_VAL                          (0x00000060u)
#define OTP_CMD_MMS                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 03-00 | CMD_REG                  | OTPCMD[7] Must be asserted.       | 0x00000000  |
 * |       |                          | Details below.                    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 06-05 | CMD_ACCESS_MODE_REG      | Enables the varying access modes  | 0x00000003  |
 * |       |                          | of the OTP operation.             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 7     | CMD_EN_REG               | If set, enables operation of      | 0x00000000  |
 * |       |                          | controller through register       |             |
 * |       |                          | OTP_CMD[3:0] rather than          |             |
 * |       |                          | OTP_TEC[7:0].                     |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_OTP_CMD_CMD_REG                       (0u)
#define BITL_OTP_CMD_CMD_REG                       (4u)
#define BITM_OTP_CMD_CMD_REG                       (0x0000000Fu)
#define ENUM_OTP_CMD_CMD_REG_ENUM001               (0x00000001u)
#define ENUM_OTP_CMD_CMD_REG_ENUM002               (0x00000002u)

#define BITP_OTP_CMD_CMD_ACCESS_MODE_REG           (5u)
#define BITL_OTP_CMD_CMD_ACCESS_MODE_REG           (2u)
#define BITM_OTP_CMD_CMD_ACCESS_MODE_REG           (0x00000060u)
#define ENUM_OTP_CMD_CMD_ACCESS_MODE_REG_ENUM000   (0x00000000u)
#define ENUM_OTP_CMD_CMD_ACCESS_MODE_REG_ENUM001   (0x00000001u)
#define ENUM_OTP_CMD_CMD_ACCESS_MODE_REG_ENUM002   (0x00000002u)
#define ENUM_OTP_CMD_CMD_ACCESS_MODE_REG_ENUM003   (0x00000003u)

#define BITP_OTP_CMD_CMD_EN_REG                    (7u)
#define BITL_OTP_CMD_CMD_EN_REG                    (1u)
#define BITM_OTP_CMD_CMD_EN_REG                    (0x80u)
#define ENUM_OTP_CMD_CMD_EN_REG_DISABLE            (0x00000000u)
#define ENUM_OTP_CMD_CMD_EN_REG_ENABLE             (0x00000001u)

/* Register Name        : PST
 * Register Addr        : 0xB00Fu
 * Register Reset Value : 0x00000004u
 * Register MMS         : 0xAu
 */

#define OTP_PST_ADDR                               (0xB00Fu)
#define OTP_PST_RESET_VAL                          (0x00000004u)
#define OTP_PST_MMS                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | PROG_OVER                | When asserted, indicates that     | 0x00000000  |
 * |       |                          | the program operation on the OTP  |             |
 * |       |                          | memory has been completed;        |             |
 * |       |                          | applicable when OTP_OMC[1] = 1.   |             |
 * |       |                          | *This bit will be automatically   |             |
 * |       |                          | cleared when a new program is     |             |
 * |       |                          | initiated via OTP_OMC[1].         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | FATAL_ERROR              | When asserted, indicates that     | 0x00000000  |
 * |       |                          | the maximum number of re-program  |             |
 * |       |                          | attempts have failed; applicable  |             |
 * |       |                          | when OTP_OMC[1] = 1. *This bit    |             |
 * |       |                          | will be automatically cleared     |             |
 * |       |                          | when a new program is initiated   |             |
 * |       |                          | via OTP_OMC[1].                   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 2     | CMD_DONE                 | When asserted, indicates that     | 0x00000001  |
 * |       |                          | the current command to the OTP    |             |
 * |       |                          | memory has finished and that it   |             |
 * |       |                          | is available to receive new       |             |
 * |       |                          | instructions.                     |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_OTP_PST_PROG_OVER                     (0u)
#define BITL_OTP_PST_PROG_OVER                     (1u)
#define BITM_OTP_PST_PROG_OVER                     (0x01u)
#define ENUM_OTP_PST_PROG_OVER_NOT_TRIGGERED       (0x00000000u)
#define ENUM_OTP_PST_PROG_OVER_TRIGGERED           (0x00000001u)

#define BITP_OTP_PST_FATAL_ERROR                   (1u)
#define BITL_OTP_PST_FATAL_ERROR                   (1u)
#define BITM_OTP_PST_FATAL_ERROR                   (0x02u)
#define ENUM_OTP_PST_FATAL_ERROR_NOT_TRIGGERED     (0x00000000u)
#define ENUM_OTP_PST_FATAL_ERROR_TRIGGERED         (0x00000001u)

#define BITP_OTP_PST_CMD_DONE                      (2u)
#define BITL_OTP_PST_CMD_DONE                      (1u)
#define BITM_OTP_PST_CMD_DONE                      (0x04u)
#define ENUM_OTP_PST_CMD_DONE_ENUM000              (0x00000000u)
#define ENUM_OTP_PST_CMD_DONE_ENUM001              (0x00000001u)

#endif /* ADI_OTP_REG_H */
