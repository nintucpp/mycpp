#ifndef _INCL_KRISHISEVAKPROFILE_I
#define _INCL_KRISHISEVAKPROFILE_I
#include <iostream>
using namespace std;
class KrishiSevakProfile{
    int x; 
    string m_LoginID;
    string m_Password;
    string m_Name;
    string m_Address;
    string m_Phone;
    string m_TypeofKrishiSevak;
    //Photo need to be added
    string m_About;
    string m_CommunicationDetail;

public:
    KrishiSevakProfile();
    ~KrishiSevakProfile();
    virtual void fun() = 0; 
    int getX();// { return x; } 
  void setLoginID(const string& loginID); // by value!
  void setPassword(const string& password);
  void setName(const string& name);
  void setAddress(const string& address);
  void setPhone(const string& phone);
  void setTypeofKrishiSevak(const string& TypeofKrishiSevak);
  void setAbout(const string& about);
  void setCommunicationDetail(const string& communicationDetail);
  string& getLoginID();
  string& getPassword();
  string& getName();
  string& getAddress();
  string& getPhone();
  string& getTypeofKrishiSevak();
  string& getAbout();
  string& getCommunicationDetail();
    /*protected:
    int width, height;
  public:
    void set_values (int a, int b);
    virtual int area () =0;
    void printarea();
    */
    };
#endif