#ifndef GAME_H
#define GAME_H

struct Player {
    int coins;
    unsigned int bet_amount;
    unsigned int bet_number;
    unsigned int num_of_flips;
};

double getWinPercentage(unsigned int);
int flipCoin(void);
// figure out types later
void getBetAmount(struct Player*);
void getNumFlips(struct Player*); // TESTED
void placeBet(int);
void setNumFlips(void);
void game(void);

#endif
