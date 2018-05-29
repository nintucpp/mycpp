// ForEach
#include<iostream>
#include<algorithm>
void display(int a)
{
	std::cout<<a<<" ";
}
int main(int argc, char const *argv[])
{
	int arr[] = { 1,2,3,4,5};
	std::cout<< "base address of arr is" << std::endl;
	std::cout<< arr<< std::endl;
	std::cout<< "sizeof of arr is " << std::endl;
	std::cout << sizeof(arr) << std::endl;
	std::cout<< "size of int is" << std::endl;
	std::cout<< sizeof(int)<< std::endl;
	// what is arr+sizeof(arr)
	std::cout << "arr + sizeof(arr)" << std::endl;
	std::cout<< arr+sizeof(arr) <<std::endl;
	// divie by size of int
	std::cout<<"arr+sizeof(arr)/sizeof(int)" <<std::endl;
	std::cout<< (arr+sizeof(arr)/sizeof(int)) <<std::endl;
	// std::for_each(arr,arr+sizeof(arr)/ sizeof(int),[](int x)
	// 	{
	// 	std::cout<<x<< " ";	
	// 	});
	// std::cout<<std::endl;
	return 0;
}