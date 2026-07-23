/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "USB_Task.h"
#include "USB_Task_private.h"
#include "Platform.h"

#include "FreeRTOS.h"
#include "queue.h"

#include "bsp/board_api.h"
#include "tusb.h"

#include <assert.h>

//Size of the outgoing packet queue
#define TX_QUEUE_SIZE   32

static QueueHandle_t txQueue;
static PacketHandler rxHandler;
static net_stats_t stats;

static bool isInitialized = false;

/* To support TUSB's Networking, this MAC address buffer needs to be a global. */
uint8_t tud_network_mac_address[6U] =
{
    0x00U, 0xE0U, 0x22U, 0xFEU, 0x70U, 0x00U
};


void USB_NetworkInit(usb_net_init_cfg_t *net_cfg)
{
    assert(net_cfg);
    memcpy(tud_network_mac_address, net_cfg->macAddr, 6);
    memset(&stats, 0, sizeof(stats));

    rxHandler = net_cfg->handler;
    txQueue = xQueueCreate(TX_QUEUE_SIZE, sizeof(net_pkt_t *));
    isInitialized = true;
}

bool USB_NetworkSendPacket(net_pkt_t *pkt)
{
    net_pkt_pool_add_ref(pkt);

    if (xQueueSend(txQueue, &pkt, 0) != pdTRUE) {
        net_pkt_pool_unref(pkt);
        ATOMIC_INC(stats.tx_drop);
        return false;
    } else {
        USB_TaskNotify(false);
        return true;
    }
}

void USB_NetworkGetStats(net_stats_t *stats_out)
{
    memcpy(stats_out, &stats, sizeof(net_stats_t));
}


/**
 * Important: This must be called from the same task as tud_task when using
 * NCM for network interface.  NCM is not thread safe.
 */
void USB_NetworkDrainTxQueue(void)
{
    net_pkt_t *pkt;

    if (!isInitialized) {
        return;
    }

    while (tud_network_can_xmit(NET_PKT_FRAME_SIZE)) {
        if (xQueueReceive(txQueue, &pkt, 0) != pdTRUE) {
            break;
        }
        tud_network_xmit(pkt, 0);
        net_pkt_pool_unref(pkt);
        ATOMIC_INC(stats.tx);
    }
}

/**
 * Required by the tUSB network stack.
 */
void tud_network_init_cb(void)
{
    //Nothing to do
}

/**
 * Callback required by the USB network stack. This is synchronous to the
 * tud_network_xmit call, but allows the stack to figure out where in its
 * buffer to allow us to put the frame data.  Use arg as the index into the
 * queue
 */
uint16_t tud_network_xmit_cb(uint8_t *dst, void *ref, uint16_t arg)
{
    net_pkt_t *pkt = (net_pkt_t *)ref;

    memcpy(dst, pkt->data_ptr, pkt->bytes_used);
    return pkt->bytes_used;
}

/**
 * Callback required by the USB network stack. Notifies on new frames being
 * received.
 */
bool tud_network_recv_cb(const uint8_t *src, uint16_t size)
{
    net_pkt_t *newPkt = net_pkt_pool_get();

    if (newPkt) {
        memcpy(newPkt->data_ptr, src, size);
        newPkt->bytes_used = size;
        if (rxHandler) {
            rxHandler(newPkt);
        }
        net_pkt_pool_unref(newPkt);
        ATOMIC_INC(stats.rx);
    } else {
        ATOMIC_INC(stats.rx_drop);
    }

    //Notify the USB stack we are done with the frame data
    tud_network_recv_renew();

    return true;
}
