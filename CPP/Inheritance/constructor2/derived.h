#ifndef _derived
#define _derived
#include <iostream>
#include "base.h"
class derived: public base
{
  public:
  derived(){}
  derived( int value):base(value){}
  const char * getName();
  int getValue();
  void getNameofDerived();
  ~derived(){}
};
#endif