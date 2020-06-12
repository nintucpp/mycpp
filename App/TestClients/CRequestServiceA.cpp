#include "KrishiSevak.hh"
#include "CRequestServiceA.h"
#include <assert.h>
using namespace KrishiSevak;
                                                                                
CRequestServiceA::CRequestServiceA()
{
  try {
    //------------------------------------------------------------------------
    // Initialize ORB object.
    //------------------------------------------------------------------------
    int    argc=0;       // Dummy variables to support following call.
    char** argv=0;
    CORBA::ORB_var orb = CORBA::ORB_init(argc, argv);
                                                                                
    //------------------------------------------------------------------------
    // Bind ORB object to name service object.
    // (Reference to Name service root context.)
    //------------------------------------------------------------------------
    CORBA::Object_var obj = orb->resolve_initial_references("NameService");
    assert (!CORBA::is_nil(obj.in()));
                                                                                
    //------------------------------------------------------------------------
    // Narrow this to the naming context (Narrowed reference to root context.)
    //------------------------------------------------------------------------
    CosNaming::NamingContext_var nc =
                        CosNaming::NamingContext::_narrow(obj.in());
    assert (!CORBA::is_nil(nc.in()));
                                                                                
    //------------------------------------------------------------------------
    // The "name text" put forth by CORBA server in name service.
    // This same name ("DataServiceName1") is used by the CORBA server when
    // binding to the name server (CosNaming::Name).
    //------------------------------------------------------------------------
    CosNaming::Name _corbaCosName;
    _corbaCosName.length(1);
    _corbaCosName[0].id=CORBA::string_dup("KrishiSevakServer");
                                                                                
    //------------------------------------------------------------------------
    // Resolve "name text" identifier to an object reference.
    //------------------------------------------------------------------------
    CORBA::Object_var obj1 = nc->resolve(_corbaCosName);
    assert(!CORBA::is_nil(obj1.in()));
                                                                                
    m_Data = ServiceKrishiSevak::_narrow(obj1.in());
    if (CORBA::is_nil(m_Data.in()))
    {
       cerr << "IOR is not an SA object reference." << endl;
    }
  }
  catch(CORBA::COMM_FAILURE& ex) {
    cerr << "Caught system exception COMM_FAILURE -- unable to contact the "
         << "object." << endl;
    throw DS_ServerConnectionException();
    return;
  }
  catch(CORBA::SystemException& ) {
    cerr << "Caught a CORBA::SystemException." << endl;
    throw DS_SystemException();
    return;
  }
  catch(CORBA::Exception& ) {
    cerr << "Caught CORBA::Exception." << endl;
    throw DS_Exception();
    return;
  }  catch(omniORB::fatalException& fe) {
    cerr << "Caught omniORB::fatalException:" << endl;
    cerr << "  file: " << fe.file() << endl;
    cerr << "  line: " << fe.line() << endl;
    cerr << "  mesg: " << fe.errmsg() << endl;
    throw DS_FatalException();
    return;
  }
  catch(...) {
    cerr << "Caught unknown exception." << endl;
    throw DS_Exception();
    return;
  }
  return;
}
                                                                                
CRequestServiceA::~CRequestServiceA()
{
   // ...
}
                                                                                
bool CRequestServiceA::RequestServiceARoutineA()
{
   CORBA::Long num1=4;
   CORBA::Long num2=5;
   CORBA::Long retNum;
                                                                                
   cout << "Values input to Service Routine A: "
        << num1 << " "
        << num2 << " "
        << retNum << endl;
                                                                                
   if( m_Data->CallServiceRoutineA( num1, num2, retNum)) // This is the CORBA call which is to be executed remotely
   {    // Ok
      cout << "Values returned by Service Routine A: "
           << num1 << " "
           << num2 << " "
           << retNum << endl;
                                                                                
      return true;
   }
   else // fail
   {
      return false;
   }
                                                                                
   return true;
}
                                                                                
bool CRequestServiceA::RequestServiceARoutineB()
{
   CORBA::Long num1=0;
   CORBA::Long num2=50;
                                                                                
   cout << "Values input to Service Routine B: "
        << num1 << " "
        << num2 << endl;
                                                                                
   if( m_Data->CallServiceRoutineB( num1, num2)) // This is the CORBA call which is to be executed remotely
   {    // Ok
      cout << "Values returned by Service Routine B: "
           << num1 << " "
           << num2 << endl;
                                                                                
      return true;
   }
   else // fail
   {
      return false;
   }
                                                                                
   return true;
}
bool CRequestServiceA::RequestCreateKrishiSevakProflie()
{
   CORBA::Long num1=0;
   CORBA::Long num2=50;
                                                                                
   cout << "Values input to Service Routine B: "
        << num1 << " "
        << num2 << endl;
   const char* newprofile = "Thakur";
   string lastname = "Singh";
  CORBA::String_var info_out="Raj"; 
  string requstJson = R"({"Age": 20, "Name": "colin", "Address": "Tempnies"})";                                                                            
   if( m_Data->CreateKrishiSevakProflie( requstJson.c_str(), info_out)) // This is the CORBA call which is to be executed remotely
   {    // Ok
      cout << "Values returned by Service Routine B: "
           << num1 << " "
           << num2 << endl;
      cout << "return profile is " << info_out << endl;
                                                                                
      return true;
   }
   else // fail
   {
      return false;
   }
                                                                                
   return true;
}
