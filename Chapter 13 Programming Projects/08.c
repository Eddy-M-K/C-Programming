/*********************************
 * Returns the SCRABBLE value    *
 * of a string                   * 
 *                               *
 *                               *  
 *********************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define WORD_LEN 20

int compute_scrabble_value(const char *word);

int main(void) 
{
  char word[WORD_LEN] = {0};
  int value = 0;

  printf("Enter a word: ");
  fgets(word, WORD_LEN, stdin);
  value = compute_scrabble_value(word);
  printf("Scrabble value: %d", value);

  exit(EXIT_SUCCESS);
}

int compute_scrabble_value(const char *word)
{
  int value = 0;

  for (int i = 0; i < strlen(word); i++) {
    if (isalpha(word[i])) {
      switch(toupper(word[i])) {
        case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
          value += 1;
          break;
        case 'D': case 'G':
          value += 2;
          break;
        case 'B': case 'C': case 'M': case 'P':
          value += 3;
          break;
        case 'F': case 'H': case 'V': case 'W': case 'Y':
          value += 4;
          break;
        case 'K':
          value += 5;
          break;
        case 'J': case 'X':
          value += 8;
          break;
        case 'Q': case 'Z':
          value += 10;
          break;
      }
    }
  }

  return value;
}
