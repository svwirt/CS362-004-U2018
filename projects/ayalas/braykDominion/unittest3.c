#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <stdlib.h>

#define TESTCARD "isGameOver"

int main(){

  printf("----------------- Testing Function: %s ----------------\n", TESTCARD);

  struct gameState state;

  int k[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  initializeGame(2, k, 2, &state);

  state.supplyCount[province] = 0;

  int over = isGameOver(&state);
  printf("Game over:  #%d, expected = %d\n", over, 1);
  if(over == 1)
  	printf("Test passed\n");
  else
  	printf("Test failed\n");

  state.supplyCount[1] = 0;
  state.supplyCount[4] = 0;
  state.supplyCount[7] = 0;

  over = isGameOver(&state);
  
   printf("Game over:  #%d, expected = %d\n", over, 1);
  if(over == 1)
  	printf("Test Passed\n");
  else
  	printf("test fialed\n");

	printf("\n >>>>> SUCCESS: Testing complete %s <<<<<\n\n", TESTCARD);

  return 0;
}