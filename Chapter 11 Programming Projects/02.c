/**************************************
 * Version 2 of Chapter 5 Programming *
 * Project 08.c                       *
 *                                    *
 * Pointers are now used              *
 **************************************/   

#include <stdio.h>
#include <stdlib.h>

#define HOUR 60
#define D1 (8 * HOUR + 51)
#define D2 (9 * HOUR + 43)
#define D3 (11 * HOUR + 19)
#define D4 (12 * HOUR + 47)
#define D5 (14 * HOUR)
#define D6 (15 * HOUR + 45)
#define D7 (19 * HOUR)
#define D8 (21 * HOUR + 45)
#define D9 (24 * HOUR)

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void) {
  int desired_time = 0, h24 = 0, m24 = 0;
  int departure_time = 0, arrival_time = 0;
  char departure_a_or_m = '\0', arrival_a_or_m = '\0';

  printf("Enter a 24-hour time: ");
  scanf("%d :%d", &h24, &m24);

  desired_time = h24 * HOUR + m24;

  find_closest_flight(desired_time, &departure_time, &arrival_time);

  if (departure_time == 25 * HOUR) {
    printf("A valid time was not entered.");
    exit(EXIT_FAILURE);
  }

  if ((departure_time / 60) >= 12) {
    departure_a_or_m = 'p';
  } else departure_a_or_m = 'a';

  if ((arrival_time / 60) >= 12) {
    arrival_a_or_m = 'p';
  } else arrival_a_or_m = 'a';  

  printf("Closest departure time is %.2d:%.2d %c.m., arriving at %.2d:%.2d %c.m.", (departure_time / 60) % 12 ? (departure_time / 60) % 12 : 12, departure_time % 60, departure_a_or_m, 
                                                                          (arrival_time / 60) % 12, arrival_time % 60, arrival_a_or_m);

  exit(EXIT_SUCCESS);
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time) {
  if (desired_time <= D1) {
    *departure_time = 8 * HOUR;
    *arrival_time = 10 * HOUR + 16;
  } else if (desired_time <= D2 + ((D3 - D2) / 2)) {
    *departure_time = 9 * HOUR + 43;
    *arrival_time = 11 * HOUR + 52;    
  } else if (desired_time <= D3 + ((D4 - D3) / 2)) {
    *departure_time = 11 * HOUR + 19;
    *arrival_time = 13 * HOUR + 31;    
  } else if (desired_time <= D4 + ((D5 - D4) / 2)) {
    *departure_time = 12 * HOUR + 47;
    *arrival_time = 15 * HOUR;    
  } else if (desired_time <= D5 + ((D6 - D5) / 2)) {
    *departure_time = 14 * HOUR;
    *arrival_time = 16 * HOUR + 8;    
  } else if (desired_time <= D6 + ((D7 - D6) / 2)) {
    *departure_time = 15 * HOUR + 45;
    *arrival_time = 17 * HOUR + 55;    
  } else if (desired_time <= D7 + ((D8 - D7) / 2)) {
    *departure_time = 19 * HOUR;
    *arrival_time = 21 * HOUR + 20;    
  } else if ((desired_time > D7 + ((D8 - D7) / 2)) && (desired_time <= D9)) {
    *departure_time = 21 * HOUR + 45;
    *arrival_time = 23 * HOUR + 58;    
  } else {
    *departure_time = 25 * HOUR;
    *arrival_time = 25 * HOUR;    
  }
}
