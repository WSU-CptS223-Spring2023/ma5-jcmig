prog:	main.o
			g++ main.o -o MA5

main.o: main.cpp Heap.h
			g++ -g -Wall -std=c++11

clean:
			-rm *.o

run:
			@./MA5