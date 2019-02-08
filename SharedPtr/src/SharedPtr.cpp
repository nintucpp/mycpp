#include "SharedPtr.h"
#include<iostream>
#include<string>
#include<memory>
#include<sstream>
int main()
{
    shared_ptr<SharedPtr> ptr1(new SharedPtr() );
    ptr1->sayHello();
    cout<< "\n Use count is "<< ptr1.use_count() << endl;
    {
        shared_ptr<SharedPtr> ptr2 (ptr1);
        ptr2->sayHello();
        cout<<"\n Use count is " << ptr2.use_count() << endl;
    }
   
    shared_ptr<SharedPtr> ptr3 = ptr1 ;
    ptr3->sayHello();
    cout<< "\n Use count is "<< ptr3.use_count() << endl;
    return 0;
}