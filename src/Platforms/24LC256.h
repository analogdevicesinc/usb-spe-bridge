/**
 * Copyright © 2026 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef __24LC256_H_
#define __24LC256_H_

#include <stdint.h>

/**
 * Initializes the 24LC256 EEPROM Sensor.
 *
 * @param i2c_num - I2C Bus number on the platform
 * @param bus_addr - I2C A2,A1,A0 address select
 * @returns 0 on Success, negative on error
 */
int EEPROM_24LC256_Init(uint8_t i2c_num, uint8_t addr_sel);

/**
 * Reads the specified number of bytes from the EEPROM offset
 *
 * @param offset - Starting byte offset in EEPROM
 * @param dest_ptr - Buffer to store the results
 * @param count - Number of bytes to read
 * @returns 0 on success, negative on error
 */
int EEPROM_24LC256_Read(uint16_t offset, uint8_t *dest_ptr, uint16_t count);

/**
 * Writes data to the EEPROM device starting at the defined offset
 *
 * @param offset - Starting byte offset in EEPROM
 * @param dest_ptr - Buffer to write from
 * @param count - Number of bytes to write
 * @returns 0 on success, negative on error
 */
int EEPROM_24LC256_Write(uint16_t offset, uint8_t *src, uint16_t count);

#endif
