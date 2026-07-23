/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */


/* Define to prevent redundant inclusion */
#ifndef __FREERTOSCONFIG_H__
#define __FREERTOSCONFIG_H__

/* **** Includes **** */
#include <stdint.h>
#include "max32690.h"


//Debug support
extern void ConfigTimerForStats(void);
extern uint32_t GetTimerForStats(void);

/**
 * CLI callback function to display FreeRTOS statistics to the terminal
 * @param unused - User data unused
 */
void FreeRTOS_CLI_Callback(void *unused);

#define configASSERT(x) if ((x) == 0) { taskDISABLE_INTERRUPTS(); for (;;); }
#define configENABLE_BACKWARD_COMPATIBILITY                 1
#define configGENERATE_RUN_TIME_STATS                       1
#define configQUEUE_REGISTRY_SIZE                           10
#define configRECORD_STACK_HIGH_ADDRESS                     1
#define portCONFIGURE_TIMER_FOR_RUN_TIME_STATS()    (ConfigTimerForStats())
#define portGET_RUN_TIME_COUNTER_VALUE()            (GetTimerForStats())

/**
 * @brief   Application specific definitions.
 * @details These definitions should be adjusted for your particular hardware and
 *          application requirements.
 * @note    THESE PARAMETERS ARE DESCRIBED WITHIN THE 'CONFIGURATION' SECTION OF THE
 *          FreeRTOS API DOCUMENTATION AVAILABLE ON THE FreeRTOS.org WEB SITE.
 *
 * @details See http://www.freertos.org/a00110.html.
 */

/* CMSIS keeps a global updated with current system clock in Hz */
#define configCPU_CLOCK_HZ ((uint32_t)SystemCoreClock)

/* Tick-less idle forces a 32768 Hz RTC-derived SysTick source, and a 256 Hz task tick */
//#define configUSE_TICKLESS_IDLE 1
#ifdef configUSE_TICKLESS_IDLE
#define configSYSTICK_CLK_HZ ((uint32_t)32768)
#define configTICK_RATE_HZ ((portTickType)256)
#else
#define configTICK_RATE_HZ ((portTickType)1000)
#endif

/* This macro is part of newer FreeRTOS versions, but not in the one included
 * with CFS. Required by the latest TinyUSB.
 * Definition copied from FreeRTOS itself.
 */
#ifndef pdTICKS_TO_MS
#define pdTICKS_TO_MS(xTimeInTicks) ((TickType_t)(((uint64_t)(xTimeInTicks) * (uint64_t)1000U) / (uint64_t)configTICK_RATE_HZ))
#endif

/* Add a ton more heap since No-Os uses dynamic allocation. Need to quantify this
 * a bit better
 */
#define configTOTAL_HEAP_SIZE ((size_t)(70 * 1024))

#define configMINIMAL_STACK_SIZE ((uint16_t)128)

#define configSUPPORT_STATIC_ALLOCATION 1
#define configMAX_PRIORITIES 16
#define configUSE_PREEMPTION 0
#define configUSE_IDLE_HOOK 0
#define configUSE_TICK_HOOK 0
#define configUSE_CO_ROUTINES 0
#define configUSE_16_BIT_TICKS 0
#define configUSE_MUTEXES 1
#define configUSE_RECURSIVE_MUTEXES 1 //Required for LWIP

/* Run time and task stats gathering related definitions. */
#define configUSE_TRACE_FACILITY 1
#define configUSE_STATS_FORMATTING_FUNCTIONS 1

/* Set the following definitions to 1 to include the API function, or zero
 * to exclude the API function. */
#define INCLUDE_vTaskPrioritySet 0
#define INCLUDE_vTaskDelete 0
#define INCLUDE_vTaskSuspend 1
#define INCLUDE_vTaskDelayUntil 1
#define INCLUDE_uxTaskPriorityGet 0
#define INCLUDE_vTaskDelay 1

/* # of priority bits (configured in hardware) is provided by CMSIS */
#define configPRIO_BITS __NVIC_PRIO_BITS

/* Priority 7, or 255 as only the top three bits are implemented.  This is the lowest priority. */
#define configKERNEL_INTERRUPT_PRIORITY ((unsigned char)7 << (8 - configPRIO_BITS))

/* Priority 5, or 160 as only the top three bits are implemented. */
#define configMAX_SYSCALL_INTERRUPT_PRIORITY ((unsigned char)5 << (8 - configPRIO_BITS))

/* Alias the default handler names to match CMSIS weak symbols */
#define vPortSVCHandler SVC_Handler
#define xPortPendSVHandler PendSV_Handler
#define xPortSysTickHandler SysTick_Handler

#ifdef configUSE_TICKLESS_IDLE
#define configRTC_TICK_RATE_HZ ((portTickType)256)
/* Provide routines for tickless idle pre- and post- processing */
void vPreSleepProcessing(uint32_t *);
void vPostSleepProcessing(uint32_t);
#define configPRE_SLEEP_PROCESSING(idletime) vPreSleepProcessing(&idletime);
#define configPOST_SLEEP_PROCESSING(idletime) vPostSleepProcessing(idletime);
#endif

/* FreeRTOS+CLI requires this size to be defined, but we do not use it */
#define configCOMMAND_INT_MAX_OUTPUT_SIZE 1

#endif
