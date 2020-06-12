#ifndef _INCL_CSERVICEA_I
#define _INCL_CSERVICEA_I
#include "KrishiSevak.hh"
class CServiceA_i:public POA_KrishiSevak::ServerKrishiSevak,
public PortableServer::RefCountServantBase
{
public:
   CServiceA_i();
   virtual ~CServiceA_i();
   virtual CORBA::Boolean CreateKrishiSevakProflie(CORBA::Long num1,
                                                   CORBA::Long& num2);
   
#endif