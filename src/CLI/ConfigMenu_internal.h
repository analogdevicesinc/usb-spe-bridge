/**
 * Copyright © 2026 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef __CONFIG_MENU_INTERNAL_H__
#define __CONFIG_MENU_INTERNAL_H__

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#include "ConfigMenuTask.h"
#include "ConfigMenuEntry.h"

#define STR(v)   #v
#define XSTR(v)  STR(v)
#define KEY_FORMATTER   "%-" XSTR(MENU_ENTRY_KEY_LEN) "s"

//Up to 5 sub menus. Adjust as needed
#define MENU_STACK_LEN  5

//Separator string
#define HEADING_DIV  "----------------------------------------"

//Length for any shared string buffs
#define SCRATCH_STR_LEN 128

/**
 * Return value from readChar when a timeout occurs (ms >= 0).
 * Valid characters return as 0–255; this value is out-of-range for chars.
 */
#define MENU_READ_TIMEOUT  (-1)


// VT100 sequences for TUI rendering
#define VT100_CLEAR     "\x1b[2J\x1b[H"     // clear screen + cursor home
#define VT100_INVERT    "\x1b[7m"           // reverse video on
#define VT100_NORMAL    "\x1b[0m"           // all attributes off
#define VT100_BELL      "\x07"              // audible/visual bell
#define VT100_CLEARLINE "\x1b[2K\r"         // erase line + return to start

/**
 * Special characters used for entering and existing "legacy"/Plaintext menu
 * mode
 */
#define CHAR_CTRL_Q    0x11 //Ctrl-Q - Leave plaintext mode / Enter VT100
#define CHAR_CTRL_L    0x0C //Ctrl-L - Leave VT100 mode / Enter plaintext

/**
 * Defines the different line ending styles
 * Used for both writing data to the console and reading in lines
 */
typedef enum {
    LINE_END_CR,    // '\r'
    LINE_END_LF,    // '\n'
    LINE_END_CR_LF, // '\r\n'
    LINE_END_AUTO   //  Determine based on user input
} config_menu_line_end_t;

/**
 * Initializes the configuration menu instance.
 * @param mainMenu - Menu which is the root of the display
 * @param le - Line endings to use
 * @param echo - 1 will echo back characters read.
 */
void ConfigMenuInit(config_menu_t mainMenu, config_menu_line_end_t le, bool echo);

/**
 * Runs the VT100 configuration menu loop on the provided menu. This will return
 * when use performs a Ctrl-L to enter plaintext mode
 */
void ConfigMenuVT_Run(void);

/**
 * Runs the plaintext configuration menu loop on the provided menu. This will return
 * when use performs a Ctrl-Q to enter VT100 mode
 */
void ConfigMenuPlaintextRun(void);

/**
 * Reads a character from the assigned configuration interface.  If ms < 0, then
 * it will wait forever, otherwise ms is the timeout in milliseconds.
 * @param ms - Milliseconds to wait (or < 0 for wait forever)
 * @returns - Character read or MENU_READ_TIMEOUT on a timeout
 */
int ConfigMenuReadChar(int32_t ms);

/**
 * Writes a character to the assigned configuration interface
 * @param ch - Character to write
 */
void ConfigMenuWriteChar(char ch);

/**
 * Performs a delay during processing.
 * @param ms - Delay in milliseconds
 */
void ConfigMenuDelayMs(uint32_t ms);

/**
 * Returns if character echos are enabled in the instance
 * @returns True if echo enabled, false otherwise
 */
bool ConfigMenuEchoEnabled(void);

/**
 * Handles a command from user input.
 * @param inputArgs - input arguments to process
 * @param menu - Menu holding the entry
 * @param entry - Menu entry to process
 */
void ConfigMenuHandleCommand(char *inputargs, const config_menu_t *menu, const config_menu_entry_t *entry);

/**
 * Prints the error message to the configuration interface, as well as includes
 * any delays for user notification
 * @param error_msg - Error to print
 */
void ConfigMenuPrintError(const char *error_msg);

/**
 * Based on the provided key and menu, returns the entry associated with that
 * key, or NULL if not found
 * @param key - Key name string
 * @param menu - Menu to search in
 * @returns Found entry pointer, or NULL on error/Not found
 */
config_menu_entry_t * ConfigMenuFindEntryByKey(const char *key, const config_menu_t *menu);

/**
 * Gets the current line ending assigned in the system
 * @returns line ending type
 */
config_menu_line_end_t ConfigMenuGetLineEnd(void);

/**
 * Sets the current line ending in the system
 * @param le - New line ending to set
 */
void ConfigMenuSetLineEnd(config_menu_line_end_t le);

/**
 * Callback handler for when the user enters 'help'. This is dynamically set in
 * the system during the HandlerCallback.
 */
void ConfigMenuHelpCallback(char *data);

/**
 * Gets the active menu in the menu stack
 * @returns - Current user facing menu
 */
const config_menu_t * ConfigMenuGetActive(void);

/**
 * Pops the menu stack by 1. Should be used when the user hits ESC or 'x'
 */
void ConfigMenuPop(void);

/**
 * Resets the menu stack to the root menu assigned at initialization/
 */
void ConfigMenuReset(void);

#endif
