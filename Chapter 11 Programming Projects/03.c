/**************************************
 * Version 2 of Chapter 6 Programming *
 * Project 03.c                       *
 *                                    *
 * Pointers are now used              *
 *************************************/   

#include <stdio.h>
#include <stdlib.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void) 
{
  int numerator = 0, denominator = 0, reduced_numerator = 0, reduced_denominator = 0;

  printf("Enter a fraction: ");
  scanf("%d /%d", &numerator, &denominator);

  reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

  printf("In lowest terms: %d/%d", reduced_numerator, reduced_denominator);

  exit(EXIT_SUCCESS);
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
  int m = denominator;

  for (int n = numerator, remainder = 0; n != 0; n = remainder) {
    remainder = m % n;
    m = n;
  }

  *reduced_numerator = numerator / m;
  *reduced_denominator = denominator / m;
}
