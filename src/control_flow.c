#include <stdio.h>

#include "control_flow.h"
#include "game_utils.h"

unsigned int getNumDie(void) {
    unsigned int num_chose;

    printf("Number of die (1 - 4): ");
    scanf("%u", &num_chose);

    if (num_chose > 4) {
        num_chose = 4;
    } else if (num_chose < 1) {
        num_chose = 1;
    }

    return num_chose;
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

void startGame(void) {
    Player Player;
    Player.coins = 500;
    Player.bet_amount = 10; // obviously set by player each round
    unsigned int game_running = 1;

    while (Player.coins > 0) {
    }
}
