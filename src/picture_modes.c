#include "picture_modes.h"
#include <stdint.h>
#include "led_matrix.h"

void draw_picture(const uint8_t picture[8][8], int r, int g, int b)
{
    for (int y = 0; y < 8; y++)
    {
        for (int x = 0; x < 8; x++)
        {
            if (picture[y][x] == 1)
            {
                set_pixel(x, y, 255, 0, 0);
            }
        }
    }
    show();
}

void draw_smiley()
{
    uint8_t smiley[8][8] = {
        {0, 0, 0, 0, 0, 1, 1, 0},
        {0, 1, 1, 1, 0, 1, 1, 0},
        {0, 1, 1, 0, 0, 1, 1, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 1, 0},
        {0, 0, 1, 1, 1, 1, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
    };
    draw_picture(smiley, 0, 150, 0);
}