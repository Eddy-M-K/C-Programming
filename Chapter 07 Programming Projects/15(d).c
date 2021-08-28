/* Computes the factorial of a positive integer using a long long variable to store the factorial
Maximum value of n is 12 */

#include <stdio.h>

int main(void)
{
  int n, m;
  long long int factorial = 1ll;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  for (m = n; m > 0; m--) {
    factorial *= m;
  }
  printf("Factorial of %d: %lld", n, factorial);

  return 0;
}
