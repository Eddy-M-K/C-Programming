#include<stdio.h>

int main(void)
{
  float x;

  printf("Enter x-value for polynomial: ");
  scanf("%f", &x);

  printf("The value of the polynomial is %f\n", ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);

  return 0;
}
