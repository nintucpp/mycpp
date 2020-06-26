#ifndef _INCL_NEWKRISHISEVAKPROFILE_I
#define _INCL_NEWKRISHISEVAKPROFILE_I
#include "KrishiSevakProfile.h"
#include <iostream>
class NewKrishiSevakProfile: public KrishiSevakProfile {
    int y; 
public: 
    void fun();
    NewKrishiSevakProfile();
    ~NewKrishiSevakProfile();
    int CreateNewKrishiSevakProfile(const string& newProfile);
    int ValidateNewProfile();
    void parseProfile(const string& newProfile);

    // { cout << "fun() called"; } 
  /*public:
      void setNewKrishiSevakProfile (KrishiSevakProfile *nweprofile);
      void displaytext();
      int printarea();
      int area ();
      void set_values (int a, int b);
   */   
};
#endif