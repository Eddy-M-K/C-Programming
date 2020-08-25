/* Computes the factorial of a positive integer using a float variable to store the factorial
Maximum value of n is 34 */

#include <stdio.h>

int main(void)
{
  int n, m;
  float factorial = 1.0f;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  for (m = n; m > 0; m--) {
    factorial *= m;
  }
  printf("Factorial of %d: %f", n, factorial);

  return 0;
}
