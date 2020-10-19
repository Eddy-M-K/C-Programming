//Calculates the power of x in a unique way

#include <stdio.h>

int main(void);
int power(int x, int n);

int main(void) {
  int x, n;

  printf("Enter the value of the base: ");
  scanf("%d", &x);
  printf("Enter the value of the exponent: ");
  scanf("%d", &n);

  printf("The value of the power is %d\n", power(x, n));

  return 0;
}

int power(int x, int n) {
  if (n == 0) {
    return 1;
  } else if (n % 2 == 0) {
      return power(x, n/2) * power(x, n/2);
  } else {
      return x * power(x, n - 1);
  }
}
