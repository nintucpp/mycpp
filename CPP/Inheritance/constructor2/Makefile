CC=g++
CFLAGS=	-g -Wall -std=c++14
RM=rm
default: constructorexe
constructorexe: constructor.o derived.o base.o
	$(CC)	$(CFLAGS) -o constructorexe constructor.o derived.o base.o
constructor.o: constructor.cpp derived.h base.h
	$(CC)	$(CFLAGS) -c constructor.cpp 
derived.o:	derived.cpp derived.h base.h
	$(CC)	$(CFLAGS) -c derived.cpp
base.o:  base.cpp base.h 
	$(CC)  $(CFLAGS) -c base.cpp
clean: 
	$(RM) constructorexe *.o