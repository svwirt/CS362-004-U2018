#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <stdlib.h>

#define TESTFUNCTION "getCost"


int main(){
	printf("----------------- Testing Function: %s ----------------\n", TESTFUNCTION);
	if (getCost(curse)==0)
		printf("CURSE TEST SUCCESSFULLY COMPLETED\n");
	else
		printf("CURSE TEST FAILED\n");

	if(getCost(estate)==2)
		printf("ESTATE TEST SUCCESSFULLY COMPLETED\n");
	else
		printf("ESTATE TEST FAILED\n");

	if(getCost(duchy)==5)
		printf("DUCHY TEST SUCCESSFULLY COMPLETED\n");
	else
		printf("DUCHY TEST FAILED\n");

	if(getCost(province)==8)
		printf("PROVINCE TEST SUCCESSFULLY COMPLETED\n");
	else
		printf("PROVINCE TEST FAILED\n");

	if(getCost(copper)==0)
		printf("COPPER TEST SUCCESSFULLY COMPLETED\n");
	else
		printf("COPPER TEST FAILED\n");

	if(getCost(silver)==3)
		printf("SILVER TEST SUCCESSFULLY COMPLETED\n");
	else
		printf("SILVER TEST FAILED\n");

	if(getCost(gold)==6)
		printf("GOLD TEST SUCCESSFULLY COMPLETED\n");
	else
		printf("GOLD TEST FAILED\n");

	if(getCost(adventurer)==6)
		printf("ADVENTURER TEST SUCCESSFULLY COMPLETED\n");
	else
		printf("ADVENTURER TEST FAILED\n");

	if(getCost(council_room)==5)
		printf("COUNCIL ROOM TEST SUCCESSFULLY COMPLETED\n");
	else
		printf("COUNCIL ROOM CURSE TEST FAILED\n");

	if(getCost(feast)==4)
		printf("FEAST TEST SUCCESSFULLY COMPLETED\n");
	else
		printf("FEAST TEST FAILED\n");

	if(getCost(gardens)==4)
		printf("GARDENS TEST SUCCESSFULLY COMPLETED\n");
	else
		printf("GARDENS TEST FAILED\n");

	if(getCost(mine)==5)
		printf("MINE TEST SUCCESSFULLY COMPLETED\n");
	else
		printf("MINE TEST FAILED\n");

	if(getCost(remodel)==4)
		printf("REMODEL TEST SUCCESSFULLY COMPLETED\n");
	else
		printf("REMODEL TEST FAILED\n");

	if(getCost(smithy)==4)
		printf("SMITHY SUCCESSFULLY COMPLETED\n");
	else
		printf("SMITHY TEST FAILED\n");

	if(getCost(village)==3)
		printf("VILLAGE TEST SUCCESSFULLY COMPLETED\n");
	else
		printf("VILLAGE TEST FAILED\n");

	if(getCost(baron)==4)
		printf("BARON TEST SUCCESSFULLY COMPLETED\n");
	else
		printf("BARON TEST FAILED\n");

	if(getCost(great_hall)==3)
		printf("GREAT HALL SUCCESSFULLY COMPLETED\n");
	else
		printf("GREAT HALL TEST FAILED\n");

	if(getCost(minion)==5)
		printf("MINION SUCCESSFULLY COMPLETED\n");
	else
		printf("MINION TEST FAILED\n");

	if(getCost(steward)==3)
		printf("STEWARD TEST SUCCESSFULLY COMPLETED\n");
	else
		printf("STEWARD TEST FAILED\n");

	if(getCost(tribute)==5)
		printf("TRIBUTE TEST SUCCESSFULLY COMPLETED\n");
	else
		printf("TRIBUTE TEST FAILED\n");

	if(getCost(ambassador)==3)
		printf("AMBASSADOR TEST SUCCESSFULLY COMPLETED\n");
	else
		printf("AMBASSADOR TEST FAILED\n");

	if(getCost(cutpurse)==4)
		printf("CUTPURSE TEST SUCCESSFULLY COMPLETED\n");
	else
		printf("CUTPURSE TEST FAILED\n");

	if(getCost(embargo)==2)
		printf("EMBARGO TEST SUCCESSFULLY COMPLETED\n");
	else
		printf("EMBARGO TEST FAILED\n");

	if(getCost(outpost)==5)
		printf("OUTPOST TEST SUCCESSFULLY COMPLETED\n");
	else
		printf("OUTPOST TEST FAILED\n");

	if(getCost(salvager)==4)
		printf("SALVAGER TEST SUCCESSFULLY COMPLETED\n");
	else
		printf("SALVAGER TEST FAILED\n");

	if(getCost(sea_hag)==4)
		printf("SEA HAG TEST SUCCESSFULLY COMPLETED\n");
	else
		printf("SEA HAG TEST FAILED\n");

	if(getCost(treasure_map)==4)
		printf("TREASURE MAP TEST SUCCESSFULLY COMPLETED\n");
	else
		printf("TREASURE MAP TEST FAILED\n");


}