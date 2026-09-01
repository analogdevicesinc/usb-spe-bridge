/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "Platform.h"
#include "PlatformCommon.h"
#include "AD3306_Platform.h"
#include "24LC256.h"
#include "FreeRTOS.h"
#include "semphr.h"

#include "mxc_device.h"
#include "mxc_delay.h"
#include "mxc_sys.h"
#include "mcr_regs.h"
#include "nvic_table.h"
#include "dma.h"
#include "i2c.h"

#include <stdio.h>
#include <string.h>

/* LED GPIOs */
static const mxc_gpio_cfg_t ledPins[] = {
    { MXC_GPIO1, MXC_GPIO_PIN_12, MXC_GPIO_FUNC_OUT, MXC_GPIO_PAD_NONE, MXC_GPIO_VSSEL_VDDIOH, MXC_GPIO_DRVSTR_2 }, //LED 1
    { MXC_GPIO0, MXC_GPIO_PIN_23, MXC_GPIO_FUNC_OUT, MXC_GPIO_PAD_NONE, MXC_GPIO_VSSEL_VDDIOH, MXC_GPIO_DRVSTR_2 }, //LED 2
    { MXC_GPIO0, MXC_GPIO_PIN_14, MXC_GPIO_FUNC_OUT, MXC_GPIO_PAD_NONE, MXC_GPIO_VSSEL_VDDIOH, MXC_GPIO_DRVSTR_2 }, //LED 3
    { MXC_GPIO1, MXC_GPIO_PIN_14, MXC_GPIO_FUNC_OUT, MXC_GPIO_PAD_NONE, MXC_GPIO_VSSEL_VDDIOH, MXC_GPIO_DRVSTR_2 }, //LED 4
    { MXC_GPIO1, MXC_GPIO_PIN_19, MXC_GPIO_FUNC_OUT, MXC_GPIO_PAD_NONE, MXC_GPIO_VSSEL_VDDIOH, MXC_GPIO_DRVSTR_2 }, //D7 R
    { MXC_GPIO1, MXC_GPIO_PIN_21, MXC_GPIO_FUNC_OUT, MXC_GPIO_PAD_NONE, MXC_GPIO_VSSEL_VDDIOH, MXC_GPIO_DRVSTR_2 }, //D7 G
    { MXC_GPIO1, MXC_GPIO_PIN_18, MXC_GPIO_FUNC_OUT, MXC_GPIO_PAD_NONE, MXC_GPIO_VSSEL_VDDIOH, MXC_GPIO_DRVSTR_2 }, //D7 B
};
#define PLATFORM_NUM_PHYS_LEDS (sizeof(ledPins) / sizeof(mxc_gpio_cfg_t))

/* Push button GPIOs */
static const mxc_gpio_cfg_t buttonPins[PLATFORM_NUM_BUTTONS] = {
    { MXC_GPIO2, MXC_GPIO_PIN_23, MXC_GPIO_FUNC_IN, MXC_GPIO_PAD_PULL_UP, MXC_GPIO_VSSEL_VDDIOH, MXC_GPIO_DRVSTR_0 }, //BOOT
    { MXC_GPIO1, MXC_GPIO_PIN_13, MXC_GPIO_FUNC_IN, MXC_GPIO_PAD_PULL_UP, MXC_GPIO_VSSEL_VDDIOH, MXC_GPIO_DRVSTR_0 }  //USER
};

/* Platform I2C Instances */
static i2c_inst_data_t i2c_insts[PLATFORM_NUM_I2CS] = {
    [0] = { .i2cInst = MXC_I2C0 },  //EEPROM & QUIIC
    [1] = { .i2cInst = MXC_I2C2 },  //PMOD
};

/* Platform SPI instance for AD3306. */
static spi_inst_data_t ad3306Spi = {
    .csPins = { .ss0 = true, .ss1 = false, .ss2 = false },
    .spiInst = MXC_SPI0,
    .csIdx = 1
};

/* Need to re-define these for VDDIO levels and drive strengths */
static const mxc_gpio_cfg_t spiPins[] = {
    { MXC_GPIO2, (MXC_GPIO_PIN_26 | MXC_GPIO_PIN_27 | MXC_GPIO_PIN_28 | MXC_GPIO_PIN_29),
      MXC_GPIO_FUNC_ALT2, MXC_GPIO_PAD_NONE, MXC_GPIO_VSSEL_VDDIOH, MXC_GPIO_DRVSTR_2 }
};
/* Helper to determine number of SPI GPIO configurations for initialization */
#define NUM_SPI_GPIOS   (sizeof(spiPins) / sizeof(mxc_gpio_cfg_t))

/* IRQ input pin */
static const mxc_gpio_cfg_t extIrqPin = {
    MXC_GPIO0, MXC_GPIO_PIN_8, MXC_GPIO_FUNC_IN, MXC_GPIO_PAD_NONE,
    MXC_GPIO_VSSEL_VDDIOH, MXC_GPIO_DRVSTR_0
};

#define EEPROM_I2C_BUS  0
#define EEPROM_ADDR     0

#ifdef PLATFORM_BUTTON_INTERRUPTS
static void PlatformButtonIrqHandler(void *userData);
#endif
static void AD3306_ExtIrqHandler(void *userData);
static void AD3306_SPI_Callback(void *regs, int result);


