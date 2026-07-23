/**
 * Copyright © 2026 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <string.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "ConfigMenuTask.h"
#include "ConfigMenu_internal.h"

//Delay on an error message before showing the menu again
#define ERROR_PRINT_DELAY_MS    1500

//Threshold to do a line wrap
#define LINEWRAP_THRESH     60

//Saved off line ending from init
static config_menu_line_end_t lineEnd;

//Saved off echo from init
static bool doEcho;

/* Menu stack for holding sub-menus */
static config_menu_t menuStack[MENU_STACK_LEN];
static int menuStackIdx = 0;


void ConfigMenuInit(config_menu_t mainMenu, config_menu_line_end_t le, bool echo)
{
    menuStackIdx = 0;
    memcpy(&menuStack[0], &mainMenu, sizeof(config_menu_t));
    lineEnd = le;
    doEcho = echo;
}

const config_menu_t * ConfigMenuGetActive( )
{
    return &menuStack[menuStackIdx];
}

void ConfigMenuPop( )
{
    if (menuStackIdx > 0) {
        menuStackIdx--;
    }
}

void ConfigMenuReset( )
{
    menuStackIdx = 0;
}

bool ConfigMenuEchoEnabled( )
{
    return doEcho;
}

config_menu_line_end_t ConfigMenuGetLineEnd( )
{
    return lineEnd;
}

void ConfigMenuSetLineEnd(config_menu_line_end_t le)
{
    lineEnd = le;
}

void ConfigMenuPrintError(const char *error_msg)
{
    ConfigMenuWriteLine(error_msg, 1, false);
    ConfigMenuDelayMs(ERROR_PRINT_DELAY_MS);
}

void ConfigMenuHandleCommand(char *inputArgs, const config_menu_t *menu, const config_menu_entry_t *entry)
{
    uint32_t tempU = 0;
    uint64_t tempU64;
    int32_t tempS = 0;
    int i;
    bool valid = false;
    const config_data_t *data;
    char *tok_space, *saveptr_space;
    char *tok_mac, *saveptr_mac;

#ifdef CONFIG_MENU_FLOAT
    float tempF = 0.0f;
#endif
    if (entry == NULL) {
        ConfigMenuPrintError("Command not found!");
        return;
    }

    if ((entry) && (entry->readOnly)) {
        ConfigMenuPrintError("Read only!");
        return;
    }

    data = &entry->data;

    //Submenus are a special type that push a new menu on to the stack
    if (entry->dataType == MENU_ITEM_SUBMENU) {
        menuStackIdx++;
        assert(menuStackIdx < MENU_STACK_LEN);
        menuStack[menuStackIdx] = data->submenu_t_data.submenu;
        return;
    }

    //Actions are a special type that just calls the users callback function.
    if (entry->dataType == MENU_ITEM_ACTION) {
        if (data->action_t_data.callback != NULL) {
            data->action_t_data.callback(data->action_t_data.actionData);
        }
        return;
    }

    //Varargs are a special type that just calls the users callback function.
    if (entry->dataType == MENU_ITEM_VARARG) {
        if (data->vararg_t_data.callback != NULL) {
            data->vararg_t_data.callback(inputArgs ? inputArgs : "");
        }
        return;
    }

    //Assume value fields are invalid unless set otherwise
    valid = false;

    tok_space = inputArgs;

    //Toggle is a special type that just toggles. No extra user entry
    //required
    if (entry->dataType == MENU_ITEM_TOGGLE) {
        if (*data->on_off_t_data.dataPtr) {
            *data->on_off_t_data.dataPtr = false;
        } else {
            *data->on_off_t_data.dataPtr = true;
        }

        //Mark valid to setup the callback at the end
        valid = true;
    } else {
        //Everything else has an argument
        tok_space = strtok_r(tok_space, " ", &saveptr_space);

        //Everything else REQUIRES an argument
        if (tok_space == NULL) {
            ConfigMenuPrintError("Invalid value");
            return;
        }
    }

    if (entry->dataType == MENU_ITEM_MAC) {
        if (strlen(tok_space) == 12) {
            //If the string length is 12. just convert to a uint64_t and pull the
            //bytes out
            tempU64 = strtoull(tok_space, NULL, 16);
        } else {
            tempU64 = 0;
            tok_mac = strtok_r(tok_space, ":", &saveptr_mac);
            for (i = 0; (i < 6) && (tok_mac != NULL); i++) {
                tempU64 = (tempU64 << 8) | (uint8_t)strtoul(tok_mac, NULL, 16);
                tok_mac = strtok_r(NULL, ":", &saveptr_mac);
            }

            if (i != 6) {
                ConfigMenuPrintError("Invalid MAC address!");
                return;
            }
        }

        for (i = 0; i < 6; i++) {
            data->mac_t_data.dataPtr[5 - i] = ((tempU64 >> (8 * i)) & 0xFF);
        }

        //Mark valid to setup the callback at the end
        valid = true;
    }

    //Convert the text to the appropriate type
    switch (entry->dataType) {
        case MENU_ITEM_UINT8:
        case MENU_ITEM_UINT16:
        case MENU_ITEM_UINT32:
            tempU = strtoul(tok_space, NULL, 0);
            break;
        case MENU_ITEM_INT8:
        case MENU_ITEM_INT16:
        case MENU_ITEM_INT32:
            tempS = strtol(tok_space, NULL, 0);
            break;
#ifdef CONFIG_MENU_FLOAT
        case MENU_ITEM_FLOAT:
            tempF = strtof(tok_space, NULL);
            break;
#endif
        case MENU_ITEM_ON_OFF:
            if (strcmp(tok_space, "on") == 0) {
                tempU = 1;
            } else if (strcmp(tok_space, "off") == 0) {
                tempU = 0;
            } else {
                tempU = strtoul(tok_space, NULL, 0);
            }
            break;
        case MENU_ITEM_MAC:
        case MENU_ITEM_TOGGLE:
            //Nothing to do. Handled as a special case;
            break;
        default:
            //Should never get here
            assert(0);
            break;
    }

    switch (entry->dataType) {
        case MENU_ITEM_UINT8:
            if ((tempU >= data->uint8_t_data.minVal) &&
                (tempU <= data->uint8_t_data.maxVal)) {
                *data->uint8_t_data.dataPtr = (uint8_t)tempU;
                valid = true;
            }
            break;
        case MENU_ITEM_UINT16:
            if ((tempU >= data->uint16_t_data.minVal) &&
                (tempU <= data->uint16_t_data.maxVal)) {
                *data->uint16_t_data.dataPtr = (uint16_t)tempU;
                valid = true;
            }
            break;
        case MENU_ITEM_UINT32:
            if ((tempU >= data->uint32_t_data.minVal) &&
                (tempU <= data->uint32_t_data.maxVal)) {
                *data->uint32_t_data.dataPtr = (uint32_t)tempU;
                valid = true;
            }
            break;
        case MENU_ITEM_INT8:
            if ((tempS >= data->int8_t_data.minVal) &&
                (tempS <= data->int8_t_data.maxVal)) {
                *data->int8_t_data.dataPtr = (int8_t)tempS;
                valid = true;
            }
            break;
        case MENU_ITEM_INT16:
            if ((tempS >= data->int16_t_data.minVal) &&
                (tempS <= data->int16_t_data.maxVal)) {
                *data->int16_t_data.dataPtr = (int16_t)tempS;
                valid = true;
            }
            break;
        case MENU_ITEM_INT32:
            if ((tempS >= data->int32_t_data.minVal) &&
                (tempS <= data->int32_t_data.maxVal)) {
                *data->int32_t_data.dataPtr = (int32_t)tempS;
                valid = true;
            }
            break;
#ifdef CONFIG_MENU_FLOAT
        case MENU_ITEM_FLOAT:
            if ((tempF >= data->float_t_data.minVal) &&
                (tempF <= data->float_t_data.maxVal)) {
                *data->float_t_data.dataPtr = tempF;
                valid = true;
            }
            break;
#endif
        case MENU_ITEM_ON_OFF:
            if (tempU == 1) {
                *data->on_off_t_data.dataPtr = true;
                valid = true;
            } else if (tempU == 0) {
                *data->on_off_t_data.dataPtr = false;
                valid = true;
            }
            break;
        case MENU_ITEM_MAC:
        case MENU_ITEM_TOGGLE:
            //Nothing to do. Handled as a special case;
            break;
        default:
            //Should never get here
            assert(0);
            break;
    }

    if (valid) {
        if (menu->changeCallback) {
            menu->changeCallback(entry);
        }
    } else {
        ConfigMenuPrintError("Value out of range");
    }
}

