#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "lvgl.h"
#include "win_drv.h"
#include "example/example.h"

int main()
{
	lv_init();
    windrv_init();

    while(1)
    {
        lv_task_handler();
        usleep(5*10);
        lv_tick_inc(5*10);
    }
	return 0;
}