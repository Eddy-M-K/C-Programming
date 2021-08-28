/**************************
 * Reverses a message by  *     
 * using pointers         *
 *                        *
 **************************/  

#include <stdio.h>
#include <stdlib.h>

void print(char message[], char *length);

int main(void) 
{
  int N = 100;
  char message[N], *p = message;

  printf("Enter a message: ");

  for (; p < message + N; *p++) {
    scanf("%c", p);
    if (*p == '\n') break;
  }

  for (char *j = message, *k = --p; j < k; j++, k--) {
    char temp = *j;
    *j = *k;
    *k = temp;
  }

  print(message, p);

  exit(EXIT_SUCCESS); 
}

void print(char message[], char *length) 
{
  printf("Reversal is: ");
  for (char *i = message; i <= length; i++) {
    printf("%c", *i);
  }
}
