#include "../lib/wiringPi.h"
#include "led_matrix.h"

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Initialize the wiringPi library
    wiringPiSetup();

    // Initialize the LED matrix
    init_led_matrix();

    // Set the pixel at (0, 0) to red
    set_pixel(0, 0, 255, 0, 0);

    // Set the pixel at (7, 7) to green
    set_pixel(7, 7, 0, 255, 0);

    // Show the pixels on the LED matrix
    show();

    // Clear the LED matrix
    clear();

    return 0;
}