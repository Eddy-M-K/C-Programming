//Incomplete

#include <stdio.h>

int main(void)
{
  int row, column;

  printf("This program creates a magic square of a specified size.\nThe size must be an odd number between 1 and 99.\nEnter size of magic square: ");
  scanf("%d", &i);

  int magic_square[i][i] = {0};

  magic_square[0][i/2 + 1] = 1;

  for (j = 1; j <= i * i; j++) {
    for (row = 0, column = i/2 + 1;; row = ((row + i) % i) - 1), {

    }
  }
}
