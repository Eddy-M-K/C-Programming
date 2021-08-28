/* Takes a first name and last name entered by the user and displays
the last name, a comma, and the first initial, followed by a period */

#include <stdio.h>

int main(void)
{
  char first_initial, last_name;

  printf("Enter a first and last name: ");
  while ((first_initial = getchar()) == ' ') //loop continues to run until first_initial is the first non-space character
    ;
  while (getchar() != ' ') //loop runs until a space character was entered - gets rid of all letters besides the first initial
    ;
  while ((last_name = getchar()) != '\n') { //loop runs until last_name is the new-line character
    if (last_name != ' ') {
      putchar(last_name); //prints a letter if last_name is not a space character
    }
  }
  printf(", %c.", first_initial);

  return 0;
}
