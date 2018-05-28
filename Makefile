CC=g++
CFLAGS=-c	-Wall -std=c++14
all:	C11Thread
C11Thread:	C11Thread.o
	$(CC)	C11Thread.o	-lboost_system -lboost_thread -lbenchmark -lpthread	-o	C11Thread
C11Thread.o:	C11Thread.cpp
	$(CC)	$(CFLAGS)	C11Thread.cpp
clean:
	rm	*o	C11Thread
