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


# This makefile is dependent on 2 variables being passed in at build time:
# PLATFORM - This can be either T1SUSB or ADIN1140
# FLASH_BOOT_SIZE - This is the size (in bytes) of the flash area, and
#                   subsequently defines the start of application code. This
#                   must be coordinated between the application and bootloader

#Need to manually specify our build directory (its the same as the default one)
#for setting up the all: target extensions
BUILD_DIR = ./build

#The project will always be called bootloader
PROJECT=bootloader

# The TinyUF2 project CMake generates this from the git commit. TODO of what we
# want to do here
UF2_VERSION=\"0\"

# Don't include the MSDK's board library, we're using a custom board, and it
# conflicts with board.h that TinyUF2 is expecting
LIB_BOARD=0

# TinyUSB is required
LIB_TINYUSB=1

# Project Flags
# Be sure to set TUF2_LOG=0, otherwise the size becomes quite large and there
# becomes a variety of linker errors because we aren't including the STDIO stubs
PROJ_CFLAGS +=  -DCFG_TUSB_MCU=OPT_MCU_MAX32690 \
                -DBOARD_TUD_MAX_SPEED=OPT_MODE_HIGH_SPEED \
                -DTUF2_LOG=0 \
                -DTUD_ENDPOINT_ONE_DIRECTION_ONLY \
                -DUF2_VERSION=$(UF2_VERSION)

#UF2 Family ID for the MAX32690. This is pulled from the UF2 listing database
PROJ_CFLAGS += -DBOARD_UF2_FAMILY_ID=0x7410520a

#Define the platform so our board.h knows how to configure things
PROJ_CFLAGS += -DTINYUF2_$(PLATFORM) \

#Set the size of the boot area based on the provided input
PROJ_CFLAGS += -DFLASH_BOOT_SIZE=$(FLASH_BOOT_SIZE)

#TinyUF2 uses the die number to determine how to configure some MAX32 periphs
PROJ_CFLAGS += -DMAX_PERIPH_ID=18

#Need to make the linker aware of the variable boot area size
PROJ_LDFLAGS += -Wl,--defsym=__FLASH_BOOT_SIZE=$(FLASH_BOOT_SIZE)

#TinyUF2 explicitly does not use some std calls
PROJ_LDFLAGS += -nostartfiles --specs=nano.specs --specs=nosys.specs

#The linker is broken up into 2 files. Based on how the MSDK sets the linker file
#do one as an extra script, and the other as the actual LD file.
PROJ_LDFLAGS += -Wl,--script=$(TINYUF2_ROOT)/ports/maxim/linker/max32690/max32690_boot.ld
LINKERFILE = $(TINYUF2_ROOT)/ports/maxim/linker/max32690/max32690_common.ld

#Add the TinyUF2 source code
TINYUF2_ROOT=../libs/tinyuf2
VPATH += $(TINYUF2_ROOT)/src
IPATH += $(TINYUF2_ROOT)/src
VPATH += $(TINYUF2_ROOT)/ports/maxim
IPATH += $(TINYUF2_ROOT)/ports/maxim

# If you have secure version of MCU, set SBT=1 to generate signed binary
# For more information on how sing process works, see
# https://www.analog.com/en/education/education-library/videos/6313214207112.html
SBT=0

# Add compiler flags to enable source navigation in ELF File Explorer
PROJ_CFLAGS += -fdump-rtl-expand
PROJ_CFLAGS += -fdump-rtl-dfinish
PROJ_CFLAGS += -fdump-ipa-cgraph
PROJ_CFLAGS += -fstack-usage
PROJ_CFLAGS += -gdwarf-4
PROJ_CFLAGS += -fdata-sections -ffunction-sections -fsingle-precision-constant -fno-strict-aliasing

MFLOAT_ABI = hard
MXC_OPTIMIZE_CFLAGS = -O3

# Extend all to also make the hex version of the output
all: $(BUILD_DIR)/$(PROJECT).hex
