#include<stdio.h>

int main(void)
{
  int n;
  printf("Enter a two-digit number: ");
  scanf("%d", &n);

  int n_first = n / 10;
  int n_last = n % 10;
  printf("The reversal is: %d%d\n", n_last, n_first);

  return 0;
}
