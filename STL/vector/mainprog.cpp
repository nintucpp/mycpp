//#include "VectorTest.h"
#include<iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <string>

template <typename T>
void print( T &vecOfElements, std::string delimeter = " , ")
{
    for(auto elem : vecOfElements)
    std::cout <<elem << delimeter;
    std::cout << std::endl;
}
struct Sample{
    Sample() {
        std::cout<<"Default constructo"<<std::endl;
    }
    Sample(const Sample& obj)
    {
        std::cout << "Sample copy constructor" << std::endl;
    }
};

int main(int argc, char const *argv[])
{
    std::cout<< "Neelendra" << std::endl;
    std::vector<int> vecOfNums { 1,4,5,22,33,2,11,89,49};
    auto itPos = vecOfNums.begin() + 4;
    auto newIt = vecOfNums.insert(itPos,9);
    std::cout << "Element added in vector is : " << *newIt << std::endl;
    std::cout<< "Modified vecOfnums = ";
    print(vecOfNums);
    std::vector<std::string> vec1 {"one","two","three","four","five","six","ten"};
    std::vector<std::string> vec2 {"seven","eight","nine"};
    auto iter = vec1.insert(vec1.begin()+6,vec2.begin(),vec2.end());
    std::cout << "Element added in vector is : " << *iter << std::endl;
    std::cout<< "Modified vecOfnums = ";
    print(vec1);
    return 0;
}
