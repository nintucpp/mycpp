/* 
 * A simple OCCI test application 
 * This file contains the Employees class implementation 
 */

#include "Employees.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std; 
using namespace oracle::occi;

int main (void) 
{ 
  /* 
   * create an instance of the Employees class, 
   * invoke the List member, delete the instance, 
   * and prompt to continue... 
   */
  /*  Environment *env; 
  Connection  *con;

  string user; 
  string passwd; 
  string db; 
    user = "neelendra"; 
  passwd = "nintu12345"; 
  db = "192.168.1.5:1521/XE";

  env = Environment::createEnvironment(Environment::DEFAULT);

    con = env->createConnection(user, passwd, db); 
cout << "Environment and Connection created" << endl;
*/
  auto func = [] () { cout << "Hello world"; };
    func(); // now call the function
  Employees *pEmployees = new Employees();

  pEmployees->List();

  delete pEmployees;

  cout << "ENTER to continue...";

  cin.get();

  return 0; 
}

Employees::Employees() 
{ 
  /* 
   * connect to the test database as the HR 
   * sample user and use the EZCONNECT method 
   * of specifying the connect string. Be sure 
   * to adjust for your environment! The format 
   * of the string is host:port/service_name 
   */

  user = "neelendra"; 
  passwd = "nintu12345"; 
  db = "192.168.1.5:1521/XE";

  env = Environment::createEnvironment(Environment::DEFAULT);

  try 
  { 
    con = env->createConnection(user, passwd, db); 
  } 
  catch (SQLException& ex) 
  { 
    cout << ex.getMessage();

    exit(EXIT_FAILURE); 
  } 
}

Employees::~Employees() 
{ 
  env->terminateConnection (con);

  Environment::terminateEnvironment (env); 
}

void Employees::List() 
{ 
  /* 
   * simple test method to select data from 
   * the employees table and display the results 
   */

  Statement *stmt = NULL; 
  ResultSet *rs = NULL; 
  string sql = "select e.employee_id, e.first_name, e.last_name from employee e";
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
           << setw(27) << left << "LAST NAME" 
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