#ifndef GAME_H
#define GAME_H

struct Player {
    int coins;
    unsigned int bet_amount;
    unsigned int bet_number;
    unsigned int num_of_flips;
};

double getWinPercentage(unsigned int);
int flipCoin(void); // to be used in generateFlips()
// figure out types later
void game(void);
void generateFlips(int*, const int);
void getBetAmount(struct Player*);
void getGuesses(int*, const int);
void getNumFlips(struct Player*); // TESTED
void placeBet(int);
void setNumFlips(void);

#endif
