//Lists the largest and smallest number out of 4 user-inputted numbers

#include <stdio.h>

int main(void) {
  int n1, n2, n3, n4,
      l1, s1, //l1 is the largest of n1 and n2 while s1 is the smallest of n1 and n2
      l2, s2, //l2 is the largest of n3 and n4 while s2 is the smallest of n3 and n4
      largest, smallest; //largest is the largest number of all 4 numbers while smallest is the smallest number of all 4 numbers

  printf("Enter four integers: ");
  scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

  (n1 >= n2) ? (l1 = n1) : (l1 = n2);
  (n1 <= n2) ? (s1 = n1) : (s1 = n2);

  (n3 >= n4) ? (l2 = n3) : (l2 = n4);
  (n3 <= n4) ? (s2 = n3) : (s2 = n4);

  (l1 >= l2) ? (largest = l1) : (largest = l2);
  (s1 <= s2) ? (smallest = s1) : (smallest = s2);

  printf("Largest: %d\nSmallest: %d", largest, smallest);
  return 0;
}
