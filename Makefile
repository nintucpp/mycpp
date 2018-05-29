CC=g++
CFLAGS=-c	-Wall -std=c++14
<<<<<<< HEAD
all:	ForEach
ForEach:	ForEach.o
	$(CC)	ForEach.o	-lboost_system -lboost_thread -lbenchmark -lpthread	-o	ForEach
ForEach.o:	ForEach.cpp
	$(CC)	$(CFLAGS)	ForEach.cpp
clean:
	rm	*o	ForEach
=======
all:	C11Thread
C11Thread:	C11Thread.o
	$(CC)	C11Thread.o	-lboost_system -lboost_thread -lbenchmark -lpthread	-o	C11Thread
C11Thread.o:	C11Thread.cpp
	$(CC)	$(CFLAGS)	C11Thread.cpp
clean:
	rm	*o	C11Thread
>>>>>>> 57e5ca3705c470de832e69d507756889fa5fd4e3
