/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2019 Ha Thach (tinyusb.org)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */

#include "bsp/board_api.h"
#include "tusb.h"
#include "USB_Task_private.h"

#if !CFG_TUD_NCM
#error "The USB functionality only works with NCM"
#endif

// String Descriptor Index
enum {
    STRID_LANGID = 0,
    STRID_MANUFACTURER,
    STRID_PRODUCT,
    STRID_SERIAL,
    STRID_INTERFACE,
    STRID_MAC
};

static tusb_desc_device_t desc_device =
{
    .bLength = sizeof(tusb_desc_device_t),
    .bDescriptorType = TUSB_DESC_DEVICE,
    .bcdUSB = 0x0201,

    // Use Interface Association Descriptor (IAD) device class
    .bDeviceClass = TUSB_CLASS_MISC,
    .bDeviceSubClass = MISC_SUBCLASS_COMMON,
    .bDeviceProtocol = MISC_PROTOCOL_IAD,

    .bMaxPacketSize0 = CFG_TUD_ENDPOINT0_SIZE,

    .idVendor = ADI_USB_VID,
    .idProduct = ADI_NCM_PID,
    .bcdDevice = 0x0101,

    .iManufacturer = STRID_MANUFACTURER,
    .iProduct = STRID_PRODUCT,
    .iSerialNumber = STRID_SERIAL,

    .bNumConfigurations = 1 // Just 1 configuration, Network/Composite
};

// Invoked when received GET DEVICE DESCRIPTOR
// Application return pointer to descriptor
uint8_t const *tud_descriptor_device_cb(void)
{
    if (USB_GetMode() == USB_CDC) {
        desc_device.idProduct = ADI_CDC_PID;        // Bogus-ish ID for CDC only
    } else {
        desc_device.idProduct = ADI_NCM_PID;        // ADI NCM+Serial
    }
    return (uint8_t const *)&desc_device;
}

//--------------------------------------------------------------------+
// Configuration Descriptor
//--------------------------------------------------------------------+
// endpoint 8,9 has FIFO of 2048 bytes
#define EPNUM_NET_NOTIF     0x81
#define EPNUM_NET_OUT       0x02
#define EPNUM_NET_IN        0x83
#define EPNUM_CDC_NOTIF     0x84
#define EPNUM_CDC_OUT       0x05
#define EPNUM_CDC_IN        0x86

#define ADI_IFACE_NUM_NCM   0
#define ADI_IFACE_NUM_CDC   2

/* USB Configuration when Network Only */
static uint8_t const ncm_configuration[] =
{
    TUD_CONFIG_DESCRIPTOR(
        1,                                          //Config number (index+1),
        2,                                          //Interface count
        0,                                          //string index
        TUD_CONFIG_DESC_LEN + TUD_CDC_NCM_DESC_LEN, //Total length
        0,                                          //Attribute
        100                                         //power in mA
        ),

    TUD_CDC_NCM_DESCRIPTOR(
        ADI_IFACE_NUM_NCM,                  //Interface number
        STRID_INTERFACE,                    //Interface string index
        STRID_MAC,                          //MAC String index
        EPNUM_NET_NOTIF,                    //EP notification address
        64,                                 //EP notification size
        EPNUM_NET_OUT,                      //EP address out
        EPNUM_NET_IN,                       //EP address in
        (TUD_OPT_HIGH_SPEED ? 512 : 64),    //EP size
        CFG_TUD_NET_MTU,                    //MSS
        9,                                  //EP Notification interval
        NCM_NETWORK_CAPS_NTB_INPUT_SIZE
        ),
};

