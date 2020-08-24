//Incomplete

#include <stdio.h>

int main(void)
{
  int row, column, i, j;

  printf("This program creates a magic square of a specified size.\nThe size must be an odd number between 1 and 99.\nEnter size of magic square: ");
  scanf("%d", &i);

  int magic_square[i][i];

  for (row = 0, column = i/2 + 1, j = 1; j <= i * i; row -= 1, column = (column + 1) % i, j++) {
    if (row == -1) {
      row = i - 1;
    }
    if (magic_square[row][column] == 0) {
      magic_square[row][column] = j;
    }
    else {
      row = (row + 1) % j;
      magic_square[row][column] = j;
    }
  }

  for (row = 0; row <= i; row++) {
    for (column = 0; column <= i; column++) {
      printf("%5d", magic_square[row][column]);

      if (column == i) {
        printf("\n");
      }
    }
  }

  return 0;
}
