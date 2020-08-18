//Indicates which of two dates comes earlier

#include <stdio.h>

int main(void) {

  int month1, day1, year1, month2, day2, year2;

  printf("Enter first date (mm/dd/yy): ");
  scanf("%d /%d /%d", &month1, &day1, &year1);

  printf("Enter second date (mm/dd/yy): ");
  scanf("%d /%d /%d", &month2, &day2, &year2);


  if ((month1 == 1 || month1 == 3 || month1 == 5 || month1 == 7 || month1 == 8 || month1 == 10 || month1 == 12) //checks for cases where the months are 31 days in length
      || (month2 == 1 || month2 == 3 || month2 == 5 || month2 == 7 || month2 == 8 || month2 == 10 || month2 == 12))
  {
    if (day1 > 31 || day2 > 31) {
      printf("An invalid date was entered");
      } else if (year2 < year1)
          printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month2, day2, year2, month1, day1, year1);
      else if (year1 < year2)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month1, day1, year1, month2, day2, year2);
      else if (month2 < month1)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month2, day2, year2, month1, day1, year1);
      else if (month1 < month2)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month1, day1, year1, month2, day2, year2);
      else if (day2 < day1)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month2, day2, year2, month1, day1, year1);
      else if (day1 < day2)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month1, day1, year1, month2, day2, year2);
  } else if ((month1 == 4 || month1 == 6 || month1 == 9 || month1 == 11) || (month2 == 4 || month2 == 6 || month2 == 9 || month2 == 11))   //checks for cases where the months are 30 days in length
  {
      if (day1 > 30 || day2 > 30) {
        printf("An invalid date was entered");
      } else if (year2 < year1)
            printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month2, day2, year2, month1, day1, year1);
        else if (year1 < year2)
          printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month1, day1, year1, month2, day2, year2);
        else if (month2 < month1)
          printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month2, day2, year2, month1, day1, year1);
        else if (month1 < month2)
          printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month1, day1, year1, month2, day2, year2);
        else if (day2 < day1)
          printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month2, day2, year2, month1, day1, year1);
        else if (day1 < day2)
          printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month1, day1, year1, month2, day2, year2);
  } else if (month1 == 2 || month2 == 2)   //checks if the month is February
  {
      if (day1 > 29 || day2 > 29) {
        printf("An invalid date was entered");
      } else if (year2 < year1)
          printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month2, day2, year2, month1, day1, year1);
      else if (year1 < year2)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month1, day1, year1, month2, day2, year2);
      else if (month2 < month1)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month2, day2, year2, month1, day1, year1);
      else if (month1 < month2)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month1, day1, year1, month2, day2, year2);
      else if (day2 < day1)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month2, day2, year2, month1, day1, year1);
      else if (day1 < day2)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month1, day1, year1, month2, day2, year2);
    }
  return 0;
}
