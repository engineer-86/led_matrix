#ifndef LED_MATRIX_H
#define LED_MATRIX_H

void init_led_matrix();
void set_pixel(int x, int y, int r, int g, int b);
void show();
void clear();

#endif // LED_MATRIX_H
