//Generates a "random walk" across a 10 * 10 array with the elements labelled with the letters A through Z

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int row, column, direction;
  char ch = 'A', random_walk[10][10] = {{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
                                        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
                                        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
                                        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
                                        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
                                        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
                                        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
                                        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
                                        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
                                        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}};
  srand((unsigned) time(NULL));

  row = rand() % 10;
  column = rand() % 10;
  random_walk[row][column] = ch;

  for (; ch < 'Z' && ((random_walk[row + 1][column] == '.' && row + 1 <= 9) || (random_walk[row - 1][column] == '.' && row - 1 >= 0) || (random_walk[row][column + 1] == '.' && column + 1 <= 9) || (random_walk[row][column - 1] == '.' && column - 1 >= 0)); direction = rand() % 4) {
    if (direction == 0 && random_walk[row + 1][column] == '.' && row + 1 <= 9) {
      random_walk[++row][column] = ++ch;
    }
    else if (direction == 1 && random_walk[row - 1][column] == '.' && row - 1 >= 0) {
      random_walk[--row][column] = ++ch;
    }
    else if (direction == 2 && random_walk[row][column + 1] == '.' && column + 1 <= 9) {
      random_walk[row][++column] = ++ch;
    }
    else if (direction == 3 && random_walk[row][column - 1] == '.' && column - 1 >= 0) {
      random_walk[row][--column] = ++ch;
    }
  }

  for (row = 0; row < 10; row++) {
    for (column = 0; column < 10; column++) {
      printf("%c ", random_walk[row][column]);
    }
    printf("\n");
  }

  return 0;
}
