/**********************************
 * Calculator that uses the       *
 * Reverse Polish Notation (RPN)  *
 *                                *
 *                                *
 **********************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define EXPR_LEN 200
#define STACK_SIZE 100

int contents[STACK_SIZE] = {0};
int top = 0;

int evaluate_RPN_expression(const char *expression);
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char operand);
char pop(void);

int main(void)
{
  char expression[EXPR_LEN + 1] = {0};
  int val = 0;

  do {
    printf("Enter an RPN expression: ");
    fgets(expression, EXPR_LEN + 1, stdin);
    val = evaluate_RPN_expression(expression);
    make_empty(); 
    printf("Value of expression: %d\n", val);
  } while (expression[0] != 'q');

  exit(EXIT_SUCCESS);
}

int evaluate_RPN_expression(const char *expression)
{
  for (; *expression != '\0'; expression++) {
    if (*expression == ' ') continue;
    else if (*expression == 'q') exit(EXIT_SUCCESS);
    else if (*expression >= '0' && *expression <= '9') {
      push(*expression - '0');
    } else {
      switch(*expression) {
        case '+':
          push(pop() + pop());
          break;
        case '-': ;
          int negative = -pop();
          push(pop() + negative);
          break;
        case '*':
          push(pop() * pop());
          break;
        case '/': ;
          int divisor = pop();
          push(pop() / divisor);
          break;
        case '=':          
          return contents[--top];
          break;
      }
    }
  }

  return 1;
}

void make_empty(void)
{
  top = 0;
}

bool is_empty(void)
{
  return (top == 0);
}

bool is_full(void)
{
  return (top == STACK_SIZE);
}

void push(char operand)
{
  if (is_full()) {
    printf("Expression is too complex");
    exit(EXIT_FAILURE);
  } else contents[top++] = operand;
}

char pop(void)
{
  if (top < 1) {
    printf("Not enough operands in expression");
    exit(EXIT_FAILURE);
  } else return contents[--top];
}
