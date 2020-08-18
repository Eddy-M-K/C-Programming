#include<stdio.h>

int main(void)
{
  float x;

  printf("Enter x-value for polynomial: ");
  scanf("%f", &x);

  printf("The value of the polynomial is %f\n", (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6);

  return 0;
}
