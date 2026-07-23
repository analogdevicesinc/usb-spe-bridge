/**
 * Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "ADIN1110.h"
#include "ADIN1110_Platform.h"
#include "OASPI_Task.h"
#include "Logging.h"

#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"

#include "adi_macphy_reg.h"
#include "adi_phy_std_reg.h"
#include "adi_phy_oa_reg.h"
#include "adi_ao_reg.h"
#include "adi_otp_reg.h"
#include "adi_io_lv_reg.h"
#include "adi_io_hv_reg.h"
#include "adi_pmd_reg.h"
#include "adi_mdio_reg.h"
#include "adi_mii_reg.h"

#include <assert.h>
#include <stdio.h>

/* ADIN2111 PHY identifier */
#define ADIN2111_PHY_ID 0x0283BCA1U
#define ADIN1110_PHY_ID 0x0283BC91U
#define ADIN1100_PHY_ID 0x0283BC81U

#define ADIN1110_PHY_ADDR 1

/**
 * All these constants were taken from the Zephyr driver and should be defined
 * in a better place at some point
 */
#define REG_MDIOACC0                0x20
#define MMS_MDIOACC0                0x0
#define REG_MDIOACC1                0x21
#define MMS_MDIOACC1                0x0
#define MDIOACC_MDIO_TRDONE         (1 << 31)
#define MDIO_RETRY_COUNT            10
#define ADIN1100_MMD_ACCESS_CNTRL   0x0DU
#define ADIN1100_MMD_ACCESS         0x0EU

#define ADIN2111_PHY_CRSM_IRQ_MASK              0x0020U
#define ADIN2111_PHY_CRSM_IRQ_STATUS            0x0010U
#define ADIN2111_PHY_CRSM_IRQ_STATUS_FATAL_ERR  0x2BFFU
#define ADIN2111_PHY_SUBSYS_IRQ_MASK            0x0021U
#define ADIN2111_PHY_SUBSYS_IRQ_STATUS          0x0011U
#define ADIN2111_PHY_SUBSYS_IRQ_STATUS_LINK_STAT_CHNG_LH (0x1 << 1)
#define ADIN2111_PHY_CRSM_SFT_PD_CNTRL          0x8812U
#define ADIN2111_PHY_CRSM_STAT                  0x8818U
#define ADIN2111_CRSM_STAT_CRSM_SFT_PD_RDY      (0x1 << 1)
#define ADIN2111_PHY_LED_CNTRL                  0x8C82U
#define ADIN2111_PHY_LED_CNTRL_LED1_EN          (0x1 << 15)
#define ADIN2111_PHY_LED_CNTRL_LED0_EN          (0x1 << 7)

#define ADIN2111_CONFIG2_P2_FWD_UNK2HOST        (0x1 << 12)
#define ADIN2111_CONFIG2_P2_FWD_UNK2P1          (0x1 << 14)
#define ADIN2111_CONFIG2_P1_FWD_UNK2P2          (0x1 << 13)

static PacketHandler pktHandler;
static oaspi_task_inst_t *oaspiInst;
static bool isInitialized = false;

/** Local Prototypes */
static bool ADIN1110_MDIO_Read(uint8_t prtAdr, uint8_t regAdr, uint16_t *data);
static bool ADIN1110_MDIO_Write(uint8_t prtAdr, uint8_t regAdr, uint16_t data);
static bool ADIN1110_MDIO_WaitReady(uint8_t mdioReg, uint32_t *retData);
static bool ADIN1110_PHY_C22_Read(uint8_t prtAdr, uint8_t regAdr, uint16_t *data);
static bool ADIN1110_PHY_C22_Write(uint8_t prtAdr, uint8_t regAdr, uint16_t data);
static bool ADIN1110_PHY_C45_Read(uint16_t prtAdr, uint16_t regAdr, uint16_t *data);
static bool ADIN1110_PHY_C45_Write(uint16_t prtAdr, uint16_t regAdr, uint16_t data);
static bool ADIN1110_PHY_Read(uint8_t prtAdr, uint8_t regAdr, uint16_t *data);
static bool ADIN1110_PHY_Write(uint8_t prtAdr, uint8_t regAdr, uint16_t data);
static void ADIN1110_OnNewPacket(net_pkt_t *pkt);
static void ADIN1110_ConfigureNode(void);


