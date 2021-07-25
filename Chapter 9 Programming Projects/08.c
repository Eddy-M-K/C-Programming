#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(void);
int roll_dice(void);
bool play_game(void);

int main(void) {
    srand(TIME(NULL));

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
        scanf("%c", &response);
    } while (response == 'y' || reponse == 'Y');

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
        return TRUE;
    } else if (sum == 8 || sum == 12) {
        return FALSE;
    } else {
        printf("Your point is %d\n", sum);
    } 

    while (TRUE) {
        sum = roll_dice();
        printf("You rolled: %d\n", sum);

        if (sum == point) {
            return TRUE;
        } else if (sum == 7) {
            return FALSE;
        }
    }
}
