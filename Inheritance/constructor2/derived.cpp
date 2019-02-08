#include "derived.h"
#include<iostream>
const char* derived::getName()
{
	return "Derived";
}
int derived::getValue()
{
	return m_value * 2;
}
double derived::getValue2()
{
	return 6.5;
}
void derived::getNameofDerived()
{
	std::cout<< "Inside getNameofDerived" <<std::endl;
}