/**************************
 * Reverses a message but *
 * uses an array name as  *
 * a pointer              *
 **************************/  

#include <stdio.h>
#include <stdlib.h>

void print(char message[], int length);

int main(void) 
{
  int N = 100, length = 0;
  char message[N];

  printf("Enter a message: ");

  for (; length < N; length++) {
    scanf("%c", (message+length));
    if (*(message+length) == '\n') break;
  }

  for (int j = 0, k = length-1; j < k; j++, k--) {
    char temp = *(message+j);
    *(message+j) = *(message+k);
    *(message+k) = temp;
  }

  print(message, length);

  exit(EXIT_SUCCESS); 
}

void print(char message[], int length) 
{
  printf("Reversal is: ");
  for (int i = 0; i < length; i++) {
    printf("%c", *(message+i));
  }
}
