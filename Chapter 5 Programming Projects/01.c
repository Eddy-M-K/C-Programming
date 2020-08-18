#include <stdio.h>

int main(void) {
  int n, digits;

  printf("Enter a number: ");
  scanf("%d", &n);

  if (n >= 0 && n <= 9) {
    digits = 1;
  } else if (n >= 10 && n <= 99) {
    digits = 2;
  } else if (n >= 100 && n <= 999) {
    digits = 3;
  }
  printf("The number %d has %d digits\n", n, digits);

  return 0;
}
