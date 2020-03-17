output: main.o enum.o #List any linked files
	g++ main.o enum.o -o output

main.o: main.cpp #Link only main file
	g++ -c main.cpp

enum.o: enum.cpp enum.h #Link cpp and header file
	g++ -c enum.cpp

clean:
	rm *.o output