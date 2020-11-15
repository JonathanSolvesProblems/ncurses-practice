#include <curses.h>
using namespace std;

int main(int argc, char ** argv) {
    // initializes screen
    // sets up memory and clears the screen
    initscr();

    // prints a string(const char *) to a window.
    printw("classic hello world.");

    // refreshes screen to match what's in memory.
    refresh();

    // see what is happening, returns int value of that key.
    int c = getch();
    printw("%d", c);

    getch();

    endwin(); // deallocates memory and ends ncurses.


    return 0;
}