#ifndef LED_MATRIX_H
#define LED_MATRIX_H

#define WIDTH 8
#define HEIGHT 8

void init_led_matrix();
void set_pixel(int x, int y, int r, int g, int b);
void show();
void clear();

#endif // LED_MATRIX_H