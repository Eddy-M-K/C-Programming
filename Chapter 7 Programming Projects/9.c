//Displays a 12-hour time in 24-hour form

#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int h12, m12, h24;
  char A_P;

  printf("Enter a 12-hour time: ");
  scanf("%2d :%2d %c", &h12, &m12, &A_P);

  switch (toupper(A_P)) {
    case 'A':
      h24 = h12;
      break;
    case 'P':
      h24 = h12 + 12;
      break;
    default:
      printf("\aAn invalid time was entered");
      return 0;
  }
  printf("Equivalent 24-hour time: %d:%.2d", h24, m12);

  return 0;
}
