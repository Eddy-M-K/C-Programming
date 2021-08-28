/* A modified version of Programming Projects 8 from Chapter 5 so that the departure times are stored in an array and the arrival times are stored
in a second array - Displays closest departure and arrival times for the flight whose departure time is closest to that entered by the user */

#include <stdio.h>

int main(void) {
  int h24, m24, dh12, dm12, ah12, am12, total_minutes, departure[] = {480, 583, 679, 767, 840, 945, 1140, 1305}, arrival[] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
  char d_aorp, a_aorp;

  printf("Enter a 24-hour time: ");
  scanf("%d :%d", &h24, &m24);

  total_minutes = h24 * 60 + m24;

  for (h24 = 0; h24 <= 6; h24++) {
    if (total_minutes <= (departure[h24] + ((departure[h24 + 1] - departure[h24]) / 2))) {
      if (h24 == 3) {
        dh12 = 12;
        dm12 = 47;
        d_aorp = 'p';
      }
      else if (h24 <= 2) {
        dh12 = departure[h24] / 60;
        dm12 = departure[h24] % 60;
        d_aorp = 'a';
      }
      else {
        dh12 = (departure[h24] - 720) / 60;
        dm12 = (departure[h24] - 720) % 60;
        d_aorp = 'p';
      }

      if (h24 >= 2) {
        ah12 = (arrival[h24] - 720) / 60;
        am12 = (arrival[h24] - 720) % 60;
        a_aorp = 'p';
      }
      else {
        ah12 = arrival[h24] / 60;
        am12 = arrival[h24] % 60;
        a_aorp = 'a';
      }

      printf("Closest departure time is %d:%.2d %c.m., arriving at %d:%.2d %c.m.", dh12, dm12, d_aorp, ah12, am12, a_aorp);

      return 0;
    }
  }
  printf("Closest departure time is 9:45 p.m., arriving at 11:58p.m.");

  return 0;

}
