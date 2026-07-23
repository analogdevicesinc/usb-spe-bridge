/**
 * Copyright © 2026 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <string.h>
#include <stdio.h>

#include "ConfigMenu_internal.h"

//Text to show the the exit menu item
#define HELP_ENTRY  "help      Display help information"
#define EXIT_ENTRY  "x         Exit the menu"
#define ENTRY_PROMPT ":> "

//Scratch buffer to keep string data off the stack
static char scratchStr[SCRATCH_STR_LEN];

//Local prototypes
static void ConfigMenuPrintEntry(config_menu_entry_t *entry);
static void ConfigMenuPrintHelp(const config_menu_entry_t *entry);
static uint32_t ConfigMenuReadLine(char *buf, uint32_t len);


void ConfigMenuPlaintextRun( )
{
    bool checkEntry;
    uint32_t len;
    char *spacePtr;
    const config_menu_t *activeMenu;
    config_menu_entry_t *entry;

    //Create an entry to handle the help command. This allows us to leverage
    //all the parsing and other logic.
    config_menu_entry_t helpEntry = {
        .dataType = MENU_ITEM_VARARG,
        .data.vararg_t_data.callback = ConfigMenuHelpCallback
    };

    ConfigMenuWriteLine("", 1, false);

    while (1) {
        activeMenu = ConfigMenuGetActive();
        ConfigMenuWriteLine("", 2, false);

        //This line is important to support automated testing
        ConfigMenuWriteLine("[PLAINTEXT CLI MODE]", 1, false);
        ConfigMenuWriteLine(activeMenu->headingText, 1, false);
        ConfigMenuWriteLine(HEADING_DIV, 1, false);

        for (int i = 0; i < activeMenu->entryCount; i++) {
            ConfigMenuPrintEntry(&activeMenu->entries[i]);
        }

        if (activeMenu->showHelp) {
            ConfigMenuWriteLine(HELP_ENTRY, 1, false);
        }

        ConfigMenuWriteLine(EXIT_ENTRY, 1, false);

        ConfigMenuWriteLine("(Ctrl+Q to exit plaintext mode)", 1, false);
        ConfigMenuWriteLine(ENTRY_PROMPT, 0, false);

        len = ConfigMenuReadLine(scratchStr, SCRATCH_STR_LEN);

        checkEntry = true;

        if (len == 0) {
            checkEntry = false;
        } else if (len == 1) {
            if ((scratchStr[0] == 'X') || (scratchStr[0] == 'x')) {
                checkEntry = false;
                ConfigMenuPop();
            } else if (scratchStr[0] == CHAR_CTRL_Q) {
                break; //Exit plaintext mode
            }
        }

        ConfigMenuWriteLine("", 2, false);

        if (checkEntry) {
            spacePtr = strchr(scratchStr, ' ');
            if (spacePtr) {
                *spacePtr = '\0';
            }
            if (strcmp("help", scratchStr) == 0) {
                entry = &helpEntry;
            } else {
                entry = ConfigMenuFindEntryByKey(scratchStr, activeMenu);
            }
            if (entry) {
                ConfigMenuHandleCommand(spacePtr ? spacePtr + 1 : "", activeMenu, entry);
            } else {
                ConfigMenuPrintError("Command not found");
            }
        }
    }
}

void ConfigMenuHelpCallback(char *args)
{
    const config_menu_t *menu = ConfigMenuGetActive();
    config_menu_entry_t *entry;
    int i;
    char *tok = NULL, *saveptr;

    if (args) {
        tok = strtok_r(args, " ", &saveptr);
    }

    if (tok) {
        entry = ConfigMenuFindEntryByKey(tok, menu);
        if (entry) {
            ConfigMenuPrintHelp(entry);
        } else {
            ConfigMenuPrintError("Command not found!");
        }
    } else {
        //Print all
        for (i = 0; i < menu->entryCount; i++) {
            ConfigMenuPrintHelp(&menu->entries[i]);
        }
    }
}

/**
 * Prints the help information for the given menu entry
 * @param entry - Entry to print
 */
static void ConfigMenuPrintHelp(const config_menu_entry_t *entry)
{
    ConfigMenuWriteLine(entry->entryKey, 1, false);
    ConfigMenuWriteLine(HEADING_DIV, 1, false);
    if (entry->helpText) {
        ConfigMenuWriteLine(entry->helpText, 2, true);
    } else {
        ConfigMenuWriteLine("[NO HELP PROVIDED]", 2, false);
    }
}

