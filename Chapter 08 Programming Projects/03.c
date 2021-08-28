/* Modified version of repdigit which allows the user to enter more than one 
number to be tested for repeated digits (0 or less terminates the program) */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  bool digit_seen[10] = {false};
  int digit;
  long n;

  for (;;) {
    printf("Enter a number (0 or less to terminate): ");
    scanf("%ld", &n);
    if (n <= 0) {
      break;
    }

    while (n > 0) {
      digit = n % 10;
      if (digit_seen[digit])
        break;
      digit_seen[digit] = true;
      n /= 10;
    }

    if (n > 0)
      printf("Repeated digit\n");
    else
      printf("No repeated digit\n");
  }

  return 0;
}
