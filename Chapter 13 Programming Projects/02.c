/*********************************
 * Improved version of textbook  *
 * example of a reminder program *
 *                               *
 *                               *
 *********************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[], int n);

int main(void)
{
  char reminders[MAX_REMIND][MSG_LEN+3];
  char month_day_time_str[20], msg_str[MSG_LEN+1], day_str[3], hour_str[3], minute_str[3];
  int day, month, i, j, num_remind = 0, hour, minute;

  while (true) {
    if (num_remind == MAX_REMIND) {
      printf("-- No space left --\n");
      break;
    }

    printf("Enter month/day, 24h time and reminder: ");
    
    scanf("%2d", &month);
    if (month < 0 || month > 12) {
      printf("Error\n");
      while (getchar() != '\n');
      continue;
    } else if (month == 0) break;

    scanf(" /%2d", &day);
    if (day < 0 || day > 31) {
      printf("Error\n");
      while (getchar() != '\n');
      continue;
    }

    sprintf(month_day_time_str, "\t%2d", month);
    strcat(month_day_time_str, "/");
    sprintf(day_str, "%.2d", day);
    strcat(month_day_time_str, day_str);
    strcat(month_day_time_str, "\t");

    scanf("%2d :%2d ", &hour, &minute);
    sprintf(hour_str, "\t\t%.2d", hour);
    sprintf(minute_str, "%.2d", minute);
    strcat(month_day_time_str, hour_str);
    strcat(month_day_time_str, ":");
    strcat(month_day_time_str, minute_str);
    strcat(month_day_time_str, "\t\t");

    read_line(msg_str, MSG_LEN);
    for (i = 0; i < num_remind; i++) {
      if (strcmp(month_day_time_str, reminders[i]) < 0) break;
    }

    for (j = num_remind; j > i; j--) {
      strcpy(reminders[j], reminders[j-1]);
    }

    strcpy(reminders[i], month_day_time_str);
    strcat(reminders[i], msg_str);
    num_remind++;
    printf("Added\n");
  }

  printf("\n\tMonth/Day\t\tTime\t\tReminder\n");
  for (i = 0; i < num_remind; i++) {
    printf(" %s\n", reminders[i]);
  }

  exit(EXIT_SUCCESS);
}

int read_line(char str[], int n) 
{
  int ch, i = 0;

  while ((ch = getchar()) != '\n') {
    if (i < n) str[i++] = ch;
  }
  str[i] = '\0';
  return i;
}
