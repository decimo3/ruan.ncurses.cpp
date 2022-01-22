#include <ncurses.h>
#include <iostream>
#include <string>

int main () {
  /* declaration variables */
  int maxRow, maxCol, halfRow, halfCol, posicao;
  std::string texto;
  /* starting ncurses */
  initscr();
  /* setting position variables */
  maxRow = LINES - 1;
  maxCol = COLS - 1;
  halfCol = maxCol / 2;
  halfRow = maxRow / 2;
  /* defining text and centering */
  texto = "Colunas: " + std::to_string(maxCol) + " Linhas: " + std::to_string(maxRow);
  posicao = halfCol - (texto.length() / 2);
  mvprintw(halfRow, posicao, "Colunas: %d Linhas: %d", maxCol, maxRow);
  mvprintw(maxRow, 0, "Pressione qualquer tecla para terminar.");
  /* updating, waiting and ending */
  refresh();
  getch();
  endwin();
  return 0;
}