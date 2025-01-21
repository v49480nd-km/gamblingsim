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

    side_flipped = rand() % 2;

    return side_flipped;
}

void generateFlips(int* flipNums, const int num_of_flips) {
    for (int i = 0; i < num_of_flips; i++) {
        *flipNums[i] = flipCoin();
    }
}

void getBetAmount(struct Player* player) {
    unsigned int desired_amount;

    printf("Input bet amount: ");
    scanf("%u", &desired_amount);

    if (desired_amount > player->coins) {
        desired_amount = player->coins;
    } else if (desired_amount <= 0) {
        desired_amount = 1;
    }

    player->bet_amount = desired_amount;
}

void getGuesses(int* guessNums, const int num_of_flips) {
    for (int i = 0; i < num_of_flips; i++) {
        printf("Enter Guess [%d]", i+1);
        scanf("%d", guessNums[i]);
    }
}

void getNumFlips(struct Player* player) { // TESTED
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
    } while (loop_count < 10); // keep trying for 10 times
}

void game(void) {
    int* flipNums;
    int* guessNums;
    struct Player* player = malloc(sizeof(struct Player));
    player->coins = 500;
    player->bet_amount = 10; // obviously set by player each round

    while (player->coins > 0) {
        getNumFlips(player);

        flipNums = (int*)malloc(player->num_of_flips * sizeof(int));
        guessNums = (int*)malloc(player->num_of_flips * sizeof(int));

        generateFlips(flipNums, player->num_of_flips);
        getGuesses(guessNums, player->num_of_flips);
        printf(
            "Coins: %d\n" "Bet Amount: %d\n"
            "BET_NUMBER: %d\n" "Num of Flips: %d\n",
            player->coins, player->bet_amount,
            player->bet_number, player->num_of_flips
        );

        break;
    }
}
