CC=g++
CFLAGS=-c	-Wall -std=c++14
all:	ForEach
ForEach:	ForEach.o
	$(CC)	ForEach.o	-lboost_system -lboost_thread -lbenchmark -lpthread	-o	ForEach
ForEach.o:	ForEach.cpp
	$(CC)	$(CFLAGS)	ForEach.cpp
clean:
	rm	*o	ForEach
