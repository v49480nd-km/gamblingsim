/*
  _____          __  __ ____  _      _____ _   _  _____    _____ _____ __  __ _    _ _            _______ ____  _____  
 / ____|   /\   |  \/  |  _ \| |    |_   _| \ | |/ ____|  / ____|_   _|  \/  | |  | | |        /\|__   __/ __ \|  __ \ 
| |  __   /  \  | \  / | |_) | |      | | |  \| | |  __  | (___   | | | \  / | |  | | |       /  \  | | | |  | | |__) |
| | |_ | / /\ \ | |\/| |  _ <| |      | | | . ` | | |_ |  \___ \  | | | |\/| | |  | | |      / /\ \ | | | |  | |  _  / 
| |__| |/ ____ \| |  | | |_) | |____ _| |_| |\  | |__| |  ____) |_| |_| |  | | |__| | |____ / ____ \| | | |__| | | \ \ 
\_____/_/    \_\_|  |_|____/|______|_____|_| \_|\_____| |_____/|_____|_|  |_|\____/|______/_/    \_\_|  \____/|_|  \_\
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#include "game.h"

double getWinPercentage(int num_of_flips) {
    return pow((double)0.5, (double)num_of_flips);
}

int flipCoin(void) {
    int side_flipped;

    srand(time(NULL));

    side_flipped = rand() % 2;

    return side_flipped;
}

void generateFlips(int* flipNums, const int num_of_flips) {
    for (int i = 0; i < num_of_flips; i++) {
        flipNums[i] = flipCoin();
    }
}

void getBetAmount(struct Player* player) {
    printf("Input bet amount: ");
    scanf("%d", &desired_amount);

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

void game(void) {
    int numFlips;
    int* flipNums;
    int* guessNums;
    struct Player* player = malloc(sizeof(struct Player));
    player->coins = STARTING_AMOUNT;
    player->bet_amount = 10; // obviously set by player each round

    while (player->coins > 0) {
        int loop_count = 0;
        int num_flips;

        do {
            loop_count++;
            printf("Number of die (1, 5, 10): ");
            scanf("%d", &num_flips);

            if (num_flips == 1 || num_flips == 5 || num_flips == 10) {
                break;
            }
        } while (loop_count < 10); // keep trying for 10 times

        flipNums = (int*)malloc(num_flips * sizeof(int));
        guessNums = (int*)malloc(num_flips * sizeof(int));

        printf("Num flips: %d\n", num_flips);
        generateFlips(flipNums, num_flips);
        getGuesses(guessNums, num_flips);
        printf(
            "Coins: %d\n" "Bet Amount: %d\n"
            "BET_NUMBER: %d\n",
            player->coins, player->bet_amount,
            player->bet_number
        );

        break;
    }
}
