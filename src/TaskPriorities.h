/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __TASK_PRIORITIES_H__
#define __TASK_PRIORITIES_H__

#include "FreeRTOS.h"
#include "task.h"
#include "FreeRTOSConfig.h"

#define TASK_PRIO_BACKGROUND (tskIDLE_PRIORITY + 1)
#define TASK_PRIO_LOGGING    (TASK_PRIO_BACKGROUND + 1)
#define TASK_PRIO_CONFIG     (TASK_PRIO_LOGGING + 1)
#define TASK_PRIO_CDC        (TASK_PRIO_CONFIG + 1)
#define TASK_PRIO_LWIP       (TASK_PRIO_CDC + 1)
#define TASK_PRIO_USBD       (TASK_PRIO_LWIP + 1)
#define TASK_PRIO_OASPI_RT   (TASK_PRIO_USBD + 1)
#define TASK_PRIO_OASPI_UTIL (TASK_PRIO_OASPI_RT + 1)

#endif
