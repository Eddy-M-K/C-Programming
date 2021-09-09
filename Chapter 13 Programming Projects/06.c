/*********************************
 * Provides the number           *
 * associated with a user        *
 * inputted planet name          *
 * with no case sensitivity      *
 *********************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define NUM_PLANETS 9

bool compare(char *planet, const char *user);

int main(int argc, char *argv[])
{
  char *planets[] = {"Mercury", "Venus", "Earth",
                      "Mars", "Jupiter", "Saturn",
                      "Uranus", "Neptune", "Pluto"};

  int i, j;

  for (i = 1; i < argc; i++) {
    for (j = 0; j < NUM_PLANETS; j++) {
      if (compare(planets[j], argv[i])) {
        printf("%s is planet %d\n", argv[i], j+1);
        break;
      }
    }

    if (j == NUM_PLANETS) printf("%s is not a planet\n", argv[i]);
  }
}

bool compare(char *planet, const char *user) 
{
  for (char *end = planet + strlen(planet); planet < end; planet++, user++) {
    if (toupper(*planet) != toupper(*user)) return false;
  }

  return true;
}
