#include <ncurses.h>

int main() {
    int x = 10, y = 5;
    int ch;

    initscr();
    noecho();
    keypad(stdscr, TRUE);

    mvprintw(0, 0, "Use as setas para mover. Pressione 'q' para sair.");

    while ((ch = getch()) != 'q') {
        clear();
        mvprintw(0, 0, "Use as setas para mover. Pressione 'q' para sair.");

        switch (ch) {
            case KEY_UP:    y--; break;
            case KEY_DOWN:  y++; break;
            case KEY_LEFT:  x--; break;
            case KEY_RIGHT: x++; break;
        }

        mvprintw(y, x, "@");
        refresh();
    }

    endwin();
    return 0;
}
