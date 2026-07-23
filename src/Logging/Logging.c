/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <stdio.h>
#include <stdarg.h>

#include "Logging.h"
#include "LoggingHAL.h"

#include "TaskPriorities.h"
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"

/** Define the number of buffers for strings and their size.  Tune these based
 * on need and memory requirements */
#ifndef LOGGING_CONSOLE_NUM_BUFFS
#define LOGGING_CONSOLE_NUM_BUFFS   50
#endif

#ifndef LOGGING_CONSOLE_BUF_SIZE
#define LOGGING_CONSOLE_BUF_SIZE    256
#endif


/* List of the current levels */
static log_level_t sourceLevels[LOG_SOURCE_COUNT];

/** Define the memory buffer for console data */
static char logBuffers[LOGGING_CONSOLE_NUM_BUFFS * LOGGING_CONSOLE_BUF_SIZE];

static TaskHandle_t taskHandle;     /**< Console task handle              */
static QueueHandle_t buffEmptyQ;    /**< Queue for empty buffers          */
static QueueHandle_t buffFullQ;     /**< Queue for waiting to be printed  */

/** Prototypes **/
static void LoggingTaskBody(void *pvParameters);

int LoggingInit( )
{
    BaseType_t xReturned;
    int i;
    char *bufPtr;

    //Set all the sources to the configured level to start
    for (i = 0; i < LOG_SOURCE_COUNT; i++) {
        sourceLevels[i] = GLOBAL_LOG_LEVEL;
    }

    //Initialize the hardware layer
    LoggingHAL_Init();

    //Create the queues
    buffEmptyQ = xQueueCreate(LOGGING_CONSOLE_NUM_BUFFS, sizeof(char *));
    buffFullQ = xQueueCreate(LOGGING_CONSOLE_NUM_BUFFS, sizeof(char *));

    //Fill the empty queue with all the buffer pointers
    for (i = 0; i < LOGGING_CONSOLE_NUM_BUFFS; i++) {
        bufPtr = &(logBuffers[i * LOGGING_CONSOLE_BUF_SIZE]);
        xQueueSend(buffEmptyQ, &bufPtr, 0);
    }

    //Create the task
    xReturned = xTaskCreate(LoggingTaskBody, (const char *)"Logging",
                            configMINIMAL_STACK_SIZE, NULL, TASK_PRIO_LOGGING,
                            &taskHandle);

    if (xReturned == pdPASS) {
        return 0;
    } else {
        return -1;
    }
}

/**
 *  Actual console task body. Just loop, blocking waiting for messages to display
 */
void LoggingTaskBody(void *pvParameters)
{
    int keepRunning = 1;
    char *bufPtr;

    while (keepRunning) {
        xQueueReceive(buffFullQ, &bufPtr, portMAX_DELAY);
        LoggingHAL_WriteString(bufPtr);
        xQueueSend(buffEmptyQ, &bufPtr, portMAX_DELAY);
    }
}


int LoggingPrint(const char *fmt, ...)
{
    va_list args;

    va_start(args, fmt);
    LoggingvPrint(fmt, args);
    va_end(args);
    return 0;
}

void LoggingvPrint(const char *fmt, va_list args)
{
    char *bufPtr;
    BaseType_t xReturned;

    xReturned = xQueueReceive(buffEmptyQ, &bufPtr, 0);
    if (xReturned == pdPASS) {
        vsnprintf(bufPtr, LOGGING_CONSOLE_BUF_SIZE, fmt, args);
        xQueueSend(buffFullQ, &bufPtr, 0);
    }
}


log_level_t LoggingGetSourceLevel(log_source_t src)
{
    if (src < LOG_SOURCE_COUNT) {
        return sourceLevels[src];
    } else {
        return LOG_LEVEL_NONE;
    }
}

void LoggingSetSourceLevel(log_source_t src, log_level_t level)
{
    if ((src < LOG_SOURCE_COUNT) &&
        (level <= GLOBAL_LOG_LEVEL)) {
        sourceLevels[src] = level;
    }
}
