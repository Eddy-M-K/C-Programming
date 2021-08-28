//Reads a 5 * 5 array of integers and then prints the row sums and the column sums

#include <stdio.h>

int main(void)
{
  int i, n, m, array[5][5], row_total = 0, column_total;

  for (m = 1; m <= 5; m++) {
    printf("Enter row %d (5 numbers): ", m);
    for (i = 0; i <= 4; i++) {
      scanf("%d", &n);
      array[m - 1][i] = n;
    }
  }

  printf("Row totals: ");
  for (n = 0; n <= 4; n++) {
    for (m = 0, row_total = 0; m <= 4; m++) {
      row_total += array[n][m];
    }
    printf("%d ", row_total);
  }
  printf("\n");

  printf("Column totals: ");
  for (n = 0; n <= 4; n++) {
    for (m = 0, column_total = 0; m <= 4; m++) {
      column_total += array[m][n];
    }
    printf("%d ", column_total);
  }

  return 0;
}
