/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef __NET_PKT_H__
#define __NET_PKT_H__

#include <stdint.h>
#include <stdbool.h>

/*****************
 * This is the implementation of a simple multi-referenced packet pool for use
 * by the whole application.
 *
 * To get a new packet, the user calls net_pkt_pool_get, which will return a
 * packet pointer and automatically set the reference count to 1.  The intention
 * of this implementation is for each using task to be responsible for managing
 * their reference. This allows the packet data to be transferred to other tasks
 * by sharing the pointer, versus copying the whole buffer.
 *
 * The best practice is when the packet is being transferred into a new task,
 * the new task should add a reference via the net_pkt_pool_add_ref call. As
 * each task no longer needs the reference, it should call net_pkt_poll_unref.
 * If the reference count goes to 0, the packet is considered no longer needed
 * and added back to the pool for future use.
 *
 * TODO: Hide the implementation of the struct and provide functions for reading
 * and writing packet data.  This will prevent the possibility of the data
 * pointers from getting corrupted.
 */

//Number of packets available in the pool
#define NUM_PKT_IN_POOL     128

//Maximum size of a packet. (Every packet in the pool is given this space)
#define NET_PKT_FRAME_SIZE  1560

/**
 * Structure for the packet data. Hide this in the future
 */
typedef struct {
    uint8_t     data_ptr[NET_PKT_FRAME_SIZE];   //Actual memory location
    uint16_t    max_size;                       //Available size
    uint16_t    bytes_used;                     //Number of bytes used
    uint8_t     ref_count;                      //Reference count
} net_pkt_t;

//Callback prototype for Rx packets
typedef void (*PacketHandler)(net_pkt_t *pkt);

//Prototype for sending packets
typedef bool (*PacketSender)(net_pkt_t *pkt);

/**
 * Initializes the packet pool. Must be called first before anything
 */
void net_pkt_pool_init(void);

/**
 * Gets a new packet from the pool and sets its reference to 1.
 * @returns Packet pointer, or NULL if none available.
 */
net_pkt_t * net_pkt_pool_get(void);

/**
 * Adds a reference to the packet instance
 * @param pkt - Packet instance
 */
void net_pkt_pool_add_ref(net_pkt_t *pkt);

/**
 * Removes a reference to the packet instance
 * @param pkt - Packet instance
 */
void net_pkt_pool_unref(net_pkt_t *pkt);

#endif
