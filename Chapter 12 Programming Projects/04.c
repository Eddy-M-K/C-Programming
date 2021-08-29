/**************************
 * Checks if a message is *
 * a palindrome but with  *
 * array names as pointers*
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
  char *end = NULL;

  prompt();
  end = read_message(message);
  if (check_palindrome(message, end)) printf("Palindrome");
  else printf("Not a palindrome");
}

void prompt(void)
{
  printf("Enter a message: ");
}

char *read_message(char message[])
{
  char ch = '\0';
  char *end = message;

  while (end < message + N) {
    if ((ch = toupper(getchar())) == '\n') {
      break;
    } else if (ch >= 65 && ch <= 90) {
      *end++ = ch;
    }
  }

  return end-1;
}

bool check_palindrome(char message[], char *end)
{
  for (; message < end; message++, end--) {
    if (*message != *end) return false;
  }

  return true;
}
