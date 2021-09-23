/**********************************
 * Checks if a message is a       *
 * palindrome                     *
 *                                *
 *                                *
 **********************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define MESSAGE_LEN 50

void read_message(char *message);
bool is_palindrome(const char *message);

int main(void)
{
  char message[MESSAGE_LEN + 1] = {0};
  
  printf("Enter a message: ");
  read_message(message);

  if (is_palindrome(message)) puts("Palindrome");
  else puts("Not a palindrome");

  exit(EXIT_SUCCESS);
}

void read_message(char *message)
{
  char ch = '\0';
  char *end = message + MESSAGE_LEN + 1;

  while (message < end) {
    if ((ch = toupper(getchar())) == '\n') {
      break;
    } else if (ch >= 65 && ch <= 90) {
      *message++ = ch;
    }
  }
}

bool is_palindrome(const char *message)
{
  char *start = message;
  char *end = &message[strlen(message) - 1];

  for (; start < end; start++, end--) {
    if (*start != *end) return false;
  }

  return true;
}
