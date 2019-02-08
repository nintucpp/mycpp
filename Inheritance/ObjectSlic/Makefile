CC=g++
CFLAGS=	-g -Wall -std=c++14
RM=rm
default: ObjectSlicing
ObjectSlicing: ObjectSlicing.o
	$(CC)	$(CFLAGS) -o ObjectSlicing ObjectSlicing.o
ObjectSlicing.o: ObjectSlicing.cpp 
	$(CC)	$(CFLAGS) -c ObjectSlicing.cpp 
clean: 
	$(RM) ObjectSlicing *.o