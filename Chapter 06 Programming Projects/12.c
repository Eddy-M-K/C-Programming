/* Calculates an infinite series for the value e which is dependent on a
user-inputted value, epsilon, which acts as the minimum value of all individual terms */

#include <stdio.h>

int main(void) {
  int factorial_component, current_term;
  float e = 0.0f, denominator, current_term_value = 1, epsilon;

  //Compared to the previous "calculating e" program, this program starts e at 0

  printf("Enter a value for the variable epsilon used to set the minimum, individual term value and ultimately determine the final term of the infinite series calculating the mathematical constant, \"e\": ");
  scanf("%f", &epsilon);

  for (current_term = 1; current_term_value >= epsilon; current_term++) {
    e += current_term_value;
    for (factorial_component = current_term, denominator = 1.0f; factorial_component > 0; factorial_component--) {
      denominator *= factorial_component;
    }
    current_term_value = (1.0f/(denominator));
  }

  printf("The value of the infinite series e with all individual terms being greater than or equal to epsilon is equal to %.10f\n", e);
  return 0;
}
