#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

#define NUM_TESTS 100
#define GAME_LIMIT 6

// Randomly test mine card
int main() {
    // Create array of cards in the game
    int k[10] = {
                  adventurer,
                  gardens,
                  embargo,
                  village,
                  minion,
                  mine,
                  cutpurse, 
                  sea_hag,
                  tribute,
                  smithy
                };

    // Create integers for misc use
    int i, j,
        players,
        seed,
        player = 0,
        beforeHand = 0,
        afterHand = 0,
        beforeDeck = 0,
        afterDeck = 0,
        beforeDiscard = 0,
        afterDiscard = 0,
        failed=0,
        passed=0;

    //struct gameState state;
    struct gameState * gState;

    printf("Running Random Card Test for Smithy\n");

    // Runs NUM_TESTS.
    for( i=0; i<NUM_TESTS; i++ )
    {

        players = rand() % 4;
        seed = rand();      //pick random seed
        gState = malloc(sizeof(struct gameState));

        //initialize Gamestate
        initializeGame(players, k, seed, gState);

        //Initiate valid state variables
        //Pick random deck size out of MAX DECK size
        gState->deckCount[player] = rand() % MAX_DECK; 
        gState->discardCount[player] = rand() % MAX_DECK;
        gState->handCount[player] = rand() % MAX_HAND;

        beforeHand = gState->handCount[player];
        beforeDeck = gState->deckCount[player];
        beforeDiscard = gState->discardCount[player];
        cardEffect(smithy, 1, 1, 1, gState, 0, 0);
        afterHand = gState->handCount[player];
        afterDeck = gState->deckCount[player];
        afterDiscard = gState->discardCount[player];
         
         if(afterHand == beforeHand + 2){
            printf("Hand Test %d passed: before-%d after-%d\n", i, beforeHand, afterHand);
            passed++;
         }
         else{
            printf("Hand Test %d failed: before-%d after-%d\n\n", i, beforeHand, afterHand);
            failed++;
         }

         if(afterDeck + 3 == beforeDeck){
            printf("Deck Test %d passed: before-%d after-%d\n", i, beforeDeck, afterDeck);
            passed++;
         }
         else{
            printf("Deck Test %d Test %d failed: before-%d after-%d\n\n", i, beforeDeck, afterDeck);
            failed++;
         }

         if(afterDiscard == beforeDiscard){
            printf("Discard Test %d passed: before-%d after-%d\n", i, beforeDiscard, afterDiscard);
            passed++;
         }
         else{
            printf("Discard Test %d failed: before-%d after-%d\n", i, beforeDiscard, afterDiscard);
            failed++;
         }
        // printf("beforeDiscard %d\n", beforeDiscard);
        // printf("afterDiscard %d\n", afterDiscard);


        free(gState);

    
    }

    printf("\n\n");
    printf("Status: %d failured and %d passed tests\n",
           failed,
           passed);

    printf("%d games run\n",
           NUM_TESTS);

}