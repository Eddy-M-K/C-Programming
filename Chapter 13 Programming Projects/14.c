/**********************************
 * Checks if two words are        *
 * anagrams                       *
 *                                *
 *                                *
 **********************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define WORD_LEN 10

bool are_anagrams(const char *word1, const char *word2);

int main(void)
{
  char word1[WORD_LEN+1] = {0};
  char word2[WORD_LEN+1] = {0};
  char ch = '\0';
  bool is_anagram = false;
  bool newline_exists = false;

  printf("Enter first word: ");
  fgets(word1, WORD_LEN+1, stdin);

  for (int i = 0; word1[i] != '\0'; i++) {
    if (word1[i] == '\n') {
      newline_exists = true;
      break;
    }
  }

  if (!newline_exists) {
    while ((ch = getchar()) != '\n') ;
  }

  printf("Enter second word: ");
  fgets(word2, WORD_LEN+1, stdin);

  if (are_anagrams(word1, word2)) puts("The words are anagrams");
  else puts("The words are not anagrams");

  exit(EXIT_SUCCESS);
}

bool are_anagrams(const char *word1, const char *word2)
{
  char alphabet[26] = {0};

  for (; *word1 != '\0'; word1++) {
    alphabet[tolower(*word1) - 'a']++;
  }

  for (; *word2 != '\0'; word2++) {
    if (--alphabet[tolower(*word2) - 'a'] < 0) {
      return false;
    } 
  }

  for (int i = 0; i < 26; i++) {
    if (alphabet[i] != 0) return false;
  }

  return true;
}
