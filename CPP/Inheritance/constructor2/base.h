#ifndef _base
#define _base
#include<iostream>
class base
{
public:
	int m_value;
public:
	base(){}
	base(int value):m_value(value){}
	const char * getName();
	int getValue();
	~base(){}
};
#endif