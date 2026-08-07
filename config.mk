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

# Conditional source files depending on the hardware platform
# Options are: ADIN1140 - EVAL-ADIN1140D1Z
#              E2BUSB   - E2B to USB Adapter Board
#              ADIN2111 - EVAL-ADIN2111D1Z
PLATFORM ?= ADIN2111

# Which application to build. This ties directly to the folder names in ./src/Apps
# Options are: T1S_Bridge - T1S to USB Bridge
#              T1L_Bridge - T1L to USB Bridge
#
APP ?= T1L_Bridge

# This specifies how much flash is allocated to the bootloader (if used)
# and where the application starts
FLASH_BOOT_SIZE := 0x8000

# Set this to build the application expecting to be used with the bootloader
# This sets up the flash base address. If set and the bootloader is not loaded
# then application WONT RUN!
USE_BOOTLOADER := 1

#Specify your Python location. Used for creating the UF2 file
PYTHON := python