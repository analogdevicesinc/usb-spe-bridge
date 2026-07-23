/**
 * Copyright © 2026 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <assert.h>
#include <string.h>
#include <stdio.h>

#include "ConfigMenu_internal.h"

// Timeout for ESC sequence disambiguation (ms)
#define ESC_SEQ_TIMEOUT_MS  200

// Single-key navigation aliases. Arrow-key escape sequences are unreliable on
// some terminals (notably minicom, which often transmits only the lone ESC),
// so these printable keys provide a terminal-agnostic way to drive the menu.
// They are interpreted only in the menu loop, never in text-entry screens, so
// these letters can still be typed into value fields.
#define KEY_NAV_UP_1     'w'
#define KEY_NAV_UP_2     'k'
#define KEY_NAV_DOWN_1   's'
#define KEY_NAV_DOWN_2   'j'

// Key types for TUI navigation
typedef enum {
    KEY_UP,
    KEY_DOWN,
    KEY_ENTER,
    KEY_ESC,
    KEY_BACKSPACE,
    KEY_SPACE,
    KEY_CTRL_L,        // Ctrl+L to enter plaintext CLI
    KEY_PRINTABLE,
    KEY_OTHER,
} menu_key_type_t;

typedef struct {
    menu_key_type_t type;
    char            ch;
    bool            timedOut;   // true if this key arrived from a timeout
} menu_key_t;

//Scratch buffer to keep string data off the stack
static char scratchStr[SCRATCH_STR_LEN];

//Local prototypes
static menu_key_t ConfigMenuReadKey(void);
static void ConfigMenuDrawMenuScreen(const config_menu_t *menu, int cursorIdx);
static bool ConfigMenuShowEditScreen(config_menu_entry_t *entry, const config_menu_t *menu);
static void ConfigMenuShowBoolEditScreen(config_menu_entry_t *entry, const config_menu_t *menu);
static void ConfigMenuPrintEntry(config_menu_entry_t *entry, bool showName, bool showValue);

// New TUI-based menu loop
void ConfigMenuVT_Run()
{
    int cursorIdx = 0;
    const config_menu_t *activeMenu;
    bool needsRedraw = true;

    while (1) {
        activeMenu = ConfigMenuGetActive();

        if (cursorIdx >= activeMenu->entryCount) {
            cursorIdx = 0;
        }

        // Only redraw if something changed (not a pure timeout)
        if (needsRedraw) {
            ConfigMenuDrawMenuScreen(activeMenu, cursorIdx);
            needsRedraw = false;
        }

        menu_key_t k = ConfigMenuReadKey();

        // Any actual keystroke needs a redraw (unless it was just a timeout)
        if (!k.timedOut) {
            needsRedraw = true;
        }

        // Map single-key navigation aliases onto the arrow/ESC actions so
        // terminals that don't deliver arrow escape sequences are still usable.
        menu_key_type_t action = k.type;
        if (k.type == KEY_PRINTABLE) {
            //Normalize to lower-case
            char navCh = (k.ch >= 'A' && k.ch <= 'Z') ? (char)(k.ch + ('a' - 'A')) : k.ch;
            if (navCh == KEY_NAV_UP_1 || navCh == KEY_NAV_UP_2) {
                action = KEY_UP;
            } else if (navCh == KEY_NAV_DOWN_1 || navCh == KEY_NAV_DOWN_2) {
                action = KEY_DOWN;
            }
        }

        if (action == KEY_UP) {
            if (cursorIdx > 0) {
                cursorIdx--;
            }
        } else if (action == KEY_DOWN) {
            if (cursorIdx < activeMenu->entryCount - 1) {
                cursorIdx++;
            }
        } else if (action == KEY_ESC) {
            ConfigMenuPop();
            cursorIdx = 0;
            needsRedraw = true;
        } else if (action == KEY_CTRL_L) {
            //Exit to plain text mode
            break;
        } else if (action == KEY_ENTER) {
            config_menu_entry_t *entry = &activeMenu->entries[cursorIdx];

            if (entry->readOnly) {
                ConfigMenuWriteLine(VT100_BELL, 0, false);
            } else if (entry->dataType == MENU_ITEM_SUBMENU) {
                ConfigMenuHandleCommand(NULL, activeMenu, entry);
                cursorIdx = 0;
            } else if (entry->dataType == MENU_ITEM_ACTION) {
                ConfigMenuWriteLine(VT100_CLEAR, 0, false);
                ConfigMenuHandleCommand(NULL, activeMenu, entry);
                ConfigMenuWriteLine("", 1, false);
                ConfigMenuWriteLine("[Press any key to continue]", 0, false);
                ConfigMenuReadKey();
            } else if (entry->dataType == MENU_ITEM_TOGGLE ||
                       entry->dataType == MENU_ITEM_ON_OFF) {
                ConfigMenuShowBoolEditScreen(entry, activeMenu);
            } else {
                ConfigMenuShowEditScreen(entry, activeMenu);

                if (entry->dataType == MENU_ITEM_VARARG) {
                    ConfigMenuWriteLine("", 1, false);
                    ConfigMenuWriteLine("[Press any key to continue]", 0, false);
                    ConfigMenuReadKey();
                }
            }
        }
    }
}

// Read a key, handling arrow sequences, ESC, and CLI trigger. Arrow keys are
// best-effort: terminals that deliver the full ESC [ A / ESC O A sequence work,
// but some (e.g. minicom) do not reliably send the tail bytes. The menu loop
// also accepts single-key navigation aliases for those cases.
static menu_key_t ConfigMenuReadKey(void)
{
    menu_key_t key = { .type = KEY_OTHER, .ch = 0, .timedOut = false };
    int ch = ConfigMenuReadChar(-1);

    if (ch == '\x1b') {
        // 200ms window: distinguishes arrow keys and CLI trigger from bare ESC
        int seq1 = ConfigMenuReadChar(ESC_SEQ_TIMEOUT_MS);

        if (seq1 == MENU_READ_TIMEOUT) {
            // Timeout: bare ESC key
            key.type = KEY_ESC;
            key.timedOut = true;
        } else if (seq1 != '[' && seq1 != 'O') {
            // Anything except a valid escape sequence will be silently ignored
            key.type = KEY_ESC;
            key.timedOut = false;
        } else {
            int seq2 = ConfigMenuReadChar(ESC_SEQ_TIMEOUT_MS);
            if (seq2 == 'A') {
                key.type = KEY_UP;
            } else if (seq2 == 'B') {
                key.type = KEY_DOWN;
            } else {
                key.type = KEY_OTHER;
            }
        }
    } else if (ch == '\r' || ch == '\n') {
        key.type = KEY_ENTER;
    } else if (ch == '\b' || ch == 0x7F) {
        key.type = KEY_BACKSPACE;
    } else if (ch == ' ') {
        key.type = KEY_SPACE;
    } else if (ch == CHAR_CTRL_L) {  // Ctrl+L (form feed)
        key.type = KEY_CTRL_L;
    } else {
        key.type = KEY_PRINTABLE;
    }
    //Always assign the ch value
    key.ch = (char)ch;
    return key;
}

/**
 * Prints the provided menu entry. If both showName and showValue are true, they
 * will be separated by a ':'
 * @param entry = Menu entry to print
 * @param showName - shows the entry name
 * @param showValue - Shows the entry value
 */
