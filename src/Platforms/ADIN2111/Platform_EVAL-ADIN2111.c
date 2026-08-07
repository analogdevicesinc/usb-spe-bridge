/**
 * Copyright © 2026 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "Platform.h"
#include "PlatformCommon.h"
#include "ADIN1110_Platform.h"
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

static uint32_t hwCfg = 0;

#ifndef ADIN2111_VDDIO
#define ADIN2111_VDDIO MXC_GPIO_VSSEL_VDDIO
#endif

/* Need to re-define these for VDDIO levels and drive strengths */
static const mxc_gpio_cfg_t adin1110spiPins[] = {
    { MXC_GPIO2, (MXC_GPIO_PIN_26 | MXC_GPIO_PIN_27 | MXC_GPIO_PIN_28 | MXC_GPIO_PIN_29),
      MXC_GPIO_FUNC_ALT2, MXC_GPIO_PAD_NONE, ADIN2111_VDDIO, MXC_GPIO_DRVSTR_2 }
};

/* IRQ input pin */
static const mxc_gpio_cfg_t adin1110extIrqPin = {
    MXC_GPIO2, MXC_GPIO_PIN_25, MXC_GPIO_FUNC_IN, MXC_GPIO_PAD_NONE,
    ADIN2111_VDDIO, MXC_GPIO_DRVSTR_0
};

/* Reset pin */
/* No Reset control for the T1L on this board */

/* Bypass Relay */
static const mxc_gpio_cfg_t bypassRelayPin = {
    MXC_GPIO0, MXC_GPIO_PIN_23, MXC_GPIO_FUNC_OUT, MXC_GPIO_PAD_NONE,
    MXC_GPIO_VSSEL_VDDIOH, MXC_GPIO_DRVSTR_0
};

/* Helper to determine number of SPI GPIO configurations for initialization */
#define NUM_ADIN1110_SPI_GPIOS   (sizeof(adin1110spiPins) / sizeof(mxc_gpio_cfg_t))

/* Platform SPI instance for AD3306. */
static spi_inst_data_t adin1110Spi = {
    .csPins = { .ss0 = true, .ss1 = false, .ss2 = false },
    .spiInst = MXC_SPI0,
    .csIdx = 1
};

static const mxc_gpio_cfg_t ledPins[PLATFORM_NUM_LEDS] = {
    { MXC_GPIO0, MXC_GPIO_PIN_14, MXC_GPIO_FUNC_OUT, MXC_GPIO_PAD_NONE, MXC_GPIO_VSSEL_VDDIOH, MXC_GPIO_DRVSTR_2 }, //MCU0
    { MXC_GPIO2, MXC_GPIO_PIN_22, MXC_GPIO_FUNC_OUT, MXC_GPIO_PAD_NONE, MXC_GPIO_VSSEL_VDDIOH, MXC_GPIO_DRVSTR_2 }, //MCU1
    { MXC_GPIO1, MXC_GPIO_PIN_23, MXC_GPIO_FUNC_OUT, MXC_GPIO_PAD_NONE, MXC_GPIO_VSSEL_VDDIOH, MXC_GPIO_DRVSTR_2 }, //MCU2
};

/* Push button GPIOs */
static const mxc_gpio_cfg_t buttonPins[PLATFORM_NUM_BUTTONS] = {
    { MXC_GPIO4, MXC_GPIO_PIN_0, MXC_GPIO_FUNC_IN, MXC_GPIO_PAD_NONE, MXC_GPIO_VSSEL_VDDIOH, MXC_GPIO_DRVSTR_0 },    //BOOT
};

static void ADIN1110_ExtIrqHandler(void *userData);
static void ADIN1110_SPI_Callback(void *regs, int result);

void PlatformInit( )
{
    int i;

    //General platform init first
    PlatformCommonInit();

    for (i = 0; i < PLATFORM_NUM_LEDS; i++) {
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

    hwCfg = 0;

    //Configure the bypass relay GPIO
    PlatformCommonGpioInit(&bypassRelayPin, NULL, NULL, 0);
    MXC_GPIO_OutSet(bypassRelayPin.port, bypassRelayPin.mask);
}

uint32_t PlatformGetConfigSwitches()
{
    return hwCfg;
}

void PlatformSetLED(uint8_t led_num, bool on)
{
    if (led_num >= PLATFORM_NUM_LEDS) {
        //Invalid
        return;
    }

    if (on) {
        MXC_GPIO_OutClr(ledPins[led_num].port, ledPins[led_num].mask);
    } else {
        MXC_GPIO_OutSet(ledPins[led_num].port, ledPins[led_num].mask);
    }
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
    //No I2C Instances on this board in use
    return -1;
}


/*******************************************************************************
 * ADIN1110 Specific Platform Functions
 ******************************************************************************/
void ADIN1110_PlatformInit( )
{
    int i;

    adin1110Spi.busLock = xSemaphoreCreateBinary();

    PlatformCommonSpiInit(&adin1110Spi);
    for (i = 0; i < NUM_ADIN1110_SPI_GPIOS; i++) {
        PlatformCommonGpioInit(&(adin1110spiPins[i]), NULL, NULL, 0);
    }
    PlatformCommonGpioInit(&adin1110extIrqPin, ADIN1110_ExtIrqHandler, NULL, MXC_GPIO_INT_FALLING);

    //Start with interrupts disabled
    MXC_GPIO_DisableInt(adin1110extIrqPin.port, adin1110extIrqPin.mask);

    //No Reset pin on this board
    //PlatformCommonGpioInit(&adin1110resetPin, NULL, NULL, 0);
}

void ADIN1110_PlatformReset( )
{
    //No reset pin on this board
    /*
     * MXC_GPIO_OutSet(adin1110resetPin.port, adin1110resetPin.mask);
     * vTaskDelay(100);
     * MXC_GPIO_OutClr(adin1110resetPin.port, adin1110resetPin.mask);
     * vTaskDelay(100);
     * MXC_GPIO_OutSet(adin1110resetPin.port, adin1110resetPin.mask);
     * vTaskDelay(100);
     */
}

void ADIN1110_PlatformEnableInterrupts(bool en)
{
    if (en) {
        MXC_GPIO_EnableInt(adin1110extIrqPin.port, adin1110extIrqPin.mask);
    } else {
        MXC_GPIO_DisableInt(adin1110extIrqPin.port, adin1110extIrqPin.mask);
    }
}

static void ADIN1110_ExtIrqHandler(void *userData)
{
    ADIN1110_OnIRQ();
}

static void ADIN1110_SPI_Callback(void *regs, int result)
{
    BaseType_t xHigherPriorityTaskWoken;

    xSemaphoreGiveFromISR(adin1110Spi.busLock, &xHigherPriorityTaskWoken);
    ADIN1110_OnSPI_Complete();
    portYIELD_FROM_ISR(xHigherPriorityTaskWoken);
}

bool ADIN1110_PlatformSPI(uint8_t *txBuf, uint8_t *rxBuf, uint32_t xferSize)
{
    return PlatformCommonSpiTransfer(&adin1110Spi, txBuf, rxBuf, xferSize, ADIN1110_SPI_Callback);
}
