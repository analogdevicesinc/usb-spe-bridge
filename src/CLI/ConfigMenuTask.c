/**
 * Copyright © 2025-2026 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stdio.h>
#include <string.h>

#include "ConfigMenuTask.h"
#include "ConfigMenu_internal.h"
#include "TaskPriorities.h"
#include "USB_Task.h"

#include "FreeRTOS.h"
#include "task.h"

static TaskHandle_t configTaskHandle;

static void ConfigMenuTaskBody(void *pvParameters);


void ConfigMenuTaskInit(config_menu_t *main_menu)
{
    ConfigMenuInit(*main_menu, LINE_END_AUTO, true);

    //Create the task
    xTaskCreate(ConfigMenuTaskBody, (const char *)"CONFIG",
                384, NULL, TASK_PRIO_CONFIG,
                &configTaskHandle);
}

/**
 * Task body for the configuration task. This supports both the VT100 based
 * menuing and the plaintext method. When each menu method returns it is assumed
 * the user requested to switch modes.
 */
static void ConfigMenuTaskBody(void *pvParameters)
{
    while (1) {
        //Reset the menu stack and launch the VT100 Mode
        ConfigMenuReset();
        ConfigMenuVT_Run();

        //VT100 exited, reset and launch plaintext
        ConfigMenuReset();
        ConfigMenuPlaintextRun();
    }
}


/**
 * The following functions represent the "HAL" of the configuration menu.
 *  Adjust if the platform or serial interface changes
 */
int ConfigMenuReadChar(int32_t ms)
{
    char rxChar;
    TickType_t ticks = (ms < 0) ? portMAX_DELAY : pdMS_TO_TICKS((uint32_t)ms);

    if (CDC_ReadBytes(&rxChar, 1, ticks) == 0) {
        return MENU_READ_TIMEOUT;
    }
    return (unsigned char)rxChar;
}

void ConfigMenuWriteChar(char ch)
{
    char outCh = ch;

    CDC_WriteBytes(&outCh, 1, portMAX_DELAY);
}

void ConfigMenuDelayMs(uint32_t ms)
{
    vTaskDelay(ms / portTICK_PERIOD_MS);
}
