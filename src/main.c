#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "lvgl.h"
#include "win_drv.h"
#include "example/example.h"
LV_IMG_DECLARE(logo)

extern bool lv_win_exit_flag;
int main()
{
	lv_init();
    windrv_init();

    //message handle circle
    while(1)
    {
        //exit windows and end this task
        if(lv_win_exit_flag)
        {
            printf("Exit lvgl frame !!!!\n");
            break;
        }
        lv_task_handler();
        usleep(5*10);
        lv_tick_inc(5*10);
    }
	return 0;
}