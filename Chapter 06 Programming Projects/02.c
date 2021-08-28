//Calculates the GCD of two integers

#include <stdio.h>

int main(void) {
  int n, m, GCD;

  printf("Enter two integers: ");
  scanf("%d %d", &n, &m);

  for (int remainder; n != 0; n = remainder) {
    remainder = m % n;
    m = n;
  }

  GCD = m;
  printf("Greatest common divisor: %d", GCD);

return 0;
}