void ADIN1110_Init(PacketHandler handler)
{
    assert(handler);

    ADIN1110_PlatformInit();
    ADIN1110_PlatformReset();
    pktHandler = handler;

    oaspiInst = OASPI_TaskCreateInstance();
    assert(oaspiInst);

    OASPI_TaskInit(oaspiInst, ADIN1110_OnNewPacket, ADIN1110_PlatformSPI);
    if (oaspiInst == NULL) {
        LOG_MSG_ERR(ADIN1110, "Failed to get a OASPI Instance", 0);
    }

    ADIN1110_ConfigureNode();
    ADIN1110_PlatformEnableInterrupts(true);
    isInitialized = true;

    //Force an interrupt in case one occurred during init
    ADIN1110_OnIRQ();
}

void ADIN1110_GetStats(net_stats_t *stats)
{
    assert(stats);
    OASPI_TaskGetStats(oaspiInst, stats);
}

bool ADIN1110_SendPacket(net_pkt_t *pkt)
{
    assert(pkt);
    if (isInitialized) {
        return OASPI_TaskSendPacket(oaspiInst, pkt);
    } else {
        return false;
    }
}

/**
 * Configures the device node and prepares for operation
 * NOTE: This sequence of events was largely copied from the Zephyr driver as
 * a basic means to get the part up and running. Additional customization may
 * need to be used later (like filtering, etc)
 */
