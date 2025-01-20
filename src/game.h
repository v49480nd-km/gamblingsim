#ifndef GAME_H
#define GAME_H

typedef struct Player {
    int coins;
    unsigned int bet_amount;
    unsigned int bet_number;
    unsigned int num_of_flips;
} Player;

double getWinPercentage(unsigned int);
int flipCoin(void);
// figure out types later
void getBetAmount(Player*);
void getNumFlips(void);
void placeBet(int);
void setNumFlips(void);
void game(void);

#endif
