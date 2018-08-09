// Testing for village

#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include "rngs.h"
#include <stdlib.h>

#define TESTCARD "Remodel"

int main() {
	int newActions= 0;
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
			sea_hag, remodel, smithy, council_room};

	// initialize a game state and player cards
	initializeGame(numPlayers, k, seed, &G);

	printf("----------------- Testing Card: %s ----------------\n", TESTCARD);

	printf("TEST 1:  +1 card -1 discard\n");

	// copy the game state to a test case
	memcpy(&testG, &G, sizeof(struct gameState));
	choice1 = 1;
	cardEffect(remodel, choice1, choice2, choice3, &testG, handpos, &bonus);

	int trashed = 1;
	newCards = 1;
	xtraCoins = 0;
	printf("hand count = %d, expected = %d\n", testG.handCount[thisPlayer], G.handCount[thisPlayer] + newCards - discarded);
	if (testG.handCount[thisPlayer] == G.handCount[thisPlayer] + newCards - discarded)
		printf("Test passed\n");
	else
		printf("test failed\n");

	printf("deck count = %d, expected = %d\n", testG.deckCount[thisPlayer] - trashed, G.deckCount[thisPlayer] - newCards + shuffledCards);
	if(testG.deckCount[thisPlayer] - trashed == G.deckCount[thisPlayer] - newCards + shuffledCards)
		printf("Test passed\n");
	else
		printf("test failed\n");

	printf("discard count = %d, expected = %d\n", testG.discardCount[thisPlayer], G.discardCount[thisPlayer]);
	if(testG.discardCount[thisPlayer] == G.discardCount[thisPlayer])
		printf("Test passed\n");
	else
		printf("test failed\n");

	printf("coins = %d, expected = %d\n", testG.coins, G.coins + xtraCoins);
	if(testG.coins == G.coins + xtraCoins)
		printf("Test passed\n");
	else
		printf("test failed\n");


	// printf("TEST 2: +2 actions\n");

	// // copy the game state to a test case
	// memcpy(&testG, &G, sizeof(struct gameState));
	// choice1 = 1;
	// cardEffect(remodel, choice1, choice2, choice3, &testG, handpos, &bonus);

	// newActions=2;
	// newCards = 0;
	// xtraCoins = 0;

	// printf("actions count= %d, expected = %d\n", testG.numActions, G.numActions + newActions - 1);
	// if(testG.numActions == G.numActions + newActions - 1)
	// 	printf("Test passed\n");
	// else
	// 	printf("test failed\n");

	// printf("hand count = %d, expected = %d\n", testG.handCount[thisPlayer], G.handCount[thisPlayer] + newCards - discarded);
	// if (testG.handCount[thisPlayer] == G.handCount[thisPlayer] + newCards - discarded)
	// 	printf("Test passed\n");
	// else
	// 	printf("test failed\n");

	// printf("deck count = %d, expected = %d\n", testG.deckCount[thisPlayer], G.deckCount[thisPlayer] - newCards + shuffledCards);
	// 	if(testG.deckCount[thisPlayer] == G.deckCount[thisPlayer] - newCards + shuffledCards)
	// 	printf("Test passed\n");
	// else
	// 	printf("test failed\n");



	

	printf("\n >>>>> SUCCESS: Testing complete %s <<<<<\n\n", TESTCARD);


	return 0;
}


