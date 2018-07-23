#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <stdlib.h>

#define TESTCARD "whoseTurn"

int main(){

    int newCards = 0;
    int discarded = 1;
    int xtraCoins = 0;
    int shuffledCards = 0;

    int i, j, m;
    int handpos = 0, choice1 = 0, choice2 = 0, choice3 = 0, bonus = 0;
    int remove1, remove2;
    int seed = 1000;
    int numPlayers = 2;
    int thisPlayer = 0;
	struct gameState G, testG;
	int k[10] = {adventurer, embargo, village, minion, mine, cutpurse,
			sea_hag, tribute, smithy, council_room};

	// initialize a game state and player cards
	initializeGame(numPlayers, k, seed, &G);
  	memcpy(&testG, &G, sizeof(struct gameState));

  	int turn = 0;
  	int whose = 0;

	printf("----------------- Testing Card: %s ----------------\n", TESTCARD);

  	for (i = 0; i < 15; i++){
    	G.whoseTurn = turn;
    	whose = whoseTurn(&G);
    	printf("player #%d, expected = %d\n", whose, turn);
    	if(whose != turn)
    		printf("Test failed");
    	else
    		printf("Test passed");

    	turn++;
  }
  printf("\n >>>>> SUCCESS: Testing complete %s <<<<<\n\n", TESTCARD);
  return 0;
}