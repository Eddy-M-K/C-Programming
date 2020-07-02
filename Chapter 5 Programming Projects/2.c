#include <stdio.h>

int main(void) {
  int h, m;

  printf("Enter a 24-hour time: ");
  scanf("%d :%d", &h, &m);

  if (h <= 12)
    printf("Equivalent 12-hour time: %d:%.2d AM", h, m);
  else if (h <= 23)
    printf("Equivalent 12-hour time: %d:%.2d PM", h - 12, m);
  else if (h == 24 && m == 0)
    printf("Equivalent 12-hour time: 00:00 AM");
  else printf("\aA valid 24-hour time was not entered");

  return 0;
}
