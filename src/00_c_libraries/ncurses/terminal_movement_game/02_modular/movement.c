#include "movement.h"
#include <ncurses.h>

void move_character(int *x, int *y, int ch, int max_x, int max_y) {
    switch (ch) {
        case KEY_UP:    if (*y > 1) *y -= 1; break;
        case KEY_DOWN:  if (*y < max_y - 1) *y += 1; break;
        case KEY_LEFT:  if (*x > 0) *x -= 1; break;
        case KEY_RIGHT: if (*x < max_x - 1) *x += 1; break;
    }
}
