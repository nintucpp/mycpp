#include "WeakPtr.h"
#include<iostream>
#include<string>
#include<memory>
#include<sstream>
using namespace std;
int main() {
    shared_ptr<A> a(new A() );
    shared_ptr<B> b(new B() );
    shared_ptr<C> c(new C(a,b));
    a->setObject(weak_ptr<C>(c));
    b->setObject(weak_ptr<C>(c));
    return 0;

}