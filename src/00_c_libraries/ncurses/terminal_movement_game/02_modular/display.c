#include "display.h"
#include <ncurses.h>

void init_display() {
    initscr();
    noecho();
    keypad(stdscr, TRUE);
}

void close_display() {
    endwin();
}

void update_display(int x, int y) {
    clear();
    mvprintw(0, 0, "Use as setas para mover. Pressione 'q' para sair.");
    mvprintw(y, x, "@");
    refresh();
}
