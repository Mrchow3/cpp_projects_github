output: main.o Message.o 
	g++ main.o Message.o -o output

main.o: main.cpp
	g++ -c main.cpp

Message.o: Message.cpp message.h
	g++ -c Message.cpp

clean:
	rm *.o output