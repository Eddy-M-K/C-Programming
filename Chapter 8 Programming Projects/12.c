/* A modified version of Programming Project from Chapter 7 so that the SCRABBLE values of the letters are stored in an array
Computes the value of a word by the summing the value of its letters according to the SCRABBLE Crossword Game */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char ch;
  int val = 0, character[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

  printf("Enter a word: ");

  while ((ch = getchar()) != '\n') {
    ch = toupper(ch);
    val += character[ch - 'A'];
  }
  printf("Scrabble value: %d\n", val);

  return 0;
}
