###############################################################################
 #
 # Copyright (C) 2025 Analog Devices, Inc.
 #
 # Licensed under the Apache License, Version 2.0 (the "License");
 # you may not use this file except in compliance with the License.
 # You may obtain a copy of the License at
 #
 #     http://www.apache.org/licenses/LICENSE-2.0
 #
 # Unless required by applicable law or agreed to in writing, software
 # distributed under the License is distributed on an "AS IS" BASIS,
 # WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 # See the License for the specific language governing permissions and
 # limitations under the License.
 #
 ##############################################################################


#Include the user configuration data
include config.mk

#Need to manually specify our build directory (its the same as the default one)
#for setting up the all: target extensions
BUILD_DIR = ./build

# Build configuration change detection: force clean rebuild if critical values change
BUILDCFG_STAMP_FILE := $(BUILD_DIR)/.build_config
CURRENT_BUILDCFG := PLATFORM=$(PLATFORM) \
                    APP=$(APP) \
                    FLASH_BOOT_SIZE=$(FLASH_BOOT_SIZE) \
                    USE_BOOTLOADER=$(USE_BOOTLOADER)
STORED_BUILDCFG := $(shell cat $(BUILDCFG_STAMP_FILE) 2>/dev/null)

ifneq ($(CURRENT_BUILDCFG),$(STORED_BUILDCFG))
ifneq ($(STORED_BUILDCFG),)
$(info Build configuration changed, forcing clean rebuild...)
$(info   Previous: $(STORED_BUILDCFG))
$(info   Current:  $(CURRENT_BUILDCFG))
$(shell rm -rf $(BUILD_DIR))
endif
$(shell mkdir -p $(BUILD_DIR))
$(shell echo '$(CURRENT_BUILDCFG)' > $(BUILDCFG_STAMP_FILE))
endif

# Add the Platform and App as string constants
PROJ_CFLAGS += -DPLATFORM=\"$(PLATFORM)\" -DAPP=\"$(APP)\"

# Create a version string based on git and date string for build info
GIT_VERSION := $(shell git describe --tags --always --dirty)
BUILD_DATE := $(shell date '+%m-%d-%Y\ %H:%M')
PROJ_CFLAGS += -DGIT_VERSION=\"$(GIT_VERSION)\" -DBUILD_DATE=\"$(BUILD_DATE)\"

MFLOAT_ABI = hard
MXC_OPTIMIZE_CFLAGS = -Og

# If you have secure version of MCU, set SBT=1 to generate signed binary
# For more information on how sing process works, see
# https://www.analog.com/en/education/education-library/videos/6313214207112.html
SBT=0
PROJ_CFLAGS += -D__MAX_FTHR__ -DGLOBAL_LOG_LEVEL=LOG_LEVEL_INFO
PROJ_CFLAGS += -DLOGGING_UART=0
PROJ_CFLAGS += -DNUM_OASPI_INST=2 -DADI_DEBUG

# Add compiler flags to enable source navigation in ELF File Explorer
PROJ_CFLAGS += -fdump-rtl-expand
PROJ_CFLAGS += -fdump-rtl-dfinish
PROJ_CFLAGS += -fdump-ipa-cgraph
PROJ_CFLAGS += -fstack-usage
PROJ_CFLAGS += -gdwarf-4

# TinyUSB C Flags
PROJ_CFLAGS += -DCFG_TUSB_MCU=OPT_MCU_MAX32690 -DBOARD_TUD_MAX_SPEED=OPT_MODE_HIGH_SPEED

# Setup some helper paths
SRC_PATH = ./src/
LIB_PATH = ./libs/

VPATH += $(SRC_PATH)/Platforms
IPATH += $(SRC_PATH)/Platforms

# Determine the correct platform folder
ifeq ($(PLATFORM),ADIN1140)
VPATH += $(SRC_PATH)/Platforms/ADIN1140
IPATH += $(SRC_PATH)/Platforms/ADIN1140
USE_FLASH_CONFIG := 1
else ifeq ($(PLATFORM), E2BUSB)
VPATH += $(SRC_PATH)/Platforms/E2BUSB
IPATH += $(SRC_PATH)/Platforms/E2BUSB
HAS_ADIN1110 := 0
#Fix for I2C pin outs on this device. See i2c_me18.c for notes on this...
PROJ_CFLAGS += -DMAX32690GTK_PACKAGE_TQFN
else
$(error NO PLATFORM SPECIFIED!)
endif

#Unless explicitly set by a board, assume all the features are enabled.
HAS_ADIN1110 ?= 1
HAS_AD3306 ?= 1

