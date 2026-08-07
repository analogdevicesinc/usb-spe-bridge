/**
 * Copyright © 2026 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <assert.h>
#include <string.h>

#include "ADIN1110.h"
#include "Application.h"
#include "ConfigMenuTask.h"
#include "FreeRTOS.h"

//Adjust as needed
#define MAX_MENU_ENTRIES    5

static config_menu_entry_t mainMenuEntries[MAX_MENU_ENTRIES];
static uint8_t numMenuEntries = 0;
static config_menu_t mainMenu;


static void SetupMainMenu(void);

/**
 * Sets up the main menu. The Main menu _could_ be dynamic based on different
 * parameters, so create it on the fly pulling in the sub menus as needed.
 */
static void SetupMainMenu( )
{
    config_menu_entry_t *entry;

    memset(mainMenuEntries, 0, sizeof(mainMenuEntries));
    numMenuEntries = 0;

    entry = &mainMenuEntries[numMenuEntries];
    entry->entryKey = "info";
    entry->itemText = "System Information";
    entry->dataType = MENU_ITEM_ACTION;
    entry->data.action_t_data.callback = AppInfoCLI_Callback;
    numMenuEntries++;

    entry = &mainMenuEntries[numMenuEntries];
    entry->entryKey = "stats";
    entry->itemText = "Network Statistics";
    entry->helpText = "Display network statistics about the enabled interfaces on this platform.";
    entry->dataType = MENU_ITEM_ACTION;
    entry->data.action_t_data.callback = AppStatsCLI_Callback;
    numMenuEntries++;

    entry = &mainMenuEntries[numMenuEntries];
    entry->entryKey = "os";
    entry->itemText = "FreeRTOS Usage Information";
    entry->helpText = "Display resource usage information about the operating system.\n" \
                      "Displays Uptime, Heap usage and task information. Tasks provide:\n" \
                      " Task - Task plain text name\n" \
                      " CPU - Percentage of time spent in this task\n" \
                      " PRI - Task priority\n" \
                      " S_BASE - Base address of the stack\n" \
                      " S_MARGIN - Lowest remaining stack during runtime (watermark)";
    entry->dataType = MENU_ITEM_ACTION;
    entry->data.action_t_data.callback = FreeRTOS_CLI_Callback;
    numMenuEntries++;

    entry = &mainMenuEntries[numMenuEntries];
    entry->entryKey = "config";
    entry->itemText = "Configuration Menu";
    entry->helpText = "Opens the configuration sub-menu for setting the network parameters to be saved in Non-Volatile memory.";
    entry->dataType = MENU_ITEM_SUBMENU;
    entry->data.submenu_t_data.submenu = AppConfigGetMenu();
    numMenuEntries++;

    assert(numMenuEntries <= MAX_MENU_ENTRIES);

    mainMenu.headingText = "Main Menu";
    mainMenu.entries = mainMenuEntries;
    mainMenu.entryCount = numMenuEntries;
    mainMenu.showHelp = true;
}

void AppStartCLI( )
{
    SetupMainMenu();
    ConfigMenuTaskInit(&mainMenu);
}