static void ConfigMenuPrintEntry(config_menu_entry_t *entry, bool showName, bool showValue)
{
    uint32_t strIdx = 0;
    config_data_t *data = &entry->data;

    if (showName) {
        strIdx += snprintf(&scratchStr[strIdx], SCRATCH_STR_LEN - strIdx, " " KEY_FORMATTER, entry->itemText);
    }

    if (entry->showCurrent && showValue) { //Show the current flag is set
        //Note: This switch statement implementation seems bulky, but the verbose
        //nature of the datatypes the user needs to set is probably a nicer
        //implementation than some clever casting
        switch (entry->dataType) {
            case MENU_ITEM_UINT8:
                strIdx += snprintf(&scratchStr[strIdx], SCRATCH_STR_LEN - strIdx,
                                   "%s%u", showName ? ": " : "", *data->uint8_t_data.dataPtr);
                break;
            case MENU_ITEM_UINT16:
                strIdx += snprintf(&scratchStr[strIdx], SCRATCH_STR_LEN - strIdx,
                                   "%s%u", showName ? ": " : "", *data->uint16_t_data.dataPtr);
                break;
            case MENU_ITEM_UINT32:
                strIdx += snprintf(&scratchStr[strIdx], SCRATCH_STR_LEN - strIdx,
                                   "%s%u", showName ? ": " : "", *data->uint32_t_data.dataPtr);
                break;
            case MENU_ITEM_INT8:
                strIdx += snprintf(&scratchStr[strIdx], SCRATCH_STR_LEN - strIdx,
                                   "%s%d", showName ? ": " : "", *data->int8_t_data.dataPtr);
                break;
            case MENU_ITEM_INT16:
                strIdx += snprintf(&scratchStr[strIdx], SCRATCH_STR_LEN - strIdx,
                                   "%s%d", showName ? ": " : "", *data->int16_t_data.dataPtr);
                break;
            case MENU_ITEM_INT32:
                strIdx += snprintf(&scratchStr[strIdx], SCRATCH_STR_LEN - strIdx,
                                   "%s%d", showName ? ": " : "", *data->int32_t_data.dataPtr);
                break;
#ifdef CONFIG_MENU_FLOAT
            case MENU_ITEM_FLOAT:
                strIdx += snprintf(&scratchStr[strIdx], SCRATCH_STR_LEN - strIdx,
                                   "%s%f", showName ? ": " : "", *data->float_t_data.dataPtr);
                break;
#endif
            case MENU_ITEM_MAC:
                strIdx += snprintf(&scratchStr[strIdx], SCRATCH_STR_LEN - strIdx,
                                   "%s%02X:%02X:%02X:%02X:%02X:%02X",
                                   showName ? ": " : "",
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
                                   "%s%s", showName ? ": " : "",
                                   *data->on_off_t_data.dataPtr ? "ON" : "OFF");
                break;
            case MENU_ITEM_ACTION:
            case MENU_ITEM_SUBMENU:
            case MENU_ITEM_VARARG:
                //Do nothing for actions or submenus
                break;
        }
    }

    //Only write if something was written to scratchStr
    if (strIdx) {
        ConfigMenuWriteLine(scratchStr, 1, false);
    }
}

