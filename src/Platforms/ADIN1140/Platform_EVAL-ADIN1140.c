/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "Platform.h"
#include "PlatformCommon.h"
#include "AD3306_Platform.h"
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

#define HW_CONFIG_PORT  MXC_GPIO1
#define HW_CONFIG_SHIFT 12
#define HW_CONFIG_MASK  (0xFF << HW_CONFIG_SHIFT) //8-switches = 8-bits

static mxc_gpio_cfg_t hwGpioCfg = {
    .port = HW_CONFIG_PORT,
    .mask = HW_CONFIG_MASK,
    .func = MXC_GPIO_FUNC_IN,
    .vssel = MXC_GPIO_VSSEL_VDDIO,
    .pad = MXC_GPIO_PAD_NONE
};

static uint32_t hwCfg = 0;

/* Need to re-define these for VDDIO levels and drive strengths */
static const mxc_gpio_cfg_t ad3306spiPins[] = {
    { MXC_GPIO2, (MXC_GPIO_PIN_26 | MXC_GPIO_PIN_27 | MXC_GPIO_PIN_28 | MXC_GPIO_PIN_29),
      MXC_GPIO_FUNC_ALT2, MXC_GPIO_PAD_NONE, MXC_GPIO_VSSEL_VDDIOH, MXC_GPIO_DRVSTR_2 }
};

/* Wake-up output pin */
static const mxc_gpio_cfg_t ad3306wakePin = {
    MXC_GPIO3, MXC_GPIO_PIN_0, MXC_GPIO_FUNC_OUT, MXC_GPIO_PAD_NONE,
    MXC_GPIO_VSSEL_VDDIOH, MXC_GPIO_DRVSTR_0
};

/* IRQ input pin */
static const mxc_gpio_cfg_t ad3306extIrqPin = {
    MXC_GPIO3, MXC_GPIO_PIN_1, MXC_GPIO_FUNC_IN, MXC_GPIO_PAD_NONE,
    MXC_GPIO_VSSEL_VDDIOH, MXC_GPIO_DRVSTR_0
};

/* Helper to determine number of SPI GPIO configurations for initialization */
#define NUM_AD3306_SPI_GPIOS   (sizeof(ad3306spiPins) / sizeof(mxc_gpio_cfg_t))

/* Platform SPI instance for AD3306. */
static spi_inst_data_t ad3306Spi = {
    .csPins = { .ss0 = false, .ss1 = true, .ss2 = false },
    .spiInst = MXC_SPI0,
    .csIdx = 1
};

/* Need to re-define these for VDDIO levels and drive strengths */
static const mxc_gpio_cfg_t adin1110spiPins[] = {
    { MXC_GPIO0, (MXC_GPIO_PIN_16 | MXC_GPIO_PIN_19 | MXC_GPIO_PIN_20 | MXC_GPIO_PIN_21),
      MXC_GPIO_FUNC_ALT1, MXC_GPIO_PAD_NONE, MXC_GPIO_VSSEL_VDDIOH, MXC_GPIO_DRVSTR_2 }
};

/* IRQ input pin */
static const mxc_gpio_cfg_t adin1110extIrqPin = {
    MXC_GPIO0, MXC_GPIO_PIN_17, MXC_GPIO_FUNC_IN, MXC_GPIO_PAD_NONE,
    MXC_GPIO_VSSEL_VDDIOH, MXC_GPIO_DRVSTR_0
};

/* Reset pin */
static const mxc_gpio_cfg_t adin1110resetPin = {
    MXC_GPIO0, MXC_GPIO_PIN_15, MXC_GPIO_FUNC_OUT, MXC_GPIO_PAD_NONE,
    MXC_GPIO_VSSEL_VDDIOH, MXC_GPIO_DRVSTR_0
};

/* Helper to determine number of SPI GPIO configurations for initialization */
#define NUM_ADIN1110_SPI_GPIOS   (sizeof(adin1110spiPins) / sizeof(mxc_gpio_cfg_t))

/* Platform SPI instance for AD3306. */
static spi_inst_data_t adin1110Spi = {
    .csPins = { .ss0 = true, .ss1 = false, .ss2 = false },
    .spiInst = MXC_SPI3,
    .csIdx = 0
};

static i2c_inst_data_t i2c_insts[PLATFORM_NUM_I2CS] = {
    [0] = { .i2cInst = MXC_I2C0 },
    [1] = { .i2cInst = MXC_I2C1 },
};

