CC=g++
CFLAGS=-c	-g -Wall -std=c++17
all:	Stack
Stack:	Stack.o
	$(CC)	Stack.o	-lboost_system -lboost_thread  -lpthread	-o	Stack
mainprog.o:	Stackcpp
	$(CC)	$(CFLAGS)	Stack.cpp
clean:
	rm	*o	Stack