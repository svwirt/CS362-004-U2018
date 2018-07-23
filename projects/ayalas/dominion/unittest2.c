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

int testCompare() {
	printf("----------------- Testing Function: %s ----------------\n", TESTFUNCTION);

	const void* a= 1;
	const void* b= 2;
	const void* c= 2;
	const void* d= 0;
	const void* e= 0;
	const void* f= -1;
	const void* g= -1;

	// if both numbers are zero, test should return zero
	if(compare(d, e) == 0)
		printf("TEST 1 SUCCESSFULLY COMPLETED");
	else
		printf("TEST 1 FAILED");

	// if there are equal positive numbers, test should return zero
	if(compare(b, c) == 0)
		printf("TEST 2 SUCCESSFULLY COMPLETED");
	else
		printf("TEST 2 FAILED");

	// if there are equal negative numbers, test should return zero
	if(compare(f, g) == 0)
		printf("TEST 3 SUCCESSFULLY COMPLETED");
	else
		printf("TEST 3 FAILED");

	// if the first number is zero and the second number is negative, return 1
	if(compare(d, f) == 1)
		printf("TEST 4 SUCCESSFULLY COMPLETED");
	else
		printf("TEST 4 FAILED");

	// if the first number is positive and the second number is zero, return 1
	if(compare(a, d) == 1)
		printf("TEST 5 SUCCESSFULLY COMPLETED");
	else
		printf("TEST 5 FAILED");

	// if the first number is positive and the second number is negative, return 1
	if(compare(a, f) == 1)
		printf("TEST 6 SUCCESSFULLY COMPLETED");
	else
		printf("TEST 6 FAILED");

	// if the second number is zero and the first number is negative, return -1
	if(compare(f, d) == -1)
		printf("TEST 4 SUCCESSFULLY COMPLETED");
	else
		printf("TEST 4 FAILED");

	// if the second number is positive and the first number is zero, return -1
	if(compare(d, a) == -1)
		printf("TEST 5 SUCCESSFULLY COMPLETED");
	else
		printf("TEST 5 FAILED");

	// if the second number is positive and the first number is negative, return -1
	if(compare(f, a) == -1)
		printf("TEST 6 SUCCESSFULLY COMPLETED");
	else
		printf("TEST 6 FAILED");

}





















