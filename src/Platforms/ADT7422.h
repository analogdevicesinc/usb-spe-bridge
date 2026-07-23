/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef __ADT7422_H_
#define __ADT7422_H_

#include <stdint.h>

/**
 * Initializes the ADT7422 Sensor.
 *
 * @param i2c_num - I2C Bus number on the platform
 * @returns 0 on Success, negative on error
 */
int ADT7422_Init(uint8_t i2c_num);

/**
 * Reads the current temperature in Degrees C
 *
 * @param tempC - Location to store the temp data
 * @returns 0 on success, negative on error
 */
int ADT7422_ReadTempC(float *tempC);

/**
 * Reads a registers on the ADT7422 device
 *
 * @param regAddr - Register address to read
 * @param regVal - Where to store the data
 * @returns 0 on success, negative on error
 */
int ADT7422_RegRead(uint8_t regAddr, uint8_t *regVal);

/**
 * Writes a register on the ADT7422 device
 *
 * @param regAddr - Register address to write
 * @param regVal - Data to write
 * @returns 0 on success, negative on error
 */
int ADT7422_RegWrite(uint8_t regAddr, uint8_t regVal);

#endif
