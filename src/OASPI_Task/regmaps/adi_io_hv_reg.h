/**
 * Copyright © 2026 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/************************************************************************************
 *   @file   adi_io_hv_reg.h
 *   @brief  This header file provides register descriptions for the
 *           IO High-Voltage Domain.
 ***********************************************************************************/

#ifndef ADI_IO_HV_REG_H
#define ADI_IO_HV_REG_H

#define IO_HV_NUM_REGS                                                 (11u)

/* Register Name        : REVISION_CONTROL
 * Register Addr        : 0xB105u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_HV_REVISION_CONTROL_ADDR                                    (0xB105u)
#define IO_HV_REVISION_CONTROL_RESET_VAL                               (0x00000000u)
#define IO_HV_REVISION_CONTROL_MMS                                     (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 03-00 | REV_CODE                 | Chip revision code                | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 15-04 | REV_CODE_DIG             | Digital revision code             | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_HV_REVISION_CONTROL_REV_CODE                           (0u)
#define BITL_IO_HV_REVISION_CONTROL_REV_CODE                           (4u)
#define BITM_IO_HV_REVISION_CONTROL_REV_CODE                           (0x0000000Fu)
#define ENUM_IO_HV_REVISION_CONTROL_REV_CODE_ENUM000                   (0x00000000u)
#define ENUM_IO_HV_REVISION_CONTROL_REV_CODE_ENUM003                   (0x00000003u)
#define ENUM_IO_HV_REVISION_CONTROL_REV_CODE_ENUM004                   (0x00000004u)

#define BITP_IO_HV_REVISION_CONTROL_REV_CODE_DIG                       (4u)
#define BITL_IO_HV_REVISION_CONTROL_REV_CODE_DIG                       (12u)
#define BITM_IO_HV_REVISION_CONTROL_REV_CODE_DIG                       (0x0000FFF0u)

/* Register Name        : BOOTLOADER_STATUS_0
 * Register Addr        : 0xB106u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_HV_BOOTLOADER_STATUS_0_ADDR                                 (0xB106u)
#define IO_HV_BOOTLOADER_STATUS_0_RESET_VAL                            (0x00000000u)
#define IO_HV_BOOTLOADER_STATUS_0_MMS                                  (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 03-00 | BLOCK_STATUS_0           | Bootloader Block 0 and 1 Status,  | 0x00000000  |
 * |       |                          | two bits starting from the LSBs.  |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_HV_BOOTLOADER_STATUS_0_BLOCK_STATUS_0                  (0u)
#define BITL_IO_HV_BOOTLOADER_STATUS_0_BLOCK_STATUS_0                  (4u)
#define BITM_IO_HV_BOOTLOADER_STATUS_0_BLOCK_STATUS_0                  (0x0000000Fu)
#define ENUM_IO_HV_BOOTLOADER_STATUS_0_BLOCK_STATUS_0_NOT_INITIALIZED  (0x00000000u)
#define ENUM_IO_HV_BOOTLOADER_STATUS_0_BLOCK_STATUS_0_CORRECT          (0x00000001u)
#define ENUM_IO_HV_BOOTLOADER_STATUS_0_BLOCK_STATUS_0_ECC_FIXED        (0x00000002u)
#define ENUM_IO_HV_BOOTLOADER_STATUS_0_BLOCK_STATUS_0_ERROR            (0x00000003u)

/* Register Name        : STANDBY_STATUS
 * Register Addr        : 0xB108u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_HV_STANDBY_STATUS_ADDR                                      (0xB108u)
#define IO_HV_STANDBY_STATUS_RESET_VAL                                 (0x00000000u)
#define IO_HV_STANDBY_STATUS_MMS                                       (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | DETECTED_WAKE_PIN        | Readback of a previous detection  | 0x00000000  |
 * |       |                          | of the WAKE pin begin active      |             |
 * |       |                          | (e.g. received during standby)    |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | DETECTED_WUD             | Readback of a previous detection  | 0x00000000  |
 * |       |                          | of the WUD begin active (e.g.     |             |
 * |       |                          | received during standby)          |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 2     | WAKE_PIN                 | Readback of the current (live)    | 0x00000000  |
 * |       |                          | value of the WAKE pin (polarity   |             |
 * |       |                          | corrected to active high)         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 3     | WUD                      | Readback of the current live      | 0x00000000  |
 * |       |                          | output of the Wake-up Detect      |             |
 * |       |                          | block                             |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_HV_STANDBY_STATUS_DETECTED_WAKE_PIN                    (0u)
#define BITL_IO_HV_STANDBY_STATUS_DETECTED_WAKE_PIN                    (1u)
#define BITM_IO_HV_STANDBY_STATUS_DETECTED_WAKE_PIN                    (0x01u)
#define ENUM_IO_HV_STANDBY_STATUS_DETECTED_WAKE_PIN_ENUM000            (0x00000000u)
#define ENUM_IO_HV_STANDBY_STATUS_DETECTED_WAKE_PIN_ENUM001            (0x00000001u)

#define BITP_IO_HV_STANDBY_STATUS_DETECTED_WUD                         (1u)
#define BITL_IO_HV_STANDBY_STATUS_DETECTED_WUD                         (1u)
#define BITM_IO_HV_STANDBY_STATUS_DETECTED_WUD                         (0x02u)
#define ENUM_IO_HV_STANDBY_STATUS_DETECTED_WUD_ENUM000                 (0x00000000u)
#define ENUM_IO_HV_STANDBY_STATUS_DETECTED_WUD_ENUM001                 (0x00000001u)

#define BITP_IO_HV_STANDBY_STATUS_WAKE_PIN                             (2u)
#define BITL_IO_HV_STANDBY_STATUS_WAKE_PIN                             (1u)
#define BITM_IO_HV_STANDBY_STATUS_WAKE_PIN                             (0x04u)

#define BITP_IO_HV_STANDBY_STATUS_WUD                                  (3u)
#define BITL_IO_HV_STANDBY_STATUS_WUD                                  (1u)
#define BITM_IO_HV_STANDBY_STATUS_WUD                                  (0x08u)

/* Register Name        : BOOTLOADER_STATUS_1
 * Register Addr        : 0xB10Au
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_HV_BOOTLOADER_STATUS_1_ADDR                                 (0xB10Au)
#define IO_HV_BOOTLOADER_STATUS_1_RESET_VAL                            (0x00000000u)
#define IO_HV_BOOTLOADER_STATUS_1_MMS                                  (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | BOOTLOAD_DONE            | Bootloader done                   | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | BOOTLOAD_TIMEOUT         | Bootloader did not finish in      | 0x00000000  |
 * |       |                          | 500ms. Bootloader aborted         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_HV_BOOTLOADER_STATUS_1_BOOTLOAD_DONE                   (0u)
#define BITL_IO_HV_BOOTLOADER_STATUS_1_BOOTLOAD_DONE                   (1u)
#define BITM_IO_HV_BOOTLOADER_STATUS_1_BOOTLOAD_DONE                   (0x01u)
#define ENUM_IO_HV_BOOTLOADER_STATUS_1_BOOTLOAD_DONE_BOOTLOAD_NOT_FINISHED (0x00000000u)
#define ENUM_IO_HV_BOOTLOADER_STATUS_1_BOOTLOAD_DONE_BOOTLOAD_FINISHED (0x00000001u)

#define BITP_IO_HV_BOOTLOADER_STATUS_1_BOOTLOAD_TIMEOUT                (1u)
#define BITL_IO_HV_BOOTLOADER_STATUS_1_BOOTLOAD_TIMEOUT                (1u)
#define BITM_IO_HV_BOOTLOADER_STATUS_1_BOOTLOAD_TIMEOUT                (0x02u)
#define ENUM_IO_HV_BOOTLOADER_STATUS_1_BOOTLOAD_TIMEOUT_NOT_TRIGGERED  (0x00000000u)
#define ENUM_IO_HV_BOOTLOADER_STATUS_1_BOOTLOAD_TIMEOUT_TRIGGERED      (0x00000001u)

/* Register Name        : SLEEP_MODE_CONTROL
 * Register Addr        : 0xB14Au
 * Register Reset Value : 0x00000004u
 * Register MMS         : 0xAu
 */

