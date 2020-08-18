#include<stdio.h>

int main(void)
{
  int Inputted_US_Dollar_Amount;

  printf("Enter a dollar amount: ");
  scanf("%d", &Inputted_US_Dollar_Amount);

  int TwentyBills = (Inputted_US_Dollar_Amount)/20;
  printf("$20 bills: %d\n", TwentyBills);

  int TenBills = (Inputted_US_Dollar_Amount - 20 * TwentyBills)/10;
  printf("$10 bills: %d\n", TenBills);

  int FiveBills = ((Inputted_US_Dollar_Amount - 20 * TwentyBills) - 10 * TenBills)/5;
  printf("$5 bills: %d\n", FiveBills);

  int OneBills = (((Inputted_US_Dollar_Amount - 20 * TwentyBills) - 10 * TenBills) - 5 * FiveBills);
  printf("$1 bills: %d\n", OneBills);

  return 0;
}
