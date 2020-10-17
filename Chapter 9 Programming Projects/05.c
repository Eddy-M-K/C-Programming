/* Modified version of Chapter 8 Programming Project 17 which uses functions */

#include <stdio.h>

int main(void);
void create_magic_square(int i, int magic_square[i][i]);
void print_magic_square(int i, int magic_square[i][i]);

int main(void)
{
  int row, column, i, j;

  printf("This program creates a magic square of a specified size.\nThe size must be an odd number between 1 and 99.\nEnter size of magic square: ");
  scanf("%d", &i);

  int magic_square[i][i];

  create_magic_square(i, magic_square);
  print_magic_square(i, magic_square);

  return 0;
}

void create_magic_square(int i, int magic_square[i][i]) {
  for (int x = 0; x < i; x++) {
    for (int y = 0; y < i; y++) {
      magic_square[x][y] = 0;
    }
  }

  for (int row = 0, column = i/2, j = 1; j <= i * i; row -= 1, column = (column + 1) % i, j++) {
    if (row == -1) {
      row = i - 1;
    }
    if (magic_square[row][column] == 0) {
      magic_square[row][column] = j;
    }
    else {
      row = (row + 1) % i;
      magic_square[row][column] = j;
    }
  }
  return;
}

void print_magic_square(int i, int magic_square[i][i]) {
  for (int row = 0; row < i; row++) {
    for (int column = 0; column < i; column++) {
      printf("%5d", magic_square[row][column]);

      if (column == i - 1) {
        printf("\n");
      }
    }
  }
}
