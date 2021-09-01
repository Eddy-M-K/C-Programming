/*********************************
 * Quick sort program which      *
 * utilizes pointers             *
 *                               *
 *                               *
 *********************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 10

void quicksort(int a[], int *low, int *high);
int *split(int a[], int *low, int *high);

int main(void) 
{
  int a[N];

  printf("Enter %d numbers to be sorted: ", N);
  for (int i = 0; i < N; i++) {
    scanf("%d", &a[i]);
  }

  int *low = &a[0], *high = &a[N-1];

  quicksort(a, low, high);

  printf("In sorted order: ");
  for (int j = 0; j < N; j++) {
    printf("%d ", a[j]);
  }

  printf("\n");

  exit(EXIT_SUCCESS);
}

void quicksort(int a[], int *low, int *high)
{
  int *middle;

  if (low >= high) return;

  middle = split(a, low, high);
  quicksort(a, low, middle-1);
  quicksort(a, middle+1, high);
}

int *split(int a[], int *low, int *high) 
{
  int part_element = *low;

  while (true) {
    while (low < high && part_element <= *high) {
      high--;
    }
    if (low >= high) break;
    *low++ = *high;

    while (low < high && *low <= part_element) {
      low++;
    }
    if (low >= high) break;
    *high-- = *low;
  }

  *high = part_element;
  return high;
}
