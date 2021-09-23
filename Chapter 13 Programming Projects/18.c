/**********************************
 * Accepts a date in the format   *
 * mm/dd/yyyy and displays it in  *
 * the form month dd, yyyy        *
 *                                *
 **********************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

char *months[] = {"January", 
                  "February", 
                  "March", 
                  "April", 
                  "May", 
                  "June", 
                  "July", 
                  "August", 
                  "September", 
                  "October", 
                  "November", 
                  "December"};

int main(void)
{
  int day = 0, month = 0, year = 0;

  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%2d /%2d /%4d", &month, &day, &year);

  printf("You entered the date %s %d, %d", months[month - 2], day, year);

  exit(EXIT_SUCCESS);
}
