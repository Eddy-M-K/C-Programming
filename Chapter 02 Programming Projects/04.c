#include<stdio.h>

int main(void)
{
  float UserAmount;

  printf("Enter an amount: ");
  scanf("%f", &UserAmount);

  float TaxAddedAmount = UserAmount * 1.05;
  printf("With tax added: %.2f\n", TaxAddedAmount);

  return 0;
}
