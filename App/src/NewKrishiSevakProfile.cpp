#include "KrishiSevakProfile.h"
#include "NewKrishiSevakProfile.h"
#include "json/json.h"
#include <iostream>
void NewKrishiSevakProfile::fun() { cout << "fun() called"; } 
NewKrishiSevakProfile::NewKrishiSevakProfile()
{

}
NewKrishiSevakProfile::~NewKrishiSevakProfile()
{

}
int NewKrishiSevakProfile::CreateNewKrishiSevakProfile(const string& newProfile)
{
  cout<< "Inside NewKrishiSevakProfile::CreateNewKrishiSevakProfile  " << endl;
//  cout << "NewProfile" << newProfile << endl;
  parseProfile(newProfile);

  // Parse the JASON
  // Validate
  // store in database and return status

 return 1;
}
void NewKrishiSevakProfile::parseProfile(const string& newProfile)
{
  cout<< "Inside NewKrishiSevakProfile::parseProfile " <<  endl;
  const auto rawJsonLength = static_cast<int>(newProfile.length());
  constexpr bool shouldUseOldWay = false;
  JSONCPP_STRING err;
  Json::Value root;
    Json::CharReaderBuilder builder;
    const std::unique_ptr<Json::CharReader> reader(builder.newCharReader());
    if (!reader->parse(newProfile.c_str(), newProfile.c_str() + rawJsonLength, &root,
                       &err)) {
      std::cout << "error" << std::endl;
    //  return EXIT_FAILURE;
    }
  
//  const std::string name = root["Name"].asString();
//  const int age = root["Age"].asInt();
//  const std::string address = root["Address"].asString();

setLoginID(root["LoginID"].asString());
setPassword(root["Password"].asString());
setName(root["Name"].asString());
setAddress(root["Address"].asString());
setPhone(root["Phone"].asString());
setTypeofKrishiSevak(root["TypeofKrishiSevak"].asString());
setAbout(root["About"].asString());
setCommunicationDetail(root["CommunicationDetail"].asString());
std::cout << "LOGINID : " << getLoginID() << std::endl;
std::cout << "Password : " <<getPassword() << std::endl;
std::cout << "Name : " <<getName() << std::endl;
std::cout<< "Address :" << getAddress() << std::endl;
std::cout<< "Phone :" << getPhone() << std::endl;
std::cout<< "TypeofKrishiSevak :" << getTypeofKrishiSevak() << std::endl;
std::cout<< "About :" << getAbout() << std::endl;
std::cout<< "CommunicationDetail :" << getCommunicationDetail() << std::endl;
}
int ValidateNewProfile(const string& newProfile)
{
 return 1;
}
/*void NewKrishiSevakProfile::setNewKrishiSevakProfile( KrishiSevakProfile *newprofile)
      { 
        std::cout << "Inside setNewKrishiSevakProfile" << std::endl;
      }
void  NewKrishiSevakProfile::displaytext()
     {
        std::cout << "Inside setNewKrishiSevakProfile" << std::endl; 
     }
int  NewKrishiSevakProfile::printarea()
     {
        return (width * height);
     }    
int NewKrishiSevakProfile::area ()
{
  return (width * height);
}
void NewKrishiSevakProfile::set_values(int a, int b)
{
    width=a; height=b;
}
/*
int main () {
  NewKrishiSevakProfile rect;
  NewKrishiSevakProfile trgl;
  KrishiSevakProfile * ppoly1 = &rect;
  KrishiSevakProfile * ppoly2 = &trgl;
  ppoly1->set_values (4,5);
  ppoly2->set_values (4,5);
  ppoly1->printarea();
  ppoly2->printarea();
  trgl.displaytext();
  return 0;
}
*/