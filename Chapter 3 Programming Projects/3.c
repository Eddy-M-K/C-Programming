#include<stdio.h>

int main(void)
{
  int GS1_prefix, Group_identifier, Publisher_code, Item_number, Check_Digit;

  printf("Enter ISBN: ");
  scanf("%d -%d -%d -%d -%d", &GS1_prefix, &Group_identifier, &Publisher_code, &Item_number, &Check_Digit);

  printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", GS1_prefix, Group_identifier, Publisher_code, Item_number, Check_Digit);

  return 0;
}
