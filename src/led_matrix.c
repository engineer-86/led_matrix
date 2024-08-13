#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ws2811.h>
#include "led_matrix.h"

#define WIDTH 8
#define HEIGHT 8
#define LED_COUNT (WIDTH * HEIGHT)

#define TARGET_FREQ WS2811_TARGET_FREQ
#define GPIO_PIN 18
#define DMA 10

ws2811_t ledstring =
    {
        .freq = TARGET_FREQ,
        .dmanum = DMA,
        .channel =
            {
                [0] =
                    {
                        .gpionum = GPIO_PIN,
                        .count = LED_COUNT,
                        .invert = 0,
                        .brightness = 50,
                    },
            },
};

void init_led_matrix()
{
    ws2811_return_t ret;

    if ((ret = ws2811_init(&ledstring)) != WS2811_SUCCESS)
    {
        fprintf(stderr, "ws2811_init failed: %s\n", ws2811_get_return_t_str(ret));
        exit(1);
    }
}

void set_pixel(int x, int y, int r, int g, int b)
{
    int index = y * WIDTH + x;
    ledstring.channel[0].leds[index] = ((uint32_t)r << 16) | ((uint32_t)g << 8) | b;
}

void show()
{
    ws2811_return_t ret;
    if ((ret = ws2811_render(&ledstring)) != WS2811_SUCCESS)
    {
        fprintf(stderr, "ws2811_render failed: %s\n", ws2811_get_return_t_str(ret));
        exit(1);
    }
}

void clear()
{
    for (int i = 0; i < LED_COUNT; i++)
    {
        ledstring.channel[0].leds[i] = 0;
    }
    show();
}

void cleanup()
{
    ws2811_fini(&ledstring);
}