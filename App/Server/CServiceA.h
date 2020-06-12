#ifndef _INCL_CSERVICEA_I
#define _INCL_CSERVICEA_I
#include "KrishiSevak.hh"
class CServiceA_i:public POA_KrishiSevak::ServiceKrishiSevak,
public PortableServer::RefCountServantBase
{
public:
   CServiceA_i();
   virtual ~CServiceA_i();
   virtual CORBA::Boolean CallServiceRoutineA( CORBA::Long num1,
   CORBA::Long& num2,
   CORBA::Long& retNum);
   virtual CORBA::Boolean CallServiceRoutineB( CORBA::Long& num1,
   CORBA::Long& num2);
   virtual CORBA::Boolean CreateKrishiSevakProflie( const char* info,
   char*& msg);

};
#endif
