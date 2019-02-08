#include "base.h"
#include "derived.h"
#include <iostream>
#include "Timer.h"
using namespace std;
int main()
{
	Timer StdString;
	derived a(10);
	auto &refD = a;
	base *ptrD = &a;
	cout<< "Derived getName" << a.getName() << endl;
	cout << "Derived getValue" << a.getValue() << endl;
	cout << "Derived getName by Reference   : " << refD.getName() << endl;
	cout << "Derived getName by pointer  :  " << ptrD->getName() << endl;
	cout << "Derived getValue by Reference  :  " << refD.getValue() <<endl;
	cout << "Derived getValue by pointer  :  " << ptrD->getValue() << endl;
	std::cout << "Time elapsed:(Std::string) " << StdString.elapsed() << std::endl;
//	cout <<" Derived getNameofDerived :" << ptrD->getNameofDerived() <<endl;
//	cout << "Derived getValue2 :" << ptrD->getValue2() << endl;
}