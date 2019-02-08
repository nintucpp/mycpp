#include <iostream>
class Base
{
	public:
		virtual ~Base()
		{
			std::cout<< "Calling ~Base()" <<std::endl;
		}
};
class Derive: public Base
{
private:
	int* m_array;
public:
	Derive(int length)
	{
		m_array = new int[length];
	}
	~Derive()
	{
		std::cout<<" Calling Derive destructor"<<std::endl;
		delete[] m_array;
	}
	
};
int main(int argc, char const *argv[])
{
	Derive *derived = new Derive(5);
	Base *base = derived;
	delete base;
	return 0;
}