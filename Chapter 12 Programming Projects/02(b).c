/**************************
 * Checks if a message is *
 * a palindrome but with  *
 * pointers               *
 **************************/  

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define N 100

void prompt(void);
char *read_message(char *position);
bool check_palindrome(char *position, char *end);

int main(void) 
{
  char message[N] = {0};
  char *position = message, *end = NULL;

  prompt();
  end = read_message(position);
  if (check_palindrome(position, end)) printf("Palindrome");
  else printf("Not a palindrome");
}

void prompt(void)
{
  printf("Enter a message: ");
}

char *read_message(char *position)
{
  char ch = '\0';
  char *end = position;

  while (end < position + N) {
    if ((ch = toupper(getchar())) == '\n') {
      break;
    } else if (ch >= 65 && ch <= 90) {
      *end++ = ch;
    }
  }

  return end-1;
}

bool check_palindrome(char *position, char *end)
{
  for (; position < end; position++, end--) {
    if (*position != *end) return false;
  }

  return true;
}
