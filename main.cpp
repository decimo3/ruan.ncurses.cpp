#include <ncurses.h>

int main () {
  initscr();
  mvprintw(80,10, "Hello World !!!");
  refresh();
  getch();
  endwin();
  return 0;
}