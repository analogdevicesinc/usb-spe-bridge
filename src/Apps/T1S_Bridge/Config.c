/**
 * Copyright © 2026 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <string.h>

#include "Application.h"
#include "ConfigMenuTask.h"
#include "Logging.h"
#include "Platform.h"

//Random value to signify start of config
#define CONFIG_MAGIC    0x14AD3F55

//systemAppConfig is where the runtime configuration is, accounting for
//Automac, and any other dynamic settings
static app_config_t systemAppConfig;

//storedAppConfig if the mirror copy of the NV-memory and any edits made via the menu
static app_config_t storedAppConfig;

static const app_config_t defaultAppConfig = {
    .plcaCount = 16,
    .plcaEnabled = true,
    .plcaId = 0,
    .burstCount = 0,    //0 Frames
    .burstTimer = 128,  //128 * 100ns = 12.8us
    .plcaTO = 32,       //Transmit Opportunity Timer
    .vlanBlock = false,
    .vlanEnabled = false,
    .vlanEntry1 = 0,
    .vlanEntry2 = 0,
    .etypeBlock = false,
    .etypeEnabled = false,
    .etypeEntry1 = 0,
    .etypeEntry2 = 0,
    .autoMac = true,
    .macAddr = {
        0x00, 0xE0, 0x22, 0xFE, 0x70, 0xF0
    },
    .usbSniffer = false
};


static uint8_t ConfigCalcChecksum(app_config_t *config);
static void ConfigSave(bool force);
static void ConfigRebootMenuCallback(void *unused);
static void ConfigDefaultMenuCallback(void *unused);
static void ConfigChangeCallback(const config_menu_entry_t *entry);
static void ConfigDefault(void);

void AppConfigInit()
{
    bool savedConfigValid = true; //Assume true to start
    uint8_t checksum = 0;
    uint32_t hwId = PlatformGetUID();

    if (PlatformNonVolatileRead(0, (uint8_t *)&storedAppConfig, sizeof(app_config_t)) != 0) {
        LOG_MSG_INFO(BKGND, "Non-Volatile Read Failed.");
        savedConfigValid = false;
    } else {
        checksum = ConfigCalcChecksum(&storedAppConfig);
        if ((checksum != storedAppConfig.configChecksum) || (storedAppConfig.configMagic != CONFIG_MAGIC)) {
            savedConfigValid = false;
        }
    }

    if (!savedConfigValid) {
        LOG_MSG_INFO(BKGND, "No valid configuration found. Using default.");
        ConfigDefault();
    }

    //copy the stored config into the system
    memcpy(&systemAppConfig, &storedAppConfig, sizeof(app_config_t));

    //Perform any dynamic adjustments of the configuration
    if (systemAppConfig.autoMac) {
        LOG_MSG_INFO(BKGND, "AUTOMAC: Configuring MAC based on HW ID.");

        //ADI's OUI
        systemAppConfig.macAddr[0] = 0x00;
        systemAppConfig.macAddr[1] = 0xE0;
        systemAppConfig.macAddr[2] = 0x22;
        systemAppConfig.macAddr[3] = (hwId >> 16) & 0xFF;
        systemAppConfig.macAddr[4] = (hwId >> 8) & 0xFF;
        systemAppConfig.macAddr[5] = hwId & 0xFF;

        //There is an issue with the MAX32690 chips (at least the prelim ones) where
        //the UID is identical on all of them. Use the PLCA ID on this to compensate
        systemAppConfig.macAddr[5] = systemAppConfig.plcaId;
    }
}


void AppConfigGet(app_config_t *cfg)
{
    memcpy(cfg, &systemAppConfig, sizeof(app_config_t));
}

/**
 * Helper function to print out the current configuration via the console task
 */
