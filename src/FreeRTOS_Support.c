/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include "ConfigMenuTask.h"

#include "tmr.h"
#include "FreeRTOS.h"
#include "task.h"

#include <string.h>
#include <stdio.h>

//Number of tasks in the static allocated stats array. Adjust higher if the
//system uses more tasks
#define TASK_STATS_COUNT    12
#define INFO_STR_LEN        100

static TaskStatus_t taskStatusArray[TASK_STATS_COUNT];

void FreeRTOS_CLI_Callback(void *unused)
{
    uint32_t taskCount;
    int i;
    char infoStr[INFO_STR_LEN];
    char perStr[4];
    uint32_t totalRunTime;
    uint32_t taskPercent;
    HeapStats_t heapStats;

    taskCount = uxTaskGetNumberOfTasks();

    if (taskCount > TASK_STATS_COUNT) {
        snprintf(infoStr, INFO_STR_LEN, "Error getting stats. Task count (%u) too large.", taskCount);
        ConfigMenuWriteLine(infoStr, 0, false);
        return;
    }

    taskCount = uxTaskGetSystemState(taskStatusArray, taskCount, &totalRunTime);
    if (!taskCount) {
        ConfigMenuWriteLine("Unexpected Error.", 0, false);
        return;
    }

    snprintf(infoStr, INFO_STR_LEN, "Uptime: %u seconds",
             (xTaskGetTickCount() / configTICK_RATE_HZ));
    ConfigMenuWriteLine(infoStr, 1, false);

    vPortGetHeapStats(&heapStats);
    ConfigMenuWriteLine("FreeRTOS Heap: ", 0, false);
    snprintf(infoStr, INFO_STR_LEN, "%u / %u Bytes Available (%u%%)",
             heapStats.xAvailableHeapSpaceInBytes,
             configTOTAL_HEAP_SIZE,
             (heapStats.xAvailableHeapSpaceInBytes * 100) / configTOTAL_HEAP_SIZE);
    ConfigMenuWriteLine(infoStr, 2, false);

    ConfigMenuWriteLine("| Task       | CPU% | PRI |   S_BASE   | S_MARGIN |", 1, false);
    ConfigMenuWriteLine("|============|======|=====|============|==========|", 1, false);
    for (i = 0; i < taskCount; i++) {
        if (totalRunTime != 0) {
            taskPercent = (uint32_t)(((uint64_t)taskStatusArray[i].ulRunTimeCounter * 100ULL) / totalRunTime);
        } else {
            taskPercent = 0;
        }

        if (taskPercent) {
            snprintf(perStr, sizeof(perStr), "%u", taskPercent);
        } else {
            snprintf(perStr, sizeof(perStr), "<1");
        }

        snprintf(infoStr, INFO_STR_LEN, "| %-10s | %4s | %3u | %p | %6u B |",
                 taskStatusArray[i].pcTaskName,
                 perStr,
                 taskStatusArray[i].uxBasePriority,
                 (void *)taskStatusArray[i].pxStackBase,
                 //Lowest number of free bytes available since running
                 taskStatusArray[i].usStackHighWaterMark * sizeof(StackType_t));
        ConfigMenuWriteLine(infoStr, 1, false);
    }
}

void ConfigTimerForStats()
{
    mxc_tmr_cfg_t tmr;

    //Configure the Timer for FreeRTOS metrics
    tmr.pres = TMR_PRES_2048;
    tmr.mode = TMR_MODE_CONTINUOUS;
    tmr.cmp_cnt = 0xFFFFFFFF;
    tmr.pol = 0;
    tmr.bitMode = TMR_BIT_MODE_32;
    MXC_TMR_Init(MXC_TMR0, &tmr, false);

    MXC_TMR_Start(MXC_TMR0);
}

uint32_t GetTimerForStats()
{
    return MXC_TMR_GetCount(MXC_TMR0);
}

#if configSUPPORT_STATIC_ALLOCATION
/* configSUPPORT_STATIC_ALLOCATION is set to 1, so the application must provide an
 * implementation of vApplicationGetIdleTaskMemory() to provide the memory that is
 * used by the Idle task. */
