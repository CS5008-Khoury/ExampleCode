#ifndef GUESSINGGAME_H
#define GUESSINGGAME_H

#include <stdbool.h>
#include <stdlib.h>

#define DEFAULT_MAX_ATTEMPTS 10
#define DEFAULT_MIN 1
#define DEFAULT_MAX 100
#define HUMAN 1
#define COMPUTER 0

typedef struct {
    int *guesses;
    int attempts;
    int maxAttempts;
    int playerType;
    int min;
    int max;
} GameState;

GameState *initializeGameState(int maxAttempts, int playerType, int min, int max);
void freeGameState(GameState *gameState);

int getRandomNumber(int min, int max);
int getInput(void);
bool runGame(int randomNumber, GameState *gameState);
void giveFeedback(int randomNumber, bool found, GameState *gameState);
void start(void);

void feedback(int state); // prints too high or too low


#endif // GUESSINGAME_H