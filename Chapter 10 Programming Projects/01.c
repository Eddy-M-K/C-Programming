/**********************************
 * Detects if a series of         *
 * brackets are nested properly   *
 *********************************/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);

int main(void) {
    bool nested_properly = true;
    char ch = '\0';

    printf("Enter parentheses and/or braces: ");
    for(int i = 0; (ch = getchar()) != '\n'; i++) {
        if (ch == '(' || ch == '{' || ch == '[') {
            push(ch);
        } else {
            char previous = pop();
            switch(ch) {
                case ')':
                    if (previous == '(') break;
                    else {
                        nested_properly = false;
                        break;
                    }
                case '}':
                    if (previous == '{') break;
                    else {
                        nested_properly = false;
                        break;
                    }
                case ']':
                    if (previous == '[') break;
                    else {
                        nested_properly = false;
                        break;
                    }
            }

            if (!nested_properly) {
                printf("Parentheses/braces are not nested properly.");
                return 0;
            };
        }
    }

    printf("Parentheses/braces are nested properly.");
    return 0;
}

void make_empty(void) {
    top = 0;
}

bool is_empty(void) {
    return top == 0;
}

bool is_full(void) {
    return top == STACK_SIZE;
}

void push(char ch) {
    if (is_full()) printf("Stack is full!");
    else contents[top++] = ch;
}

char pop(void) {
    if (is_empty()) {
        printf("Stack is empty!");
        return '\0';
    }
    else return contents[--top];
}