void AppConfigPrint(app_config_t *cfg)
{
    LOG_MSG_INFO(BKGND, "----- CONFIGURATION SETTINGS -----");
    if (cfg->autoMac) {
        LOG_MSG_INFO(BKGND, "NOTE: MAC Address Auto Configured.");
    }
    LOG_MSG_INFO(BKGND, "MAC: %02X:%02X:%02X:%02X:%02X:%02X",
                 cfg->macAddr[0], cfg->macAddr[1], cfg->macAddr[2],
                 cfg->macAddr[3], cfg->macAddr[4], cfg->macAddr[5]);

    //Only 1 operating mode right now
    LOG_MSG_INFO(BKGND, "Mode: T1S-USB");

    if (cfg->usbSniffer) {
        LOG_MSG_INFO(BKGND, "USB: Sniffer Only");
    } else {
        LOG_MSG_INFO(BKGND, "USB: Tx/Rx Bridge");
    }

    if (cfg->plcaEnabled) {
        LOG_MSG_INFO(BKGND, "PLCA Enabled");
        LOG_MSG_INFO(BKGND, "   NodeID: %d", cfg->plcaId);
        LOG_MSG_INFO(BKGND, "   Node Count: %d", cfg->plcaCount);
        LOG_MSG_INFO(BKGND, "   TO Timer: %d", cfg->plcaTO);
        LOG_MSG_INFO(BKGND, "   Burst Count: %d", cfg->burstCount);
        LOG_MSG_INFO(BKGND, "   Burst Timer: %d", cfg->burstTimer);
    } else {
        LOG_MSG_INFO(BKGND, "PLCA Disabled");
    }

    LOG_MSG_INFO(BKGND, "---------------");
}

static uint8_t ConfigCalcChecksum(app_config_t *config)
{
    uint8_t checksum = 0;
    uint8_t *cfgPtr;
    int i;

    //The compiler may pad the end of the struct for alignment purposes
    size_t cksumSize = offsetof(app_config_t, configChecksum);

    cfgPtr = (uint8_t *)config;
    for (i = 0; i < cksumSize; i++) {
        checksum += *cfgPtr++;
    }

    return checksum;
}

/**
 * Saves the configuration to non-volatile memory. If Force is true, it is
 * always written. If force is false, it is only written if there was a change
 * (i.e the checksum differs).
 * @param force - Always write true, write on change if false.
 */
static void ConfigSave(bool force)
{
    uint8_t cksum;

    storedAppConfig.configMagic = CONFIG_MAGIC;

    cksum = ConfigCalcChecksum(&storedAppConfig);

    if ((cksum == storedAppConfig.configChecksum) && (!force)) {
        LOG_MSG_DBG(CONFIG, "No changes in configuration.");
        return;
    }

    storedAppConfig.configChecksum = cksum;
    if (PlatformNonVolatileWrite(0, (uint8_t *)&storedAppConfig, sizeof(app_config_t)) == 0) {
        // Since saving is automatic, just log this to the console if enabled
        LOG_MSG_DBG(CONFIG, "Configuration Saved!");
    } else {
        ConfigMenuWriteLine("Configuration Save Fail!", 0, false);
    }
}


static void ConfigRebootMenuCallback(void *unused)
{
    PlatformReboot(false);
}

static void ConfigDefault()
{
    memcpy(&storedAppConfig, &defaultAppConfig, sizeof(app_config_t));
    ConfigSave(false);
}

static void ConfigDefaultMenuCallback(void *unused)
{
    ConfigDefault();
    ConfigMenuWriteLine("Default settings restored.", 1, false);
}

static void ConfigChangeCallback(const config_menu_entry_t *entry)
{
    (void)entry; //Unused param

    ConfigSave(false);
}


