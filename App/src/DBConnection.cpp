#include "DBConnection.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std; 
using namespace oracle::occi;
using oracle::occi::Environment;
using oracle::occi::Connection;
DBConnection::DBConnection() 
{ 
  /* 
   * connect to the test database as the HR 
   * sample user and use the EZCONNECT method 
   * of specifying the connect string. Be sure 
   * to adjust for your environment! The format 
   * of the string is host:port/service_name 
   */

  user = "KrishiSevak"; 
  passwd = "KrishiSevak"; 
//  db = "nintu:1521/XE";
 db = "(DESCRIPTION=(ADDRESS=(PROTOCOL=TCP)(HOST=nintu)(PORT=1521))(CONNECT_DATA=(SERVER=DEDICATED)(SERVICE_NAME=XE)))";

  env = Environment::createEnvironment(Environment::DEFAULT);

  try 
  { 
    connectionpool=env->createConnectionPool(user,passwd,db,0,5,1);
    con = connectionpool->createConnection(user,passwd);
    //con = env->createConnection(user, passwd, db); 
  } 
  catch (SQLException& ex) 
  { 
    cout << ex.getMessage();

    exit(EXIT_FAILURE); 
  } 
}

DBConnection::~DBConnection() 
{ 
  env->terminateConnection (con);

  Environment::terminateEnvironment (env); 
}

void DBConnection::List() 
{ 
  /* 
   * simple test method to select data from 
   * the DBConnection table and display the results 
   */

  Statement *stmt = NULL; 
  ResultSet *rs = NULL; 
  string sql = "select e.customer_id, e.customer_name, e.city from customers e";
   // string sql = "select * from tab";
  try 
  { 
    stmt = con->createStatement(sql); 
  } 
  catch (SQLException& ex) 
  { 
    cout << ex.getMessage(); 
  }

  if (stmt) 
  { 
    try 
    { 
      stmt->setPrefetchRowCount(32);

      rs = stmt->executeQuery(); 
    } 
    catch (SQLException& ex) 
    { 
      cout << ex.getMessage(); 
    }

    if (rs) 
    { 
      cout << endl << setw(8) << left << "ID" 
           << setw(22) << left << "FIRST NAME" 
           << setw(27) << left << "CITY" 
           << endl; 
      cout << setw(8) << left << "======" 
           << setw(22) << left << "====================" 
           << setw(27) << left << "=========================" 
           << endl;

      while (rs->next()) { 
        cout << setw(8) << left << rs->getString(1) 
             << setw(22) << left << (rs->isNull(2) ? "n/a" : rs->getString(2)) 
             << setw(27) << left << rs->getString(3) 
             << endl; 
      }

      cout << endl;

      stmt->closeResultSet(rs); 
    }

    con->terminateStatement(stmt); 
  } 
}