/* USB Configuration when Network + CDC Serial */
static uint8_t const ncm_cdc_configuration[] =
{
    TUD_CONFIG_DESCRIPTOR(
        1,                                                              //Config number (index+1)
        4,                                                              //interface count
        0,                                                              //string index
        TUD_CONFIG_DESC_LEN + TUD_CDC_NCM_DESC_LEN + TUD_CDC_DESC_LEN,  //total length
        0,                                                              //attribute
        100                                                             //power in mA
        ),

    TUD_CDC_NCM_DESCRIPTOR(
        ADI_IFACE_NUM_NCM,                  //Interface number
        STRID_INTERFACE,                    //Interface string index
        STRID_MAC,                          //MAC String index
        EPNUM_NET_NOTIF,                    //EP notification address
        64,                                 //EP notification size
        EPNUM_NET_OUT,                      //EP address out
        EPNUM_NET_IN,                       //EP address in
        (TUD_OPT_HIGH_SPEED ? 512 : 64),    //EP size
        CFG_TUD_NET_MTU,                    //MSS
        9,                                  //EP Notification interval
        NCM_NETWORK_CAPS_NTB_INPUT_SIZE
        ),

    TUD_CDC_DESCRIPTOR(
        ADI_IFACE_NUM_CDC,      //Interface number
        STRID_INTERFACE,        //string index
        EPNUM_CDC_NOTIF,        //EP notification address
        8,                      //EP notification size
        EPNUM_CDC_OUT,          //EP address out
        EPNUM_CDC_IN,           //EP address in
        CFG_TUD_CDC_EP_BUFSIZE  //EP size
        ),
};

/* USB Configuration when CDC Only */
static uint8_t const cdc_configuration[] =
{
    // Config number (index+1), interface count, string index, total length, attribute, power in mA
    TUD_CONFIG_DESCRIPTOR(
        1,                                      //Config number (index+1),
        2,                                      //Interface count
        0,                                      //string index
        TUD_CONFIG_DESC_LEN + TUD_CDC_DESC_LEN, //Total length
        0,                                      //Attribute
        100                                     //power in mA
        ),

    // Interface number, string index, EP notification address and size, EP data address (out, in) and size.
    TUD_CDC_DESCRIPTOR(
        0,                      //Interface number
        STRID_INTERFACE,        //string index
        EPNUM_CDC_NOTIF,        //EP notification address
        8,                      //EP notification size
        EPNUM_CDC_OUT,          //EP address out
        EPNUM_CDC_IN,           //EP address in
        CFG_TUD_CDC_EP_BUFSIZE  //EP size
        ),
};

static const uint8_t *configurations[] =
{
    [USB_NET] = ncm_configuration,
    [USB_NET_CDC] = ncm_cdc_configuration,
    [USB_CDC] = cdc_configuration
};

// Invoked when received GET CONFIGURATION DESCRIPTOR
// Application return pointer to descriptor
// Descriptor contents must exist long enough for transfer to complete
uint8_t const *tud_descriptor_configuration_cb(uint8_t index)
{
    return (index == 0) ? configurations[USB_GetMode()] : NULL;
}

//--------------------------------------------------------------------+
// String Descriptors
//--------------------------------------------------------------------+

// array of pointer to string descriptors
static char const *string_desc_arr[] =
{
    [STRID_LANGID] = (const char[]){ 0x09, 0x04 },  // supported language is English (0x0409)
    [STRID_MANUFACTURER] = "Analog Devices, Inc",   // Manufacturer
    [STRID_PRODUCT] = "T1S Adapter",                // Product
    [STRID_SERIAL] = NULL,                          // Serials will use unique ID if possible
    [STRID_INTERFACE] = "T1S Network Interface"     // Interface Description

                                                    // STRID_MAC index is handled separately
};

static uint16_t _desc_str[32 + 1];