#define IO_HV_SLEEP_MODE_CONTROL_ADDR                                  (0xB14Au)
#define IO_HV_SLEEP_MODE_CONTROL_RESET_VAL                             (0x00000004u)
#define IO_HV_SLEEP_MODE_CONTROL_MMS                                   (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | GOTO_SLEEP               | Sleep command forwarded to the    | 0x00000000  |
 * |       |                          | sleep/wake always-on block        |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | GOTO_STANDBY             | Standby command applied directly  | 0x00000000  |
 * |       |                          | from register map                 |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_HV_SLEEP_MODE_CONTROL_GOTO_SLEEP                       (0u)
#define BITL_IO_HV_SLEEP_MODE_CONTROL_GOTO_SLEEP                       (1u)
#define BITM_IO_HV_SLEEP_MODE_CONTROL_GOTO_SLEEP                       (0x01u)
#define ENUM_IO_HV_SLEEP_MODE_CONTROL_GOTO_SLEEP_INACTIVE              (0x00000000u)
#define ENUM_IO_HV_SLEEP_MODE_CONTROL_GOTO_SLEEP_TRIGGER               (0x00000001u)

#define BITP_IO_HV_SLEEP_MODE_CONTROL_GOTO_STANDBY                     (1u)
#define BITL_IO_HV_SLEEP_MODE_CONTROL_GOTO_STANDBY                     (1u)
#define BITM_IO_HV_SLEEP_MODE_CONTROL_GOTO_STANDBY                     (0x02u)
#define ENUM_IO_HV_SLEEP_MODE_CONTROL_GOTO_STANDBY_INACTIVE            (0x00000000u)
#define ENUM_IO_HV_SLEEP_MODE_CONTROL_GOTO_STANDBY_TRIGGER             (0x00000001u)

