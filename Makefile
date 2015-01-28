
CC	=	gcc
PP	=	g++
LD	=	g++

all: main
	

main: older.o ex_point.o main.o
	${LD} -o main older.o ex_point.o main.o
	
older.o: older.c older.h
	${CC} -Wall -g -c older.c

ex_point.o: older.h ex_point.hh ex_point.cc 
	${PP} -Wall -g -std=c++11 -c ex_point.cc
	
main.o: older.h ex_point.hh main.cc
	${PP} -Wall -g -std=c++11 -c main.cc

clean:
	rm -f *.o main

test: main
	./main
