/*
  _____          __  __ ____  _      _____ _   _  _____    _____ _____ __  __ _    _ _            _______ ____  _____  
 / ____|   /\   |  \/  |  _ \| |    |_   _| \ | |/ ____|  / ____|_   _|  \/  | |  | | |        /\|__   __/ __ \|  __ \ 
| |  __   /  \  | \  / | |_) | |      | | |  \| | |  __  | (___   | | | \  / | |  | | |       /  \  | | | |  | | |__) |
| | |_ | / /\ \ | |\/| |  _ <| |      | | | . ` | | |_ |  \___ \  | | | |\/| | |  | | |      / /\ \ | | | |  | |  _  / 
| |__| |/ ____ \| |  | | |_) | |____ _| |_| |\  | |__| |  ____) |_| |_| |  | | |__| | |____ / ____ \| | | |__| | | \ \ 
\_____/_/    \_\_|  |_|____/|______|_____|_| \_|\_____| |_____/|_____|_|  |_|\____/|______/_/    \_\_|  \____/|_|  \_\
*/

#ifndef GAME_H
#define GAME_H

#define STARTING_AMOUNT 500

struct Player {
    int coins;
    int bet_amount;
    int bet_number;
};

double getWinPercentage(int);
int flipCoin(void); // to be used in generateFlips()
// figure out types later
void game(void);
void generateFlips(int*, const int);
void getBetAmount(struct Player*);
void getGuesses(int*, const int);
void placeBet(int);
void setNumFlips(void);

#endif
