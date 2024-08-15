#include "led_matrix.h"
#include "picture_modes.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 

int main()
{
    init_led_matrix();

    while (1)
    {
        for (int y_offset = -7; y_offset < 8; y_offset++)
        {
            clear();              
            draw_heart(y_offset); 
            sleep(1);            
        }
    }

    return 0;
}
