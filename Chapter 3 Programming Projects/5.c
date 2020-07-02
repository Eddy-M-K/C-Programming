#include<stdio.h>

int main(void)
{
  int one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen;

  printf("Enter the numbers from 1 to 16 in any order: ");
  scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &one, &two, &three, &four, &five, &six, &seven, &eight, &nine, &ten, &eleven, &twelve, &thirteen, &fourteen, &fifteen, &sixteen);

  int row_sum1 = one + two + three + four, row_sum2 = five + six + seven + eight, row_sum3 = nine + ten + eleven + twelve, row_sum4 = thirteen + fourteen + fifteen + sixteen;
  int column_sum1 = one + five + nine + thirteen, column_sum2 = two + six + ten + fourteen, column_sum3 = three + seven + eleven + fifteen, column_sum4 = four + eight + twelve + sixteen;
  int diagonal_sum1 = one + six + eleven + sixteen, diagonal_sum2 = four + seven + ten + thirteen;

  printf("%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n", one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen);
  printf("Row sums: %d %d %d %d\n", row_sum1, row_sum2, row_sum3, row_sum4);
  printf("Column sums: %d %d %d %d\n", column_sum1, column_sum2, column_sum3, column_sum4);
  printf("Diagonal sums: %d %d\n", diagonal_sum1, diagonal_sum2);

  return 0;
}
