all:	project1

project1:	main.o
	g++ -o project1 main.o

main.o:	main.cc
	g++ -c main.cc
	
clean:
	rm -rf *.o
	rm -rf main