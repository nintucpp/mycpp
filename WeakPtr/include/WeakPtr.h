#include<iostream>
#include<string>
#include<memory>
#include<sstream>
using namespace std;
class C;
class A {
    private:
    weak_ptr<C> ptr;
    public:
    A() {
        cout <<"\n A constructor" << endl;
    }
    ~A()
    {
        cout<<"\n A destructor " << endl;
    }
    void setObject(weak_ptr<C> ptr)
    {
        this->ptr = ptr;
    }
};
class B{
    private:
    weak_ptr<C> ptr;
    public:
    B() {
        cout << "\n B constructor " << endl;
    }
    ~B() {
        cout << "\n B destructor " << endl;
    }
    void setObject( weak_ptr<C> ptr){
        this->ptr = ptr;
    }
};
class C {
    private:
    shared_ptr<A> ptr1;
    shared_ptr<B> ptr2;
    public:
    C(shared_ptr<A> ptr1,shared_ptr<B> ptr2){
        cout<<"\n C constructor "<<endl;
        this->ptr1 = ptr1;
        this->ptr2 = ptr2;
    }
    ~C() {
        cout<< "\n C destructor " << endl;
    }
};
