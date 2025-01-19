#include <stdlib.h>
#include <time.h>

#include "game.h"

float getParlayWinPercentage(int* user_guesses) {
    //
}

float getWinPercentage(int user_guess) {
    float win_percentage = (user_guess / DIE_SIDES) + 1;
    return win_percentage;
}

int rollDie() {
    int number_rolled;

    srand(time(NULL));

    number_rolled = rand() % SIDES + 1;

    return number_rolled;
}