/**
 * Draws the configuration menu with cursor highlight on the active line
 * @param menu  - Menu to draw
 * @param cursorIdx - Index of the cursor / selected line
 */
static void ConfigMenuDrawMenuScreen(const config_menu_t *menu, int cursorIdx)
{
    ConfigMenuWriteLine(VT100_CLEAR, 0, false);
    ConfigMenuWriteLine(menu->headingText, 1, false);
    ConfigMenuWriteLine(HEADING_DIV, 1, false);

    for (int i = 0; i < menu->entryCount; i++) {
        if (i == cursorIdx) {
            ConfigMenuWriteLine(VT100_INVERT, 0, false);
        }
        ConfigMenuPrintEntry(&menu->entries[i], true, true);
        if (i == cursorIdx) {
            ConfigMenuWriteLine(VT100_NORMAL, 0, false);
        }
    }
    ConfigMenuWriteLine(HEADING_DIV, 1, false);
    ConfigMenuWriteLine("[UP/DOWN or W/S] Navigate  [ENTER] Select  [ESC] Back", 1, false);
}

/**
 * Shows the edit screen for the given entry. This supports any field which
 * requires user input (integers, vararg, etc).
 * @param entry - Entry to edit
 * @param menu - Menu associated with the entry
 */
static bool ConfigMenuShowEditScreen(config_menu_entry_t *entry, const config_menu_t *menu)
{
    char inputBuf[SCRATCH_STR_LEN];
    uint32_t count = 0;
    bool cancelled = false;

    ConfigMenuWriteLine(VT100_CLEAR, 0, false);
    ConfigMenuPrintEntry(entry, true, false);
    ConfigMenuWriteLine(HEADING_DIV, 1, false);

    if (entry->helpText) {
        ConfigMenuWriteLine(entry->helpText, 2, true);
    }

    if (entry->dataType == MENU_ITEM_VARARG) {
        ConfigMenuWriteLine("  Command Args (ESC to cancel): ", 0, false);
    } else {
        ConfigMenuWriteLine("  Current: ", 0, false);
        ConfigMenuPrintEntry(entry, false, true);
        ConfigMenuWriteLine("  New value (ESC to cancel): ", 0, false);
    }

    memset(inputBuf, 0, sizeof(inputBuf));
    while (count < sizeof(inputBuf) - 1) {
        menu_key_t k = ConfigMenuReadKey();
        if (k.type == KEY_ESC) {
            cancelled = true;
            break;
        } else if (k.type == KEY_ENTER) {
            break;
        } else if (k.type == KEY_BACKSPACE) {
            if (count > 0) {
                count--;
                inputBuf[count] = '\0';
                // Backspace one character in place
                ConfigMenuWriteChar('\b');
                ConfigMenuWriteChar(' ');
                ConfigMenuWriteChar('\b');
            }
        } else if ((k.type == KEY_PRINTABLE) || (k.type == KEY_SPACE)) {
            inputBuf[count++] = k.ch;
            if (ConfigMenuEchoEnabled()) {
                ConfigMenuWriteChar(k.ch);
            }
        }
    }

    if (cancelled || count == 0) {
        return false;
    }

    ConfigMenuWriteLine("", 1, false);
    ConfigMenuHandleCommand(inputBuf, menu, entry);
    return true;
}