// Invoked when received GET STRING DESCRIPTOR request
// Application return pointer to descriptor, whose contents must exist long enough for transfer to complete
uint16_t const *tud_descriptor_string_cb(uint8_t index, uint16_t langid)
{
    (void)langid;
    unsigned int chr_count = 0;

    switch (index) {
        case STRID_LANGID:
            memcpy(&_desc_str[1], string_desc_arr[0], 2);
            chr_count = 1;
            break;

        case STRID_SERIAL:
            chr_count = board_usb_get_serial(_desc_str + 1, 32);
            break;

        case STRID_MAC:
            // Convert MAC address into UTF-16
            for (unsigned i = 0; i < sizeof(tud_network_mac_address); i++) {
                _desc_str[1 + chr_count++] = "0123456789ABCDEF"[(tud_network_mac_address[i] >> 4) & 0xf];
                _desc_str[1 + chr_count++] = "0123456789ABCDEF"[(tud_network_mac_address[i] >> 0) & 0xf];
            }
            break;

        default:
            // Note: the 0xEE index string is a Microsoft OS 1.0 Descriptors.
            // https://docs.microsoft.com/en-us/windows-hardware/drivers/usbcon/microsoft-defined-usb-descriptors

            if (!(index < sizeof(string_desc_arr) / sizeof(string_desc_arr[0]))) {
                return NULL;
            }

            const char *str = string_desc_arr[index];

            // Cap at max char
            chr_count = strlen(str);
            size_t const max_count = sizeof(_desc_str) / sizeof(_desc_str[0]) - 1; // -1 for string type
            if (chr_count > max_count) {
                chr_count = max_count;
            }

            // Convert ASCII string into UTF-16
            for (size_t i = 0; i < chr_count; i++) {
                _desc_str[1 + i] = str[i];
            }
            break;
    }

    // first byte is length (including header), second byte is string type
    _desc_str[0] = (uint16_t)((TUSB_DESC_STRING << 8) | (2 * chr_count + 2));

    return _desc_str;
}

//--------------------------------------------------------------------+
// BOS Descriptor
//--------------------------------------------------------------------+

/* Used to automatically load the NCM driver on Windows 10, otherwise manual driver install is needed.
 * Associate NCM interface with WINNCM driver. */

/* Microsoft OS 2.0 registry property descriptor
 * Per MS requirements https://learn.microsoft.com/en-us/windows-hardware/drivers/usbcon/microsoft-os-2-0-descriptors-specification
 * device should create DeviceInterfaceGUIDs. It can be done by driver and
 * in case of real PnP solution device should expose MS "Microsoft OS 2.0
 * registry property descriptor". Such descriptor can insert any record
 * into Windows registry per device/configuration/interface. In our case it
 * will insert "DeviceInterfaceGUIDs" multistring property.
 *
 * GUID is freshly generated and should be OK to use.
 *
 * https://developer.chrome.com/docs/capabilities/build-for-webusb#microsoft_os_compatibility_descriptors
 * (Section Microsoft OS compatibility descriptors)
 */

#define BOS_TOTAL_LEN     (TUD_BOS_DESC_LEN + TUD_BOS_MICROSOFT_OS_DESC_LEN)

#define MS_OS_20_DESC_LEN 0xB2

// BOS Descriptor is required for webUSB
const uint8_t desc_bos[] = {
    // total length, number of device caps
    TUD_BOS_DESCRIPTOR(BOS_TOTAL_LEN, 1),

    // Microsoft OS 2.0 descriptor
    TUD_BOS_MS_OS_20_DESCRIPTOR(MS_OS_20_DESC_LEN, 1)
};

const uint8_t *tud_descriptor_bos_cb(void)
{
    return desc_bos;
}

