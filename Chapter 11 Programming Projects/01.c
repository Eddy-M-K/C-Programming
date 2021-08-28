/**************************************
 * Version 2 of Chapter 2 Programming *
 * Project 07.c                       *
 *                                    *
 * Pointers are now used              *
 **************************************/                           

#include <stdio.h>
#include <stdlib.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
  int Inputted_US_Dollar_Amount = 0,
      TwentyBills = 0,
      TenBills = 0,
      FiveBills = 0,
      OneBills = 0;

  printf("Enter a dollar amount: ");
  scanf("%d", &Inputted_US_Dollar_Amount);

  pay_amount(Inputted_US_Dollar_Amount, &TwentyBills, &TenBills, &FiveBills, &OneBills);

  printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d", TwentyBills, TenBills, FiveBills, OneBills);

  exit(EXIT_SUCCESS);
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
  *twenties = dollars/20;
  dollars %= 20;
  
  *tens = dollars/10;
  dollars %= 10;

  *fives = dollars/5;
  dollars %= 5;

  *ones = dollars;
}
