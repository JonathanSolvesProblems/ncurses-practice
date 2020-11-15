#include <curses.h>
using namespace std;

int main(int argc, char ** argv) {
    
    initscr();

    int height, width, start_y, start_x;
    height = 10;
    width = 20;
    start_y = start_x = 10;

    WINDOW * win = newwin(height, width, start_x, start_y);
    refresh();

    box(win, 0, 0);
    mvwprintw(win, 1, 1, "this is my window"); // output to window
    wrefresh(win); // only refreshes window.

    int c = getch();

    endwin();


    return 0;
}