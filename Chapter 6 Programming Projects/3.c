//Reduces a user-inputted fraction to lowest terms

#include <stdio.h>

int main(void) {
  int GCD, numerator, denominator, n, m, remainder;

  printf("Enter a fraction: ");
  scanf("%d /%d", &numerator, &denominator);

  n = numerator, m = denominator;

  for (; n != 0; n = remainder) {
    remainder = m % n;
    m = n;
  }

  GCD = m;
  printf("In lowest terms: %d/%d", numerator/GCD, denominator/GCD);

return 0;
}
