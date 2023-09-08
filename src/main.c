#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "lvgl.h"
#include "win_drv.h"
#include "example/example.h"
LV_IMG_DECLARE(logo)

int main()
{
	lv_init();
    windrv_init();
    lv_obj_t* obj = lv_scr_act();
    CreateBg(obj, NULL);
    //lv_obj_t *img = lv_img_create(obj, NULL);
    //lv_img_set_src(img, &logo);

    while(1)
    {
        lv_task_handler();
        usleep(5*10);
        lv_tick_inc(5*10);
    }
	return 0;
}
