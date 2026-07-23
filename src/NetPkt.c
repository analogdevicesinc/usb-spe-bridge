/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include "NetPkt.h"
#include "FreeRTOS.h"
#include "Platform.h"
#include "task.h"
#include "queue.h"
#include "assert.h"
//Packet pool
static QueueHandle_t pktPool;

//Actual packet data
static net_pkt_t pktData[NUM_PKT_IN_POOL];


void net_pkt_pool_init( )
{
    net_pkt_t *pktPtr = pktData;
    int i;

    pktPool = xQueueCreate(NUM_PKT_IN_POOL, sizeof(net_pkt_t *));


    //Configure the buffer pointers for the pool
    for (i = 0; i < NUM_PKT_IN_POOL; i++) {
        pktPtr->bytes_used = 0;
        pktPtr->ref_count = 0;
        pktPtr->max_size = NET_PKT_FRAME_SIZE;

        xQueueSend(pktPool, &pktPtr, portMAX_DELAY);
        pktPtr++;
    }
}

net_pkt_t * net_pkt_pool_get( )
{
    net_pkt_t *pktPtr;

    if (xQueueReceive(pktPool, &pktPtr, 0) != pdFAIL) {
        pktPtr->bytes_used = 0;
        pktPtr->max_size = NET_PKT_FRAME_SIZE;
        pktPtr->ref_count = 1;
    } else {
        pktPtr = NULL;
    }
    return pktPtr;
}

void net_pkt_pool_add_ref(net_pkt_t *pkt)
{
    ATOMIC_INC(pkt->ref_count);
}

void net_pkt_pool_unref(net_pkt_t *pkt)
{
    //Should never try to unref a pkt with count of 0!
    assert(pkt->ref_count != 0);

    taskENTER_CRITICAL();
    if (pkt->ref_count <= 1) {
        pkt->ref_count = 0;
        taskEXIT_CRITICAL();
        xQueueSend(pktPool, &pkt, portMAX_DELAY);
    } else {
        pkt->ref_count--;
        taskEXIT_CRITICAL();
    }
}
