#include<pthread.h>
#include<iostream>
using namespace std;
void* threadProc(void *param)
{
    for(int count =0; count<2;++count)
    cout <<"Message " << count << "from " << pthread_self() <<endl;
    return NULL;
}
