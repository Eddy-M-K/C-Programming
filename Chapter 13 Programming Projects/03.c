/*********************************
 * Deals a random hand of cards  *
 * and prints out the full names *
 * of the cards it deals         *
 *                               *
 *********************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void)
{
  bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
  int num_cards, rank, suit;
  const char *rank_code[] = {"Two ", "Three ", "Four ", "Five ", "Six ", "Seven ", "Eight ", "Nine ", "Ten ", "Jack ", "Queen ", "King ", "Ace "};
  const char *suit_code[] = {"clubs", "diamonds", "hearts", "spades"};
  char sentence[18];

  srand((unsigned) time(NULL));

  printf("Enter number of cards in hand: ");
  scanf("%d", &num_cards);

  printf("Your hand:\n");
  while (num_cards > 0) {
    suit = rand() % NUM_SUITS;
    rank = rand() % NUM_RANKS;
    if (!in_hand[suit][rank]) {
      in_hand[suit][rank] = true;
      num_cards--;
      strcpy(sentence, rank_code[rank]);
      strcat(sentence, "of ");
      strcat(sentence, suit_code[suit]);

      printf("%s\n", sentence);
    }
  }

  exit(EXIT_SUCCESS);
}
