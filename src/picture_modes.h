#ifndef PICTURE_MODES_H
#define PICTURE_MODES_H

#include <stdint.h>

extern uint8_t smiley[8][8];
extern uint8_t heart[8][8];

void draw_picture(const uint8_t picture[8][8], int r, int g, int b, int y_offset);
void draw_smiley();
void draw_heart();
void push_heart(uint8_t picture[8][8]);

#endif // PICTURE_MODES_H
