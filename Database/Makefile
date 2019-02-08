CC=g++-4.9
CFLAGS=-c	-Wall -std=c++14
all:	Employees
Employees:	Employees.o
	$(CC)	Employees.o	-lboost_system -lboost_thread -lbenchmark -lpthread	-L$$ORACLE_HOME/lib -locci -lclntsh -o	Employees
Employees.o:	Employees.cpp
	$(CC)	$(CFLAGS)	-I/u01/app/oracle/product/11.2.0/xe/rdbms/public/ Employees.cpp
clean:
	rm	*o	Employees