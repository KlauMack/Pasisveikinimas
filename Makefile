CXX = g++
CC = gcc

all:	Pasisveikinimas

test:	all
	./Pasisveikinimas

clean:
	rm -f *.o Pasisveikinimas