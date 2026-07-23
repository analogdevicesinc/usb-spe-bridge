/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "LoggingHAL.h"

#include "mxc_device.h"
#include "mxc_errors.h"
#include "uart.h"


#ifndef LOGGING_BAUD
#define LOGGING_BAUD    115200
#endif

static mxc_uart_regs_t *loggingUart = MXC_UART_GET_UART(LOGGING_UART);

int LoggingHAL_Init( )
{
    if (MXC_UART_Init(loggingUart, LOGGING_BAUD, MXC_UART_APB_CLK) != E_NO_ERROR) {
        return -1;
    }

    return 0;
}

void LoggingHAL_WriteString(char *str)
{
    /* In theory the console task is a low priority so sitting and blocking
     * on this is fine. TODO in the future, use DMA or interrupt
     */
    while (*str != '\0') {
        MXC_UART_WriteCharacter(loggingUart, *str++);
    }
}
