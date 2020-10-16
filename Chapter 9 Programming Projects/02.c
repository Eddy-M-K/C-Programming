//Modified version of Programming Project 5 from Chapter 5 that utilizes a separate function

#include <stdio.h>

int main(void);
float income_tax(float income);

int main(void) {

  float income;

  printf("Enter taxable income: ");
  scanf(" $%f", &income);

  printf("Tax due: %.2f\n", income_tax(income));

  return 0;
}

float income_tax(float income) {
  float tax;

  if (income < 750.0f)
    tax = 0.01f * income;
  else if (income >= 750.0f && income <= 2250.0f)
    tax = 7.50f + 0.02f * (income - 750.0f);
  else if (income >= 2250.0f && income <= 3750.0f)
    tax = 37.50f + 0.03f * (income - 2250.0f);
  else if (income >= 3750.0f && income <= 5250.0f)
    tax = 82.50f + 0.04f * (income - 3750.0f);
  else if (income >= 5250.0f && income <= 7000.0f)
    tax = 142.50f + 0.05 * (income - 5250.0f);
  else if (income >= 7000.0f)
    tax = 230.00f + 0.06 * (income - 7000.0f);

  return tax;
}