/**
 * Prints the provided menu entry
 * @param entry = Menu entry to print
 */
static void ConfigMenuPrintEntry(config_menu_entry_t *entry)
{
    uint32_t strIdx = 0;
    config_data_t *data = &entry->data;

    if (entry->readOnly) {
        //For read only, dont display the command key, thats a hint to the user
        strIdx += snprintf(&scratchStr[strIdx], SCRATCH_STR_LEN - strIdx, KEY_FORMATTER, "");
    } else {
        strIdx += snprintf(&scratchStr[strIdx], SCRATCH_STR_LEN - strIdx, KEY_FORMATTER, entry->entryKey);
    }

    //Show the item's text
    strIdx += snprintf(&scratchStr[strIdx], SCRATCH_STR_LEN - strIdx, "  %s", entry->itemText);

    if (entry->showCurrent) { //Show the current flag is set
        //Note: This switch statement implementation seems bulky, but the verbose
        //nature of the datatypes the user needs to set is probably a nicer
        //implementation than some clever casting
        switch (entry->dataType) {
            case MENU_ITEM_UINT8:
                strIdx += snprintf(&scratchStr[strIdx], SCRATCH_STR_LEN - strIdx,
                                   ": %u", *data->uint8_t_data.dataPtr);
                break;
            case MENU_ITEM_UINT16:
                strIdx += snprintf(&scratchStr[strIdx], SCRATCH_STR_LEN - strIdx,
                                   ": %u", *data->uint16_t_data.dataPtr);
                break;
            case MENU_ITEM_UINT32:
                strIdx += snprintf(&scratchStr[strIdx], SCRATCH_STR_LEN - strIdx,
                                   ": %u", *data->uint32_t_data.dataPtr);
                break;
            case MENU_ITEM_INT8:
                strIdx += snprintf(&scratchStr[strIdx], SCRATCH_STR_LEN - strIdx,
                                   ": %d", *data->int8_t_data.dataPtr);
                break;
            case MENU_ITEM_INT16:
                strIdx += snprintf(&scratchStr[strIdx], SCRATCH_STR_LEN - strIdx,
                                   ": %d", *data->int16_t_data.dataPtr);
                break;
            case MENU_ITEM_INT32:
                strIdx += snprintf(&scratchStr[strIdx], SCRATCH_STR_LEN - strIdx,
                                   ": %d", *data->int32_t_data.dataPtr);
                break;
#ifdef CONFIG_MENU_FLOAT
            case MENU_ITEM_FLOAT:
                strIdx += snprintf(&scratchStr[strIdx], SCRATCH_STR_LEN - strIdx,
                                   ": %f", *data->float_t_data.dataPtr);
                break;
#endif
            case MENU_ITEM_MAC:
                strIdx += snprintf(&scratchStr[strIdx], SCRATCH_STR_LEN - strIdx,
                                   ": %02X:%02X:%02X:%02X:%02X:%02X",
                                   data->mac_t_data.dataPtr[0],
                                   data->mac_t_data.dataPtr[1],
                                   data->mac_t_data.dataPtr[2],
                                   data->mac_t_data.dataPtr[3],
                                   data->mac_t_data.dataPtr[4],
                                   data->mac_t_data.dataPtr[5]);
                break;
            case MENU_ITEM_ON_OFF:
            case MENU_ITEM_TOGGLE:
                strIdx += snprintf(&scratchStr[strIdx], SCRATCH_STR_LEN - strIdx,
                                   ": %s", *data->on_off_t_data.dataPtr ? "ON" : "OFF");
                break;
            case MENU_ITEM_ACTION:
            case MENU_ITEM_SUBMENU:
            case MENU_ITEM_VARARG:
                //Do nothing for actions or submenus
                break;
        }
    }

    if (entry->showRange) {
        //Same note as above.
        switch (entry->dataType) {
            case MENU_ITEM_UINT8:
                strIdx += snprintf(&scratchStr[strIdx], SCRATCH_STR_LEN - strIdx,
                                   " (%u-%u)", data->uint8_t_data.minVal, data->uint8_t_data.maxVal);
                break;
            case MENU_ITEM_UINT16:
                strIdx += snprintf(&scratchStr[strIdx], SCRATCH_STR_LEN - strIdx,
                                   " (%u-%u)", data->uint16_t_data.minVal, data->uint16_t_data.maxVal);
                break;
            case MENU_ITEM_UINT32:
                strIdx += snprintf(&scratchStr[strIdx], SCRATCH_STR_LEN - strIdx,
                                   " (%u-%u)", data->uint32_t_data.minVal, data->uint32_t_data.maxVal);
                break;
            case MENU_ITEM_INT8:
                strIdx += snprintf(&scratchStr[strIdx], SCRATCH_STR_LEN - strIdx,
                                   " (%d-%d)", data->int8_t_data.minVal, data->int8_t_data.maxVal);
                break;
            case MENU_ITEM_INT16:
                strIdx += snprintf(&scratchStr[strIdx], SCRATCH_STR_LEN - strIdx,
                                   " (%d-%d)", data->int16_t_data.minVal, data->int16_t_data.maxVal);
                break;
            case MENU_ITEM_INT32:
                strIdx += snprintf(&scratchStr[strIdx], SCRATCH_STR_LEN - strIdx,
                                   " (%d-%d)", data->int32_t_data.minVal, data->int32_t_data.maxVal);
                break;
#ifdef CONFIG_MENU_FLOAT
            case MENU_ITEM_FLOAT:
                strIdx += snprintf(&scratchStr[strIdx], SCRATCH_STR_LEN - strIdx,
                                   " (%f-%f)", data->float_t_data.minVal, data->float_t_data.maxVal);
                break;
#endif
            case MENU_ITEM_MAC:
                //No min/max for OnOff
                break;
            case MENU_ITEM_ON_OFF:
            case MENU_ITEM_TOGGLE:
                //No min/max for OnOff
                break;
            case MENU_ITEM_ACTION:
            case MENU_ITEM_SUBMENU:
            case MENU_ITEM_VARARG:
                //Do nothing for actions or submenus
                break;
        }
    }

    ConfigMenuWriteLine(scratchStr, 1, false);
}

