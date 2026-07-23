/**
 * Copyright © 2026 by Analog Devices, Inc.  All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef __CONFIG_MENU_ENTRY_H__
#define __CONFIG_MENU_ENTRY_H__

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

/* This is maximum size recommended for an entry key. Not fixed anywhere, but
 * for guidance
 */
#define MENU_ENTRY_KEY_LEN  8

/* There is circular dependency with the submenu data type. Pre-declare the
 * entry struct here to allow the config_menu_t to be defined.
 * the actual entry struct is defined below.
 */
typedef struct config_menu_entry config_menu_entry_t;


/** Prototype for value change callbacks.
 * @param entry - config_menu_entry_t responsible for the update
 */
typedef void (*value_change_callback)(const config_menu_entry_t *);

/**
 * Represents a menu, with a list of entries and a count.
 * The changeCallback is issued on any value based entry that is successfully
 * changed (i.e the value was valid).
 */
typedef struct {
    const char *            headingText;
    bool                    showHelp;
    config_menu_entry_t *   entries;
    uint8_t                 entryCount;
    value_change_callback   changeCallback;
} config_menu_t;

//Comment out/undefine CONFIG_MENU_FLOAT to disable support for floating point
//menu items.  This is important on memory constrained embedded systems, the
//string conversion and formatting associated with floats is a lot of overhead,
//if you're not using them, don't include this to prevent unnecessary stuff from
//getting linked in
//#define CONFIG_MENU_FLOAT

/**
 * Enumeration of possible data types.
 */
typedef enum {
    MENU_ITEM_UINT8,    //Unsigned 8-bit
    MENU_ITEM_UINT16,   //Unsigned 16-bit
    MENU_ITEM_UINT32,   //Unsigned 32-bit
    MENU_ITEM_INT8,     //Signed 8-bit
    MENU_ITEM_INT16,    //Signed 16-bit
    MENU_ITEM_INT32,    //Signed 32-bit
#ifdef CONFIG_MENU_FLOAT
    MENU_ITEM_FLOAT,    //32-bit Float
#endif
    MENU_ITEM_MAC,      //MAC Address. 6-bytes
    MENU_ITEM_ON_OFF,   //Boolean, set via a param
    MENU_ITEM_TOGGLE,   //Boolean, toggled when called (no params)
    MENU_ITEM_ACTION,   //Action only, no user input
    MENU_ITEM_VARARG,   //User input passed directly to handler
    MENU_ITEM_SUBMENU,  //Push a new menu onto the stack
} config_menu_type_t;

/**
 * Data structure for Uint8's
 */
typedef struct {
    uint8_t *   dataPtr;
    uint8_t     minVal;
    uint8_t     maxVal;
} config_uint8_t;

/**
 * Data structure for uint16's
 */
typedef struct {
    uint16_t *  dataPtr;
    uint16_t    minVal;
    uint16_t    maxVal;
} config_uint16_t;

/**
 * Data structure for uint32's
 */
typedef struct {
    uint32_t *  dataPtr;
    uint32_t    minVal;
    uint32_t    maxVal;
} config_uint32_t;

/**
 * Data structure for int8's
 */
typedef struct {
    int8_t *dataPtr;
    int8_t  minVal;
    int8_t  maxVal;
} config_int8_t;

/**
 * Data structure for int16's
 */
typedef struct {
    int16_t *   dataPtr;
    int16_t     minVal;
    int16_t     maxVal;
} config_int16_t;

/**
 * Data structure for int32's
 */
typedef struct {
    int32_t *   dataPtr;
    int32_t     minVal;
    int32_t     maxVal;
} config_int32_t;

#ifdef CONFIG_MENU_FLOAT
/**
 * Data structure for floats
 */
typedef struct {
    float * dataPtr;
    float   minVal;
    float   maxVal;
} config_float_t;
#endif

/**
 * Data structure for mac addresses (6-bytes)
 */
typedef struct {
    uint8_t *dataPtr;
} config_mac_t;

/**
 * Data structure for on/off and toggle booleans
 */
typedef struct {
    bool *dataPtr;
} config_on_off_t;


/** Prototype for action item callbacks.
 * @param void* - User data provided in the menu listing
 */
typedef void (*action_t_callback)(void *);

/**
 * Data structure for action items
 */
typedef struct {
    action_t_callback   callback;   //Actual callback function
    void *              actionData; //Data to provide to the callback
} config_action_t;

/** Prototype for vararg item callbacks.
 * @param char* - Direct input arguments
 */
typedef void (*vararg_t_callback)(char *);

/**
 * Data structure for vararg items
 */
typedef struct {
    vararg_t_callback callback;     //Actual callback function
} config_vararg_t;


/**
 * Data structure for submenu items
 */
typedef struct {
    config_menu_t submenu;
} config_submenu_t;


/**
 * Union everything all together for easy storage in our entry structure
 */
typedef union {
    config_uint8_t      uint8_t_data;
    config_uint16_t     uint16_t_data;
    config_uint32_t     uint32_t_data;
    config_int8_t       int8_t_data;
    config_int16_t      int16_t_data;
    config_int32_t      int32_t_data;
#ifdef CONFIG_MENU_FLOAT
    config_float_t      float_t_data;
#endif
    config_mac_t        mac_t_data;
    config_on_off_t     on_off_t_data;
    config_action_t     action_t_data;
    config_vararg_t     vararg_t_data;
    config_submenu_t    submenu_t_data;
} config_data_t;

/**
 * Structure that defines the actual menu entry.
 * Note: They typedef was done already due to circular dependency.
 */
struct config_menu_entry {
    const char *        entryKey;       //Command key
    const char *        itemText;       //Display Text
    const char *        helpText;       //Help display text
    config_menu_type_t  dataType;       //Data type in use
    config_data_t       data;           //Detailed data information
    bool                readOnly;       //Entry is read only
    bool                showCurrent;    //Flag to show current value in menu
    bool                showRange;      //Flag to show the range in the menu
};

#endif
