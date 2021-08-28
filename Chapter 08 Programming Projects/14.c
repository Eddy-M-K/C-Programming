//Reverses the words in a sentence

#include <stdio.h>

int main(void) {
  char terminator, ch, sentence[100];
  int max, word_max, counter, new_word;

  printf("Enter a sentence: ");

  for (max = 0; ch = getchar() ; max++) {
    if ((ch == '.') || (ch == '?') || (ch == '!')) {
      terminator = ch;
      break;
    }
    sentence[max] = ch;
  }

  printf("Reversal of sentence: ");

  for (counter = max - 1, word_max = max - 1;;) {
    if (sentence[counter - 1] == ' ') {
      for (new_word = counter; counter <= word_max; counter++) {
        putchar(sentence[counter]);
      }
      printf(" ");
      word_max = new_word - 2;
      counter = word_max;
      continue;
    }
    if (counter == 0) {
      for (; counter <= word_max; counter++) {
        putchar(sentence[counter]);
      }
      break;
    }
    counter--;
  }
  printf("%c\n", terminator);

  return 0;
}
