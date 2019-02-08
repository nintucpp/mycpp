CC=g++
CFLAGS=-c	-g -Wall -std=c++14
all:	mainprog
mainprog:	mainprog.o
	$(CC)	mainprog.o	-lboost_system -lboost_thread  -lpthread	-o	mainprog
mainprog.o:	mainprog.cpp
	$(CC)	$(CFLAGS)	mainprog.cpp
clean:
	rm	*o	mainprog