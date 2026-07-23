/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __NET_STATS_H__
#define __NET_STATS_H__

#include <stdint.h>

typedef struct {
    uint32_t    rx;
    uint32_t    tx;
    uint32_t    rx_drop;
    uint32_t    tx_drop;
} net_stats_t;

//Prototype for getting status
typedef void (*StatsProvider)(net_stats_t *pkt);

#endif
