/**
 * Copyright © 2025-2026 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef __CONFIG_MENU_TASK_H__
#define __CONFIG_MENU_TASK_H__

#include "ConfigMenuEntry.h"

/**
 * Initializes the command line interface task which is based around a menu
 * system.
 * @param main_menu - Menu to use as the root menu of the interface
 */
void ConfigMenuTaskInit(config_menu_t *main_menu);

/**
 * Writes a line of text to the assigned interface.  numLineEnds specifies the
 * number of line endings to print at the end. wrapLine, if true, performs a
 * single on word boundary (space) line separation for long times.
 * @param line - null terminated line to write
 * @param numLineEnds - number of line endings to print at the end
 * @param wrapLine - If true, performs long line text wrapping
 */
void ConfigMenuWriteLine(const char *line, uint8_t numLineEnds, bool wrapLine);

#endif