void PlatformInit( )
{
    int i;

    //General platform init first
    PlatformCommonInit();

    for (i = 0; i < PLATFORM_NUM_I2CS; i++) {
        i2c_insts[i].busLock = xSemaphoreCreateMutex();
        PlatformCommonI2cInit(&i2c_insts[i]);
    }

    for (i = 0; i < PLATFORM_NUM_PHYS_LEDS; i++) {
        PlatformSetLED(i, false);
        PlatformCommonGpioInit(&(ledPins[i]), NULL, NULL, 0);
    }

    for (i = 0; i < PLATFORM_NUM_BUTTONS; i++) {
#ifdef PLATFORM_BUTTON_INTERRUPTS
        //Configure the external interrupt GPIO
        PlatformCommonGpioInit(&(buttonPins[i]), PlatformButtonIrqHandler, (void *)i, MXC_GPIO_INT_BOTH);
#else
        PlatformCommonGpioInit(&(buttonPins[i]), NULL, NULL, 0);
#endif
    }

    if (EEPROM_24LC256_Init(EEPROM_I2C_BUS, EEPROM_ADDR) != 0) {
        //Error condition
    }
}

uint32_t PlatformGetConfigSwitches()
{
    //Currently nothing setup to do config switches on this board
    return 0;
}

bool PlatformGetButtonState(uint8_t btnNum)
{
    if (btnNum >= PLATFORM_NUM_BUTTONS) {
        return false;
    }

    //Buttons are pull to ground when pressed. So inverse
    return !MXC_GPIO_InGet(buttonPins[btnNum].port, buttonPins[btnNum].mask);
}

#ifdef PLATFORM_BUTTON_INTERRUPTS
void PlatformButtonIrqHandler(void *userData)
{
    int btnNum = (int)userData;

    if (btnNum >= PLATFORM_NUM_BUTTONS) {
        return;
    }

    PlatformOnButtonStateISR(btnNum, PlatformGetButtonState(btnNum));
}
#endif

int PlatformI2cWriteRead(uint8_t i2c_dev, uint8_t nBusAddr,
                         uint8_t *pWrBuf, uint32_t nWrLen,
                         uint8_t *pRdBuf, uint32_t nRdLen,
                         bool bRepeatStart)
{
    if (i2c_dev >= PLATFORM_NUM_I2CS) {
        return -1;
    }

    if (PlatformCommonI2cWriteRead(&i2c_insts[i2c_dev], nBusAddr,
                                   pWrBuf, nWrLen, pRdBuf, nRdLen, bRepeatStart)) {
        return 0;
    } else {
        return -1;
    }
}

void PlatformSetLED(uint8_t led_num, bool on)
{
    int i;
    uint8_t led_mask;

    if (led_num >= PLATFORM_NUM_LEDS) {
        //Invalid
        return;
    }

    //LEDs > 4 represent the permutations of the 3-color.
    if (led_num > 4) {
        led_mask = led_num - 4;
        for (i = 0; i < 3; i++) {
            if ((led_mask & (1 << i)) && on) {
                MXC_GPIO_OutClr(ledPins[4 + i].port, ledPins[4 + i].mask);
            } else {
                MXC_GPIO_OutSet(ledPins[4 + i].port, ledPins[4 + i].mask);
            }
        }
    } else {
        if (on) {
            MXC_GPIO_OutClr(ledPins[led_num].port, ledPins[led_num].mask);
        } else {
            MXC_GPIO_OutSet(ledPins[led_num].port, ledPins[led_num].mask);
        }
    }
}

int PlatformNonVolatileRead(uint16_t offset, uint8_t *dest_ptr, uint16_t count)
{
    return EEPROM_24LC256_Read(offset, dest_ptr, count);
}

int PlatformNonVolatileWrite(uint16_t offset, uint8_t *src, uint16_t count)
{
    return EEPROM_24LC256_Write(offset, src, count);
}

/*******************************************************************************
 * AD3306 Specific Platform Functions
 ******************************************************************************/
void AD3306_PlatformInit( )
{
    int i;

    ad3306Spi.busLock = xSemaphoreCreateBinary();

    PlatformCommonSpiInit(&ad3306Spi);
    for (i = 0; i < NUM_SPI_GPIOS; i++) {
        PlatformCommonGpioInit(&(spiPins[i]), NULL, NULL, 0);
    }
    PlatformCommonGpioInit(&extIrqPin, AD3306_ExtIrqHandler, NULL, MXC_GPIO_INT_FALLING);

    //Start with interrupts disabled
    MXC_GPIO_DisableInt(extIrqPin.port, extIrqPin.mask);
}

static void AD3306_ExtIrqHandler(void *userData)
{
    AD3306_OnIRQ();
}

static void AD3306_SPI_Callback(void *regs, int result)
{
    BaseType_t xHigherPriorityTaskWoken;

    xSemaphoreGiveFromISR(ad3306Spi.busLock, &xHigherPriorityTaskWoken);
    AD3306_OnSPI_Complete();
    portYIELD_FROM_ISR(xHigherPriorityTaskWoken);
}

bool AD3306_PlatformSPI(uint8_t *txBuf, uint8_t *rxBuf, uint32_t xferSize)
{
    return PlatformCommonSpiTransfer(&ad3306Spi, txBuf, rxBuf, xferSize, AD3306_SPI_Callback);
}

void AD3306_PlatformEnableInterrupts(bool en)
{
    if (en) {
        MXC_GPIO_EnableInt(extIrqPin.port, extIrqPin.mask);
    } else {
        MXC_GPIO_DisableInt(extIrqPin.port, extIrqPin.mask);
    }
}
