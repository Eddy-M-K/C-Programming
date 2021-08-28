//Tests whether two words are anagrams

#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int alphabet[26] = {0}, character;
  char ch;

  printf("Enter first word: ");
  while ((ch = getchar()) != '\n') {
    if (isalpha(ch)) {
      alphabet[(tolower(ch) - 'a')]++;
    }
  }

  printf("Enter second word: ");
  while ((ch = getchar()) != '\n') {
    if (isalpha(ch)) {
      alphabet[(tolower(ch) - 'a')]--;
    }
  }

  for (int i = 0; i <= 25; i++) {
    if (alphabet[i] != 0) {
      printf("The words are not anagrams.");
      return 0;
    }
  }

  printf("The words are anagrams.\n");

  return 0;

}
