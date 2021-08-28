//Modified version of Chapter 8 Programming Project 9 which utilizes functions

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void);
void generate_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void) {
  char walk[10][10];

  generate_walk(walk);
  print_array(walk);

  return 0;
}

void generate_walk(char walk[10][10]) {
  int row, column, direction;
  char ch = 'A';

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      walk[i][j] = '.';
    }
  }

  srand((unsigned) time(NULL));

  row = rand() % 10;
  column = rand() % 10;
  walk[row][column] = ch;

  for (; ch < 'Z' && ((walk[row + 1][column] == '.' && row + 1 <= 9) || (walk[row - 1][column] == '.' && row - 1 >= 0) || (walk[row][column + 1] == '.' && column + 1 <= 9) || (walk[row][column - 1] == '.' && column - 1 >= 0)); direction = rand() % 4) {
    if (direction == 0 && walk[row + 1][column] == '.' && row + 1 <= 9) {
      walk[++row][column] = ++ch;
    }
    else if (direction == 1 && walk[row - 1][column] == '.' && row - 1 >= 0) {
      walk[--row][column] = ++ch;
    }
    else if (direction == 2 && walk[row][column + 1] == '.' && column + 1 <= 9) {
      walk[row][++column] = ++ch;
    }
    else if (direction == 3 && walk[row][column - 1] == '.' && column - 1 >= 0) {
      walk[row][--column] = ++ch;
    }
  }
}

void print_array(char walk[10][10]) {
  for (int row = 0; row < 10; row++) {
    for (int column = 0; column < 10; column++) {
      printf("%c ", walk[row][column]);
    }
    printf("\n");
  }
}
