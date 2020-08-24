//Incomplete

#include <stdio.h>

int main(void) {
  int h24, m24, h12, m12, total_minutes, departure[] = {480, 583, 679, 767, 840, 945, 1140, 1305}, arrival[] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
  char d_aorp, a_aorp;

  printf("Enter a 24-hour time: ");
  scanf("%d :%d", &h24, &m24);

  total_minutes = h24 * 60 + m24;

  for (h24 = 0; h24 <= 7; h24++) {
    if (total_minutes <= ((departure[h24 + 1] - departure[h24]) / 2)) {
      if (departure[h24] >= 720 && departure[h24] <= 779) {
        h12 = (departure[h24] - 720) / 60;
        m12 = (departure[h24] - 720) % 60;
        d_aorp = 'p';
      }
      else if {
        h12 = departure[h24] / 60;
        m12 = departure[h24] % 60;
        d_aorp = 'a';
      }
      else if {
        h12 = departure[h24] / 60;
        m12 = departure[h24] % 60;
        d_aorp = 'a';
      }

      if (arrival[h24] >= 720) {
        a_aorp = 'p';
      }
      else a_aorp = 'a';

      break;
    }
  }

  printf("Closest departure time is %d:%.2d %c.m., arriving at %d:%.2d %c.m.", h12, m12, d_aorp, h12, m12, a_aorp);

  return 0;
}
