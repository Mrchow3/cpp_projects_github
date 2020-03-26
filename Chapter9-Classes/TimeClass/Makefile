output: main.o Time.o #List any linked files
	g++ main.o Time.o -o output

main.o: main.cpp #Link only main file
	g++ -c main.cpp

Message.o: Time.cpp Time.h #Link cpp and header file
	g++ -c Time.cpp

clean:
	rm *.o output