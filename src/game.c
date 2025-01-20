#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#include "game.h"

double getWinPercentage(unsigned int num_of_flips) {
    double win_percentage = pow((double)0.5, (double)num_of_flips);
    return win_percentage;
}

int flipCoin(void) {
    int side_flipped;

    srand(time(NULL));

    number_rolled = rand() % 2;

    return side_flipped;
}

void getBetAmount(Player* player) {
    unsigned int desired_amount;

    printf("Input bet amount: ");
    scanf("%u", &desired_amount);

    if (desired_amount > Player->coins) {
        desired_amount = Player->coins;
    } else if (desired_amount <= 0) {
        desired_amount = 1;
    }

    Player->bet_amount = desired_amount;
}

void getNumFlips(Player* player) {
    unsigned int num_chose; // starts at zero to start switch case 
    unsigned int loop_count = 0;

    do {
        loop_count++;
        printf("Number of die (1, 5, 10): ");
        scanf("%u", &num_chose);

        if (num_chose == 1 || num_chose == 5 || num_chose == 10) {
            player->num_of_flips = num_chose;
            break;
        }
    } while (1 || loop_count < 11); // keep trying for 10 times
}

void game(void) {
    Player Player;
    Player.coins = 500;
    Player.bet_amount = 10; // obviously set by player each round

    while (Player.coins > 0) {
        getNumDie(Player);
        // for num of die ask bet amount and bet number
    }
}