static void ADIN1110_ConfigureNode()
{
    uint32_t regData = 0;
    uint16_t regData16 = 0;
    uint32_t phyId;
    bool tx_24v_supported;

    /**** MAC INIT ****/
    // Reset
    regData = BITM_MAC_RESET_SWRESET;
    OASPI_TaskWriteReg(oaspiInst, MAC_RESET_MMS, MAC_RESET_ADDR, 1, &regData);

    do {
        vTaskDelay(20);
        OASPI_TaskReadReg(oaspiInst, MAC_STATUS0_MMS, MAC_STATUS0_ADDR, 1, &regData);
    } while (!(regData & BITM_MAC_STATUS0_RESETC));

    ADIN1110_PHY_C22_Write(ADIN1110_PHY_ADDR, MII_BMCR_ADDR, BITM_MII_BMCR_RESET);
    vTaskDelay(50);

    /* CONFIG 0 */
    /* disable Frame Check Sequence validation on the host */
    /* if that is enabled, then CONFIG_ETH_ADIN2111_SPI_CFG0 must be off */
    OASPI_TaskReadReg(oaspiInst, MAC_CONFIG0_MMS, MAC_CONFIG0_ADDR, 1, &regData);

    /* RXCTE must be disabled for Generic SPI */
    regData &= ~BITM_MAC_CONFIG0_RXCTE;
    regData &= ~(BITM_MAC_CONFIG0_TXCTE | BITM_MAC_CONFIG0_TXFCSVE);
    //regData |= BITM_MAC_CONFIG0_ZARFE;
    OASPI_TaskWriteReg(oaspiInst, MAC_CONFIG0_MMS, MAC_CONFIG0_ADDR, 1, &regData);

    /* CONFIG 2 */
    OASPI_TaskReadReg(oaspiInst, MAC_CONFIG2_MMS, MAC_CONFIG2_ADDR, 1, &regData);
    regData |= BITM_MAC_CONFIG2_HOST_CRC_APPEND | BITM_MAC_CONFIG2_FWD_UNK2HOST;
#ifdef HAS_ADIN2111
    //By default for demo this is just a wide open switch with packets going everywhere
    regData |= ADIN2111_CONFIG2_P2_FWD_UNK2HOST | ADIN2111_CONFIG2_P2_FWD_UNK2P1 | ADIN2111_CONFIG2_P1_FWD_UNK2P2;
#endif
    OASPI_TaskWriteReg(oaspiInst, MAC_CONFIG2_MMS, MAC_CONFIG2_ADDR, 1, &regData);

    OASPI_TaskReadReg(oaspiInst, MAC_IMASK0_MMS, MAC_IMASK0_ADDR, 1, &regData);
    regData = 0xFFFFFFFF;
    OASPI_TaskWriteReg(oaspiInst, MAC_IMASK0_MMS, MAC_IMASK0_ADDR, 1, &regData);

    // 4 = ADIN2111_IMASK1_P1_RX_RDY_MASK
    OASPI_TaskReadReg(oaspiInst, MAC_IMASK1_MMS, MAC_IMASK1_ADDR, 1, &regData);
    regData = 0xFFFFFFFF;
    OASPI_TaskWriteReg(oaspiInst, MAC_IMASK1_MMS, MAC_IMASK1_ADDR, 1, &regData);

    /**** PHY INIT ****/
    ADIN1110_PHY_C22_Read(ADIN1110_PHY_ADDR, MII_PHYID1R_ADDR, &regData16);
    phyId = (regData16 & UINT16_MAX) << 16;
    ADIN1110_PHY_C22_Read(ADIN1110_PHY_ADDR, MII_PHYID2R_ADDR, &regData16);
    phyId |= (regData16 & UINT16_MAX);

    if (phyId != ADIN2111_PHY_ID && phyId != ADIN1110_PHY_ID && phyId != ADIN1100_PHY_ID) {
        // Handle the error!
        LOG_MSG_ERR(ADIN1110, "PHY ID not a known value: 0x%08X", phyId);
        return;
    }

    // SW PD
    ADIN1110_PHY_C45_Write(MDIO_MMD_VENDOR_SPECIFIC1,
                           ADIN2111_PHY_CRSM_SFT_PD_CNTRL, 1);
    // TODO: Wait for mode instead of sleep?
    vTaskDelay(5);

    /* disable interrupts */
    ADIN1110_PHY_C45_Write(MDIO_MMD_VENDOR_SPECIFIC1,
                           ADIN2111_PHY_CRSM_IRQ_MASK, 0U);

    /* enable link status change irq */
    ADIN1110_PHY_C45_Write(MDIO_MMD_VENDOR_SPECIFIC2,
                           ADIN2111_PHY_SUBSYS_IRQ_MASK,
                           ADIN2111_PHY_SUBSYS_IRQ_STATUS_LINK_STAT_CHNG_LH);

    /* clear PHY IRQ status before enabling ADIN IRQs */
    ADIN1110_PHY_C45_Read(MDIO_MMD_VENDOR_SPECIFIC1,
                          ADIN2111_PHY_CRSM_IRQ_STATUS, &regData16);

    ADIN1110_PHY_C45_Read(MDIO_MMD_VENDOR_SPECIFIC2,
                          ADIN2111_PHY_SUBSYS_IRQ_STATUS, &regData16);

    /* check 2.4V support */
    ADIN1110_PHY_C45_Read(MDIO_MMD_PMAPMD, MDIO_PMA_B10L_STAT_ADDR, &regData16);
    tx_24v_supported = !!(regData16 & BITM_MDIO_PMA_B10L_STAT_2V4_ABLE);

    /* config 2.4V auto-negotiation */
    ADIN1110_PHY_C45_Read(MDIO_MMD_AN, MDIO_AN_T1_ADV_H_ADDR, &regData16);

    if (tx_24v_supported) {
        regData16 |= BITM_MDIO_AN_T1_ADV_H_10L_TX_HI;
    } else {
        regData16 &= ~BITM_MDIO_AN_T1_ADV_H_10L_TX_HI;
    }
    regData16 |= BITM_MDIO_AN_T1_ADV_H_10L_TX_HI_REQ;
    ADIN1110_PHY_C45_Write(MDIO_MMD_AN, MDIO_AN_T1_ADV_H_ADDR, regData16);

    /* enable auto-negotiation */
    ADIN1110_PHY_C45_Write(MDIO_MMD_AN, MDIO_AN_T1_CTRL_ADDR,
                           BITM_MDIO_AN_T1_CTRL_EN);
    // SW PD Off
    ADIN1110_PHY_C45_Write(MDIO_MMD_VENDOR_SPECIFIC1,
                           ADIN2111_PHY_CRSM_SFT_PD_CNTRL, 0);

    OASPI_TaskReadReg(oaspiInst, MAC_CONFIG0_MMS, MAC_CONFIG0_ADDR, 1, &regData);
    regData |= BITM_MAC_CONFIG0_SYNC;
    OASPI_TaskWriteReg(oaspiInst, MAC_CONFIG0_MMS, MAC_CONFIG0_ADDR, 1, &regData);

    OASPI_TaskSetSync(oaspiInst, true);

    //Clear the status flags
    OASPI_TaskReadReg(oaspiInst, MAC_STATUS0_MMS, MAC_STATUS0_ADDR, 1, &regData);
    OASPI_TaskWriteReg(oaspiInst, MAC_STATUS0_MMS, MAC_STATUS0_ADDR, 1, &regData);
}

