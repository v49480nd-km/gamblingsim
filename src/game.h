#ifndef GAME_H
#define GAME_H

#define DIE_SIDES 20

float getParlayWinPercentage(int* user_guesses);
float getWinPercentage(int user_guess);
int rollDie();

// figure out types later
void setNumDie(void);
void placeBet(int user_guess);

#endif
