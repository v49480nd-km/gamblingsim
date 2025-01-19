# Gambling Simulator

this is to test the nature of gambling my making a Over/Under based gambling

it is a one player game where the player gets to decide between 1 - 4 20 sided die
they are then prompted to put a bet on each individual die simply stating whether they
think the guess will be a over a number of their choice Ex:
1 DIE: Please enter a number that you think the die will roll higher than

>> 4

Once a bet has been placed the user inputs a number of coins they will have to bet
The player will automatically start out with 500 points like zombies.

Then if you are under you obviously lose that bet, if its the same number you lose/gain
nothing. If you are over the percentage of how much you are given + bet will
be determined by the percentage out of 20

you pick 17
17 / 20 is 85%
you would make then 1.85x on your bet placed

but if you have multiple die they are parlayed together
where you multiply the win% of all die then subtract that from 100%

EX:
15/20 * 17/20 * 5/20 * 10/20 = 0.0796875

you would win 99x your initial bet

but as parlays are if one of the die are wrong you lose all bets placed since it is one bet

        The game is over when you lose all your money. Their is no winning just winnings

This game is starting off TUI and then I will fork it to GUI version
