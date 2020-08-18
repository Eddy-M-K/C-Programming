//Modified version of reverse.c which uses a macro with (sizeof(a) / sizeof(a[0])) for the array length

#include <stdio.h>
#define N 10
#define ARRAY_LENGTH (sizeof(a) / sizeof(a[0]))

int main(void)
{
  int a[N], i;

  printf("Enter %d numbers: ", N);
  for (i = 0; i < (int) ARRAY_LENGTH; i++)
    scanf("%d", &a[i]);

  printf("In reverse order:");
  for (i = (int) ARRAY_LENGTH - 1; i >= 0; i--)
    printf(" %d", a[i]);
  printf("\n");

  return 0;
}
