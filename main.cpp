#include <curses.h>
using namespace std;

int main(int argc, char ** argv) {
    // initializes screen
    // sets up memory and clears the screen
    initscr();

    int x, y;
    x = y = 10;

    // moves the cursor to the specified location.
    move(y, x);

    // prints a string(const char *) to a window.
    printw("classic hello world.");

    // see what is happening, returns int value of that key.
    int c = getch();

    clear();

    mvprintw(0, 0, "%d", c); // same as move(0, 0) before.

    

    getch();

    endwin(); // deallocates memory and ends ncurses.


    return 0;
}