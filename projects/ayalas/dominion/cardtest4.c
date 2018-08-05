

#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include "rngs.h"
#include <stdlib.h>

#define TESTCARD "adventurer"

int main() {
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

	//d = G.deckCount[thisPlayer];

	initializeGame(numPlayers, k, seed, &G);
	

	printf("----------------- Testing Card: %s ----------------\n", TESTCARD);


	




			G.deck[thisPlayer][0] = steward;
			G.deck[thisPlayer][1] = copper;
			G.deck[thisPlayer][2] = duchy;
			G.deck[thisPlayer][3] = estate;
			G.deck[thisPlayer][4] = copper;
			

			G.hand[thisPlayer][0] = adventurer;
			G.hand[thisPlayer][1] = great_hall;
			G.hand[thisPlayer][2] = copper;
			G.hand[thisPlayer][3] = duchy;
			G.hand[thisPlayer][4] = minion;

			testG.deckCount[thisPlayer]= 5;
			testG.handCount[thisPlayer]=5;
			int preDeck = 5;
			int preHand = 5;
			int postDeck = G.handCount[thisPlayer];
			int postHand;

			// copy the game state to a test case
			memcpy(&testG, &G, sizeof(struct gameState));

			printf("Test 1: deck/hand count");
			printf("deck count = %d, expected = %d\n", testG.deckCount[thisPlayer], postDeck - 2);
			if(preDeck == postDeck - 2)
				printf("Test passed\n");
			else
				printf("test failed\n");	


			printf("hand count = %d, expected = %d\n", testG.handCount[thisPlayer], postHand + 2);
			if(preHand == postHand + 2)
				printf("Test passed\n");
			else
				printf("test failed\n");
			

	

	printf("\n >>>>> SUCCESS: Testing complete %s <<<<<\n\n", TESTCARD);


	return 0;
}


