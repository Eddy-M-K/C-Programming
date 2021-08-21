#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char operand);
char pop(void);

int main(void) {
  return 0;
}

void make_empty(void) {

}

bool is_empty(void) {

}

bool is_full(void) {
  return (top == STACK_SIZE);
}

void push(char operand) {
  if (is_full()) {
    printf("Expression is too complex");
    return EXIT_FAILURE;
  } else 
}