static config_menu_entry_t plcaMenuEntries[] = {
    { .entryKey = "plcaid",
      .itemText = "PLCA ID",
      .helpText = "Usage: plcaid <id>\n"
                  "  id - PLCA ID Number\n"
                  "Sets the PLCA ID for this node on the T1S network. When PLCA "
                  "is enabled, each node on the network should have a unique ID. "
                  "This will have no effect if PLCA is disabled.",
      .dataType = MENU_ITEM_UINT8,
      .data.uint8_t_data = {
          .dataPtr = &storedAppConfig.plcaId,
          .minVal = 0,
          .maxVal = 255
      },
      .readOnly = false,
      .showCurrent = true,
      .showRange = false },

    { .entryKey = "plcact",
      .itemText = "PLCA Count",
      .helpText = "Usage: plcact <count>\n"
                  "  count - Number of PLCA nodes on the network\n"
                  "Configures the number of PLCA nodes on the T1S network. This "
                  "option will have no effect if PLCA is disabled.",
      .dataType = MENU_ITEM_UINT8,
      .data.uint8_t_data = {
          .dataPtr = &storedAppConfig.plcaCount,
          .minVal = 1,
          .maxVal = 255
      },
      .readOnly = false,
      .showCurrent = true,
      .showRange = false },

    { .entryKey = "plcaen",
      .itemText = "PLCA Enabled",
      .helpText = "Usage: plcaen  <on/off>\n"
                  "       plcaen  <0/1>\n"
                  "Selecting this option sets the state of the PLCA feature "
                  "on the T1S network.",
      .dataType = MENU_ITEM_ON_OFF,
      .data.on_off_t_data = {
          .dataPtr = &storedAppConfig.plcaEnabled
      },
      .readOnly = false,
      .showCurrent = true,
      .showRange = false },

    { .entryKey = "plcato",
      .itemText = "PLCA TO Timer",
      .helpText = "Usage: plcato  <TO>\n"
                  "  TO - Transmit opportunity value\n"
                  "Sets the transmit opportunity (TO) value for PLCA which sets "
                  "the minimum duration of the PLCA transmission in Tbits.",
      .dataType = MENU_ITEM_UINT8,
      .data.uint8_t_data = {
          .dataPtr = &storedAppConfig.plcaTO,
          .minVal = 0,
          .maxVal = 255
      },
      .readOnly = false,
      .showCurrent = true,
      .showRange = false },

    { .entryKey = "bursttmr",
      .itemText = "PLCA Burst Timer",
      .helpText = "Usage: bursttmr  <timer>\n"
                  "  timer - Burst timer value in 100ns units\n"
                  "Sets the maximum wait time for a new packet. Value is in units "
                  "of 100ns.",
      .dataType = MENU_ITEM_UINT8,
      .data.uint8_t_data = {
          .dataPtr = &storedAppConfig.burstTimer,
          .minVal = 0,
          .maxVal = 255
      },
      .readOnly = false,
      .showCurrent = true,
      .showRange = false },

    { .entryKey = "burstct",
      .itemText = "PLCA Burst Count",
      .helpText = "Usage: burstct  <count>\n"
                  "  count - Number of burst frames\n"
                  "Sets the numbers of frames the node can transmit in burst mode.",
      .dataType = MENU_ITEM_UINT8,
      .data.uint8_t_data = {
          .dataPtr = &storedAppConfig.burstCount,
          .minVal = 0,
          .maxVal = 255
      },
      .readOnly = false,
      .showCurrent = true,
      .showRange = false },
};
static const uint8_t plcaNumMenuEntries = sizeof(plcaMenuEntries) / sizeof(config_menu_entry_t);
static const config_menu_t plcaMenu = {
    .entries = plcaMenuEntries,
    .entryCount = plcaNumMenuEntries,
    .headingText = "PLCA Configuration",
    .showHelp = true,
    .changeCallback = ConfigChangeCallback
};

static config_menu_entry_t vlanMenuEntries[] = {
    { .entryKey = "vlanen",
      .itemText = "VLAN Filter Enable",
      .helpText = "Usage: vlanen  <on/off>\n"
                  "       vlanen  <0/1>\n"
                  "Enables or disables the VLAN filtering of the MACPHY. When "
                  "enabled, the VLAN Rule will be used to pass or discard frames. "
                  "When disabled, all frames are passed.",
      .dataType = MENU_ITEM_ON_OFF,
      .data.on_off_t_data = {
          .dataPtr = &storedAppConfig.vlanEnabled
      },
      .readOnly = false,
      .showCurrent = true,
      .showRange = false },
    { .entryKey = "block",
      .itemText = "VLAN Block Mode",
      .helpText = "Usage: block  <on/off>\n"
                  "       block  <0/1>\n"
                  "When On, the VLAN rule is set to block VLAN frames based on "
                  "the Entry IDs. All non-matching frames are allowed. When off, "
                  "VLAN frames which match the entry IDs are allowed, and all "
                  "non-matching frames are blocked.",
      .dataType = MENU_ITEM_ON_OFF,
      .data.on_off_t_data = {
          .dataPtr = &storedAppConfig.vlanBlock
      },
      .readOnly = false,
      .showCurrent = true,
      .showRange = false },

    { .entryKey = "id1",
      .itemText = "VLAN ID1",
      .helpText = "Usage: id1 <id>\n"
                  " id - VLAN ID for entry 1\n"
                  "Sets the VLAN ID for Filter entry 1.",
      .dataType = MENU_ITEM_UINT16,
      .data.uint16_t_data = {
          .dataPtr = &storedAppConfig.vlanEntry1,
          .minVal = 0,
          .maxVal = 4095
      },
      .readOnly = false,
      .showCurrent = true,
      .showRange = true },

    { .entryKey = "id2",
      .itemText = "VLAN ID2",
      .helpText = "Usage: id2 <id>\n"
                  " id - VLAN ID for entry 2\n"
                  "Sets the VLAN ID for Filter entry 2.",
      .dataType = MENU_ITEM_UINT16,
      .data.uint16_t_data = {
          .dataPtr = &storedAppConfig.vlanEntry2,
          .minVal = 0,
          .maxVal = 4095
      },
      .readOnly = false,
      .showCurrent = true,
      .showRange = true },
};
static const uint8_t vlanNumMenuEntries = sizeof(vlanMenuEntries) / sizeof(config_menu_entry_t);
static const config_menu_t vlanMenu = {
    .entries = vlanMenuEntries,
    .entryCount = vlanNumMenuEntries,
    .headingText = "VLAN Filter Configuration",
    .showHelp = true,
    .changeCallback = ConfigChangeCallback
};


