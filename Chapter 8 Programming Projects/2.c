//Prints a table showing how many time each digit appears in a number

#include <stdio.h>

int main(void)
{
  int digit, occurrence, table[2][10] = {{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}};
  long number;

  printf("Enter a number: ");
  scanf("%ld", &number);

  for (; number > 0; number /= 10) {
    digit = number % 10;
    table[1][digit]++;
  }

  printf("Digit:\t\t");
  for (digit = 0; digit <= 9; digit++) {
    printf("%3d", table[0][digit]);
  }

  printf("\nOccurrences:\t");
  for (occurrence = 0; occurrence <= 9; occurrence++) {
    printf("%3d", table[1][occurrence]);
  }

  return 0;
}
