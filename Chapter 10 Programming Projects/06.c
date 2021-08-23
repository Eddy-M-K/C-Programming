/******************************************
 * A calculator that uses the Reverse     *
 * Polish Notation (RPN)                  *
 *****************************************/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char operand);
char pop(void);

int main(void) {
  char ch = '\0';

  while (true) {
    printf("Enter an RPN expression: ");

    do {
      scanf(" %c", &ch);
      if (ch == 'q') exit(EXIT_SUCCESS);
      else if (ch >= 48 && ch <= 57) {
        push(ch - '0');
      } else {
          switch (ch) {
            case '+':
              push(pop() + pop());
              break;
            case '-':
              ;
              int negative = -pop();
              push(pop() + negative);
              break;
            case '*':
              push(pop() * pop());
              break;
            case '/':
              ;
              int divisor = pop();
              push(pop() / divisor);
              break;
            case '=':
              printf("Value of expression: %d\n", contents[--top]);
              make_empty();
              break;
            default: 
              break;
          }
      }
    } while (ch != '=');
  }

  return 0;
}

void make_empty(void) {
  top = 0;
}

bool is_empty(void) {
  return (top == 0);
}

bool is_full(void) {
  return (top == STACK_SIZE);
}

void push(char operand) {
  if (is_full()) {
    printf("Expression is too complex");
    exit(EXIT_FAILURE);
  } else contents[top++] = operand;
}

char pop(void) {
  if (top < 1) {
    printf("Not enough operands in expression");
    exit(EXIT_FAILURE);
  } else return contents[--top];
}