const uint8_t desc_ms_os_20[] = {
    // Set header: length, type, windows version, total length
    U16_TO_U8S_LE(0x000A), U16_TO_U8S_LE(MS_OS_20_SET_HEADER_DESCRIPTOR), U32_TO_U8S_LE(0x06030000),
    U16_TO_U8S_LE(MS_OS_20_DESC_LEN),

    // Configuration subset header: length, type, configuration index, reserved, configuration total length
    U16_TO_U8S_LE(0x0008), U16_TO_U8S_LE(MS_OS_20_SUBSET_HEADER_CONFIGURATION), 0, 0,
    U16_TO_U8S_LE(MS_OS_20_DESC_LEN - 0x0A),

    // Function Subset header: length, type, first interface, reserved, subset length
    U16_TO_U8S_LE(0x0008), U16_TO_U8S_LE(MS_OS_20_SUBSET_HEADER_FUNCTION), ADI_IFACE_NUM_NCM, 0,
    U16_TO_U8S_LE(MS_OS_20_DESC_LEN - 0x0A - 0x08),

    // MS OS 2.0 Compatible ID descriptor: length, type, compatible ID, sub compatible ID
    U16_TO_U8S_LE(0x0014), U16_TO_U8S_LE(MS_OS_20_FEATURE_COMPATBLE_ID), 'W', 'I', 'N', 'N', 'C', 'M', 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // sub-compatible

    // MS OS 2.0 Registry property descriptor: length, type
    U16_TO_U8S_LE(MS_OS_20_DESC_LEN - 0x0A - 0x08 - 0x08 - 0x14), U16_TO_U8S_LE(MS_OS_20_FEATURE_REG_PROPERTY),
    U16_TO_U8S_LE(0x0007),
    U16_TO_U8S_LE(0x002A), // wPropertyDataType, wPropertyNameLength and PropertyName "DeviceInterfaceGUIDs\0" in UTF-16
    'D', 0x00, 'e', 0x00, 'v', 0x00, 'i', 0x00, 'c', 0x00, 'e', 0x00, 'I', 0x00, 'n', 0x00, 't', 0x00, 'e', 0x00, 'r',
    0x00, 'f', 0x00, 'a', 0x00, 'c', 0x00, 'e', 0x00, 'G', 0x00, 'U', 0x00, 'I', 0x00, 'D', 0x00, 's', 0x00, 0x00, 0x00,
    U16_TO_U8S_LE(0x0050),  // wPropertyDataLength
                            //bPropertyData: {12345678-0D08-43FD-8B3E-127CA8AFFF9D}
    '{', 0x00, '1', 0x00, '2', 0x00, '3', 0x00, '4', 0x00, '5', 0x00, '6', 0x00, '7', 0x00, '8', 0x00, '-', 0x00, '0',
    0x00, 'D', 0x00, '0', 0x00, '8', 0x00, '-', 0x00, '4', 0x00, '3', 0x00, 'F', 0x00, 'D', 0x00, '-', 0x00, '8', 0x00,
    'B', 0x00, '3', 0x00, 'E', 0x00, '-', 0x00, '1', 0x00, '2', 0x00, '7', 0x00, 'C', 0x00, 'A', 0x00, '8', 0x00, 'A',
    0x00, 'F', 0x00, 'F', 0x00, 'F', 0x00, '9', 0x00, 'D', 0x00, '}', 0x00, 0x00, 0x00, 0x00, 0x00
};

TU_VERIFY_STATIC(sizeof(desc_ms_os_20) == MS_OS_20_DESC_LEN, "Incorrect size");

// Invoked when a control transfer occurred on an interface of this class
// Driver response accordingly to the request and the transfer stage (setup/data/ack)
// return false to stall control endpoint (e.g unsupported request)
bool tud_vendor_control_xfer_cb(uint8_t rhport, uint8_t stage, const tusb_control_request_t *request)
{
    // nothing to with DATA & ACK stage
    if (stage != CONTROL_STAGE_SETUP) {
        return true;
    }

    switch (request->bmRequestType_bit.type) {
        case TUSB_REQ_TYPE_VENDOR:
            switch (request->bRequest) {
                case 1:
                    if (request->wIndex == 7) {
                        // Get Microsoft OS 2.0 compatible descriptor
                        uint16_t total_len;
                        memcpy(&total_len, desc_ms_os_20 + 8, 2);

                        return tud_control_xfer(rhport, request, (void *)(uintptr_t)desc_ms_os_20, total_len);
                    } else {
                        return false;
                    }

                default:
                    break; // nothing to do
            }
            break;

        default:
            break; // nothing to do
    }

    // stall unknown request
    return false;
}
