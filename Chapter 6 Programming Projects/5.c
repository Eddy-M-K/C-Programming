//Reverses the digits of a user-inputted number

#include <stdio.h>

int main(void) {

  int n;

  printf("Enter a number with any number of digits: ");
  scanf("%d", &n);

  printf("The reversal is ");
  do {
    printf("%d", n % 10);
    n /= 10;
  } while (n != 0);

return 0;
}