/**
 * Shows the boolean edit screen. This is used for On/Off and Toggle entries
 * to allow switching the current state
 * @param entry - Entry to edit
 * @param menu - Menu associated with the entry
 */
static void ConfigMenuShowBoolEditScreen(config_menu_entry_t *entry, const config_menu_t *menu)
{
    bool tempVal = *entry->data.on_off_t_data.dataPtr;

    while (1) {
        ConfigMenuWriteLine(VT100_CLEAR, 0, false);
        ConfigMenuPrintEntry(entry, true, false);
        ConfigMenuWriteLine(HEADING_DIV, 1, false);

        if (entry->helpText) {
            ConfigMenuWriteLine(entry->helpText, 2, true);
        }

        snprintf(scratchStr, SCRATCH_STR_LEN, "  [%c] %s",
                 tempVal ? 'X' : ' ', tempVal ? "Enabled" : "Disabled");
        ConfigMenuWriteLine(VT100_INVERT, 0, false);
        ConfigMenuWriteLine(scratchStr, 1, false);
        ConfigMenuWriteLine(VT100_NORMAL, 0, false);
        ConfigMenuWriteLine(HEADING_DIV, 1, false);
        ConfigMenuWriteLine("  [SPACE/ENTER] Toggle  [ESC] to cancel", 1, false);

        menu_key_t k = ConfigMenuReadKey();
        if (k.type == KEY_ESC || k.timedOut) {
            return;
        } else if (k.type == KEY_SPACE || k.type == KEY_ENTER) {
            ConfigMenuHandleCommand(tempVal ? "0" : "1", menu, entry);
            return;
        }
    }
}
