/* Computes the factorial of a positive integer using a short variable to store the factorial
Maximum value of n is 7 */

#include <stdio.h>

int main(void)
{
  int n, m;
  short factorial = 1;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  for (m = n; m > 0; m--) {
    factorial *= m;
  }
  printf("Factorial of %d: %hd", n, factorial);

  return 0;
}
