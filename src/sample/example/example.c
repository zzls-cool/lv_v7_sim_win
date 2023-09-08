#include "example.h"

lv_obj_t* CreateBg(lv_obj_t* par, lv_obj_t* copy)
{
    lv_obj_t* bg = lv_canvas_create(par, copy);
    lv_obj_set_size(bg, lv_obj_get_width(par)-10, lv_obj_get_height(par)-10);
    lv_obj_set_pos(bg, 5, 10);
    lv_obj_t* rect = lv_label_create(bg, NULL);
    lv_obj_set_size(rect, 100, 100);
    return bg;
}