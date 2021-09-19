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

  printf("Enter an RPN expression: ");
  fgets(expression, EXPR_LEN + 1, stdin);

  evaluate_RPN_expression(expression);

  exit(EXIT_SUCCESS);
}

int evaluate_RPN_expression(const char *expression)
{
  for (; *expression != '\0' && *expression != '='; expression++) {
    if (*expression == ' ') continue;
    else if (*expression == 'q') exit(EXIT_SUCCESS);
    else if ()
  }
}
