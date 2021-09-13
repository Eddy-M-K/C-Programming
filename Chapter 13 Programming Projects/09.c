/*********************************
 * Computes the number of vowels *      
 * in a sentence                 *
 *                               *   
 *                               *
 *********************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define SENTENCE_LEN 30

int compute_vowel_count(const char *sentence);

int main(void) 
{
  char input[SENTENCE_LEN];
  int vowels = 0;

  printf("Enter a sentence: ");
  fgets(input, SENTENCE_LEN, stdin);

  vowels = compute_vowel_count(input);

  printf("Your sentence contains %d vowels.", vowels);

  exit(EXIT_SUCCESS);
}

int compute_vowel_count(const char *sentence) 
{
  int vowels = 0;

  for (int i = 0; i < strlen(sentence); i++) {
    switch(toupper(sentence[i])) {
      case 'A': case 'E': case 'I': case 'O': case 'U':
        vowels++;
        break;
      default:
      ;
    }
  }

  return vowels;
}
