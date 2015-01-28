
CC	=	gcc
PP	=	g++
LD	=	g++

all: main
	

main: main.o older.o
	${LD} -o main older.o main.o
	
older.o: older.c older.h
	${CC} -Wall -g -c older.c

main.o: main.cc older.h ex_shape.hh
	${PP} -Wall -g -std=c++11 -c main.cc

clean:
	rm -f *.o main

test: main
	./main
