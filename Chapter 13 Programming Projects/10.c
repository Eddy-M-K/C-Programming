/*********************************
 * Reformats a user-inputted     *
 * name                          *
 *                               *
 *                               *
 *********************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define NAME_LEN 20

void reverse_name(char *name);

int main(void)
{
  char name[NAME_LEN + 2];
  
  printf("Enter a first and last name: ");
  fgets(name, NAME_LEN, stdin);

  reverse_name(name);
  puts(name);

  exit(EXIT_SUCCESS);
}

void reverse_name(char *name)
{
  char first[3] = {0}, last[NAME_LEN - 2] = {0};

  int index = 0;

  for (; index < NAME_LEN && name[index] != '\0'; index++) {
    if (name[index] != ' ') {
      sprintf(first, "%c.", name[index]);
      index++;
      while (name[index] != ' ') {
        index++;
      }
      break;
    }
  }

  while (name[index] == ' ') {
    index++;
  }

  for (int i = 0; i < (NAME_LEN - 3) && name[index] != ' ' && name[index] != '\n' && name[index] != '\0'; i++, index++) {
    last[i] = name[index];
  }

  strcpy(name, last);
  strcat(name, ", ");
  strcat(name, first);
}
