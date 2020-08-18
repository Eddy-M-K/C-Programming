//Computes a Universal Product Code check digit or checks whether a Universal Product Code is valid

#include<stdio.h>

int main(void)
{
  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, k,
      first_sum, second_sum, total, option;

  printf("Would you like to compute a UPC check digit or check whether a full UPC code is valid?\n\nPress 0 for UPC check digit calculation\t\t\tPress 1 for Validation of UPC code\n"); //Asks for user input
  scanf("%d", &option);

  switch (option) {
    case 0:
      printf("UPC check digit computation has been selected.\nEnter the first (single) digit: ");
      scanf("%1d", &d);
      printf("Enter first group of five digits: ");
      scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
      printf("Enter second group of five digits: ");
      scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

      first_sum = d + i2 + i4 + j1 + j3 + j5;
      second_sum = i1 + i3 + i5 + j2 + j4;
      total = 3 * first_sum + second_sum;

      printf("\nCheck digit: %d", 9 - ((total - 1) % 10));
      break;

    case 1:
      printf("UPC check digit validation has been selected.\nEnter the first (single) digit: ");
      scanf("%1d", &d);
      printf("Enter first group of five digits: ");
      scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
      printf("Enter second group of five digits: ");
      scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
      printf("Enter the last (single) digit: ");
      scanf("%1d", &k);

      first_sum = d + i2 + i4 + j1 + j3 + j5;
      second_sum = i1 + i3 + i5 + j2 + j4;
      total = 3 * first_sum + second_sum;

      if (k == (9 - ((total - 1) % 10)))
        printf("\nVALID");
      else
        printf("\nNOT VALID");
      break;

    default: printf("\a\nA valid option was not selected; terminating program");
      break;
  }
  return 0;
}
