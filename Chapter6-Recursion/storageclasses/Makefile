output: main.o external.o #List any linked files
	g++ main.o external.o -o output

main.o: main.cpp #Link only main file
	g++ -c main.cpp

Message.o: external.cpp external.h #Link cpp and header file
	g++ -c external.cpp

clean:
	rm *.o output