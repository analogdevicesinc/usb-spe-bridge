/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include <string.h>

#include "AD3306.h"
#include "Application.h"
#include "ConfigMenuTask.h"
#include "Logging.h"
#include "NetPkt.h"
#include "Platform.h"
#include "USB_Task.h"
#include "TaskPriorities.h"

#include "FreeRTOS.h"
#include "FreeRTOSConfig.h"
#include "portable.h"
#include "stream_buffer.h"
#include "task.h"

#ifdef GIT_VERSION
#define VERSION_STRING  "Version: " GIT_VERSION
#else
#define VERSION_STRING  "Version: unknown"
#endif

#ifndef BUILD_DATE
#define BUILD_DATE "unknown"
#endif

#define INFO_STR_LEN    64

#define BACKGROUND_TASK_RATE_MS     33
#define BACKGROUND_STATS_RATE_TICKS (2000 / BACKGROUND_TASK_RATE_MS)
#define BOOTLOAD_HOLD_TICKS         (3000 / BACKGROUND_TASK_RATE_MS)
#define USBMOD_HOLD_TICKS           (3000 / BACKGROUND_TASK_RATE_MS)

/**
 * Lookup table of the packet send functions for each interface type
 */
static const PacketSender ifaceTxFuncs[IFACE_COUNT] = {
    [IFACE_T1S] = AD3306_SendPacket,
    [IFACE_USB] = USB_NetworkSendPacket,
};

/**
 * Lookup table of the packet stats functions for each interface type
 */
static const StatsProvider ifaceStatsFuncs[IFACE_COUNT] = {
    [IFACE_T1S] = AD3306_GetStats,
    [IFACE_USB] = USB_NetworkGetStats
};

static const int ifaceLedNum[IFACE_COUNT] = {
    [IFACE_T1S] = PLATFORM_T1S_ACT_LED_NUM,
    [IFACE_USB] = PLATFORM_USB_ACT_LED_NUM
};

/**
 * Lookup table of strings for printing the interface mode
 */
static const char *ifaceModeStrs[] = {
    [IFACE_MODE_OFF] = "DISABLED",
    [IFACE_MODE_RXONLY] = "RX ONLY (Sniffer)",
    [IFACE_MODE_TXRX] = "TX/RX"
};

/**
 * Lookup table of strings for Device/interface names
 */
static const char *ifaceStrs[] = {
    [IFACE_T1S] = "AD3306 (T1S)",
    [IFACE_USB] = "USB",
};

static net_iface_mode_t ifaceModes[IFACE_COUNT];
static app_config_t runtimeAppConfig;
static TaskHandle_t backgroundTask;

//This flag is set when the USB mode is configured (including runtime) to force
//PLCA off when just sniffing the network
static bool plcaForcedOff;

static void BackgroundTaskBody(void *pvParameters);
static void PktHandler(net_iface_t iface, net_pkt_t *pkt);
static void BackgroundLoop(void);
static void ConfigureUSB_Mode(bool sniffer);
static void ConfigurePLCA(void);

//These flags are for the activity LEDs. Set by the packet handler and cleared
//by the background task. It didn't make much sense to use a RTOS mechanism or
//protection here since its just a quick flag.
static bool actFlags[IFACE_COUNT];

static void AD3306_Handler(net_pkt_t *pkt)
{
    PktHandler(IFACE_T1S, pkt);
}
static void USB_NetworkHandler(net_pkt_t *pkt)
{
    PktHandler(IFACE_USB, pkt);
}

int main(void)
{
    PlatformInit();

    xTaskCreate(BackgroundTaskBody, (const char *)"Background",
                512, NULL, TASK_PRIO_BACKGROUND,
                &backgroundTask);
    vTaskStartScheduler();

    while (1) {
        __NOP();
    }
}

/**
 * Generic packet handler for the application. This is essentially a router
 * which deliver packets to any interface which should receive them
 *
 * @param iface - Source interface
 * @param pkt - Packet pointer
 */
static void PktHandler(net_iface_t iface, net_pkt_t *pkt)
{
    net_iface_t i;

    //If the interface that provided this packet it not Tx/Rx, just return
    //This handles the RXONLY situation which will drop the packet to make it
    //look like a sniffer
    if (ifaceModes[iface] != IFACE_MODE_TXRX) {
        return;
    }

    //The activity flag tracks inbound packets only. Since this is a bridge it
    //provides better insight into traffic flow.
    actFlags[iface] = true;

    for (i = 0; i < IFACE_COUNT; i++) {
        if ((ifaceModes[i] != IFACE_MODE_OFF) && (i != iface)) {
            ifaceTxFuncs[i](pkt);
        }
    }
}