void ConfigMenuWriteLine(const char *line, uint8_t numLineEnds, bool wrapLine)
{
    int count = 0;

    if (line != NULL) {
        while (*line != '\0') {
            if ((wrapLine) && (count >= LINEWRAP_THRESH) && isspace((int)*line)) {
                switch (lineEnd) {
                    case LINE_END_CR:
                        ConfigMenuWriteChar('\r');
                        break;
                    case LINE_END_AUTO: //Do CR_LF until AUTO is resolved
                    case LINE_END_CR_LF:
                        ConfigMenuWriteChar('\r');
                        ConfigMenuWriteChar('\n');
                        break;
                    case LINE_END_LF:
                        ConfigMenuWriteChar('\n');
                        break;
                }
                count = 0;
            } else {
                ConfigMenuWriteChar(*line);

                if ((*line == '\n') || (*line == '\r')) {
                    count = 0;
                } else {
                    count++;
                }
            }

            line++;
        }
    }

    while (numLineEnds > 0) {
        switch (lineEnd) {
            case LINE_END_CR:
                ConfigMenuWriteChar('\r');
                break;
            case LINE_END_AUTO: //Do CR_LF until AUTO is resolved
            case LINE_END_CR_LF:
                ConfigMenuWriteChar('\r');
                ConfigMenuWriteChar('\n');
                break;
            case LINE_END_LF:
                ConfigMenuWriteChar('\n');
                break;
        }
        numLineEnds--;
    }
}

config_menu_entry_t * ConfigMenuFindEntryByKey(const char *key, const config_menu_t *menu)
{
    int i;

    for (i = 0; i < menu->entryCount; i++) {
        if (strcmp(key, menu->entries[i].entryKey) == 0) {
            return &menu->entries[i];
        }
    }

    return NULL;
}
