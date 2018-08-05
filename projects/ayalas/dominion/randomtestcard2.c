#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

#define NUM_TESTS 100
#define GAME_LIMIT 6

// Randomly test smitht cars
int main() {

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
        beforeActions = 0,
        afterActions = 0,
        failed=0,
        passed=0;

    //struct gameState state;
    struct gameState * gState;

    printf("Running Random Card Test for Village\n");

    // Runs NUM_TESTS.
    for( i=0; i<NUM_TESTS; i++ )
    {
        // random number of players
        players = rand() % 4;
        seed = rand();      //pick random seed
        gState = malloc(sizeof(struct gameState));

        //initialize Gamestate
        initializeGame(players, k, seed, gState);

        //Pick random deck size, discardCount, and handCount
        gState->deckCount[player] = rand() % MAX_DECK; 
        gState->discardCount[player] = rand() % MAX_DECK;
        gState->handCount[player] = rand() % MAX_HAND;

        beforeActions = gState->numActions;
        beforeHand = gState->handCount[player];
        beforeDeck = gState->deckCount[player];
        beforeDiscard = gState->discardCount[player];
        cardEffect(village, 1, 1, 1, gState, 0, 0);
        afterHand = gState->handCount[player];
        afterDeck = gState->deckCount[player];
        afterDiscard = gState->discardCount[player];
        afterActions = gState->numActions;
         
         if(afterHand == beforeHand){
            printf("Hand Test %d passed: before-%d after-%d\n", i, beforeHand, afterHand);
            passed++;
         }
         else{
            printf("Hand Test %d failed: before-%d after-%d\n", i, beforeHand, afterHand);
            failed++;
         }

         if(afterDeck + 1 == beforeDeck){
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


         if(afterActions == beforeActions + 2){
            printf("Actions Test %d passed: before-%d after-%d\n", i, beforeActions, afterActions);
            passed++;
         }
         else{
            printf("Actions Test %d failed: before-%d after-%d\n", i, beforeActions, afterActions);
            failed++;
         }


        // printf("beforeHand %d\n", beforeHand);
        // printf("afterHand %d\n", afterHand);
        // printf("beforeDeck %d\n", beforeDeck);
        // printf("afterDeck %d\n", afterDeck); 
        // printf("beforeDiscard %d\n", beforeDiscard);
        // printf("afterDiscard %d\n", afterDiscard);
        // printf("\nbeforeActions %d\n", beforeActions);
        // printf("afterActions %d\n\n", afterActions);

        free(gState);

    
    }

    printf("\n\n");
    printf("Status: %d failured and %d passed tests\n",
           failed,
           passed);

    printf("%d games run\n",
           NUM_TESTS);

}