#include "picture_modes.h"
#include <stdint.h>
#include "led_matrix.h"
#include <stdio.h>

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

uint8_t heart[8][8] = {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 0, 1, 1, 0, 1, 0},
    {0, 1, 0, 0, 0, 0, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0},
    {0, 0, 1, 0, 0, 1, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
};

void draw_picture(const uint8_t picture[8][8], int r, int g, int b, int y_offset)
{
    for (int y = 0; y < 8; y++)
    {
        for (int x = 0; x < 8; x++)
        {
            if (picture[y][x] == 1 && y + y_offset >= 0 && y + y_offset < 8)
            {
                set_pixel(x, y + y_offset, r, g, b);
            }
        }
    }
    show();
}

void draw_smiley(int y_offset)
{
    draw_picture(smiley, 0, 150, 0, y_offset);
}

void draw_heart(int y_offset)
{
    draw_picture(heart, 255, 0, 0, y_offset);
}
