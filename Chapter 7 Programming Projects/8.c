/* Modified version of 8.c from Chapter 5 Programming Projects
User enters a 12 hour time and the program produces the closest departure time */

#include <stdio.h>
#include <ctype.h>
#define HOUR 60

int main(void) {
  int h12, m12, minutes;
  char AorP;

  printf("Enter a 12-hour time: ");
  scanf("%d :%d %c", &h12, &m12, &AorP);

  switch (toupper(AorP)) {
    case 'A': break;
    case 'P':
      h12 += 12;
      break;
    default:
      printf("\aA proper time was not entered.");
      return 0;
  }

  minutes = h12 * HOUR + m12;

  if (minutes <= HOUR * 8 + 51)
    printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
  else if (minutes <= HOUR * 9 + 43 + (((11 * HOUR + 19) - (9 * HOUR + 43)) / 2))
    printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
  else if (minutes <= HOUR * 11 + 19 + (((12 * HOUR + 47) - (11 * HOUR + 19)) / 2))
    printf("Closest departure time is 11:19 a.m., arriving at 11:31 p.m.");
  else if (minutes <= HOUR * 12 + 47 + (((14 * HOUR) - (12 * HOUR + 47)) / 2))
    printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
  else if (minutes <= HOUR * 14 + (((15 * HOUR + 45) - (14 * HOUR)) / 2))
    printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
  else if (minutes <= HOUR * 15 + 45 + (((19 * HOUR) - (15 * HOUR + 45)) / 2))
    printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
  else if (minutes <= HOUR * 19 + (((21 * HOUR + 45) - (19 * HOUR)) / 2))
    printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
  else if ((minutes > HOUR * 19 + (((21 * HOUR + 45) - (19 * HOUR)) / 2)) && (minutes <= 24 * HOUR))
    printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
  else printf("\aA valid time was not entered.");

  return 0;
}
