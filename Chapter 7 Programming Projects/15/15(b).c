/* Computes the factorial of a positive integer using an int variable to store the factorial
Maximum value of n is 12 */

#include <stdio.h>

int main(void)
{
  int n, m;
  int factorial = 1;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  for (m = n; m > 0; m--) {
    factorial *= m;
  }
  printf("Factorial of %d: %d", n, factorial);

  return 0;
}
