output: main.o DiceRoller.o #List any linked files
	g++ main.o DiceRoller.o -o output

main.o: main.cpp #Link only main file
	g++ -c main.cpp

Message.o: DiceRoller.cpp diceroller.h #Link cpp and header file
	g++ -c DiceRoller.cpp

clean:.
	rm *.o output
