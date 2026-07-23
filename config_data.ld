/*
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/*
 * Supplemental linker script to add CONFIG_DATA section
 * at the last page of flash (8KB page at end of 3MB flash)
 * IMPORTANT: This must be included after the TinyUF2 linkers to overwrite FLASH
 */
MEMORY
{
    CONFIG_DATA (r) : ORIGIN = __CONFIG_DATA_ADDR, LENGTH = __CONFIG_DATA_SIZE
    /* Overwrite the flash section with reservation for CONFIG_DATA */
    FLASH      (rx) : ORIGIN = 0x10000000 + __FLASH_BOOT_SIZE,    LENGTH = 3M - __FLASH_BOOT_SIZE - __CONFIG_DATA_SIZE
}

SECTIONS
{
    .config_data (NOLOAD) :
    {
        __config_data_start = .;
        KEEP(*(.config_data))
        KEEP(*(.config_data.*))
        __config_data_end = .;
    } > CONFIG_DATA
} INSERT AFTER .data
