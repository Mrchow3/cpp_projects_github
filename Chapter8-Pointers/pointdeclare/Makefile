output: main.o Message.o #List any linked files
	g++ main.o Message.o -o output

main.o: main.cpp #Link only main file
	g++ -c main.cpp

Message.o: Message.cpp message.h #Link cpp and header file
	g++ -c Message.cpp

clean:
	rm *.o output