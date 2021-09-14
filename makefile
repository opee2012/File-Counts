all: main

main: Project1.o main.o
	g++ -o main Project1.o main.o

main.o: main.cpp Project1.h
	g++ -c main.cpp

Project1.o: Project1.cpp Project1.h
	g++ -c Project1.cpp

clean:
	rm -f *.o