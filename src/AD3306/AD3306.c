/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "AD3306.h"
#include "AD3306_Platform.h"
#include "OASPI_Task.h"
#include "ConfigMenuTask.h"
#include "FreeRTOS.h"
#include "task.h"

#include "adi_macphy_reg.h"
#include "adi_phy_std_reg.h"
#include "adi_phy_oa_reg.h"
#include "adi_ao_reg.h"
#include "adi_otp_reg.h"
#include "adi_io_lv_reg.h"
#include "adi_io_hv_reg.h"
#include "adi_pmd_reg.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_MAC_STATUS_REG 26U      /*!< Number of MAC status register reads */
#define NUM_PHY_STATUS_REG 5U       /*!< Number of PHY status register reads */

//Adjust as needed. Static allocation for the debug menu
#define MAX_MENU_ENTRIES    5

//Define the actual user menu entries
static config_menu_entry_t menuEntries[MAX_MENU_ENTRIES];

static PacketHandler pktHandler;
static oaspi_task_inst_t *oaspiInst;

static uint32_t revisionBuff[2];

static void OnNewPacket(net_pkt_t *pkt);
static void ConfigureNode(void);
static bool isInitialized = false;

void AD3306_Init(PacketHandler handler)
{
    assert(handler);
    AD3306_PlatformInit();

    pktHandler = handler;
    oaspiInst = OASPI_TaskCreateInstance();
    assert(oaspiInst);

    OASPI_TaskInit(oaspiInst, OnNewPacket, AD3306_PlatformSPI);

    ConfigureNode();
    AD3306_PlatformEnableInterrupts(true);
    isInitialized = true;
    //Force an interrupt in case one occurred during init
    AD3306_OnIRQ();
}

void AD3306_GetStats(net_stats_t *stats)
{
    assert(stats);
    OASPI_TaskGetStats(oaspiInst, stats);
}

bool AD3306_SendPacket(net_pkt_t *pkt)
{
    assert(pkt);
    if (isInitialized) {
        return OASPI_TaskSendPacket(oaspiInst, pkt);
    } else {
        return false;
    }
}

void AD3306_SetVLAN_Filter(bool en, bool blockMode, uint16_t entry1, uint16_t entry2)
{
    uint32_t regData;

    regData = en ? BITM_MAC_RXFILT_VID_TABLE_RXFILT_VID_EN : 0;
    regData |= blockMode ? BITM_MAC_RXFILT_VID_TABLE_RXFILT_VID_RULE : 0;
    regData |= (entry1 << BITP_MAC_RXFILT_VID_TABLE_RXFILT_VID_ENTRY1) & BITM_MAC_RXFILT_VID_TABLE_RXFILT_VID_ENTRY1;
    regData |= (entry2 << BITP_MAC_RXFILT_VID_TABLE_RXFILT_VID_ENTRY2) & BITM_MAC_RXFILT_VID_TABLE_RXFILT_VID_ENTRY2;
    OASPI_TaskWriteReg(oaspiInst, MAC_RXFILT_VID_TABLE_MMS, MAC_RXFILT_VID_TABLE_ADDR, 1, &regData);
}

void AD3306_SetETHTYPE_Filter(bool en, bool blockMode, uint16_t entry1, uint16_t entry2)
{
    uint32_t regData[2];

    regData[0] = (entry1 << BITP_MAC_RXFILT_ETYPE_TABLE_RXFILT_ETYPE_ENTRY1) |
                 (entry2 << BITP_MAC_RXFILT_ETYPE_TABLE_RXFILT_ETYPE_ENTRY2);
    regData[1] = (en ? BITM_MAC_RXFILT_ETYPE_CNRL_RXFILT_ETYPE_EN : 0) |
                 (blockMode ? BITM_MAC_RXFILT_ETYPE_CNRL_RXFILT_ETYPE_RULE : 0);

    OASPI_TaskWriteReg(oaspiInst, MAC_RXFILT_ETYPE_TABLE_MMS, MAC_RXFILT_ETYPE_TABLE_ADDR, 2, regData);
}

