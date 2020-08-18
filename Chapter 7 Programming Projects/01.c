/* An improved version of square.c in Given Examples
Remove comment /* from section you would like to test
Prints a table of squares using a while statement */

#include <stdio.h>

int main(void) {

/* Testing with normal integers:
  int i, n;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);

  i = 1;
  while (i <= n) {
    printf("%20d%20d\n", i, i * i);
    i++;
  }
*/

/* Testing with short integers:
  short i, n;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%hd", &n);

  i = 1;
  while (i <= n) {
    printf("%20hd%20hd\n", i, i * i);
    i++;
  }
*/

/* Testing with long integers:
  long i, n;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%ld", &n);

  i = 1;
  while (i <= n) {
    printf("%20ld%20ld\n", i, i * i);
    i++;
  }
*/

  return 0;
}
