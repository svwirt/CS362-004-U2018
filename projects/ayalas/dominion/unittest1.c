#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <stdlib.h>

#define TESTFUNCTION "getCost"


int main() {
	printf("----------------- Testing Function: %s ----------------\n", TESTFUNCTION);
	if (getCost(curse)==0)
		printf("CURSE TEST SUCCESSFULLY COMPLETED");
	else
		printf("CURSE TEST FAILED");

	if(getCost(estate)==2)
		printf("ESTATE TEST SUCCESSFULLY COMPLETED");
	else
		printf("ESTATE TEST FAILED");

	if(getCost(duchy)==5)
		printf("DUCHY TEST SUCCESSFULLY COMPLETED");
	else
		printf("DUCHY TEST FAILED");

	if(getCost(province)==8)
		printf("PROVINCE TEST SUCCESSFULLY COMPLETED");
	else
		printf("PROVINCE TEST FAILED");

	if(getCost(copper)==0)
		printf("COPPER TEST SUCCESSFULLY COMPLETED");
	else
		printf("COPPER TEST FAILED");

	if(getCost(silver)==3)
		printf("SILVER TEST SUCCESSFULLY COMPLETED");
	else
		printf("SILVER TEST FAILED");

	if(getCost(gold)==6)
		printf("GOLD TEST SUCCESSFULLY COMPLETED");
	else
		printf("GOLD TEST FAILED");

	if(getCost(adventurer)==6)
		printf("ADVENTURER TEST SUCCESSFULLY COMPLETED");
	else
		printf("ADVENTURER TEST FAILED");

	if(getCost(council_room)==5)
		printf("COUNCIL ROOM TEST SUCCESSFULLY COMPLETED");
	else
		printf("COUNCIL ROOM CURSE TEST FAILED");

	if(getCost(feast)==4)
		printf("FEAST TEST SUCCESSFULLY COMPLETED");
	else
		printf("FEAST TEST FAILED");

	if(getCost(gardens)==4)
		printf("GARDENS TEST SUCCESSFULLY COMPLETED");
	else
		printf("GARDENS TEST FAILED");

	if(getCost(mine)==5)
		printf("MINE TEST SUCCESSFULLY COMPLETED");
	else
		printf("MINE TEST FAILED");

	if(getCost(remodel)==4)
		printf("REMODEL TEST SUCCESSFULLY COMPLETED");
	else
		printf("REMODEL TEST FAILED");

	if(getCost(smithy)==4)
		printf("SMITHY SUCCESSFULLY COMPLETED");
	else
		printf("SMITHY TEST FAILED");

	if(getCost(village)==3)
		printf("VILLAGE TEST SUCCESSFULLY COMPLETED");
	else
		printf("VILLAGE TEST FAILED");

	if(getCost(baron)==4)
		printf("BARON TEST SUCCESSFULLY COMPLETED");
	else
		printf("BARON TEST FAILED");

	if(getCost(great_hall)==3)
		printf("GREAT HALL SUCCESSFULLY COMPLETED");
	else
		printf("GREAT HALL TEST FAILED");

	if(getCost(minion)==5)
		printf("MINION SUCCESSFULLY COMPLETED");
	else
		printf("MINION TEST FAILED");

	if(getCost(steward)==3)
		printf("STEWARD TEST SUCCESSFULLY COMPLETED");
	else
		printf("STEWARD TEST FAILED");

	if(getCost(tribute)==3)
		printf("TRIBUTE TEST SUCCESSFULLY COMPLETED");
	else
		printf("TRIBUTE TEST FAILED");

	if(getCost(ambassador)==3)
		printf("AMBASSADOR TEST SUCCESSFULLY COMPLETED");
	else
		printf("AMBASSADOR TEST FAILED");

	if(getCost(cutpurse)==4)
		printf("CUTPURSE TEST SUCCESSFULLY COMPLETED");
	else
		printf("CUTPURSE TEST FAILED");

	if(getCost(embargo)==2)
		printf("EMBARGO TEST SUCCESSFULLY COMPLETED");
	else
		printf("EMBARGO TEST FAILED");

	if(getCost(outpost)==5)
		printf("OUTPOST TEST SUCCESSFULLY COMPLETED");
	else
		printf("OUTPOST TEST FAILED");

	if(getCost(salvager)==4)
		printf("SALVAGER TEST SUCCESSFULLY COMPLETED");
	else
		printf("SALVAGER TEST FAILED");

	if(getCost(sea_hag)==4)
		printf("SEA HAG TEST SUCCESSFULLY COMPLETED");
	else
		printf("SEA HAG TEST FAILED");

	if(getCost(treasure_map)==4)
		printf("TREASURE MAP TEST SUCCESSFULLY COMPLETED");
	else
		printf("TREASURE MAP TEST FAILED");


}