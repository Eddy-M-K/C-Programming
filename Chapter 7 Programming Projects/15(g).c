/* Computes the factorial of a positive integer using a long double variable to store the factorial
Maximum value of n is 1754 */

#include <stdio.h>

int main(void)
{
  int n, m;
  long double factorial = 1.0L;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  for (m = n; m > 0; m--) {
    factorial *= m;
  }
  printf("Factorial of %d: %Lf", n, factorial);

  return 0;
}
