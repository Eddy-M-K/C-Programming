/* A modified version of Programming Project 11 from Chapter 7 so that the program labels its output - Takes a first name
and last name entered by the user and displays the last name, a comma, and the first initial, followed by a period */

#include <stdio.h>

int main(void)
{
  char ch, first_initial, last_name[20];
  int i, m;

  printf("Enter a first and last name: ");
  while ((first_initial = getchar()) == ' ') //loop continues to run until first_initial is the first non-space character
    ;
  while (getchar() != ' ') //loop runs until a space character was entered - gets rid of all letters besides the first initial
    ;
  for (i = 0; (ch = getchar()) != '\n'; i++) { //loop runs until ch is the new-line character
    last_name[i] = ch;
  }

  printf("You entered the name: ");
  for (m = 0; m < i && i <= 20; m++) {
    printf("%c", last_name[m]);
  }
  printf(", %c.\n", first_initial);

  return 0;
}
