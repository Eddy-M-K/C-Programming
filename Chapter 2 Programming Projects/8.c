#include<stdio.h>

int main(void)
{
  float Loan, InterestRate, MonthlyPayment, InterestRateMultiplier;

  printf("Enter amount of loan: ");
  scanf("%f", &Loan);

  printf("Enter interest rate: ");
  scanf("%f%%", &InterestRate);

  printf("Enter monthly payment: ");
  scanf("%f", &MonthlyPayment);

  InterestRateMultiplier = (InterestRate/100) + 1;

  float FirstBalance = (Loan * InterestRateMultiplier) - MonthlyPayment;
  printf("Balance remaining after first payment: $%.2f\n", FirstBalance);

  float SecondBalance = (FirstBalance * InterestRateMultiplier) - MonthlyPayment;
  printf("Balance remaining after second payment: $%.2f\n", SecondBalance);

  float ThirdBalance = (SecondBalance * InterestRateMultiplier) - MonthlyPayment;
  printf("Balance remaining after third payment: $%.2f\n", ThirdBalance);

  return 0;
}
