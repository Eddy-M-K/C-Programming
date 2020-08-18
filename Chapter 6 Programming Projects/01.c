/* Finds the largest nonnegative number out of user-inputted numbers
- program terminates when 0 or a negative number is entered */

#include <stdio.h>

int main(void) {
  float number, largest = 0.0f;

  do {
    printf("Enter a number: ");
    scanf("%f", &number);

    if (number > largest) {
      largest = number;
    }
  } while (number > 0);

  printf("The largest number entered was %f", largest);

return 0;
}
