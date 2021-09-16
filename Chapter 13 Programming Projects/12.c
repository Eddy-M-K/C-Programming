/*********************************
 * Reverses the words in a       *
 * sentence using a two          *
 * dimensional array             *
 *                               *
 *********************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define WORD_LEN 20
#define SENT_LEN 30

int prompt(char sentence[][WORD_LEN+1]);
void print_reverse(char sentence[][WORD_LEN+1], int words);

int main(void)
{
  char sentence[SENT_LEN][WORD_LEN+1] =  {0}; 
  int words = 0;

  words = prompt(sentence);
  print_reverse(sentence, words);

  exit(EXIT_SUCCESS);
}


int prompt(char sentence[][WORD_LEN+1])
{
  int words = 0;
  char current = 0;

  printf("Enter a sentence: ");

  while (words < SENT_LEN) {
    for (int j = 0; j < WORD_LEN; j++)  {
      current = getchar();
      if (current == '\n' || current == ' ') break;
      else sentence[words][j] = current;
    }
    words++;

    if (current == '\n')  break;
  }

  return words;
}

void print_reverse(char sentence[][WORD_LEN+1], int words)
{
  for (int i = words - 1; i >= 0; i--) {
    printf("%s ", sentence[i]);
  }
}
