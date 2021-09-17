/*********************************
 * Caesar Cipher                 *
 *                               *
 *                               *
 *                               *
 *********************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define MESSAGE_LEN 50

void encrypt(char *message, int shift);

int main(void)
{
  char message[MESSAGE_LEN+1] = {0};
  int shift = 0;

  printf("Enter message to be encrypted: ");
  fgets(message, MESSAGE_LEN+1, stdin);

  printf("Enter shift amount (1-25): ");
  scanf("%1d", &shift);

  encrypt(message, shift);

  puts(message);

  exit(EXIT_SUCCESS);
}

void encrypt(char *message, int shift)
{
  for (int i = 0; message[i] != '\0'; i++) {
    if (isalpha(message[i])) {
      if (message[i] >= 'A' && message[i] <= 'Z') {
        if ((message[i] += shift) > 'Z') {
          message[i] -= 26;
        }
      } else {
        if ((message[i] += shift) > 'z') {
          message[i] -=26;
        }
      }
    }
  }
}
