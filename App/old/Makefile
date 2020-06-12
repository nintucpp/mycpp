CC            = /usr/bin/g++
CPPFLAGS      = -g -c
LDFLAGS       = -g
OMNI_HOME     = /opt
OMNI_INCLUDES = -I$(OMNI_HOME)/include
OMNI_LIB_DIR  = $(OMNI_HOME)/lib
OMNIIDL       = $(OMNI_HOME)/bin/omniidl
INCLUDES      = $(OMNI_INCLUDES)
LD_LIBRARY_PATH          = -lomniORB4 -lomnithread -lomniDynamic4
OBJECTS       = KrishiSevakSK.o CServiceA.o Server.o
                                                                                
all Server: $(OBJECTS)
	$(CC) $(LDFLAGS) -o Server -L$(OMNI_HOME)/lib $(OBJECTS) $(LD_LIBRARY_PATH) $(LIBS)
                                                                                
KrishiSevakSK.o: KrishiSevakSK.cc KrishiSevak.hh
	$(CC) $(CPPFLAGS) $(INCLUDES) KrishiSevakSK.cc
                                                                                
Server.o: Server.cpp KrishiSevak.hh
	$(CC) $(CPPFLAGS) $(INCLUDES) Server.cpp
                                                                                
CServiceA.o: CServiceA.cpp CServiceA.h KrishiSevak.hh
	$(CC) $(CPPFLAGS) $(INCLUDES) CServiceA.cpp
                                                                                
KrishiSevakSK.cc: KrishiSevak.idl
	$(OMNI_HOME)/bin/omniidl -bcxx KrishiSevak.idl
                                                                                
clean clean_all:
	rm -fr *.o
	rm -fr core
