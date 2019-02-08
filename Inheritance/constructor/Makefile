CC=g++
CFLAGS=-c	-g -Wall -std=c++14
all:	constructor
constructor:	constructor.o
	$(CC)	constructor.o	-lboost_system -lboost_thread  -lpthread	-o	constructor
constructor.o:	constructor.cpp
	$(CC)	$(CFLAGS)	constructor.cpp
clean:
	rm	*o	constructor
