#include <ncurses.h>

void u_draw_rectangle() {
    initscr();
    noecho();
    cbreak();

    int height = 10;
    int width = 20;
    int start_y = (LINES - height) / 2;
    int start_x = (COLS - width) / 2;

    WINDOW *win = newwin(height, width, start_y, start_x);
    box(win, 0, 0);
    refresh();
    wrefresh(win);

    getch();
    endwin();
}
