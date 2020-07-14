#include <stdio.h>

int main(void) {

  int days, starting_days;

  printf("Enter number of days in month: ");
  scanf("%d", &days);
  if (days > 31) {
    printf("\aAn invalid number of days was entered. Aborting program.");
    return 0;
  }

  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &starting_days);
  if (starting_days > 7) {
    printf("\aAn invalid starting day was enterd. Aborting program.");
    return 0;
  }

  printf("\n");

  for (int indents = starting_days - 1; indents != 0; indents--) {
    printf("   ");
  }

  for (int i = 1, last_day = 7 - starting_days + 1; i <= days; i++) {
    printf("%2d ", i);

    if ((i - last_day) % 7 == 0) {
      printf("\n");
    }
  }

return 0;
}
