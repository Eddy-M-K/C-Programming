/* Modified version of Programming Project 4 from Chapter 7 which additionally 
labels its output - Translates an alphabetic phone number into numeric form */

#include <stdio.h>

int main(void)
{
  int i = -1;
  char phone_number[15];

  printf("Enter phone number: ");

  do {
    i++;
    phone_number[i] = getchar();
  } while (phone_number[i] != '\n');
  int m = i;

  printf("In numeric form: ");
  for (i = 0; i <= m; i++) {
    switch (phone_number[i]) {
      case 'A': case 'B': case 'C':
        printf("2");
        break;
      case 'D': case 'E': case 'F':
        printf("3");
        break;
      case 'G': case 'H': case 'I':
        printf("4");
        break;
      case 'J': case 'K': case 'L':
        printf("5");
        break;
      case 'M': case 'N': case 'O':
        printf("6");
        break;
      case 'P': case 'R': case 'S':
        printf("7");
        break;
      case 'T': case 'U': case 'V':
        printf("8");
        break;
      case 'W': case 'X': case 'Y': case 'Z':
        printf("9");
        break;
      default:
        printf("%c", phone_number[i]);
    }
  }
  return 0;
}
