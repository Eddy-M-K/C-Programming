//Uses a selection sort with recursion to sort a series of integers

#include <stdio.h>

#define array_max 10
//Can specify max number of numbers to sort 

void selection_sort(int a[], int n);

int main()
{
  int a[array_max], i;

  printf("Enter %d numbers: ", array_max);
  for (i = 0; i < array_max; i++) {
    scanf("%d", &a[i]);
  }

  selection_sort(a, array_max);

  for (i = 0; i < array_max; i++) {
    printf("%d ", a[i]);
  }

  return 0;
}

void selection_sort(int a[], int n)
{
  int i = 0, largest = 0, larg_pos;
  if (n == 0) return;

  for (; i < n; i++) {
    if (largest <= a[i]) {
      largest = a[i];
      larg_pos = i;
    }
  }
  a[larg_pos] = a[n-1];
  a[n-1] = largest;

  selection_sort(a, n - 1);
}
