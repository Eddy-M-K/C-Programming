/******************************************
 * Displays a user-inputted number        *
 * in seven-segment style                 *
 *****************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGITS 20

const int segments[10][7] = {{1, 1, 1, 1, 1, 1},
                             {0, 1, 1},
                             {1, 1, 0, 1, 1, 0, 1},
                             {1, 1, 1, 1, 0, 0, 1},
                             {0, 1, 1, 0, 0, 1, 1},
                             {1, 0, 1, 1, 0, 1, 1},
                             {1, 0, 1, 1, 1, 1, 1},
                             {1, 1, 1},
                             {1, 1, 1, 1, 1, 1, 1},
                             {1, 1, 1, 1, 0, 1, 1}};
char digits[4][4 * MAX_DIGITS];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void) {
  int position = 0;
  char ch = '\0';

  clear_digits_array();

  printf("Enter a number: ");
  
  do {
    scanf("%c", &ch);

    switch (ch) {
      case '0':
        process_digit(0, position);
        break;
      case '1':
        process_digit(1, position);      
        break;
      case '2':
        process_digit(2, position);
        break;
      case '3':
        process_digit(3, position);
        break;
      case '4':
        process_digit(4, position);
        break;
      case '5':
        process_digit(5, position);
        break;
      case '6':
        process_digit(6, position);
        break;
      case '7':
        process_digit(7, position);
        break;
      case '8':
        process_digit(8, position);
        break;
      case '9':
        process_digit(9, position);
        break;
      default:
        position--;
    }

    position++;
    // if (position > MAX_DIGITS) {
    //   printf("Too many digits!");
    //   exit(EXIT_FAILURE);
    // }
  } while (ch != '\n');

  print_digits_array();

  exit(EXIT_SUCCESS);
}

void clear_digits_array(void) {
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4 * MAX_DIGITS; j++) {
      digits[i][j] = ' ';
    }
  }
}

void process_digit(int digit, int position) {
  if (segments[digit][0]) digits[1][4 * position + 1] = '_';
  if (segments[digit][1]) digits[2][4 * position + 2] = '|';
  if (segments[digit][2]) digits[3][4 * position + 2] = '|';
  if (segments[digit][3]) digits[3][4 * position + 1] = '_';
  if (segments[digit][4]) digits[3][4 * position]     = '|';
  if (segments[digit][5]) digits[2][4 * position]     = '|';
  if (segments[digit][6]) digits[2][4 * position + 1] = '_'; 
}

void print_digits_array(void) {
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < MAX_DIGITS * 4; j++) {
      printf("%c", digits[i][j]);
    }

    printf("\n");
  }
}