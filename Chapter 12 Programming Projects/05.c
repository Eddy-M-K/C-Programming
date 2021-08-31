/*********************************
 * Reverses the words in a       *
 * sentence but with the use of  *
 * pointers                      *
 *                               *
 *********************************/

#include <stdio.h>
#include <stdlib.h>

#define N 100

char *get_message_end(char *array);
void print_reversal(char *end, char *beginning);

int main(void) 
{
  char message[N];
  char *array = message;
  char *end = NULL;

  end = get_message_end(array);
  print_reversal(end, array);

  exit(EXIT_SUCCESS);
}

// Returns pointer to end of an array containing sentence
char *get_message_end(char *array) 
{
  char *end = array, ch = '\0';

  printf("Enter a sentence: ");

  for (; end != array + N; end++) {
    ch = getchar();

    if ((ch == '.') || (ch == '?') || (ch == '!')) {
      *end = ch;
      break;
    } else *end = ch;
  } 

  return end;
}

// Prints the reversal of the sentence
void print_reversal(char *end, char *beginning)
{
  char terminator = *end--;

  for (; end >= beginning; end--) {
    if (*end == ' ') putchar(*end);
    else {
      char *temp = end;

      do {
        --temp;
      } while (*(temp-1) != ' ' && temp != beginning);

      char *print = temp;

      for (; print <= end; print++) {
        putchar(*print);
      }
      
      end = temp;
    }
  }

  putchar(terminator);
}
