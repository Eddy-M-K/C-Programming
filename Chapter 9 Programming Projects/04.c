/* Modified version of Chapter 8 Programming Project which checks if two words are anagrams
Uses functions*/

#include <stdio.h>
#include <ctype.h>

int main();
void read_word(int counts[26], int count);
void equal_array(int counts1[26], int counts2[26]);

int main(void)
{
  int counts1[26] = {}, counts2[26] = {};

  read_word(counts1, 1);
  read_word(counts2, 2);

  equal_array(counts1, counts2);

  return 0;

}

void read_word(int counts[26], int count) {
  char ch;

  printf("Enter word %d: ", count);
    while ((ch = getchar()) != '\n') {
      if (isalpha(ch)) {
        counts[(tolower(ch) - 'a')]++;
      }
    }
}

void equal_array(int counts1[26], int counts2[26]) {
  for (int i = 0; i < 26; i++) {
    if (counts1[i] != counts2[i]) {
      printf("The words are not anagrams.\n");
      return;
    }
  }
    printf("The words are anagrams.\n");
    return;
}
