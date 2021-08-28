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
int read_message(char message[], char *length);
bool check_palindrome(char message[], int length);

int main(void) 
{
  char message[N] = {0};
  char *length = message;

  prompt();
  length = read_message(message);
  if (check_palindrome(message, length)) printf("Palindrome");
  else printf("Not a palindrome");
}

void prompt(void)
{
  printf("Enter a message: ");
}

int read_message(char message[], char *length)
{
  char ch = '\0';

  while (length < N) {
    if (toupper((ch = getchar())) == '\n') {
      break;
    } else if (ch >= 65 && ch <= 90) {
      message[length] = ch;
      length++;
    }
  }

  return length;
}

bool check_palindrome(char message[], int length)
{
  for (int i = 0, j = length - 1; i < j; i++, j--) {
    if (message[i] != message[j]) return false;
  }

  return true;
}
