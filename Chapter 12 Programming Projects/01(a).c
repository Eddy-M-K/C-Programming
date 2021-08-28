/**************************
 * Reverses a message     *     
 *                        *
 *                        *
 **************************/  

#include <stdio.h>
#include <stdlib.h>

void print(char message[], int length);

int main(void) 
{
  int N = 100;
  char message[N];
  int filled_length = 0;

  printf("Enter a message: ");

  for (; filled_length < N; filled_length++) {
    scanf("%c", &message[filled_length]);
    if (message[filled_length] == '\n') break;
  }

  for (int j = 0, k = filled_length - 1; j < k; j++, k--) {
    char temp = message[j];
    message[j] = message[k];
    message[k] = temp;
  }

  print(message, filled_length);

  exit(EXIT_SUCCESS); 
}

void print(char message[], int length) 
{
  printf("Reversal is: ");
  for (int i = 0; i < length; i++) {
    printf("%c", message[i]);
  }
}
