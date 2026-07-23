# Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
#
# SPDX-License-Identifier: Apache-2.0
#

#The tinyUSB library is included as part of the CFS/MSDK install, however it
#is not regularly updated and maintained. Use a submodule to include critical
#bug fixes and additional features.

TINY_USB_ROOT = $(LIB_PATH)/tinyUSB/

TINY_USB_DEFINES = -DCFG_TUH_ENABLED=0 -DCFG_TUC_ENABLED=0 -DCFG_TUD_ENABLED=1 \
				   -DBOARD_TUD_MAX_SPEED=OPT_MODE_HIGH_SPEED -DCFG_TUSB_MCU=OPT_MCU_MAX32690

#Set up the include paths
TINY_USB_INCLUDES = $(TINY_USB_ROOT)/src \
					$(TINY_USB_ROOT)/hw

TINY_USB_SRC = \
	$(TINY_USB_ROOT)/src/tusb.c \
	$(TINY_USB_ROOT)/src/common/tusb_fifo.c \
	$(TINY_USB_ROOT)/src/device/usbd.c \
	$(TINY_USB_ROOT)/src/class/audio/audio_device.c \
	$(TINY_USB_ROOT)/src/class/bth/bth_device.c \
	$(TINY_USB_ROOT)/src/class/cdc/cdc_device.c \
	$(TINY_USB_ROOT)/src/class/dfu/dfu_device.c \
	$(TINY_USB_ROOT)/src/class/dfu/dfu_rt_device.c \
	$(TINY_USB_ROOT)/src/class/hid/hid_device.c \
	$(TINY_USB_ROOT)/src/class/midi/midi_device.c \
	$(TINY_USB_ROOT)/src/class/msc/msc_device.c \
	$(TINY_USB_ROOT)/src/class/net/ecm_rndis_device.c \
	$(TINY_USB_ROOT)/src/class/net/ncm_device.c \
	$(TINY_USB_ROOT)/src/class/usbtmc/usbtmc_device.c \
	$(TINY_USB_ROOT)/src/class/video/video_device.c \
	$(TINY_USB_ROOT)/src/class/vendor/vendor_device.c \
	$(TINY_USB_ROOT)/src/class/cdc/cdc_host.c \
	$(TINY_USB_ROOT)/src/class/hid/hid_host.c \
	$(TINY_USB_ROOT)/src/class/msc/msc_host.c \
	$(TINY_USB_ROOT)/src/class/vendor/vendor_host.c \
	$(TINY_USB_ROOT)/src/portable/mentor/musb/dcd_musb.c \
	$(TINY_USB_ROOT)/hw/bsp/board.c
