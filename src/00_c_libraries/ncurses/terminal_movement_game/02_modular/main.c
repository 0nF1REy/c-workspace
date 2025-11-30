#include "display.h"
#include "movement.h"
#include "input.h"
#include <ncurses.h>

int main() {
    int x = 10, y = 5;
    int ch;

    init_display();

    int max_y, max_x;
    getmaxyx(stdscr, max_y, max_x);

    update_display(x, y);

    while ((ch = get_input()) != 'q') {
        move_character(&x, &y, ch, max_x, max_y);
        update_display(x, y);
    }

    close_display();
    return 0;
}
