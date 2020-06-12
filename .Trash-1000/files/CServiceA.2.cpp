#include <vector>
#include <string>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>.
#include <stdio.h>
                                                                                
#include "CServiceA.h"
using namespace std;                                                                                
using namespace Data;
                                                                                
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
