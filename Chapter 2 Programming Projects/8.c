#include<stdio.h>

int main(void)
{
  float Loan, InterestRate, MonthlyPayment;

  printf("Enter amount of loan: ");
  scanf("%f", &Loan);

  printf("Enter interest rate: ");
  scanf("%f", &InterestRate);

  printf("Enter monthly payment: ");
  scanf("%f", &MonthlyPayment);

  float FirstBalance = (Loan * 1.005) - MonthlyPayment;
  printf("Balance remaining after first payment: $%.2f\n", FirstBalance);

  float SecondBalance = (FirstBalance * 1.005) - MonthlyPayment;
  printf("Balance remaining after second payment: $%.2f\n", SecondBalance);

  float ThirdBalance = (SecondBalance * 1.005) - MonthlyPayment;
  printf("Balance remaining after third payment: $%.2f\n", ThirdBalance);

  return 0;
}
