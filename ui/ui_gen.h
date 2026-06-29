/**
 * @file ui_gen.h
 */

#ifndef UI_GEN_H
#define UI_GEN_H

#ifndef UI_SUBJECT_STRING_LENGTH
#define UI_SUBJECT_STRING_LENGTH 256
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
    #include "lvgl_private.h"
#else
    #include "lvgl/lvgl.h"
    #include "lvgl/lvgl_private.h"
#endif

#ifdef LV_USE_XML
    #include "lv_xml/lv_xml.h"
#endif



/*********************
 *      DEFINES
 *********************/

/**
 * a butter yellow color
 */
#define BUTTER lv_color_hex(0xffeecc)

/**
 * mid yellow
 */
#define DAYBREAK lv_color_hex(0xff9911)

/**
 * pale yellow
 */
#define HARVEST lv_color_hex(0xffaa44)

/**
 * off white
 */
#define HONEY lv_color_hex(0xffcc99)

/**
 * bright orange
 */
#define OCTOBER-SUNSET lv_color_hex(0xff4400)

/**
 * orange
 */
#define ORANGE lv_color_hex(0xff7700)

/**
 * rich orange
 */
#define RICH-PUMPKIN lv_color_hex(0xcc5500)

/**
 * soft purple
 */
#define MOONLIT-VIOLET lv_color_hex(0x9966ff)

/**
 * rich blue
 */
#define BLUE lv_color_hex(0x9966ff)

/**
 * pale orange
 */
#define BUTTERSCOTCH lv_color_hex(0xff9966)

/**
 * soft red
 */
#define RED lv_color_hex(0xcf4f4f)

/**
 * bright white
 */
#define SPACE-WHITE lv_color_hex(0xf5f6fa)

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/*-------------------
 * Permanent screens
 *------------------*/

/*----------------
 * Global styles
 *----------------*/

/*----------------
 * Fonts
 *----------------*/

/*----------------
 * Images
 *----------------*/

/*----------------
 * Subjects
 *----------------*/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*----------------
 * Event Callbacks
 *----------------*/

/**
 * Initialize the component library
 */

void ui_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

/**********************
 *   POST INCLUDES
 **********************/

/*Include all the widgets, components and screens of this library*/
#include "screens/home/home_gen.h"

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*UI_GEN_H*/