static const mxc_gpio_cfg_t ledPins[PLATFORM_NUM_LEDS] = {
    { MXC_GPIO2, MXC_GPIO_PIN_9, MXC_GPIO_FUNC_OUT, MXC_GPIO_PAD_NONE, MXC_GPIO_VSSEL_VDDIOH, MXC_GPIO_DRVSTR_2 },  //MCU0
    { MXC_GPIO2, MXC_GPIO_PIN_10, MXC_GPIO_FUNC_OUT, MXC_GPIO_PAD_NONE, MXC_GPIO_VSSEL_VDDIOH, MXC_GPIO_DRVSTR_2 }, //MCU1
    { MXC_GPIO1, MXC_GPIO_PIN_9, MXC_GPIO_FUNC_OUT, MXC_GPIO_PAD_NONE, MXC_GPIO_VSSEL_VDDIOH, MXC_GPIO_DRVSTR_2 },  //MCU2
    { MXC_GPIO1, MXC_GPIO_PIN_10, MXC_GPIO_FUNC_OUT, MXC_GPIO_PAD_NONE, MXC_GPIO_VSSEL_VDDIOH, MXC_GPIO_DRVSTR_2 }, //MCU3
    { MXC_GPIO0, MXC_GPIO_PIN_14, MXC_GPIO_FUNC_OUT, MXC_GPIO_PAD_NONE, MXC_GPIO_VSSEL_VDDIOH, MXC_GPIO_DRVSTR_2 }, //USER
};

/* Push button GPIOs */
static const mxc_gpio_cfg_t buttonPins[PLATFORM_NUM_BUTTONS] = {
    { MXC_GPIO4, MXC_GPIO_PIN_0, MXC_GPIO_FUNC_IN, MXC_GPIO_PAD_PULL_UP, MXC_GPIO_VSSEL_VDDIOH, MXC_GPIO_DRVSTR_0 },    //BOOT
    { MXC_GPIO0, MXC_GPIO_PIN_13, MXC_GPIO_FUNC_IN, MXC_GPIO_PAD_NONE, MXC_GPIO_VSSEL_VDDIO, MXC_GPIO_DRVSTR_0 }        //USER
};

static void AD3306_ExtIrqHandler(void *userData);
static void AD3306_SPI_Callback(void *regs, int result);
static void ADIN1110_ExtIrqHandler(void *userData);
static void ADIN1110_SPI_Callback(void *regs, int result);

void PlatformInit( )
{
    int i;

    //General platform init first
    PlatformCommonInit();

    for (i = 0; i < PLATFORM_NUM_I2CS; i++) {
        i2c_insts[i].busLock = xSemaphoreCreateMutex();
        PlatformCommonI2cInit(&i2c_insts[i]);
    }

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

    PlatformCommonGpioInit(&hwGpioCfg, NULL, NULL, 0);

    //Switches need to be inverted based on the schematic/silk screen.
    hwCfg = ((~MXC_GPIO_InGet(HW_CONFIG_PORT, HW_CONFIG_MASK)) & HW_CONFIG_MASK) >> HW_CONFIG_SHIFT;
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


/*******************************************************************************
 * AD3306 Specific Platform Functions
 ******************************************************************************/
void AD3306_PlatformInit( )
{
    int i;

    ad3306Spi.busLock = xSemaphoreCreateBinary();

    PlatformCommonSpiInit(&ad3306Spi);
    for (i = 0; i < NUM_AD3306_SPI_GPIOS; i++) {
        PlatformCommonGpioInit(&(ad3306spiPins[i]), NULL, NULL, 0);
    }
    PlatformCommonGpioInit(&ad3306extIrqPin, AD3306_ExtIrqHandler, NULL, MXC_GPIO_INT_FALLING);

    //Start with interrupts disabled
    MXC_GPIO_DisableInt(ad3306extIrqPin.port, ad3306extIrqPin.mask);
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
        MXC_GPIO_EnableInt(ad3306extIrqPin.port, ad3306extIrqPin.mask);
    } else {
        MXC_GPIO_DisableInt(ad3306extIrqPin.port, ad3306extIrqPin.mask);
    }
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

    PlatformCommonGpioInit(&adin1110resetPin, NULL, NULL, 0);
}

void ADIN1110_PlatformReset( )
{
    MXC_GPIO_OutSet(adin1110resetPin.port, adin1110resetPin.mask);
    vTaskDelay(100);
    MXC_GPIO_OutClr(adin1110resetPin.port, adin1110resetPin.mask);
    vTaskDelay(100);
    MXC_GPIO_OutSet(adin1110resetPin.port, adin1110resetPin.mask);
    vTaskDelay(100);
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
