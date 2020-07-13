//Reduces a user-inputted fraction to lowest terms

#include <stdio.h>

int main(void) {
  int GCD, numerator, denominator, n, m;

  printf("Enter a fraction: ");
  scanf("%d /%d", &numerator, &denominator);

  for (int remainder, n = numerator, m = denominator; n != 0; n = remainder) {
    remainder = m % n;
    m = n;
  }

  GCD = m;
  printf("In lowest terms: %d/%d", numerator/GCD, denominator/GCD);

return 0;
}
