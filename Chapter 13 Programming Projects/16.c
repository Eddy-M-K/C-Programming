/**********************************
 * Reverses a message             *
 *                                *
 *                                *
 *                                *
 **********************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define MESSAGE_LEN 50

void reverse(char *message);

int main(void)
{
  char message[MESSAGE_LEN+1] = {0};

  printf("Enter a message: ");
  fgets(message, MESSAGE_LEN, stdin);

  reverse(message);

  printf("Reversal is %s", message);

  exit(EXIT_SUCCESS);
}

void reverse(char *message)
{
  char *start = message;
  char *end = &message[strlen(message) - 1];

  for (; start < end; start++, end--) {
    char temp = *start;
    *start = *end;
    *end = temp;
  }
}