void BackgroundLoop( )
{
    net_stats_t stats;
    net_iface_t iface;
    uint32_t bootloadCounter = BOOTLOAD_HOLD_TICKS;
    uint32_t usbModeCounter = USBMOD_HOLD_TICKS;
    uint32_t statsCounter = BACKGROUND_STATS_RATE_TICKS;
    bool ledState = false;

    while (1) {
        //Blink the Activity LEDs
        for (iface = 0; iface < IFACE_COUNT; iface++) {
            PlatformSetLED(ifaceLedNum[iface], actFlags[iface] & ledState);
            if (ledState) {
                actFlags[iface] = false;
            }
        }

        //Flip led state for next time
        ledState = !ledState;

#ifdef HAS_BOOTLOADER
        if (PlatformGetButtonState(PLATFORM_BOOT_BTN_NUM)) {
            bootloadCounter--;
        } else {
            bootloadCounter = BOOTLOAD_HOLD_TICKS;
        }

        if (bootloadCounter == 0) {
            PlatformReboot(true);
        }
#endif

        if (PlatformGetButtonState(PLATFORM_USER_BTN_NUM)) {
            usbModeCounter--;
        } else {
            usbModeCounter = USBMOD_HOLD_TICKS;
        }

        if (usbModeCounter == 0) {
            //On a button hold, toggle the USB operating mode
            ConfigureUSB_Mode(ifaceModes[IFACE_USB] == IFACE_MODE_TXRX);
        }

        if (statsCounter == 0) {
            statsCounter = BACKGROUND_STATS_RATE_TICKS;
            for (iface = 0; iface < IFACE_COUNT; iface++) {
                if (ifaceModes[iface] == IFACE_MODE_RXONLY) {
                    ifaceStatsFuncs[iface](&stats);
                    LOG_MSG_INFO(BKGND, "%s RX %d (%d)",
                                 ifaceStrs[iface], stats.rx, stats.rx_drop);
                } else if (ifaceModes[iface] == IFACE_MODE_TXRX) {
                    ifaceStatsFuncs[iface](&stats);
                    LOG_MSG_INFO(BKGND, "%s RX %d (%d) / TX %d (%d)",
                                 ifaceStrs[iface], stats.rx, stats.rx_drop, stats.tx, stats.tx_drop);
                }
            }
        }

        //Update the counters for timing
        statsCounter--;

        //Delay
        vTaskDelay(BACKGROUND_TASK_RATE_MS / portTICK_PERIOD_MS);
    }
}

static void ConfigureUSB_Mode(bool sniffer)
{
    if (sniffer) {
        ifaceModes[IFACE_USB] = IFACE_MODE_RXONLY;
        PlatformSetLED(PLATFORM_STATUS1_LED_NUM, false);
        PlatformSetLED(PLATFORM_STATUS2_LED_NUM, true);

        //When in sniffer mode, force PLCA off to prevent accidental collisions
        //on the bus is the sniffer isn't configured with the correct Node ID
        plcaForcedOff = true;
    } else {
        ifaceModes[IFACE_USB] = IFACE_MODE_TXRX;
        PlatformSetLED(PLATFORM_STATUS2_LED_NUM, false);
        PlatformSetLED(PLATFORM_STATUS1_LED_NUM, true);

        //When not in sniffer, use the configuration's PLCA settings
        plcaForcedOff = false;
    }

    //Adjust the PLCA on sniffer mode change
    ConfigurePLCA();
}

void ConfigurePLCA( )
{
    AD3306_SetPLCA(runtimeAppConfig.plcaEnabled && !plcaForcedOff, runtimeAppConfig.plcaId, runtimeAppConfig.plcaCount);
    AD3306_SetPLCA_TO(runtimeAppConfig.plcaTO);
    AD3306_SetBurstMode(runtimeAppConfig.burstCount, runtimeAppConfig.burstTimer);
}

