//Lists primes all the way up to a user-inputted number (up to a max of 32767)

#include <stdio.h>

int main(void) {
  int max_dividend; //max dividend is the last number to check
  printf("Enter the maximum value for which you want to check prime numbers for (maximum 32767): ");
  scanf("%d", &max_dividend);

  for (int dividend = 2; dividend <= max_dividend; dividend++) {
    for (int divisor = 2; divisor * divisor <= dividend; divisor++) {
      if (dividend % divisor == 0) {
        goto Composite; //skips to Composite if the dividend has a divisor
      }
    }
    printf("%d ", dividend);
  Composite: ;
  } //adds 1 to the dividend at the end of the loop here
return 0;
}
