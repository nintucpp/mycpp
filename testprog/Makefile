CC=g++
CFLAGS=-c	-Wall -std=c++14
all:	testprog
testprog:	sample.o
	$(CC)	sample.o	-lboost_system -lboost_thread	-o	testprog
sample.o:	sample.cpp
	$(CC)	$(CFLAGS)	sample.cpp
clean:
	rm	*o	testprog