void AD3306_SetPLCA(bool en, uint8_t nodeId, uint8_t nodeCount)
{
    uint32_t regData[4];

    //TODO: Support multiple PLCAs
    regData[0] = ((uint32_t)nodeCount << BITP_PHY_OA_PLCA_CTRL1_PLCANODECOUNT) |
                 ((uint32_t)nodeId << BITP_PHY_OA_PLCA_CTRL1_PLCALOCALID);
    OASPI_TaskWriteReg(oaspiInst, PHY_OA_PLCA_CTRL1_MMS, PHY_OA_PLCA_CTRL1_ADDR, 1, regData);

    //Future: IDs 1 & 2, 3 & 4, 5 & 6, 7
    regData[0] = (uint32_t)0 | ((uint32_t)0 << BITP_PHY_OA_PLCA_CTRL2_PLCALOCALID2);
    regData[1] = (uint32_t)0 | ((uint32_t)0 << BITP_PHY_OA_PLCA_CTRL3_PLCALOCALID4);
    regData[2] = (uint32_t)0 | ((uint32_t)0 << BITP_PHY_OA_PLCA_CTRL4_PLCALOCALID6);
    regData[3] = (uint32_t)0 | ((uint32_t)0x1 << BITP_PHY_OA_PLCA_CTRL5_PLCALOCALID_EN);
    OASPI_TaskWriteReg(oaspiInst, PHY_OA_PLCA_CTRL2_MMS, PHY_OA_PLCA_CTRL2_ADDR, 4, regData);

    regData[0] = en ? BITM_PHY_OA_PLCA_CTRL0_PLCAEN : 0;
    OASPI_TaskWriteReg(oaspiInst, PHY_OA_PLCA_CTRL0_MMS, PHY_OA_PLCA_CTRL0_ADDR, 1, regData);

    /* If PLCA enable is set , erase the copy of enable bit from ao regmap
     * so that it doesn't flood the network with beacons before the whole network wakes up */
    if (en) {
        /* Clearing the PLCA enable bit copy from ao regmap */
        regData[0] = 0;
        OASPI_TaskWriteReg(oaspiInst, 0xAu, 0xB70D, 1, regData);
    }
}

void AD3306_SetPLCA_TO(uint8_t plcaTO)
{
    uint32_t regData;

    regData = (uint32_t)plcaTO << BITP_PHY_OA_PLCA_TOTMR_PLCATOTIMER;
    OASPI_TaskWriteReg(oaspiInst, PHY_OA_PLCA_TOTMR_MMS, PHY_OA_PLCA_TOTMR_ADDR, 1, &regData);
}

void AD3306_SetBurstMode(uint8_t burstCt, uint8_t burstTmr)
{
    uint32_t regData;

    regData = ((uint32_t)burstCt << BITP_PHY_OA_PLCA_BURST_PLCAMAXBURSTCNT) |
              ((uint32_t)burstTmr << BITP_PHY_OA_PLCA_BURST_PLCABURSTTIMER);
    OASPI_TaskWriteReg(oaspiInst, PHY_OA_PLCA_BURST_MMS, PHY_OA_PLCA_BURST_ADDR, 1, &regData);
}

