/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "USB_Task.h"
#include "USB_Task_private.h"
#include "TaskPriorities.h"
#include "Logging.h"
#include "NetPkt.h"
#include "Platform.h"

#include "FreeRTOS.h"
#include "task.h"

#include "bsp/board_api.h"
#include "tusb.h"

#include "mxc_device.h"
#include "mcr_regs.h"
#include "mxc_sys.h"
#include "nvic_table.h"

#include <assert.h>

static TaskHandle_t usbTask;

static usb_mode_t usbMode = USB_NET_CDC;

/* Local prototypes */
static void USB_DeviceBody(void *pvParameters);
static void USB_Init(void);


void USB_TaskInit(usb_net_init_cfg_t *netCfg, bool cdcEn)
{
    //Need to figure out the USB mode first, before kicking anything off
    if (netCfg && cdcEn) {
        usbMode = USB_NET_CDC;
    } else if (netCfg) {
        usbMode = USB_NET;
    } else if (cdcEn) {
        usbMode = USB_CDC;
    }


    USB_Init();
    xTaskCreate(USB_DeviceBody, (const char *)"USBD",
                256, NULL, TASK_PRIO_USBD,
                &usbTask);


    if (netCfg) {
        LOG_MSG_INFO(USBD, "Initializing USB Network");
        USB_NetworkInit(netCfg);
    } else {
        LOG_MSG_INFO(USBD, "No USB Network Config Provided. Skipping");
    }

    if (cdcEn) {
        LOG_MSG_INFO(USBD, "Initializing CDC");
        CDC_TaskInit();
    } else {
        LOG_MSG_INFO(USBD, "No CDC Config Provided. Skipping");
    }
}

usb_mode_t USB_GetMode( )
{
    return usbMode;
}

/**
 * Main USB body.  Runs the TUSB loop and drains the network TX queue.
 * All TinyUSB NCM API calls (tud_network_can_xmit / tud_network_xmit) must
 * happen in this task context since the NCM driver is not thread-safe.
 */
static void USB_DeviceBody(void *pvParameters)
{
    // init device stack on configured roothub port
    tusb_rhport_init_t dev_init = {
        .role = TUSB_ROLE_DEVICE,
        .speed = TUSB_SPEED_AUTO
    };

    tusb_init(BOARD_TUD_RHPORT, &dev_init);

    while (1) {
        ulTaskNotifyTake(pdTRUE, portMAX_DELAY);
        //Perform a no-delay call into tud_task. The task notify will wake this
        //task up via the tud_event_hook_cb rather than blocking here on TUSB's
        //event queue. This allows the NCM Tx queue to be drained in this task's
        //context due to thread safety issues.
        do {
            tud_task_ext(0, false);
            USB_NetworkDrainTxQueue();
        } while (tud_task_event_ready());
    }
}

void USB_TaskNotify(bool in_isr)
{
    BaseType_t xHigherPriorityTaskWoken;

    if (in_isr) {
        xHigherPriorityTaskWoken = pdFALSE;
        vTaskNotifyGiveFromISR(usbTask, &xHigherPriorityTaskWoken);
        portYIELD_FROM_ISR(xHigherPriorityTaskWoken);
    } else {
        xTaskNotifyGive(usbTask);
    }
}

static void USB_Init()
{
    // 1ms tick timer
    SysTick_Config(SystemCoreClock / 1000);
    NVIC_SetPriority(USB_IRQn, 7);
    MXC_SYS_ClockSourceEnable(MXC_SYS_CLOCK_IPO);
    MXC_MCR->ldoctrl |= MXC_F_MCR_LDOCTRL_0P9EN;
    MXC_SYS_ClockEnable(MXC_SYS_PERIPH_CLOCK_USB);
    MXC_SYS_Reset_Periph(MXC_SYS_RESET0_USB);
}

void USB_IRQHandler(void)
{
    tud_int_handler(0);
}

/**
 * This is a weak function allowing the user code to hook into the TUSB system.
 * This allows the tud_task to run non-blocking and to wake up the USB_Task when
 * events are ready to be processed in the queue.
 */
void tud_event_hook_cb(uint8_t rhport, uint32_t eventid, bool in_isr)
{
    (void)rhport;
    (void)eventid;

    USB_TaskNotify(in_isr);
}

size_t board_get_unique_id(uint8_t id[], size_t max_len)
{
    size_t to_copy;
    uint32_t uid = PlatformGetUID();

    to_copy = TU_MIN(max_len, sizeof(uint32_t));
    memcpy(id, &uid, to_copy);
    return to_copy;
}
