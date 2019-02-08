CC=g++
CFLAGS=	-g -Wall -std=c++14
RM=rm
default: destructorVirtual
destructorVirtual: destructorVirtual.o
	$(CC)	$(CFLAGS) -o destructorVirtual destructorVirtual.o
destructorVirtual.o: destructorVirtual.cpp 
	$(CC)	$(CFLAGS) -c destructorVirtual.cpp 
clean: 
	$(RM) destructorVirtual *.o