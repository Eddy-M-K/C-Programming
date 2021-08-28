/* Reads 5 quiz grades for each of 5 students then computes the total score and average score
 for each student as well as the average score, high score, and low score for each quiz */

#include <stdio.h>

int main(void)
{
  int i, n, m, array[5][5], student_total = 0, highest_score, lowest_score, total_score;
  float student_average, total_average;

  for (m = 1; m <= 5; m++) {
    printf("Enter students %d's 5 quiz grades in order: ", m);
    for (i = 0; i <= 4; i++) {
      scanf("%d", &n);
      array[m - 1][i] = n;
    }
  }
  printf("\n");

  for (n = 1; n <= 5; n++) {
    printf("Student %d:\n", n);
    for (m = 0, student_total = 0; m <= 4; m++) {
      student_total += array[n - 1][m];
    }
    student_average = (float) (student_total) / 5.0f;
    printf("Total score: %d\nAverage score: %.2f\n\n", student_total, student_average);
  }

  for (n = 0; n <= 4; n++) {
    printf("Test %d:\n", n + 1);
    for (m = 0, highest_score = array[m][n]; m <= 4; m++) {
      if (array[m][n] >= highest_score) {
        highest_score = array[m][n];
      }
    }
    for (m = 0, lowest_score = array[m][n]; m <= 4; m++) {
      if (array[m][n] <= lowest_score) {
        lowest_score = array[m][n];
      }
    }
    for (m = 0, total_score = 0; m <= 4; m++) {
      total_score += array[m][n];
    }
    total_average = (float) (total_score) / 5.0f;
    printf("Average score: %.2f\nHighest score: %d\nLowest score: %d\n\n", total_average, highest_score, lowest_score);
  }

  return 0;
}
