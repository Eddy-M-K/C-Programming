//Converts a message into B1FF-speak

#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int i, m;
  char ch, message[100];

  printf("Enter a message: ");

  for (i = 0; (ch = getchar()) != '\n'; i++) {
    message[i] = ch;
  }

  printf("B1FF-speak: ");

  for (m = 0; m < i; m++) {
    switch (toupper(message[m])) {
      case 'A': printf("4"); break;
      case 'B': printf("8"); break;
      case 'E': printf("3"); break;
      case 'I': printf("1"); break;
      case 'O': printf("0"); break;
      case 'S': printf("5"); break;
      default: printf("%c", toupper(message[m]));
    }
  }
  printf("!!!!!!!!!");

  return 0;
}
