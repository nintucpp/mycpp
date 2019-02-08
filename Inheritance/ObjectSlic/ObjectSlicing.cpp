//ObjectSlicing
#include <iostream>
class Base
{
protected:
	int m_value;
public:
	Base(int value):m_value(value)
	{
		std::cout <<" constructor of Base class"<< std::endl;
	}
	virtual const char* getName() const{ return "Base";}
	int getValue() const { return m_value;}
	Base(Base &a)
	{
     std::cout<<"copy constructor of Derived" << std::endl;
		m_value = a.m_value;
	}
};
class Derived: public Base
{
public:
  Derived(int value):Base(value)
  {
    std::cout <<"constructor of Derived" << std::endl;
  }
  virtual const char* getName() const{ return "Derived";}
};
int main(int argc, char const *argv[])
{
	Derived derived(5);
	// std::cout <<"derived is a" << derived.getName() << "and has value" << derived.getValue() <<'\n';
	// Base &ref = derived;
	// std::cout<< "ref is a" << ref.getName() << " and has value" << ref.getValue() <<'\n';
	// Base *ptr = &derived;
	// std::cout<< "ptr is a" << ptr->getName() << " and has value" << ptr->getValue() <<'\n';
	// when storing derived class object into base class objec using copy construto , it sliece drived part of Derived oject ,
	// it is called object scling
	Base base = derived;
	std::cout <<" base is a" << base.getName() << " and has value" << base.getValue() <<'\n';
	return 0;
}