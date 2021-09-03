/*********************************
 * Program that finds the        *
 * smallest and largest in a     *
 * series of words               *
 *                               *
 *********************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define STR_LEN 10

int main(void)
{
  char sentence[STR_LEN+1] = {0}, smallest_word[STR_LEN+1] = {0}, largest_word[STR_LEN+1] = {0};

  printf("Enter word: ");
  gets(sentence);
  strcpy(smallest_word, sentence);
  strcpy(largest_word, sentence);

  while (strlen(sentence) != 4) {
    printf("Enter word: ");
    gets(sentence);

    if (strcmp(sentence, smallest_word) < 0) strcpy(smallest_word, sentence);
    else if (strcmp(sentence, largest_word) > 0) strcpy(largest_word, sentence);
  }

  printf("\nSmallest word: %s\n", smallest_word);
  printf("Largest word: %s", largest_word);

  exit(EXIT_SUCCESS);
}