/**
 * Handles interrupts from the platform side of things
 */
void ADIN1110_OnIRQ()
{
    OASPI_TaskNotifyIRQ(oaspiInst);
}

/**
 * Handles SPI complete events from the platform side of things
 */
void ADIN1110_OnSPI_Complete()
{
    OASPI_TaskNotifySPI_Complete(oaspiInst);
}

/**
 * Helper to poke the status variables for debug
 */
void ADIN1110_PokeStatus()
{
    uint32_t statusRegs[2];

    OASPI_TaskReadReg(oaspiInst, MAC_STATUS0_MMS, MAC_STATUS0_ADDR, 2, statusRegs);
    LOG_MSG_DBG(ADIN1110, "Status 0x%08X | 0x%08X", statusRegs[0], statusRegs[1]);
}

/**
 * Handler for the OASPI. Calls the external handler
 * @param pkt - Packet that came in
 */
static void ADIN1110_OnNewPacket(net_pkt_t *pkt)
{
    if (pktHandler) {
        pktHandler(pkt);
    }
}


/******************************************************************************
* The following functions are used to access the MDIO (PHY) piece of the
* ADIN1110.
******************************************************************************/
static bool ADIN1110_MDIO_WaitReady(uint8_t mdioReg, uint32_t *data)
{
    bool ret = false;
    uint32_t regData;
    int i;

    for (i = 0; (i < MDIO_RETRY_COUNT) && (ret == false); i++) {
        if (OASPI_TaskReadReg(oaspiInst, MMS_MDIOACC0, mdioReg, 1, &regData)) {
            if (regData & MDIOACC_MDIO_TRDONE) {
                ret = true;
                *data = regData;
                break;
            }
        }
        vTaskDelay(1);
    }

    return ret;
}

static bool ADIN1110_MDIO_Read(uint8_t prtAdr, uint8_t regAdr, uint16_t *data)
{
    uint32_t read = 0;
    uint32_t cmd;
    bool ret;

    cmd = 0x1U << 28;
    cmd |= 0x3U << 26;
    cmd |= (prtAdr & 0x1FU) << 21;
    cmd |= (regAdr & 0x1FU) << 16;

    if ((ret = OASPI_TaskWriteReg(oaspiInst, MMS_MDIOACC0, REG_MDIOACC0, 1, &cmd))) {
        ret = ADIN1110_MDIO_WaitReady(REG_MDIOACC0, &read);
        *data = read & 0xFFFF;
    }

    return ret;
}

static bool ADIN1110_MDIO_Write(uint8_t prtAdr, uint8_t regAdr, uint16_t data)
{
    uint32_t cmd;
    uint32_t rdy;
    bool ret;

    cmd = 0x1 << 28;
    cmd |= (0x1 << 26);
    cmd |= (prtAdr & 0x1FU) << 21;
    cmd |= (regAdr & 0x1FU) << 16;
    cmd |= data;

    if ((ret = OASPI_TaskWriteReg(oaspiInst, MMS_MDIOACC0, REG_MDIOACC0, 1, &cmd))) {
        ret = ADIN1110_MDIO_WaitReady(REG_MDIOACC0, &rdy);
    }

    return ret;
}

static bool ADIN1110_PHY_C45_SetupDevReg(uint16_t devAdr, uint16_t reg)
{
    if (!ADIN1110_MDIO_Write(ADIN1110_PHY_ADDR, ADIN1100_MMD_ACCESS_CNTRL, devAdr)) {
        return false;
    }

    if (!ADIN1110_MDIO_Write(ADIN1110_PHY_ADDR, ADIN1100_MMD_ACCESS, reg)) {
        return false;
    }

    return ADIN1110_MDIO_Write(ADIN1110_PHY_ADDR, ADIN1100_MMD_ACCESS_CNTRL, devAdr | (0x1 << 14));
}