/* Register Name        : BLOCK_RESET_CONTROL
 * Register Addr        : 0xB1FEu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_HV_BLOCK_RESET_CONTROL_ADDR                                 (0xB1FEu)
#define IO_HV_BLOCK_RESET_CONTROL_RESET_VAL                            (0x00000000u)
#define IO_HV_BLOCK_RESET_CONTROL_MMS                                  (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | OTP_SOFT_RESET           | OTP controller reset.             | 0x00000000  |
 * |       |                          | Self-clearing bit.                |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | BOOT_LOADER_SOFT_RESET   | Bootloader reset. Self-clearing   | 0x00000000  |
 * |       |                          | bit.                              |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 2     | CLR_STANDBY_STATUS       | Clear the readback of a previous  | 0x00000000  |
 * |       |                          | detection of the WUD or WAKE pin  |             |
 * |       |                          | begin active (e.g. received       |             |
 * |       |                          | during standby)                   |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_HV_BLOCK_RESET_CONTROL_OTP_SOFT_RESET                  (0u)
#define BITL_IO_HV_BLOCK_RESET_CONTROL_OTP_SOFT_RESET                  (1u)
#define BITM_IO_HV_BLOCK_RESET_CONTROL_OTP_SOFT_RESET                  (0x01u)
#define ENUM_IO_HV_BLOCK_RESET_CONTROL_OTP_SOFT_RESET_INACTIVE         (0x00000000u)
#define ENUM_IO_HV_BLOCK_RESET_CONTROL_OTP_SOFT_RESET_TRIGGER          (0x00000001u)

#define BITP_IO_HV_BLOCK_RESET_CONTROL_BOOT_LOADER_SOFT_RESET          (1u)
#define BITL_IO_HV_BLOCK_RESET_CONTROL_BOOT_LOADER_SOFT_RESET          (1u)
#define BITM_IO_HV_BLOCK_RESET_CONTROL_BOOT_LOADER_SOFT_RESET          (0x02u)
#define ENUM_IO_HV_BLOCK_RESET_CONTROL_BOOT_LOADER_SOFT_RESET_INACTIVE (0x00000000u)
#define ENUM_IO_HV_BLOCK_RESET_CONTROL_BOOT_LOADER_SOFT_RESET_TRIGGER  (0x00000001u)

#define BITP_IO_HV_BLOCK_RESET_CONTROL_CLR_STANDBY_STATUS              (2u)
#define BITL_IO_HV_BLOCK_RESET_CONTROL_CLR_STANDBY_STATUS              (1u)
#define BITM_IO_HV_BLOCK_RESET_CONTROL_CLR_STANDBY_STATUS              (0x04u)
#define ENUM_IO_HV_BLOCK_RESET_CONTROL_CLR_STANDBY_STATUS_INACTIVE     (0x00000000u)
#define ENUM_IO_HV_BLOCK_RESET_CONTROL_CLR_STANDBY_STATUS_TRIGGER      (0x00000001u)

/* Register Name        : RESET_CONTROL
 * Register Addr        : 0xB1FFu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_HV_RESET_CONTROL_ADDR                                       (0xB1FFu)
#define IO_HV_RESET_CONTROL_RESET_VAL                                  (0x00000000u)
#define IO_HV_RESET_CONTROL_MMS                                        (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 15-00 | RESET                    | Main soft reset signature. Must   | 0x00000000  |
 * |       |                          | write a value of 0xA55A to this   |             |
 * |       |                          | field to cause a soft reset on    |             |
 * |       |                          | the HV die. Resets oscillator     |             |
 * |       |                          | clock, communication clock and    |             |
 * |       |                          | functional clock domains.         |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_HV_RESET_CONTROL_RESET                                 (0u)
#define BITL_IO_HV_RESET_CONTROL_RESET                                 (16u)
#define BITM_IO_HV_RESET_CONTROL_RESET                                 (0x0000FFFFu)

/* Register Name        : HIGH_SPEED_SERIAL_COMM
 * Register Addr        : 0xB200u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_HV_HIGH_SPEED_SERIAL_COMM_ADDR                              (0xB200u)
#define IO_HV_HIGH_SPEED_SERIAL_COMM_RESET_VAL                         (0x00000000u)
#define IO_HV_HIGH_SPEED_SERIAL_COMM_MMS                               (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | HS_COMM_PARITY_ERR_CLEAN | Parity error clean from the       | 0x00000000  |
 * |       |                          | inter-die interface.              |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 1     | hs_comm_bit_stop_err_clea| Bit stop error clean from the     | 0x00000000  |
 * |       |                          | inter-die interface.              |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_HV_HIGH_SPEED_SERIAL_COMM_HS_COMM_PARITY_ERR_CLEAN     (0u)
#define BITL_IO_HV_HIGH_SPEED_SERIAL_COMM_HS_COMM_PARITY_ERR_CLEAN     (1u)
#define BITM_IO_HV_HIGH_SPEED_SERIAL_COMM_HS_COMM_PARITY_ERR_CLEAN     (0x01u)

#define BITP_IO_HV_HIGH_SPEED_SERIAL_COMM_HS_COMM_BIT_STOP_ERR_CLEAN   (1u)
#define BITL_IO_HV_HIGH_SPEED_SERIAL_COMM_HS_COMM_BIT_STOP_ERR_CLEAN   (1u)
#define BITM_IO_HV_HIGH_SPEED_SERIAL_COMM_HS_COMM_BIT_STOP_ERR_CLEAN   (0x02u)

/* Register Name        : OTP_CONFIG_0
 * Register Addr        : 0xB20Fu
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_HV_OTP_CONFIG_0_ADDR                                        (0xB20Fu)
#define IO_HV_OTP_CONFIG_0_RESET_VAL                                   (0x00000000u)
#define IO_HV_OTP_CONFIG_0_MMS                                         (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | OTP_READ_TYPE_DIFF_RED   | Read type of the OTP              | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_HV_OTP_CONFIG_0_OTP_READ_TYPE_DIFF_RED                 (0u)
#define BITL_IO_HV_OTP_CONFIG_0_OTP_READ_TYPE_DIFF_RED                 (1u)
#define BITM_IO_HV_OTP_CONFIG_0_OTP_READ_TYPE_DIFF_RED                 (0x01u)
#define ENUM_IO_HV_OTP_CONFIG_0_OTP_READ_TYPE_DIFF_RED_ENUM000         (0x00000000u)
#define ENUM_IO_HV_OTP_CONFIG_0_OTP_READ_TYPE_DIFF_RED_ENUM001         (0x00000001u)

/* Register Name        : OTP_CONFIG_1
 * Register Addr        : 0xB210u
 * Register Reset Value : 0x00000000u
 * Register MMS         : 0xAu
 */

