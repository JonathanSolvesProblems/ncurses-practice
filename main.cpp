#include <curses.h>
using namespace std;

int main(int argc, char ** argv) {
    // initializes screen
    // sets up memory and clears the screen
    initscr();

    // refreshes screen to match what's in memory.
    refresh();

    // see what is happening, returns int value of that key.
    getch();

    endwin(); // deallocates memory and ends ncurses.


    return 0;
}