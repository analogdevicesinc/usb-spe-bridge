/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef __LOGGING_HAL_H__
#define __LOGGING_HAL_H__

/**
 * Initializes the hardware layer for the logging task
 * @return 0 on success, negative otherwise
 */
int LoggingHAL_Init(void);

/**
 * Writes the provided string to the HAL output.  Assumes str is null terminated
 * @param str - Null terminated string to write
 */
void LoggingHAL_WriteString(char *str);

#endif
