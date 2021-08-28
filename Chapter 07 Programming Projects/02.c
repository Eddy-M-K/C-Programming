/* A modified version of square2.c
Utilizes getchar() so that the user must press Enter to proceed after every 24 squares
Prints a table of squares using a for statement */

#include <stdio.h>

int main(void) {
  int i, n;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);
  getchar(); //disposes of new-line character

  for (i = 1; i <= n; i++) {
    printf("%10d%10d\n", i, i * i);
    if ((i % 24) == 0) {
      printf("Press Enter to continue...\n");
      getchar(); //getchar won't allow the program to continue until the user presses the Enter key
    }
  }
  return 0;
}