/**
 * Reads a line from the terminal, identified by the line ending type
 * @param buf- Buffer to read in to. Will be null terminated when finished
 * @param len - Length of the buffer
 * @returns Number of characters in the line, excluding line endings and null
 *          termination
 */
static uint32_t ConfigMenuReadLine(char *buf, uint32_t len)
{
    uint32_t count = 0;
    char *ptr = buf;
    char ch;
    bool runLoop = true;

    //Track the last char between function calls
    static char lastCh = '\0';


    //Loop leaving enough room for a null if we run out of room
    while ((count < (len - 1)) && (runLoop)) {
        //Read the character (blocking read with -1 timeout)
        int chInt = ConfigMenuReadChar(-1);
        ch = (char)chInt;

        //Perform the echo if enabled
        if (ConfigMenuEchoEnabled()) {
            ConfigMenuWriteChar(ch);
        }

        //Backspace
        if (ch == '\b') {
            if (count > 0) {
                count--;
                ptr--;
                *ptr = '\0';
            }
        } else if ((ch != '\n') && (ch != '\r')) {
            //Never save off the CR or LF chars. This supports the 2 character line
            //endings, by not incrementing the counter and pointer as well
            count++;
            *ptr = ch;
            ptr++;

            //Special character for leaving plaintext mode
            if (ch == CHAR_CTRL_Q) { //Exit the loop
                runLoop = false;
            }
        } else {
            //Protect against double menu displays when the line endings of the
            //terminal are CRLF.  If the last char was a <CR>, we exited this
            //function. If the next ch received is a <LF>, do nothing to prevent
            //double menu prints
            if (!((lastCh == '\r') && (ch == '\n'))) {
                runLoop = false;
            }

            //If lineEnd is still auto, resolve
            if (ConfigMenuGetLineEnd() == LINE_END_AUTO) {
                if ((lastCh == '\r') && (ch == '\n')) {
                    ConfigMenuSetLineEnd(LINE_END_CR_LF);
                } else if ((lastCh == '\r') && (ch == '\r')) {
                    ConfigMenuSetLineEnd(LINE_END_CR);
                } else if ((lastCh == '\n') && (ch == '\n')) {
                    ConfigMenuSetLineEnd(LINE_END_LF);
                }
            }
        }

        lastCh = ch;
    }

    //Always set the last character to null
    *ptr = '\0';

    return count;
}
