CC            = /usr/bin/g++
CPPFLAGS      = -g -c
LDFLAGS       = -g
OMNI_HOME     = /opt
OMNI_INCLUDES = -I$(OMNI_HOME)/include
OMNI_LIB_DIR  = $(OMNI_HOME)/lib
OMNIIDL       = $(OMNI_HOME)/bin/omniidl
INCLUDES      = $(OMNI_INCLUDES)
LD_LIBRARY_PATH          = -lomniORB4 -lomnithread -lomniDynamic4
OBJECTS       = DataSK.o CRequestServiceA.o Client.o
                                                                                
all Server: $(OBJECTS)
	$(CC) $(LDFLAGS) -o Client -L$(OMNI_HOME)/lib $(OBJECTS) $(LD_LIBRARY_PATH) $(LIBS)
                                                                                
DataSK.o: DataSK.cc Data.hh
	$(CC) $(CPPFLAGS) $(INCLUDES) DataSK.cc
                                                                                
Client.o: Client.cpp Data.hh
	$(CC) $(CPPFLAGS) $(INCLUDES) Client.cpp
                                                                                
CRequestServiceA.o: CRequestServiceA.cpp CRequestServiceA.h Data.hh
	$(CC) $(CPPFLAGS) $(INCLUDES) CRequestServiceA.cpp
                                                                     

DataSK.cc: Data.idl
	$(OMNI_HOME)/bin/omniidl -bcxx Data.idl
                                                                                
clean clean_all:
	rm -fr *.o
	rm -fr core