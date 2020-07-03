#include <stdio.h>

int main(void)
{
  int full, tens;

  printf("Enter numerical grade: ");
  scanf("%d", &full);

  tens = full / 10;

  if (full > 100 || full < 0) {
    printf("\aError: An invalid grade was entered");
  }
  else
  {
    switch (tens) {
      case 0: case 1: case 2: case 3: case 4: case 5: {
        printf("Letter grade: F");
        break;
      }
      case 6: {
          printf("Letter grade: D"); break;
      }
      case 7: {
          printf("Letter grade C"); break;
      }
      case 8: {
          printf("Letter grade B"); break;
      }
      case 9: {
          printf("Letter grade A"); break;
      }
    }
  }
  return 0;
}
