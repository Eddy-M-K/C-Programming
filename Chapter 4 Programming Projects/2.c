#include<stdio.h>

int main(void)
{
  int n;
  printf("Enter a three-digit number: ");
  scanf("%d", &n);

  int n_first = n / 100, n_second = ((n % 100) / 10), n_third = ((n % 100) % 10);
  printf("The reversal is: %d%d%d\n", n_third, n_second, n_first);

  return 0;
}
