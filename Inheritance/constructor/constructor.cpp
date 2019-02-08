//constructor
#include<iostream>

using namespace std;

class Base
{ int x;
  public:
  Base() { cout << "Base default constructor"<< endl; }
  Base(int a){ cout << "Base class parameterized constructor" << endl;}
};
class Derived : public Base
{ int y;
  public:
  Derived():Base(2) { cout << "Derived default constructor" << endl; }
  Derived(int i):Base(i) { cout << "Derived parameterized constructor" << endl; }
};

int main()
{
 //Base b;     
 cout<<"Neelendra" ;
 Derived d1;    
}