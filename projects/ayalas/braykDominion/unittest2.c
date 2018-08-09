#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <stdlib.h>

#define TESTFUNCTION "compare"


// int compare(const void* a, const void* b) {
//   if (*(int*)a > *(int*)b)
//     return 1;
//   if (*(int*)a < *(int*)b)
//     return -1;
//   return 0;
// }

int main() {
	printf("----------------- Testing Function: %s ----------------\n", TESTFUNCTION);

	int a= 1;
	int b= 2;
	int c= 2;
	int d= 0;
	int e= 0;
	int f= -1;
	int g= -1;

	// if both numbers are zero, test should return zero
	if(compare((void*)d, (void*)e) == 0)
		printf("TEST 1 SUCCESSFULLY COMPLETED");
	else
		printf("TEST 1 FAILED");

	// if there are equal positive numbers, test should return zero
	if(compare((void*)b, (void*)c) == 0)
		printf("TEST 2 SUCCESSFULLY COMPLETED");
	else
		printf("TEST 2 FAILED");

	// if there are equal negative numbers, test should return zero
	if(compare((void*)f, (void*)g) == 0)
		printf("TEST 3 SUCCESSFULLY COMPLETED");
	else
		printf("TEST 3 FAILED");

	// if the first number is zero and the second number is negative, return 1
	if(compare((void*)d, (void*)f) == 1)
		printf("TEST 4 SUCCESSFULLY COMPLETED");
	else
		printf("TEST 4 FAILED");

	// if the first number is positive and the second number is zero, return 1
	if(compare((void*)a, (void*)d) == 1)
		printf("TEST 5 SUCCESSFULLY COMPLETED");
	else
		printf("TEST 5 FAILED");

	// if the first number is positive and the second number is negative, return 1
	if(compare((void*)a, (void*)f) == 1)
		printf("TEST 6 SUCCESSFULLY COMPLETED");
	else
		printf("TEST 6 FAILED");

	// if the second number is zero and the first number is negative, return -1
	if(compare((void*)f, (void*)d) == -1)
		printf("TEST 4 SUCCESSFULLY COMPLETED");
	else
		printf("TEST 4 FAILED");

	// if the second number is positive and the first number is zero, return -1
	if(compare((void*)d, (void*)a) == -1)
		printf("TEST 5 SUCCESSFULLY COMPLETED");
	else
		printf("TEST 5 FAILED");

	// if the second number is positive and the first number is negative, return -1
	if(compare((void*)f, (void*)a) == -1)
		printf("TEST 6 SUCCESSFULLY COMPLETED");
	else
		printf("TEST 6 FAILED");

}





