void vApplicationGetIdleTaskMemory(StaticTask_t **  ppxIdleTaskTCBBuffer,
                                   StackType_t **   ppxIdleTaskStackBuffer,
                                   uint32_t *       pulIdleTaskStackSize)
{
    /* If the buffers to be provided to the Idle task are declared inside this
     * function then they must be declared static - otherwise they will be allocated on
     * the stack and so not exists after this function exits. */
    static StaticTask_t xIdleTaskTCB;
    static StackType_t uxIdleTaskStack[configMINIMAL_STACK_SIZE];

    /* Pass out a pointer to the StaticTask_t structure in which the Idle task's
     * state will be stored. */
    *ppxIdleTaskTCBBuffer = &xIdleTaskTCB;

    /* Pass out the array that will be used as the Idle task's stack. */
    *ppxIdleTaskStackBuffer = uxIdleTaskStack;

    /* Pass out the size of the array pointed to by *ppxIdleTaskStackBuffer.
     * Note that, as the array is necessarily of type StackType_t,
     * configMINIMAL_STACK_SIZE is specified in words, not bytes. */
    *pulIdleTaskStackSize = configMINIMAL_STACK_SIZE;
}

/*-----------------------------------------------------------*/
#if configUSE_TIMERS
/* configSUPPORT_STATIC_ALLOCATION and configUSE_TIMERS are both set to 1, so the
 * application must provide an implementation of vApplicationGetTimerTaskMemory()
 * to provide the memory that is used by the Timer service task. */
void vApplicationGetTimerTaskMemory(StaticTask_t ** ppxTimerTaskTCBBuffer,
                                    StackType_t **  ppxTimerTaskStackBuffer,
                                    uint32_t *      pulTimerTaskStackSize)
{
    /* If the buffers to be provided to the Timer task are declared inside this
     * function then they must be declared static - otherwise they will be allocated on
     * the stack and so not exists after this function exits. */
    static StaticTask_t xTimerTaskTCB;
    static StackType_t uxTimerTaskStack[configTIMER_TASK_STACK_DEPTH];

    /* Pass out a pointer to the StaticTask_t structure in which the Timer
     * task's state will be stored. */
    *ppxTimerTaskTCBBuffer = &xTimerTaskTCB;

    /* Pass out the array that will be used as the Timer task's stack. */
    *ppxTimerTaskStackBuffer = uxTimerTaskStack;

    /* Pass out the size of the array pointed to by *ppxTimerTaskStackBuffer.
     * Note that, as the array is necessarily of type StackType_t,
     * configTIMER_TASK_STACK_DEPTH is specified in words, not bytes. */
    *pulTimerTaskStackSize = configTIMER_TASK_STACK_DEPTH;
}
#endif
#endif

//Hide warnings for not using the register variables
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
void prvGetRegistersFromStack(uint32_t *pulFaultStackAddress)
{
    /* These are volatile to try and prevent the compiler/linker optimising them
     * away as the variables never actually get used.  If the debugger won't show the
     * values of the variables, make them global my moving their declaration outside
     * of this function. */
    volatile uint32_t r0;
    volatile uint32_t r1;
    volatile uint32_t r2;
    volatile uint32_t r3;
    volatile uint32_t r12;
    volatile uint32_t lr;   /* Link register. */
    volatile uint32_t pc;   /* Program counter. */
    volatile uint32_t psr;  /* Program status register. */

    r0 = pulFaultStackAddress[0];
    r1 = pulFaultStackAddress[1];
    r2 = pulFaultStackAddress[2];
    r3 = pulFaultStackAddress[3];

    r12 = pulFaultStackAddress[4];
    lr = pulFaultStackAddress[5];
    pc = pulFaultStackAddress[6];
    psr = pulFaultStackAddress[7];

    /* When the following line is hit, the variables contain the register values. */
    for ( ;; ) {
    }
}
#pragma GCC diagnostic pop //Return the original warnings

void vApplicationStackOverflowHook(TaskHandle_t xTask, signed char *pcTaskName)
{
    for ( ;; ) {
    }
}

/* The prototype shows it is a naked function - in effect this is just an
 * assembly function. */
void HardFault_Handler(void) __attribute__((naked, aligned(8)));

/* The fault handler implementation calls a function called
 * prvGetRegistersFromStack(). */
void HardFault_Handler(void)
{
    __asm volatile
    (
        " tst lr, #4                                                \n"
        " ite eq                                                    \n"
        " mrseq r0, msp                                             \n"
        " mrsne r0, psp                                             \n"
        " ldr r1, [r0, #24]                                         \n"
        " ldr r2, handler2_address_const                            \n"
        " bx r2                                                     \n"
        " handler2_address_const: .word prvGetRegistersFromStack    \n"
    );
}
