//Counts the number of vowels in a sentence

#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char ch;
  int vowels = 0;

  printf("Enter a sentence: ");

  do {
    ch = getchar();
    switch (toupper(ch)) {
      case 'A': case 'E': case 'I': case 'O': case 'U':
        vowels++;
        break;
      default:
        break;
    }
  } while (ch != '\n');

  printf("Your sentence contains %d vowels.", vowels);

  return 0;
}
