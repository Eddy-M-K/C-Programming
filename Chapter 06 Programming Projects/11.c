/* Calculates an infinite series for the value e which is dependent on
a user-inputted value determining the value of the final term (1/n!) */

#include <stdio.h>

int main(void) {
  int factorial_component, n, current_term;
  float e = 1.0f, denominator;

  //e begins as 1 since the infinite series will always be at least 1; 1/1! is treated as term 1

  printf("Enter a value for the variable \"n\" used for the final term (1/n!) of the infinite series calculating the mathematical constant, \"e\": ");
  scanf("%d", &n);

  for (current_term = 1; current_term <= n; current_term++) {
    for (factorial_component = current_term, denominator = 1.0f; factorial_component > 0; factorial_component--) {
      denominator *= factorial_component;
    }
    e += (1.0f/(denominator));
  }

  printf("The value of the infinite series e up to the value (1/n!) is equal to %.10f\n", e);
  return 0;
}
