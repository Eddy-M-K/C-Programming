/* An improvement of Programming Project 9 in Chapter 5. Asks user for any
number of dates until he/she inputs 0/0/0 then displays the earliest date. */

#include <stdio.h>

int main(void) {
  int month, day, year, min_month = 12, min_day = 31, min_year = 99;

  while (1) {
    printf("Enter a  date (mm/dd/yy): ");
    scanf("%d /%d /%d", &month, &day, &year);

    if (month == 0 && day == 0 && year == 0) {
      printf("%.2d/%.2d/%.2d is the earliest date", min_month, min_day, min_year);
      return 0;
    }

    switch (month) {
      case 1: case 3: case 5: case 7: case 8: case 10: case 12: {
        if (day < 1 || day > 31) {
          printf("\aAn invalid date was entered. Aborting.");
          return 0;
        }
      break;
      }

      case 4: case 6: case 9: case 11: {
        if (day < 1 || day > 30) {
          printf("\aAn invalid date was entered. Aborting.");
          return 0;
        }
      break;
      }

      case 2:
        if (day < 1 || day > 28) {
          printf("\aAn invalid date was entered. Aborting.");
          return 0;
        }
      break;
    }

    if (year < min_year) {
      min_year = year;
      min_month = month;
      min_day = day;
    }
    else if (year == min_year && month < min_month) {
      min_year = year;
      min_month = month;
      min_day = day;
    }
    else if (year == min_year && month < min_month && day < min_day) {
      min_year = year;
      min_month = month;
      min_day = day;
    }
  }
}