void BackgroundTaskBody(void *pvParameters)
{
    usb_net_init_cfg_t netCfg;

    net_pkt_pool_init();
    LoggingInit();

    uint32_t hwId = PlatformGetUID();
    LOG_MSG_INFO(BKGND, "Hardware ID: 0x%08X", hwId);

    //Notify the version & date of build
    LOG_MSG_INFO(BKGND, VERSION_STRING);
    LOG_MSG_INFO(BKGND, "Build Date: " BUILD_DATE);

    AppConfigInit();
    AppConfigGet(&runtimeAppConfig);
    AppConfigPrint(&runtimeAppConfig);

    //T1S is always Tx/Rx
    ifaceModes[IFACE_T1S] = IFACE_MODE_TXRX;

    if (ifaceModes[IFACE_T1S] != IFACE_MODE_OFF) {
        AD3306_Init(AD3306_Handler);
        AD3306_SetVLAN_Filter(runtimeAppConfig.vlanEnabled, runtimeAppConfig.vlanBlock,
                              runtimeAppConfig.vlanEntry1, runtimeAppConfig.vlanEntry2);
        AD3306_SetETHTYPE_Filter(runtimeAppConfig.etypeEnabled, runtimeAppConfig.etypeBlock,
                                 runtimeAppConfig.etypeEntry1, runtimeAppConfig.etypeEntry2);
    }

    //The USB mode must be configured AFTER the AD3306 is initialized as it also
    //sets up the PLCA based on sniffer mode or not.
    ConfigureUSB_Mode(runtimeAppConfig.usbSniffer);

    if (ifaceModes[IFACE_USB] != IFACE_MODE_OFF) {
        netCfg.handler = USB_NetworkHandler;
        memcpy(netCfg.macAddr, runtimeAppConfig.macAddr, 6);
        USB_TaskInit(&netCfg, true);
    }

    //Initialize the CLI after USB since it depends on the CDC Serial port
    AppStartCLI();

    //Run the background loop
    BackgroundLoop();
}

#ifdef PLATFORM_BUTTON_INTERRUPTS
void PlatformOnButtonStateISR(uint8_t button_num, bool state)
{
}
#endif

void AppInfoCLI_Callback(void *unused)
{
    char infoString[INFO_STR_LEN];
    net_iface_t iface;

    snprintf(infoString, INFO_STR_LEN, "%s", VERSION_STRING);
    ConfigMenuWriteLine(infoString, 1, false);

    snprintf(infoString, INFO_STR_LEN, "Build Date: %s", BUILD_DATE);
    ConfigMenuWriteLine(infoString, 1, false);

    snprintf(infoString, INFO_STR_LEN, "MAC: %02X:%02X:%02X:%02X:%02X:%02X",
             runtimeAppConfig.macAddr[0], runtimeAppConfig.macAddr[1],
             runtimeAppConfig.macAddr[2], runtimeAppConfig.macAddr[3],
             runtimeAppConfig.macAddr[4], runtimeAppConfig.macAddr[5]);
    ConfigMenuWriteLine(infoString, 1, false);

    if (plcaForcedOff) {
        snprintf(infoString, INFO_STR_LEN, "PLCA: Disabled for USB Sniffer");
    } else {
        snprintf(infoString, INFO_STR_LEN, "PLCA: %s, ID: %d, Count: %d",
                 runtimeAppConfig.plcaEnabled ? "Enabled" : "Disabled",
                 runtimeAppConfig.plcaId, runtimeAppConfig.plcaCount);
    }
    ConfigMenuWriteLine(infoString, 1, false);

    for (iface = 0; iface < IFACE_COUNT; iface++) {
        snprintf(infoString, INFO_STR_LEN, "%s: %s",
                 ifaceStrs[iface], ifaceModeStrs[ifaceModes[iface]]);
        ConfigMenuWriteLine(infoString, 1, false);
    }
}

void AppStatsCLI_Callback(void *unused)
{
    char statsString[INFO_STR_LEN];
    net_stats_t stats;
    net_iface_t iface;

    for (iface = 0; iface < IFACE_COUNT; iface++) {
        ifaceStatsFuncs[iface](&stats);
        snprintf(statsString, INFO_STR_LEN, "%s:", ifaceStrs[iface]);
        ConfigMenuWriteLine(statsString, 1, false);

        if ((ifaceModes[iface] == IFACE_MODE_RXONLY) || (ifaceModes[iface] == IFACE_MODE_TXRX)) {
            snprintf(statsString, INFO_STR_LEN, "  Outbound: %d, Dropped: %d", stats.tx, stats.tx_drop);
            ConfigMenuWriteLine(statsString, 1, false);
        }

        if (ifaceModes[iface] == IFACE_MODE_TXRX) {
            snprintf(statsString, INFO_STR_LEN, "  Inbound: %d, Dropped: %d", stats.rx, stats.rx_drop);
            ConfigMenuWriteLine(statsString, 1, false);
        }
    }
}
