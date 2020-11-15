#include <curses.h>
using namespace std;

int main(int argc, char ** argv) {
    
    initscr();

    cbreak(); // allws for control-c exits out of ncurses program
    // raw(); // doesn't accept special character. Shows us control-c in top left corner.
    noecho(); // whatever input user types does not show on screen.

    int height, width, start_y, start_x;
    height = 10;
    width = 20;
    start_y = start_x = 10;

    WINDOW * win = newwin(height, width, start_x, start_y);
    refresh();

    char c = '+';

    // box(win, (int)c, (int)c);
    int left, right, top, bottom, tlc, trc, blc, brc;
    left = right = 103;
    top = bottom = 104;
    bottom, blc = brc = (int)' ';
    tlc = trc = (int)c;
    wborder(win, left, right, top, bottom, tlc, trc, blc, brc);
    mvwprintw(win, 1, 1, "this is my window"); // output to window
    wrefresh(win); // only refreshes window.

    getch();
    getch();

    endwin();


    return 0;
}