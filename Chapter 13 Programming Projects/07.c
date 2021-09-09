/*********************************
 * Takes a two-digit number and  *
 * prints the English word for   *
 * it                            *
 *                               *
 *********************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char *tens[] = {"twenty", "thirty", "fourty", "fifty",
                "sixty", "seventy", "eighty", "ninety"};
char *ones[] = {"one", "two", "three", "four", 
                "five", "six", "seven", "eight", "nine"};
char *elev[] = {"ten", "eleven", "twelve", "thirteen", 
                "fourteen", "fifteen", "sixteen", "seventeen", 
                "eighteen", "nineteen"};

int prompt(void);
void print(int tens, int ones);

int main(void)
{
  int number = 0;
  number = prompt();
  print(number / 10, number % 10);

  exit(EXIT_SUCCESS);
}

int prompt(void)
{
  int num = 0;

  printf("Enter a two-digit number: ");
  scanf("%2d", &num);

  return num;
}  

void print(int tens_digit, int ones_digit) 
{
  if (tens_digit == 1) {
    printf("%s", elev[ones_digit]);
  } else {
    printf("%s-%s", tens[tens_digit-2], ones[ones_digit-1]);
  }
}
