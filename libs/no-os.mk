# Copyright © 2025 by Analog Devices, Inc.  All rights reserved.
#
# SPDX-License-Identifier: Apache-2.0
#

NO_OS_ROOT = $(LIB_PATH)/no-OS/

#Some drivers have conditionals to use No-OS SPI vs Spi-Engine.
#Bump the Buffer size to 1522 for FCS and other header stuff.
NO_OS_DEFINES = -DUSE_STANDARD_SPI -DCONFIG_OA_CHUNK_BUFFER_SIZE=1560 \
				-DCONFIG_OA_TX_FRAME_BUFF_NUM=16 -DCONFIG_OA_RX_FRAME_BUFF_NUM=16 \
				-DCONFIG_OA_THREAD_RX_LIMIT=0 -DCONFIG_OA_ZERO_SWO_ONLY=0

#Set up the include paths
NO_OS_INCLUDES = $(NO_OS_ROOT)/include \
				 $(NO_OS_ROOT)/iio \
				 $(NO_OS_ROOT)/drivers/net/oa_tc6

NO_OS_SRC = $(NO_OS_ROOT)/drivers/net/oa_tc6/oa_tc6.c \
			$(NO_OS_ROOT)/util/no_os_util.c \
			$(NO_OS_ROOT)/drivers/api/no_os_spi.c \
			$(NO_OS_ROOT)/drivers/platform/freeRTOS/freertos_alloc.c \
			$(NO_OS_ROOT)/drivers/platform/freeRTOS/freertos_mutex.c

