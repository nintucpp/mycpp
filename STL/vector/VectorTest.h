#ifndef VectorTest_
#define VectorTest_
#include <iostream>

struct Sample{
    Sample() {}
    Sample(const Sample& obj)
    {
        std::cout << "Sample copy constructor" << std::endl;
    }
};

#endif // VectorTest_