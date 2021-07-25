#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(void);
int roll_dice(void);
bool play_game(void);

int main(void) {
    srand(time(NULL));

    int wins = 0, losses = 0;
    char response = '\0';

    do {
        if (play_game()) {
            printf("You win!");
            wins++;
        } else {
            printf("You lose!");
            losses++;
        }
        printf("\n\nPlay again? ");
        while ((response = getchar()) == '\n') {
            ;
        }
    } while (response == 'y' || response == 'Y');

    printf("Wins: %d\tLosses: %d", wins, losses);

    return 0;
}

int roll_dice(void) {
    return ((rand() % 6 + 1) + (rand() % 6 + 1));
}

bool play_game(void) {
    int sum = 0;
    sum = roll_dice();
    int point = sum;

    printf("You rolled: %d\n", sum);
    
    if (sum == 7 || sum == 11) {
        return true;
    } else if (sum == 8 || sum == 12) {
        return false;
    } else {
        printf("Your point is %d\n", sum);
    } 

    while (true) {
        sum = roll_dice();
        printf("You rolled: %d\n", sum);

        if (sum == point) {
            return true;
        } else if (sum == 7) {
            return false;
        }
    }
}
