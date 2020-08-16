//Evaluates an expression from left to right

#include <stdio.h>

int main(void)
{
  float n, answer;
  char operator;

  printf("Enter an expression: ");

  scanf("%f", &answer);

  while ((operator = getchar()) != '\n') {
    scanf("%f", &n);
    switch (operator) {
      case '+':
        answer += n;
        break;
      case '-':
        answer -= n;
        break;
      case '*':
        answer *= n;
        break;
      case '/':
        answer /= n;
        break;
      default: break;
    }
  }
  printf("Value of expression: %f", answer);

  return 0;
}