static config_menu_entry_t etypeMenuEntries[] = {
    { .entryKey = "etypeen",
      .itemText = "ETHTYPE Filter Enable",
      .helpText = "Usage: etypeen  <on/off>\n"
                  "       etypeen  <0/1>\n"
                  "Enables or disables the ETHTYPE filtering of the MACPHY. When "
                  "enabled, the ETHTYPE Rule will be used to pass or discard frames. "
                  "When disabled, all frames are passed.",
      .dataType = MENU_ITEM_ON_OFF,
      .data.on_off_t_data = {
          .dataPtr = &storedAppConfig.etypeEnabled
      },
      .readOnly = false,
      .showCurrent = true,
      .showRange = false },
    { .entryKey = "block",
      .itemText = "ETHTYPE Block Mode",
      .helpText = "Usage: block  <on/off>\n"
                  "       block  <0/1>\n"
                  "When On, the ETHTYPE rule is set to block frames based on "
                  "the ETHTYPE Entry IDs. All non-matching frames are allowed. When off, "
                  "frames which match the ETHTYPE entry IDs are allowed, and all "
                  "non-matching frames are blocked.",
      .dataType = MENU_ITEM_ON_OFF,
      .data.on_off_t_data = {
          .dataPtr = &storedAppConfig.etypeBlock
      },
      .readOnly = false,
      .showCurrent = true,
      .showRange = false },

    { .entryKey = "id1",
      .itemText = "ETHTYPE ID1",
      .helpText = "Usage: id1 <id>\n"
                  " id - ETHTYPE ID for entry 1\n"
                  "Sets the ETHTYPE ID for Filter entry 1.",
      .dataType = MENU_ITEM_UINT16,
      .data.uint16_t_data = {
          .dataPtr = &storedAppConfig.etypeEntry1,
          .minVal = 0,
          .maxVal = 0xFFFF,
      },
      .readOnly = false,
      .showCurrent = true,
      .showRange = false },

    { .entryKey = "id2",
      .itemText = "ETHTYPE ID2",
      .helpText = "Usage: id2 <id>\n"
                  " id - ETHTYPE ID for entry 2\n"
                  "Sets the ETHTYPE ID for Filter entry 2.",
      .dataType = MENU_ITEM_UINT16,
      .data.uint16_t_data = {
          .dataPtr = &storedAppConfig.etypeEntry2,
          .minVal = 0,
          .maxVal = 0xFFFF
      },
      .readOnly = false,
      .showCurrent = true,
      .showRange = false },
};
static const uint8_t etypeNumMenuEntries = sizeof(etypeMenuEntries) / sizeof(config_menu_entry_t);
static const config_menu_t etypeMenu = {
    .entries = etypeMenuEntries,
    .entryCount = etypeNumMenuEntries,
    .headingText = "ETHTYPE Filter Configuration",
    .showHelp = true,
    .changeCallback = ConfigChangeCallback
};


