//Calculates the average word length for a sentence (includes punctuation)

#include <stdio.h>

int main(void)
{
  float characters = 0, words = 1;
  char ch;

  printf("Enter a sentence: ");

  while ((ch = getchar()) != '\n') {
    if (ch == ' ') {
      words++;
      continue;
    }
    characters++;
  }
  printf("Average word length: %.1f", characters/words);

  return 0;
}
