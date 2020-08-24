/* Outputs a message with the Caesar cipher (replaces each letter in a
message with another letter that is a fixed number of positions later) */

#include <stdio.h>

int main(void) {
  int i, j, shift;
  char ch, message[80];

  printf("Enter message to be encrypted: ");
  for (i = 0; (ch = getchar()) != '\n'; i++) {
    message[i] = ch;
  }

  printf("Enter shift amount (1-25): ");
  scanf("%d", &shift);

  printf("Encrypted message: ");

  for (j = 0; j < i; j++) {
    if (message[j] >= 65 && message[j] <= 90) {
      message[j] = ((message[j] - 'A') + shift) % 26 + 'A';
      putchar(message[j]);
    }
    else if (message[j] >= 97 && message[j] <= 122) {
      message[j] = ((message[j] - 'a') + shift) % 26 + 'a';
      putchar(message[j]);
    }
    else {
      putchar(message[j]);
    }
  }

  return 0;
}
