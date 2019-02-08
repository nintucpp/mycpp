//#include "VectorTest.h"
#include<iostream>
#include<stack>
#include <iterator>
#include <algorithm>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
   stack<string> spoken_langauges;
   spoken_langauges.push("French");
   spoken_langauges.push("German");
   spoken_langauges.push("English");
   spoken_langauges.push("Hindi");
   cout<<"\n Values in Stack are ..."<<endl;
   while(!spoken_langauges.empty()){
       cout<<spoken_langauges.top() << endl;
       spoken_langauges.pop();
       /* code */
   }
   cout<<endl;
   return 0;

}
