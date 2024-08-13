#include "led_matrix.h"
#include "picture_modes.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    init_led_matrix();

    // Loop to create a simple effect
    //    for (int i = 0; i < WIDTH; i++) {
    //       for (int j = 0; j < HEIGHT; j++) {
    //            set_pixel(i, j, 255, 0, 0); // Set pixel to red
    //            usleep(100000); // Wait for 100 milliseconds
    //            show();
    //        }
    //    }
    //    usleep(500000); // Wait for half a second

    // set_pixel(0,0,255,31,2);
    // show();
    // usleep(100000);
    // clear();
    // show();

    init_led_matrix();
    draw_smiley();
    sleep(5);
    clear();
    return 0;
}