static bool ADIN1110_PHY_C45_Read(uint16_t devAdr, uint16_t reg, uint16_t *val)
{
    /* Using C22 -> devad bridge */
    if (!ADIN1110_PHY_C45_SetupDevReg(devAdr, reg)) {
        return false;
    }

    return ADIN1110_MDIO_Read(ADIN1110_PHY_ADDR, ADIN1100_MMD_ACCESS, val);
}

static bool ADIN1110_PHY_C45_Write(uint16_t devAdr, uint16_t reg, uint16_t val)
{
    /* Using C22 -> devad bridge */
    if (!ADIN1110_PHY_C45_SetupDevReg(devAdr, reg)) {
        return false;
    }

    return ADIN1110_MDIO_Write(ADIN1110_PHY_ADDR, ADIN1100_MMD_ACCESS, val);
}

static bool ADIN1110_PHY_C22_Read(uint8_t prtAdr, uint8_t regAdr, uint16_t *data)
{
    return ADIN1110_PHY_Read(prtAdr, regAdr, data);
}

static bool ADIN1110_PHY_C22_Write(uint8_t prtAdr, uint8_t regAdr, uint16_t data)
{
    return ADIN1110_PHY_Write(prtAdr, regAdr, data);
}

static bool ADIN1110_PHY_Read(uint8_t prtAdr, uint8_t regAdr, uint16_t *data)
{
    return ADIN1110_MDIO_Read(prtAdr, regAdr, data);
}

static bool ADIN1110_PHY_Write(uint8_t prtAdr, uint8_t regAdr, uint16_t data)
{
    return ADIN1110_MDIO_Write(prtAdr, regAdr, data);
}


#if 0
//These functions were defined in the Zephyr driver, but not actually used
static bool ADIN1110_MDIO_Read_C45(uint8_t prtAdr, uint8_t devAdr, uint16_t regAdr,
                                   uint16_t *data)
{
    uint32_t rdy;
    uint32_t cmd;
    bool ret;

    /* address op */
    cmd = (prtAdr & 0x1FU) << 21;
    cmd |= (devAdr & 0x1FU) << 16;
    cmd |= regAdr;

    if (!OASPI_TaskWriteReg(oaspiInst, MMS_MDIOACC0, REG_MDIOACC0, 1, &cmd)) {
        return false;
    }

    /* read op */
    cmd = (cmd & ~UINT16_MAX) | (0x3U << 26);
    if (!OASPI_TaskWriteReg(oaspiInst, MMS_MDIOACC1, REG_MDIOACC1, 1, &cmd)) {
        return false;
    }

    if (!ADIN1110_MDIO_WaitReady(REG_MDIOACC1, &rdy)) {
        return false;
    }

    /* read out */
    ret = OASPI_TaskReadReg(oaspiInst, MMS_MDIOACC1, REG_MDIOACC1, 1, &cmd);

    *data = cmd & UINT16_MAX;

    return ret;
}

static bool ADIN1110_MDIO_Write_C45(uint8_t prtAdr, uint8_t devAdr, uint16_t regAdr,
                                    uint16_t data)
{
    uint32_t rdy;
    uint32_t cmd;

    /* address op */
    cmd = (prtAdr & 0x1FU) << 21;
    cmd |= (devAdr & 0x1FU) << 16;
    cmd |= regAdr;

    if (!OASPI_TaskWriteReg(oaspiInst, MMS_MDIOACC0, REG_MDIOACC0, 1, &cmd)) {
        return false;
    }

    /* write op */
    cmd |= (0x1 << 26);
    cmd = (cmd & ~UINT16_MAX) | data;

    if (!OASPI_TaskWriteReg(oaspiInst, MMS_MDIOACC1, REG_MDIOACC1, 1, &cmd)) {
        return false;
    }

    return ADIN1110_MDIO_WaitReady(REG_MDIOACC1, &rdy);
}
#endif
