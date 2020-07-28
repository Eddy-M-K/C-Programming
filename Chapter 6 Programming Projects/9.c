/* Modified program of Programming Project 8 of Chapter 2 -
asks user to input number of payments */

#include <stdio.h>

int main(void)
{
  float Loan, InterestRate, MonthlyPayment, NumberPayments, InterestRateMultiplier;

  printf("Enter amount of loan: ");
  scanf("%f", &Loan);

  printf("Enter interest rate: ");
  scanf("%f%%", &InterestRate);
  InterestRateMultiplier = (InterestRate/100) + 1.00;

  printf("Enter monthly payment: ");
  scanf("%f", &MonthlyPayment);

  printf("Enter number of monthly payments: ");
  scanf("%f", &NumberPayments);

  for (int Month = 1; Month <= NumberPayments; Month++) {
    Loan = ((Loan * InterestRateMultiplier) - MonthlyPayment);
    if (Loan < 0) {
        printf("Balance at $0 after %d month(s)", Month++);
        return 0;
    }
    printf("Balance remaining after %d month(s): $%.2f\n", Month, Loan);
  }

  return 0;
}
