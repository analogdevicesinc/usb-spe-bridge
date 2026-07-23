/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stdio.h>

#include "ADT7422.h"
#include "Platform.h"

#define ADT7422_DEV_ADDRESS     0x48  /*!< I2C device address, 7-bit */

#define ADT7422_REG_TEMPMSB     0x00
#define ADT7422_REG_TEMPLSB     0x01
#define ADT7422_REG_STATUS      0x02
#define ADT7422_REG_CONFIG      0x03
#define ADT7422_REG_ID          0x0B
//Note: There are other registers unused in this implementation, so not defined

/* Some register fields */
#define ADT7422_EXPECT_ID       0xCB
#define ADT7422_CFG_16BIT       0x80
#define ADT7422_CFG_OP_1SPS     0x40

/* Conversion value when going from 16-bits to degrees C */
#define ADT7422_16BIT_CONV      0.0078f

/* I2C Bus number */
static uint8_t i2c_bus = 0;

/** Prototype */
static int ADT7422_ReadRegs(uint8_t regAddr, uint8_t *regVal, uint8_t numReg);



int ADT7422_Init(uint8_t i2c_num)
{
    int status;
    uint8_t regVal;

    //Assign the I2C number
    i2c_bus = i2c_num;

    /* Confirm we can talk to the device by checking the ID register */
    status = ADT7422_RegRead(ADT7422_REG_ID, &regVal);
    if ((status != 0) || (regVal != ADT7422_EXPECT_ID)) {
        return -1;
    }

    /* Default configure for 16-bit, 1SPS operation */
    regVal = ADT7422_CFG_16BIT | ADT7422_CFG_OP_1SPS;
    status = ADT7422_RegWrite(ADT7422_REG_CONFIG, regVal);

    return status;
}

int ADT7422_ReadTempC(float *tempC)
{
    uint8_t tempRegs[2];
    int16_t tempData;
    int status;

    //Read both regs at once
    status = ADT7422_ReadRegs(ADT7422_REG_TEMPMSB, tempRegs, 2);

    //Data is Big Endian from the device, set accordingly
    tempData = (tempRegs[0] << 8) | (tempRegs[1]);

    *tempC = (float)tempData * ADT7422_16BIT_CONV;
    return status;
}

int ADT7422_ReadRegs(uint8_t regAddr, uint8_t *regVal, uint8_t numReg)
{
    uint8_t regTmp = regAddr;

    return PlatformI2cWriteRead(i2c_bus, ADT7422_DEV_ADDRESS, &regTmp, 1, regVal, numReg, false);
}

int ADT7422_RegRead(uint8_t regAddr, uint8_t *regVal)
{
    return ADT7422_ReadRegs(regAddr, regVal, 1);
}

int ADT7422_RegWrite(uint8_t regAddr, uint8_t regVal)
{
    uint8_t regTmp[2];

    regTmp[0] = regAddr;
    regTmp[1] = regVal;

    //Since this is just a single I2C transaction (not multiple registers),
    //don't have a mutex here protecting it. Just let the I2C bus at the platform
    //level have a bus lock.
    return PlatformI2cWriteRead(i2c_bus, ADT7422_DEV_ADDRESS, regTmp, 2, NULL, 0, false);
}