static void ConfigureNode( )
{
    uint32_t regData;

    //TODO: Do init
    //Get Revision
    OASPI_TaskReadReg(oaspiInst, MAC_SCRATCH_0_MMS, MAC_SCRATCH_0_ADDR, 2, revisionBuff);

    regData = BITM_MAC_RESET_SWRESET;
    OASPI_TaskWriteReg(oaspiInst, MAC_RESET_MMS, MAC_RESET_ADDR, 1, &regData);
    vTaskDelay(1);

    regData = BITM_MAC_STATUS0_RESETC;
    OASPI_TaskWriteReg(oaspiInst, MAC_STATUS0_MMS, MAC_STATUS0_ADDR, 1, &regData);

    regData = 0;//BITM_MAC_IMASK0_RXBOEM;
    OASPI_TaskWriteReg(oaspiInst, MAC_IMASK0_MMS, MAC_IMASK0_ADDR, 1, &regData);

    regData = (IO_TIC_CONTROL1_RESET_VAL & BITM_IO_TIC_CONTROL1_TIC_RESEND_PERIOD) |
              BITM_IO_TIC_CONTROL1_TIC_EBTP_INT_DISABLE;
    OASPI_TaskWriteReg(oaspiInst, IO_TIC_CONTROL1_MMS, IO_TIC_CONTROL1_ADDR, 1, &regData);

    regData = MAC_IMASK1_RESET_VAL & ~BITM_MAC_IMASK1_VS_INT_MASK;
    OASPI_TaskWriteReg(oaspiInst, MAC_IMASK1_MMS, MAC_IMASK1_ADDR, 1, &regData);

    regData = 0x7C0020U | /* Hardcoded based on reset value */
              BITM_MAC_CONFIG2_FWD_UNK2HOST | BITM_MAC_CONFIG2_TX_RDY_ON_EMPTY | BITM_MAC_CONFIG2_LO_PRIO_FIFO_CRC_APPEND;
    OASPI_TaskWriteReg(oaspiInst, MAC_CONFIG2_MMS, MAC_CONFIG2_ADDR, 1, &regData);

    regData = ((uint32_t)6 << BITP_MAC_CONFIG0_CPS) |
              ((uint32_t)0 << BITP_MAC_CONFIG0_FTSE) |
              ((uint32_t)0 << BITP_MAC_CONFIG0_RXCTE) |
              ((uint32_t)0 << BITP_MAC_CONFIG0_TXCTE) |
              (uint32_t)BITM_MAC_CONFIG0_FTSS |
              (uint32_t)BITM_MAC_CONFIG0_SYNC |
              ((uint32_t)ENUM_MAC_CONFIG0_TXCTHRESH_CREDIT_8 << BITP_MAC_CONFIG0_TXCTHRESH);
    OASPI_TaskWriteReg(oaspiInst, MAC_CONFIG0_MMS, MAC_CONFIG0_ADDR, 1, &regData);

    //MAC Timer
    regData = ((uint32_t)((0) ? 1U : 0U) | IO_MAC_INTERFACE_RESET_VAL);
    OASPI_TaskWriteReg(oaspiInst, IO_MAC_INTERFACE_MMS, IO_MAC_INTERFACE_ADDR, 1, &regData);

    regData = 0;
    OASPI_TaskWriteReg(oaspiInst, MAC_TS_CFG_MMS, MAC_TS_CFG_ADDR, 1, &regData);

    regData = MAC_PLCA_PRIORITY_RESET_VAL |
              (0 ? BITM_MAC_PLCA_PRIORITY_FRAME_PRIORITY_EN : 0U);
    OASPI_TaskWriteReg(oaspiInst, MAC_PLCA_PRIORITY_MMS, MAC_PLCA_PRIORITY_ADDR, 1, &regData);

    regData = AO_CONFIGURATION_FIELDS_1_RESET_VAL | BITM_AO_CONFIGURATION_FIELDS_1_CFG_VALID;
    OASPI_TaskWriteReg(oaspiInst, AO_CONFIGURATION_FIELDS_1_MMS, AO_CONFIGURATION_FIELDS_1_ADDR, 1, &regData);

    OASPI_TaskReadReg(oaspiInst, MAC_CONFIG0_MMS, MAC_CONFIG0_ADDR, 1, &regData);

    regData = (IO_BOOTLOADER_CFG_RESET_VAL & ~BITM_IO_BOOTLOADER_CFG_DEVICE_MODE) |
              (uint32_t)1U << BITP_IO_BOOTLOADER_CFG_DEVICE_MODE;
    OASPI_TaskWriteReg(oaspiInst, IO_BOOTLOADER_CFG_MMS, IO_BOOTLOADER_CFG_ADDR, 1, &regData);

    OASPI_TaskSetSync(oaspiInst, true);


    if (revisionBuff[0] == 20) {
        //Disable loopback
        regData = 0;
        OASPI_TaskWriteReg(oaspiInst, MAC_LOOP_MMS, MAC_LOOP_ADDR, 1, &regData);
    }


    //Enable loopback - Testing!
    //regData = 1;
    //OASPI_TaskWriteReg(oaspiInst, MAC_LOOP_MMS, MAC_LOOP_ADDR, 1, &regData);

    //TODO: PLCA
}

void AD3306_OnIRQ( )
{
    OASPI_TaskNotifyIRQ(oaspiInst);
}

