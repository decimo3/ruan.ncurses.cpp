#include <ncurses.h>
#include <iostream>
#include <string>

int main () {
  int maxRow, maxCol, halfRow, halfCol, posicao;
  std::string texto;
  initscr();
  maxRow = LINES - 1;
  maxCol = COLS - 1;
  halfCol = maxCol / 2;
  halfRow = maxRow / 2;
  texto = "Colunas: " + std::to_string(maxCol) + " Linhas: " + std::to_string(maxRow);
  posicao = halfCol - (texto.length() / 2);
  mvprintw(halfRow, posicao, "Colunas: %d Linhas: %d", maxCol, maxRow);
  refresh();
  getch();
  endwin();
  return 0;
}