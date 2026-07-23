/**
 * Copyright © 2026 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stdio.h>
#include <string.h>

#include "24LC256.h"
#include "Platform.h"

#include "FreeRTOS.h"
#include "semphr.h"

#ifndef MAX
#define MAX(a, b) ((a > b) ? a : b)
#endif

#ifndef MIN
#define MIN(a, b) ((a < b) ? a : b)
#endif

#define EEPROM_24LC256_SIZE     32768 /* 256kBit / 32kB */
#define EEPROM_24LC256_PAGESIZE 64
#define EEPROM_24LC256_PAGEMASK (EEPROM_24LC256_PAGESIZE - 1)

#define EEPROM_24LC256_ADDRMSK  0x7     /* Lower 3 bits of I2C address */
#define EEPROM_24LC256_CTRLMSK  0x50    /* b1010xxx */

#define EEPROM_24LC256_POLL_MS      5   /* 5ms write cycle per data sheet */
#define EEPROM_24LC256_POLL_COUNT   3   /* Try 3 times */

/* I2C Bus number */
static uint8_t i2c_bus = 0;
static uint8_t bus_addr = 0;
static uint8_t xmit_buffer[EEPROM_24LC256_PAGESIZE + 2]; //Page size + 2 address bytes

static SemaphoreHandle_t xmitBufferLock;

static int EEPROM_24LC256_PollForAck(void);

int EEPROM_24LC256_Init(uint8_t i2c_num, uint8_t addr_sel)
{
    uint8_t regVal;

    xmitBufferLock = xSemaphoreCreateMutex();

    //Assign the I2C number
    i2c_bus = i2c_num;
    bus_addr = EEPROM_24LC256_CTRLMSK | (addr_sel & EEPROM_24LC256_ADDRMSK);

    /* Confirm we can talk to the device by reading a byte */
    return EEPROM_24LC256_Read(0, &regVal, 1);
}

int EEPROM_24LC256_Read(uint16_t offset, uint8_t *dest_ptr, uint16_t count)
{
    uint8_t regTmp[2];

    //Address, MSB first
    regTmp[0] = (offset >> 8) & 0xFF;
    regTmp[1] = (offset & 0xFF);
    return PlatformI2cWriteRead(i2c_bus, bus_addr, regTmp, 2, dest_ptr, count, false);
}

int EEPROM_24LC256_Write(uint16_t offset, uint8_t *src, uint16_t count)
{
    uint8_t toSend;
    int ret = 0;

    xSemaphoreTake(xmitBufferLock, portMAX_DELAY);
    while (count > 0) {
        toSend = MIN(EEPROM_24LC256_PAGESIZE - (offset & EEPROM_24LC256_PAGEMASK), count);
        xmit_buffer[0] = ((offset >> 8) & 0xFF);
        xmit_buffer[1] = (offset & 0xFF);
        memcpy(&xmit_buffer[2], src, toSend);
        if ((ret = PlatformI2cWriteRead(i2c_bus, bus_addr, xmit_buffer, toSend + 2, NULL, 0, false))) {
            break;
        }

        /* Need to wait for write cycle to finish */
        if ((ret = EEPROM_24LC256_PollForAck())) {
            break;
        }

        src += toSend;
        count -= toSend;
        offset += toSend;
    }
    xSemaphoreGive(xmitBufferLock);
    return ret;
}

static int EEPROM_24LC256_PollForAck( )
{
    int i;
    uint8_t dummy;

    for (i = 0; i < EEPROM_24LC256_POLL_COUNT; i++) {
        vTaskDelay(EEPROM_24LC256_POLL_MS / portTICK_RATE_MS);
        if (EEPROM_24LC256_Read(0, &dummy, 1) == 0) {
            return 0;
        }
    }

    return -1;
}