#define IO_HV_OTP_CONFIG_1_ADDR                                        (0xB210u)
#define IO_HV_OTP_CONFIG_1_RESET_VAL                                   (0x00000000u)
#define IO_HV_OTP_CONFIG_1_MMS                                         (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 0     | OTP_ACCESS_MUX_CTRL      | OTP access mux control            | 0x00000000  |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_HV_OTP_CONFIG_1_OTP_ACCESS_MUX_CTRL                    (0u)
#define BITL_IO_HV_OTP_CONFIG_1_OTP_ACCESS_MUX_CTRL                    (1u)
#define BITM_IO_HV_OTP_CONFIG_1_OTP_ACCESS_MUX_CTRL                    (0x01u)
#define ENUM_IO_HV_OTP_CONFIG_1_OTP_ACCESS_MUX_CTRL_ENUM000            (0x00000000u)
#define ENUM_IO_HV_OTP_CONFIG_1_OTP_ACCESS_MUX_CTRL_ENUM001            (0x00000001u)

/* Register Name        : CONFIG_EN_PADS_CONFIG
 * Register Addr        : 0xB21Cu
 * Register Reset Value : 0x000001A8u
 * Register MMS         : 0xAu
 */

#define IO_HV_CONFIG_EN_PADS_CONFIG_ADDR                               (0xB21Cu)
#define IO_HV_CONFIG_EN_PADS_CONFIG_RESET_VAL                          (0x000001A8u)
#define IO_HV_CONFIG_EN_PADS_CONFIG_MMS                                (0xAu)