//Define the actual user menu entries
static config_menu_entry_t menuEntries[] = {
    { .entryKey = "plca",
      .itemText = "PLCA Config Menu",
      .helpText = "Usage: plca\n"
                  "Opens the PLCA configuration menu to modify settings related "
                  "to PLCA/Multidrop operation.",
      .dataType = MENU_ITEM_SUBMENU,
      .data.submenu_t_data = {
          .submenu = plcaMenu
      },
      .readOnly = false,
      .showCurrent = false,
      .showRange = false },
    { .entryKey = "vlan",
      .itemText = "VLAN Filter Config Menu",
      .helpText = "Usage: vlan\n"
                  "Opens the VLAN filter configuration menu to modify settings related "
                  "to VLAN filtering operation.",
      .dataType = MENU_ITEM_SUBMENU,
      .data.submenu_t_data = {
          .submenu = vlanMenu
      },
      .readOnly = false,
      .showCurrent = false,
      .showRange = false },

    { .entryKey = "etype",
      .itemText = "ETHTYPE Filter Config Menu",
      .helpText = "Usage: etype\n"
                  "Opens the ETHTYPE filter configuration menu to modify settings related "
                  "to ETHTYPE filtering operation.",
      .dataType = MENU_ITEM_SUBMENU,
      .data.submenu_t_data = {
          .submenu = etypeMenu
      },
      .readOnly = false,
      .showCurrent = false,
      .showRange = false },

    { .entryKey = "mac",
      .itemText = "MAC Address",
      .helpText = "Usage: mac <mac_addr>\n"
                  "  mac_addr - Mac Address. XX:XX:XX:XX:XX:XX\n"
                  "                          or XXXXXXXXXXXX\n"
                  "Configures the MAC address for this network node. The "
                  "acceptable formats are AA:BB:CC:DD:EE:FF or AABBCCDDEEFF. "
                  "If automac is enabled, this will not be used and the MAC "
                  "address will be determined by the MCU's hardware ID.",
      .dataType = MENU_ITEM_MAC,
      .data.mac_t_data = {
          .dataPtr = storedAppConfig.macAddr
      },
      .readOnly = false,
      .showCurrent = true,
      .showRange = false },

    { .entryKey = "automac",
      .itemText = "Auto MAC Assign",
      .helpText = "Usage: automac  <on/off>\n"
                  "       automac  <0/1>\n"
                  "Selecting this option sets the state of the automatic MAC "
                  "address configuration.  When enabled, the upper 3 bytes of "
                  "the MAC will be Analog Device's OUI (00:E0:22), while the "
                  "lower 3 bytes will be derived from the unique identifier of "
                  "the MCU. When disabled, the MAC address defined in the mac "
                  "setting will be used explicitly.",
      .dataType = MENU_ITEM_ON_OFF,
      .data.on_off_t_data = {
          .dataPtr = &storedAppConfig.autoMac
      },
      .readOnly = false,
      .showCurrent = true,
      .showRange = false },

    { .entryKey = "sniffer",
      .itemText = "USB Sniffer Mode",
      .helpText = "Usage: sniffer  <on/off>\n"
                  "       sniffer  <0/1>\n"
                  "When enabled, the USB network interface will act as a sniffer "
                  "only, sending T1S network traffic to the USB host, but not "
                  "putting any frames received from USB onto the T1S network. "
                  "When disabled, the USB interface is bi-directional and the "
                  "software acts as a true USB to T1S bridge.",
      .dataType = MENU_ITEM_ON_OFF,
      .data.on_off_t_data = {
          .dataPtr = &storedAppConfig.usbSniffer
      },
      .readOnly = false,
      .showCurrent = true,
      .showRange = false },

    { .entryKey = "default", .itemText = "Load default settings",
      .helpText = "Usage: default\n"
                  "Loads the default values to all settings in this configuration "
                  "menu to provide a reset of fields.",
      .dataType = MENU_ITEM_ACTION,
      .data.action_t_data = {
          .actionData = NULL,
          .callback = ConfigDefaultMenuCallback
      },
      .readOnly = false,
      .showCurrent = false,
      .showRange = false },

    { .entryKey = "reboot",
      .itemText = "Reboot the system",
      .helpText = "Usage: reboot\n"
                  "Performs a soft reboot of the system allowing SAVED config "
                  "changes to take effect.",
      .dataType = MENU_ITEM_ACTION,
      .data.action_t_data = {
          .actionData = NULL,
          .callback = ConfigRebootMenuCallback
      },
      .readOnly = false,
      .showCurrent = false,
      .showRange = false }
};
static uint8_t numMenuEntries = sizeof(menuEntries) / sizeof(config_menu_entry_t);

config_menu_t AppConfigGetMenu( )
{
    config_menu_t menu = { .entries = menuEntries,
                           .entryCount = numMenuEntries,
                           .headingText = "Configuration",
                           .showHelp = true,
                           .changeCallback = ConfigChangeCallback };

    return menu;
}
