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

int prompt(char *sentence[]);
void reverse(char *sentence[], int words);
void print(char *sentence[], int words);

int main(void)
{
  char *sentence[WORD_LEN+1] = (char [SENT_LEN][WORD_LEN]) {0}; 
  int words = 0;

  words = prompt(sentence);
  reverse(sentence, words);
  print(sentence, words);

  exit(EXIT_SUCCESS);
}

int prompt(char *sentence[])
{
  int words = 0;
  char current = 0;

  printf("Enter a sentence: ");

  for (; words < SENT_LEN; words++) {
    for (int j = 0; j < WORD_LEN; j++)  {
      if (current = getchar() == '\n') break;

      sentence[words][j] = current;
    }
  }

  return words;
}

void reverse(char *sentence[], int words)
{
  for (int i = 0, j = words; i < j; i++, j--) {
    char temp[WORD_LEN+1] = sentence[i];
    strcpy(sentence[i], sentence[j]);
    strcpy(sentence[j], temp);
  }
}

void print(char *sentence[], int words)
{
  for (int i = 0; i < words; i++) {
    printf("%s ", sentence[i]);
  }
}