/* Bit field description table:
 * +=======+==========================+===================================+=============+
 * | Bits  | Bit Field                | Description                       | Value       |
 * +=======+==========================+===================================+=============+
 * | 1     | TP_IP_EN_EN              | Enable the input receiver on the  | 0x00000000  |
 * |       |                          | EN pad                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 * | 2     | TP_OUT_ENB_EN            | Disable the output driver on the  | 0x00000000  |
 * |       |                          | EN pad                            |             |
 * +-------+--------------------------+-----------------------------------+-------------+
 */

#define BITP_IO_HV_CONFIG_EN_PADS_CONFIG_TP_IP_EN_EN                   (1u)
#define BITL_IO_HV_CONFIG_EN_PADS_CONFIG_TP_IP_EN_EN                   (1u)
#define BITM_IO_HV_CONFIG_EN_PADS_CONFIG_TP_IP_EN_EN                   (0x02u)
#define ENUM_IO_HV_CONFIG_EN_PADS_CONFIG_TP_IP_EN_EN_ENUM0DISABLED     (0x00000000u)
#define ENUM_IO_HV_CONFIG_EN_PADS_CONFIG_TP_IP_EN_EN_ENUM1ENABLED      (0x00000001u)

#define BITP_IO_HV_CONFIG_EN_PADS_CONFIG_TP_OUT_ENB_EN                 (2u)
#define BITL_IO_HV_CONFIG_EN_PADS_CONFIG_TP_OUT_ENB_EN                 (1u)
#define BITM_IO_HV_CONFIG_EN_PADS_CONFIG_TP_OUT_ENB_EN                 (0x04u)
#define ENUM_IO_HV_CONFIG_EN_PADS_CONFIG_TP_OUT_ENB_EN_ENUM0ENABLED    (0x00000000u)
#define ENUM_IO_HV_CONFIG_EN_PADS_CONFIG_TP_OUT_ENB_EN_ENUM1DISABLED   (0x00000001u)

#endif /* ADI_IO_HV_REG_H */
