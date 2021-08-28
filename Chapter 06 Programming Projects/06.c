//Lists all even squares up to a user-inputted limit

#include <stdio.h>

int main(void) {

  int n;

  printf("Enter a max limit you want to check all even squares up to: ");
  scanf("%d", &n);

  for (int square_root = 2; square_root * square_root <= n; square_root += 2) {
    printf("%d\n", square_root * square_root);
  }

return 0;
}
