#include"UniquePtr.h"
#include<iostream>
#include<string>
#include<memory>
#include<sstream>
using namespace std;
int main()
{
    unique_ptr<UniquePtr> ptr1(new UniquePtr());
    unique_ptr<UniquePtr> ptr2(new UniquePtr());
    ptr1->sayHello();
    ptr2->sayHello();
    ptr2 = move( ptr1 );
    ptr2->sayHello();
    return 0;
}