#If not explicitly enabled, don't use flash for application configuration data
USE_FLASH_CONFIG ?= 0

#All/common source and includes
IPATH += $(SRC_PATH)
VPATH += $(SRC_PATH)/Logging
IPATH += $(SRC_PATH)/Logging
VPATH += $(SRC_PATH)/CLI
IPATH += $(SRC_PATH)/CLI
VPATH += $(SRC_PATH)/USB
IPATH += $(SRC_PATH)/USB
VPATH += $(SRC_PATH)/WebTask
IPATH += $(SRC_PATH)/WebTask
IPATH += $(SRC_PATH)/OASPI_Task
VPATH += $(SRC_PATH)/OASPI_Task
IPATH += $(SRC_PATH)/OASPI_Task/regmaps

# AD3306 Source/Include Files
ifeq ($(HAS_AD3306), 1)
VPATH += $(SRC_PATH)/AD3306
IPATH += $(SRC_PATH)/AD3306
endif

# ADIN1110 Souce/Inclue files.
ifeq ($(HAS_ADIN1110), 1)
VPATH += $(SRC_PATH)/ADIN1110
IPATH += $(SRC_PATH)/ADIN1110
endif

#Add the specified application
ifeq ($(wildcard $(SRC_PATH)/Apps/$(APP)),)
    $(error Application $(APP) not found!)
else
    VPATH += $(SRC_PATH)/Apps/$(APP)
    IPATH += $(SRC_PATH)/Apps/$(APP)
endif

# MSDK needs to know where FreeRTOSconfig.h is
RTOS_CONFIG_DIR = $(SRC_PATH)
LIB_FREERTOS = 1

#Add the No-Os library via our no-os.mk include file
include $(LIB_PATH)/no-os.mk
SRCS += $(NO_OS_SRC)
IPATH += $(NO_OS_INCLUDES)
PROJ_CFLAGS += $(NO_OS_DEFINES)

#Add the TinyUSB library via our tinyusb.mk include file
include $(LIB_PATH)/tinyusb.mk
SRCS += $(TINY_USB_SRC)
IPATH += $(TINY_USB_INCLUDES)
PROJ_CFLAGS += $(TINY_USB_DEFINES)

#Do some extra things if the bootloader is being used:
# - Update the Linker file in use
# - Setup the flash boot size
# - Add the additional target to create the UF2 file.
ifeq ($(USE_BOOTLOADER), 1)
#Add the TinyUF2 source code
TINYUF2_ROOT=./libs/tinyuf2

#Make the application aware the bootloader is being used
PROJ_CFLAGS += -DHAS_BOOTLOADER

#Need to make the linker aware of the variable boot area size
PROJ_LDFLAGS += -Wl,--defsym=__FLASH_BOOT_SIZE=$(FLASH_BOOT_SIZE)

#The linker is broken up into 2 files. Based on how the MSDK sets the linker file
#do one as an extra script, and the other as the actual LD file.
PROJ_LDFLAGS += -Wl,--script=$(TINYUF2_ROOT)/ports/maxim/linker/max32690/max32690_app.ld
LINKERFILE = $(TINYUF2_ROOT)/ports/maxim/linker/max32690/max32690_common.ld

# Extend the all target to also do the bootloader-prep at the end
all: bootloader-prep
endif

# Make this dependent on the hex file. The MSDK will automagically convert elf
# to hex for us. Then run the UF2 utility to generate the programming file.
bootloader-prep: $(BUILD_DIR)/$(PROJECT).hex
	$(PYTHON) ./libs/uf2/utils/uf2conv.py -f MAX32690 -c -o $(BUILD_DIR)/$(PROJECT).uf2 $(BUILD_DIR)/$(PROJECT).hex

#If using flash for application configuration data, reserve the last page using
#an extra linker file, and set the compiler flag
ifeq ($(USE_FLASH_CONFIG), 1)
CONFIG_DATA_ADDR := 0x102FC000
#A Page of FLASH
CONFIG_DATA_SIZE := 0x4000
PROJ_LDFLAGS += -Wl,--defsym=__CONFIG_DATA_ADDR=$(CONFIG_DATA_ADDR)
PROJ_LDFLAGS += -Wl,--defsym=__CONFIG_DATA_SIZE=$(CONFIG_DATA_SIZE)

#This must be done after the bootloader to overwrite FLASH
PROJ_LDFLAGS += -Wl,--script=config_data.ld
PROJ_CFLAGS += -DUSE_FLASH_CONFIG -DCONFIG_DATA_SIZE=$(CONFIG_DATA_SIZE) -DCONFIG_DATA_ADDR=$(CONFIG_DATA_ADDR)
endif
