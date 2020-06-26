#include "KrishiSevakProfile.h"
int KrishiSevakProfile::getX()
 { 
     return x;
 } 
 KrishiSevakProfile::KrishiSevakProfile()
 {

 }
 KrishiSevakProfile::~KrishiSevakProfile()
 {

 }
void KrishiSevakProfile::setLoginID(const string& loginID) // by value!
  {
    m_LoginID = std::move(loginID); // move assignment
  }
  void KrishiSevakProfile::setPassword(const string& password)
  {
    m_Password = std::move(password);
  }
  void KrishiSevakProfile::setName(const string& name)
  {
    m_Name = std::move(name);
  }
  void KrishiSevakProfile::setAddress(const string& address)
  {
    m_Address = std::move(address);
  }
  void KrishiSevakProfile::setPhone(const string& phone)
  {
    m_Phone = std::move(phone);       
  }
  void KrishiSevakProfile::setTypeofKrishiSevak(const string& TypeofKrishiSevak)
  {
    m_TypeofKrishiSevak = std::move(TypeofKrishiSevak);
  }
  void KrishiSevakProfile::setAbout(const string& about)
  {
    m_About = std::move(about);
  }
  void KrishiSevakProfile::setCommunicationDetail(const string& communicationDetail)
  {
    m_CommunicationDetail = std::move(communicationDetail);
  }
  string&  KrishiSevakProfile::getLoginID()
  {
    return m_LoginID;
  }
  string& KrishiSevakProfile::getPassword()
  {
    return m_Password;
  }
  string& KrishiSevakProfile::getName()
  {
    return m_Name;
  }
  string& KrishiSevakProfile::getAddress()
  {
    return m_Address;
  }
  string& KrishiSevakProfile::getPhone()
  {
   return m_Phone;
  }
  string& KrishiSevakProfile::getTypeofKrishiSevak()
  {
   return m_TypeofKrishiSevak;
  }
  string& KrishiSevakProfile::getAbout()
  {
   return m_About;
  }
  string& KrishiSevakProfile::getCommunicationDetail()
  {
   return m_CommunicationDetail;
  }
/*void KrishiSevakProfile::set_values(int a, int b)
{
    width=a; height=b;
}
void KrishiSevakProfile::printarea()
{
   cout << this->area() << '\n'; 
}
int KrishiSevakProfile::area()
{
lskjd    cout << "Inside KrishiSevakProfile area" << endl;
}
*/

