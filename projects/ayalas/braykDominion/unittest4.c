#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <stdlib.h>

#define TESTCARD "whoseTurn"

int main(){

    struct gameState G;
    int k[10] = {smithy,adventurer,gardens,embargo,cutpurse,mine,ambassador,
        outpost,baron,tribute};
    
	// initialize a game state and player cards
	initializeGame(2, k, 5, &G);


  	int turn = 0;
  	int whose = 0;

	printf("----------------- Testing Function: %s ----------------\n", TESTCARD);
    int i;
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
