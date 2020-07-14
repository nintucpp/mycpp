/* 
 * A simple OCCI test application 
 * This file contains the DBConnection class declaration 
 */
#ifndef _DBConnection
#define _DBConnection

#include "occi.h"
#include <iostream> 
#include <iomanip>

using namespace oracle::occi; 
using namespace std;
using oracle::occi::Environment;
using oracle::occi::Connection;

class DBConnection { 
public: 
  DBConnection(); 
  virtual ~DBConnection();

  void List();

private: 
  Environment *env; 
  Connection  *con;
  ConnectionPool *connectionpool;

  string user; 
  string passwd; 
  string db; 
};
#endif

