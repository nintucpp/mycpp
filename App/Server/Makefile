CC            = /usr/bin/g++-4.8
CFLAGS        = -c -g  -std=c++14 -D_GLIBCXX_USE_CXX11_ABI=0 -Wall 
CPPFLAGS      = -g -c -std=c++11 
LDFLAGS       = -g
OMNI_HOME     = /opt
JSON_HOME     = /home/nintu/vcpkg/packages/jsoncpp_x64-linux
APP_HOME     = /media/nintu/nintu/App
APP_SRC      = /media/nintu/nintu/App/src
APP_BUILD    = /media/nintu/nintu/App/build  
APP_INCLUDES = -I$(APP_HOME)/include
OMNI_INCLUDES = -I$(OMNI_HOME)/include
JSON_INCLUDES = -I$(JSON_HOME)/include
OMNI_LIB_DIR  = $(OMNI_HOME)/lib
ORACLE_LIB_DIR = $$ORACLE_HOME/lib		
JSON_LIB_DIR  = $(JSON_HOME)/lib
OMNIIDL       = $(OMNI_HOME)/bin/omniidl
INCLUDES      = $(OMNI_INCLUDES) $(JSON_INCLUDES) $(APP_INCLUDES)
LD_LIBRARY_PATH          = -lomniORB4 -lomnithread -lomniDynamic4 -ljsoncpp -lboost_system -lboost_thread -lbenchmark -lpthread
OBJECTS       = DBConnection.o \
KrishiSevakSK.o \
CServiceA.o \
ServerKrishiSevak.o \
Shape.o \
Rectangle.o \
KrishiSevakProfile.o \
NewKrishiSevakProfile.o

                                                                                
all Server: $(OBJECTS)
	$(CC) $(LDFLAGS)  $(OBJECTS) -L$$ORACLE_HOME/lib -locci -lclntsh  -L$(OMNI_LIB_DIR) -L$(JSON_LIB_DIR) $(LD_LIBRARY_PATH) $(LIBS) -o ServerKrishiSevak 
                                                                                
KrishiSevakSK.o: KrishiSevakSK.cc KrishiSevak.hh
	$(CC) $(CPPFLAGS) $(INCLUDES) KrishiSevakSK.cc
                                                                                
ServerKrishiSevak.o: ServerKrishiSevak.cpp KrishiSevak.hh
	$(CC) $(CPPFLAGS) $(INCLUDES) -I/u01/app/oracle/product/11.2.0/xe/rdbms/public/ ServerKrishiSevak.cpp
                                                                                
CServiceA.o: CServiceA.cpp CServiceA.h KrishiSevak.hh
	$(CC) $(CPPFLAGS) $(INCLUDES) CServiceA.cpp

Rectangle.o: Rectangle.cpp
	$(CC) $(CPPFLAGS) $(INCLUDES) Rectangle.cpp

Shape.o: Shape.cpp 
	$(CC) $(CPPFLAGS) $(INCLUDES) Shape.cpp

KrishiSevakProfile.o: $(APP_SRC)/KrishiSevakProfile.cpp
	$(CC) $(CPPFLAGS) $(INCLUDES) $(APP_SRC)/KrishiSevakProfile.cpp

NewKrishiSevakProfile.o: $(APP_SRC)/NewKrishiSevakProfile.cpp
	$(CC) $(CPPFLAGS) $(INCLUDES) -I/u01/app/oracle/product/11.2.0/xe/rdbms/public/  $(APP_SRC)/NewKrishiSevakProfile.cpp	
DBConnection.o:	$(APP_SRC)/DBConnection.cpp
	$(CC)	$(CPPFLAGS)	$(INCLUDES) -I/u01/app/oracle/product/11.2.0/xe/rdbms/public/ $(APP_SRC)/DBConnection.cpp
KrishiSevakSK.cc: KrishiSevak.idl
	$(OMNI_HOME)/bin/omniidl -bcxx KrishiSevak.idl
                                                                                
clean clean_all:
	rm -fr *.o
	rm -fr core