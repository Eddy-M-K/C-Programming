//Finds the square root of a positive floating-point number using Newton's method

#include <stdio.h>
#include <math.h>

int main(void)
{
  double x, y = 1, avg = 1;

  printf("Enter a positive number: ");
  scanf("%lf", &x);

  do {
    y = avg;
    avg = ((x/y + y) / 2);
  } while (fabs(y - avg) >= (0.00001 * y));

  printf("Square root: %lf\n", avg);

  return 0;
}
