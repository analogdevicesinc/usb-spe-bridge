/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef __OASPI_TASK_H__
#define __OASPI_TASK_H__

#include "NetPkt.h"
#include "NetStats.h"

#include <stdint.h>
#include <stdbool.h>

//Maximum consecutive reg accesses per call
#define OASPI_TASK_MAX_REG_ACCESS   32

//Definition of a task instance. The real definition is in the C file
typedef struct oaspi_task_inst_t oaspi_task_inst_t;

//Callback prototype for SPI bus requests. Returns true on successful transfers,
//false otherwise
typedef bool (*OASPI_TaskSPI_Xfer)(uint8_t *txBuf, uint8_t *rxBuf, uint32_t txRxCount);

/**
 * Each time OASPI_TaskCreateInstance is called an instance is allocated.
 * The implementation supports upto NUM_OASPI_INST
 * instances.
 *
 * The resulting oaspi_task_inst_t* needs to be used for all calls into the
 * OASPI_Task system.
 * @returns Pointer to the allocated instance, or NULL
 */
oaspi_task_inst_t * OASPI_TaskCreateInstance(void);

/**
 * Initializes an OASPI task.
 * @param pktHandler - Callback function for new packets
 * @param spiHandler - Callback function for SPI requests
 */
void OASPI_TaskInit(oaspi_task_inst_t *inst, PacketHandler pktHandler, OASPI_TaskSPI_Xfer spiHandler);

/**
 * Gets the network stats for this instance
 * @param inst - OASPI Task instance pointer
 * @param stats - Storage location for the stats
 */
void OASPI_TaskGetStats(oaspi_task_inst_t *inst, net_stats_t *stats);

/**
 * Attempts to queue packet for transmission on the instance. The task will
 * add a reference to the provided packet pointer, so the calling function must
 * unref the packet when it is done, as this call accounts for itself.  A
 * successful return does not guarantee a packet was sent on the network, only
 * that it was successfully queued.
 * @param inst - Task instance pointer
 * @param pkt - Packet to send
 * @returns True if queued successfully, false otherwise
 */
bool OASPI_TaskSendPacket(oaspi_task_inst_t *inst, net_pkt_t *pkt);

/**
 * Attempts to read a register(s) from the attached device.
 * @param inst - Task instance pointer
 * @param mms - Register MMS
 * @param startAddr- First address in the read sequence
 * @param numReads - Number of consecutive registers to read
 * @param readBuf - Buffer to store the results. Must be numReads * uint32 big
 * @returns True on success, false otherwise
 */
bool  OASPI_TaskReadReg(oaspi_task_inst_t *inst, uint8_t mms, uint16_t startAddr, uint8_t numReads, uint32_t *readBuf);

/**
 * Attempts to write a register(s) from the attached device.
 * @param inst - Task instance pointer
 * @param mms - Register MMS
 * @param startAddr- First address in the read sequence
 * @param numWrite - Number of consecutive registers to write
 * @param writeBuf - Buffer with write data. Must be numWrites * uint32 big
 * @returns True on success, false otherwise
 */
bool  OASPI_TaskWriteReg(oaspi_task_inst_t *inst, uint8_t mms, uint16_t startAddr, uint8_t numWrites, uint32_t *writeBuf);

/**
 * Notifies the task an external IRQ was received
 * @param inst - Task instance
 */
void OASPI_TaskNotifyIRQ(oaspi_task_inst_t *inst);

/**
 * Notifies the task the SPI transaction is completed
 * @param inst - Task instance
 */
void OASPI_TaskNotifySPI_Complete(oaspi_task_inst_t *inst);


/**
 * Sets the sync flag for the OASPI protocol
 * @param inst - Task instance
 * @param sync - Sync flag
 */
void OASPI_TaskSetSync(oaspi_task_inst_t *inst, bool sync);


/**
 * Callback that can be assigned to a CLI action menu item to support reading
 * of direct registers. The user data in the menu configuration MUST be a
 * pointer to the OASPI inst.  The args are the raw CLI arguments to be parsed.
 * It should be <mms> <reg> and optionally a <count> for number of registers
 * to read. This will write directly to the CLI Output interface.
 */
void OASPI_TaskCLI_ReadHandler(void *inst, char *args);

/**
 * Callback that can be assigned to a CLI action menu item to support writing
 * of direct registers. The user data in the menu configuration MUST be a
 * pointer to the OASPI inst.  The args are the raw CLI arguments to be parsed.
 * It should be <mms> <reg> <value>.
 * This will write directly to the CLI Output interface any results.
 */
void OASPI_TaskCLI_WriteHandler(void *inst, char *args);

#endif
