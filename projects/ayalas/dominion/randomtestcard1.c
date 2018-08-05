#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

#define NUM_TESTS 100
#define GAME_LIMIT 6

// testing Smithy card
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
        failed=0,
        passed=0;


    struct gameState * gState;

    printf("Running Random Card Test for Smithy\n");

    // Runs 100 tests
    for( i=0; i<NUM_TESTS; i++ )
    {
        // random number of players
        players = rand() % 4;
        seed = rand();      
        gState = malloc(sizeof(struct gameState));

        //initialize Gamestate
        initializeGame(players, k, seed, gState);

        // random deck, discard, and hand count
        gState->deckCount[player] = rand() % MAX_DECK; 
        gState->discardCount[player] = rand() % MAX_DECK;
        gState->handCount[player] = rand() % MAX_HAND;

        // get hand, deck and discard before
        beforeHand = gState->handCount[player];
        beforeDeck = gState->deckCount[player];
        beforeDiscard = gState->discardCount[player];

        // run smithy card
        cardEffect(smithy, 1, 1, 1, gState, 0, 0);

        // get hand deck and discard after 
        afterHand = gState->handCount[player];
        afterDeck = gState->deckCount[player];
        afterDiscard = gState->discardCount[player];
         
         // there should be two more cards in the hand after
         if(afterHand == beforeHand + 2){
            printf("Hand Test %d passed: before-%d after-%d\n", i, beforeHand, afterHand);
            passed++;
         }
         else{
            printf("Hand Test %d failed: before-%d after-%d\n\n", i, beforeHand, afterHand);
            failed++;
         }

         // the deck should have three less cards
         if(afterDeck + 3 == beforeDeck){
            printf("Deck Test %d passed: before-%d after-%d\n", i, beforeDeck, afterDeck);
            passed++;
         }
         else{
            printf("Deck Test %d Test %d failed: before-%d after-%d\n\n", i, beforeDeck, afterDeck);
            failed++;
         }

         // discard should be the same
         if(afterDiscard == beforeDiscard){
            printf("Discard Test %d passed: before-%d after-%d\n", i, beforeDiscard, afterDiscard);
            passed++;
         }
         else{
            printf("Discard Test %d failed: before-%d after-%d\n", i, beforeDiscard, afterDiscard);
            failed++;
         }


        free(gState);

    
    }

    printf("\n\n");
    printf("Status: %d failured and %d passed tests\n",
           failed,
           passed);

    printf("%d games run\n",
           NUM_TESTS);

}