CFLAGS = -Wall -fpic -coverage -lm

rngs.o: rngs.h rngs.c
	gcc -c rngs.c -g  $(CFLAGS)

dominion.o: dominion.h dominion.c rngs.o
	gcc -c dominion.c -g  $(CFLAGS)

unit1: dominion.o unittest1.c
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c unittest1.c rngs.c -o unittest1 -lm -g

runUnit1: unit1
	./unittest1 &> unittest1.out
	gcov dominion.c >> unittest1.out
	cat dominion.c.gcov >> unittest1.out

unit2: dominion.o unittest2.c
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c unittest2.c rngs.c -o unittest2 -lm -g

runUnit2: unit2
	./unittest2 &> unittest2.out
	gcov dominion.c >> unittest2.out
	cat dominion.c.gcov >> unittest2.out

unit3: dominion.o unittest3.c
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c unittest3.c rngs.c -o unittest3 -lm -g

runUnit3: unit3
	./unittest3 &> unittest3.out
	gcov dominion.c >> unittest3.out
	cat dominion.c.gcov >> unittest3.out

unit4: dominion.o unittest4.c
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c unittest4.c rngs.c -o unittest4 -lm -g

runUnit4: unit4
	./unittest4 &> unittest4.out
	gcov dominion.c >> unittest4.out
	cat dominion.c.gcov >> unittest4.out

cardtest1: dominion.o cardtest1.c
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c cardtest1.c rngs.c -o cardtest1 -lm -g

runCard1: card1
	./cardtest1 &> cardtest1.out
	gcov dominion.c >> cardtest1.out
	cat dominion.c.gcov >> cardtest1.out

cardtest2: dominion.o cardtest2.c
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c cardtest2.c rngs.c -o cardtest2 -lm -g

runCard2: card2
	./cardtest2 &> cardtest2.out
	gcov dominion.c >> cardtest2.out
	cat dominion.c.gcov >> cardtest2.out

cardtest3: dominion.o cardtest3.c
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c cardtest3.c rngs.c -o cardtest3 -lm -g

runCard3: card3
	./cardtest3 &> cardtest3.out
	gcov dominion.c >> cardtest3.out
	cat dominion.c.gcov >> cardtest3.out

cardtest4: dominion.o cardtest4.c
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c cardtest4.c rngs.c -o cardtest4 -lm -g

runCard4: card4
	./cardtest4 &> cardtest4.out
	gcov dominion.c >> cardtest4.out
	cat dominion.c.gcov >> cardtest4.out

adventurer:
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c randomtestadventurer.c rngs.c -o randomtestadventurer -lm -g

runAdventurer: adventurer
	./randomtestadventurer &> randomtestadventurer.out
	gcov dominion.c >> randomtestadventurer.out
	cat dominion.c.gcov >> randomtestadventurer.out

randomtestcard1:
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c randomtestcard1.c rngs.c -o randomtestcard1 -lm -g

runRandomCard1: randomtestcard1
	./randomtestcard1 &> randomtestcard1.out
	gcov dominion.c >> randomtestcard1.out
	cat dominion.c.gcov >> randomtestcard1.out

randomtestcard2:
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.c randomtestcard2.c rngs.c -o randomtestcard2 -lm -g

runRandomCard2: randomtestcard2
	./randomtestcard2 &> randomtestcard2.out
	gcov dominion.c >> randomtestcard2.out
	cat dominion.c.gcov >> randomtestcard2.out

playdom: dominion.o playdom.c
	gcc -o playdom playdom.c -g dominion.o rngs.o $(CFLAGS)

playdom2: dominion.o playdom2.c
	gcc -o playdom2 playdom2.c -g dominion.o rngs.o $(CFLAGS)

testDrawCard: testDrawCard.c dominion.o rngs.o
	gcc -o testDrawCard -g  testDrawCard.c dominion.o rngs.o $(CFLAGS)

badTestDrawCard: badTestDrawCard.c dominion.o rngs.o
	gcc -o badTestDrawCard -g  badTestDrawCard.c dominion.o rngs.o $(CFLAGS)

testBuyCard: testDrawCard.c dominion.o rngs.o
	gcc -o testDrawCard -g  testDrawCard.c dominion.o rngs.o $(CFLAGS)

testAll: dominion.o testSuite.c
	gcc -o testSuite testSuite.c -g  dominion.o rngs.o $(CFLAGS)

# unit1: dominion.o unittest1.c
# 	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.o unittest1.c rngs.c -o unittest1 -lm -g

# unit2: dominion.o unittest2.c
# 	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.o unittest2.c rngs.c -o unittest2 -lm -g

# unit3: dominion.o unittest3.c
# 	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.o unittest3.c rngs.c -o unittest3 -lm -g

# unit4: dominion.o unittest4.c
# 	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.o unittest4.c rngs.c -o unittest4 -lm -g

# card1: dominion.o cardtest1.c
# 	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.o cardtest1.c rngs.c -o cardtest1 -lm -g

# card2: dominion.o cardtest2.c
# 	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.o cardtest2.c rngs.c -o cardtest2 -lm -g

# card3: dominion.o cardtest3.c
# 	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.o cardtest3.c rngs.c -o cardtest3 -lm -g

# card4: dominion.o cardtest4.c
# 	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.o cardtest4.c rngs.c -o cardtest4 -lm -g

# handcount: dominion.o testHandCount.c
# 	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.o testHandCount.c rngs.c -o handcount -lm -g

# unittestresults.out: card1 card2 card3 card4 unit1 unit2 unit3 unit4 dominion.o
# 	./unittest1 >> unittestresults.out 2>&1
# 	./unittest2 >> unittestresults.out 2>&1
# 	./unittest3 >> unittestresults.out 2>&1
# 	./unittest4 >> unittestresults.out 2>&1
# 	./cardtest1 >> unittestresults.out 2>&1
# 	./cardtest2 >> unittestresults.out 2>&1
# 	./cardtest3 >> unittestresults.out 2>&1
# 	./cardtest4 >> unittestresults.out 2>&1
# 	gcov dominion.c     >> unittestresults.out 2>&1
# 	cat dominion.c.gcov >> unittestresults.out 2>&1

interface.o: interface.h interface.c
	gcc -c interface.c -g  $(CFLAGS)

runtests: testDrawCard 
	./testDrawCard &> unittestresult.out
	gcov dominion.c >> unittestresult.out
	cat dominion.c.gcov >> unittestresult.out

testdominion: dominion.o testdominion.c
	gcc -fprofile-arcs -ftest-coverage -Wall -std=c99 dominion.o testdominion.c rngs.c -o testdominion -lm -g
	./testdominion > testdominion.out
	gcov dominion.c >> testdominion.out

all: playdom player testDrawCard testBuyCard badTestDrawCard

clean:
	rm -f *.o playdom.exe playdom test.exe test player  cardtest1 player.exe testInit testInit.exe *.gcov *.gcda *.gcno *.so badTestDrawCard testDrawCard unittestresults.out testdominion testdominion.o testdominion.out
