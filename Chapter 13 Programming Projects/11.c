/*********************************
 * Calculates the average word   *
 * length for a sentence         *
 *                               *
 *                               *
 *********************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define SEN_LEN 100

double compute_average_word_length(const char *sentence);

int main(void)
{
  char sentence[SEN_LEN] = {0};
  double word_length = 0;

  printf("Enter a sentence: ");
  fgets(sentence, SEN_LEN, stdin);

  word_length = compute_average_word_length(sentence);

  printf("Average word length: %.3lf", word_length);

  exit(EXIT_SUCCESS);
}

double compute_average_word_length(const char *sentence)
{
  double total_char_count = 0;
  double word_count = 0;

  for (; *sentence != '\0'; sentence++) {
    if (isalpha(*sentence)) {
      word_count++;
      total_char_count;
      sentence++;

      while (*sentence != ' ' && *sentence != '\0') {
        total_char_count++;
        sentence++;
      }
    }
  }

  return (total_char_count / word_count);
}
