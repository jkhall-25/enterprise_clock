/**
 * @file home_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "home_gen.h"
#include "../../ui.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * home_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t dark;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&dark);
        lv_style_set_bg_color(&dark, lv_color_hex3(0x333));

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "home_#");
    lv_obj_set_style_radius(lv_obj_0, 100, 0);

    lv_obj_add_style(lv_obj_0, &dark, 0);
    lv_obj_t * lv_button_0 = lv_button_create(lv_obj_0);
    lv_obj_set_x(lv_button_0, 20);
    lv_obj_set_y(lv_button_0, 20);
    lv_obj_set_width(lv_button_0, 200);
    lv_obj_t * lv_label_0 = lv_label_create(lv_button_0);
    lv_label_set_text(lv_label_0, "Click me");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

