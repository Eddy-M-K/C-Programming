/*********************************
 * Modifed version of a program  *
 * which finds the maximum and   *  
 * minimum but with the use of   *
 * pointers                      *
 *********************************/

 #include <stdio.h>
 #include <stdlib.h>
 #include <stdbool.h>

 #define N 10

 void max_min(int a[], int *max, int *min);

 int main(void) 
 {
   int b[N], *i = b, *j = b+N, big, small;

   printf("Enter %d numbers: ", N);
   for (; i < j; i++) {
     scanf("%d", i);
   }

   max_min(b, &big, &small);

   printf("Largest: %d\n", big);
   printf("Smallest: %d\n", small);

   exit(EXIT_SUCCESS);
 }

 void max_min(int a[], int *max, int *min) 
 {
   int *i = a+1, *j = a+N;
   *max = *min = a[0];

   for (; i < j; i++) {
     if (*i > *max) {
       *max = *i;
     } else if (*i < *min) {
       *min = *i;
     }
   }
 }