void AD3306_OnSPI_Complete( )
{
    OASPI_TaskNotifySPI_Complete(oaspiInst);
}

static void OnNewPacket(net_pkt_t *pkt)
{
    if (pktHandler) {
        pktHandler(pkt);
    }
}

void AD3306_GetExtendedStats(ad3306_ext_stats_t *stats)
{
    uint32_t plcaTemp[NUM_PHY_STATUS_REG];

    //Direct register dump for the MAC stats
    OASPI_TaskReadReg(oaspiInst, MAC_RX_FRM_CNT_MMS, MAC_RX_FRM_CNT_ADDR, NUM_MAC_STATUS_REG, (uint32_t *)stats);

    //Some manipulation for the PLCA status
    OASPI_TaskReadReg(oaspiInst, PHY_OA_PLCA_CTRL1_MMS, PHY_OA_PLCA_CTRL1_ADDR, NUM_PHY_STATUS_REG, plcaTemp);
    stats->nPlcaNodeId = (uint8_t)(plcaTemp[0U] & 0x00FFU);
    stats->nPlcaNodeCnt = (uint8_t)((plcaTemp[0U] & 0xFF00U) >> 8U);
    stats->bPlcaStatus = ((plcaTemp[1U] & 0x8000U) == 0U) ? false : true;
    stats->nPlcaTOTimer = (uint8_t)(plcaTemp[2U] & 0x00FFU);
    stats->nPlcaBurstTimer = (uint8_t)(plcaTemp[3U] & 0x00FFU);
    stats->nPlcaMaxBurstCnt = (uint8_t)((plcaTemp[3U] & 0xFF00U) >> 8U);
    stats->bBeaconRcvdBeforeTO = ((plcaTemp[4U] & 0x01U) == 0U) ? false : true;
    stats->bUnexpBeaconRcvd = ((plcaTemp[4U] & 0x02U) == 0U) ? false : true;
    stats->bRxInTO = ((plcaTemp[4U] & 0x04U) == 0U) ? false : true;
}

static void AD3306_CLI_ReadHandler(char *args)
{
    OASPI_TaskCLI_ReadHandler(oaspiInst, args);
}

static void AD3306_CLI_WriteHandler(char *args)
{
    OASPI_TaskCLI_WriteHandler(oaspiInst, args);
}

config_menu_t AD3306_GetDebugMenu( )
{
    config_menu_entry_t *entry;
    int numMenuEntries = 0;

    memset(menuEntries, 0, sizeof(menuEntries));

    entry = &menuEntries[numMenuEntries];
    entry->entryKey = "r";
    entry->itemText = "Read register(s)";
    entry->helpText = "Usage: r <mms> <reg> <option: count>\n"
                      "  mms - Register page number\n"
                      "  reg - Register address\n"
                      "  count - Optional number to read.\n"
                      "          Default to 1\n"
                      "Performs a register read directly to the AD3306 device. "
                      "This command expects a minimum of 2 arguments, MMS and "
                      "starting register. Additionally a third argument can be "
                      "provided to read multiple registers at once. All "
                      "arguments can be provided as decimal or hex (with a 0x "
                      "prefix).",
    entry->dataType = MENU_ITEM_VARARG;
    entry->data.vararg_t_data.callback = AD3306_CLI_ReadHandler;
    numMenuEntries++;

    entry = &menuEntries[numMenuEntries];
    entry->entryKey = "w";
    entry->itemText = "Write register";
    entry->helpText = "Usage: w <mms> <reg> <value>\n"
                      "  mms - Register page number\n"
                      "  reg - Register address\n"
                      "  value - Value to write\n"
                      "Performs a register write directly to the AD3306 device. "
                      "This command expects 3 arguments, MMS, register, and "
                      "value. All arguments can be provided as decimal or hex "
                      "(with a 0x prefix).",
    entry->dataType = MENU_ITEM_VARARG;
    entry->data.vararg_t_data.callback = AD3306_CLI_WriteHandler;
    numMenuEntries++;

    config_menu_t menu = { .entries = menuEntries,
                           .entryCount = numMenuEntries,
                           .headingText = "AD3306 Debug",
                           .showHelp = true,
                           .changeCallback = NULL };
    return menu;
}
