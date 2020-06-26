#include <vector>
#include <string>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include "json/json.h"
#include "KrishiSevakProfile.h"
#include "NewKrishiSevakProfile.h"
#include "Rectangle.h"
                                                                                
#include "CServiceA.h"
using namespace std;                                                                                
using namespace KrishiSevak;
                                                                                
#include <sys/wait.h>
                                                                                
CServiceA_i::CServiceA_i()
{
}
                                                                                
CServiceA_i::~CServiceA_i(void)
{
}
                                                                                
CORBA::Boolean CServiceA_i::CallServiceRoutineA(
                     CORBA::Long    num1,
                     CORBA::Long&   num2,
                     CORBA::Long&   retNum)
{
                                                                                
   cout<< " Request number is 1 " << endl;
   num2 = num2 + num1;
   retNum = 10;
                                                                                
   return true;
}
                                                                                
CORBA::Boolean CServiceA_i::CallServiceRoutineB(
                     CORBA::Long&   num1,
                     CORBA::Long&   num2)
{
  cout<< " Request number is 2 " << endl;                                                                               
   num1++;
   num2++;
                                                                                
   return true;
}

CORBA::Boolean CServiceA_i:: CreateKrishiSevakProflie( const char* sevakProfile, char*& msg)
{
  cout<< " inside server CreateKrishiSevakProflie " << endl;
//cout << "Value of sevak profile "<< sevakProfile << endl;
cout <<"Incoming value of msg" << msg << endl;
const std::string rawJson = sevakProfile;
NewKrishiSevakProfile newprofile;
newprofile.CreateNewKrishiSevakProfile(sevakProfile);
//newprofile.fun();
//newprofile.setLoginID("Neel");
//cout << "Login ID is" <<  newprofile.getLoginID() << endl;
//Rectangle Rect;
//Rect.setWidth(5);
//Rect.setHeight(7);
   
   // Print the area of the object.
  // cout << "Total Rectangle area: " << Rect.getArea() << endl;

/*
const auto rawJsonLength = static_cast<int>(rawJson.length());
constexpr bool shouldUseOldWay = false;
  JSONCPP_STRING err;
  Json::Value root;
    Json::CharReaderBuilder builder;
    const std::unique_ptr<Json::CharReader> reader(builder.newCharReader());
    if (!reader->parse(rawJson.c_str(), rawJson.c_str() + rawJsonLength, &root,
                       &err)) {
      std::cout << "error" << std::endl;
      return EXIT_FAILURE;
    }
  
  const std::string name = root["Name"].asString();
  const int age = root["Age"].asInt();
  const std::string address = root["Address"].asString();
 // std::cout << name << std::endl;
 // std::cout << age << std::endl;
 // std::cout<< address << std::endl;
 */
  msg = CORBA::string_dup("return String"); 
         
//   num1++;
//   num2++;
                                                                                
   return true;
}

