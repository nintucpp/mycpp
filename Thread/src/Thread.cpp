#include "Thread.h"
#include<thread>
int main()
{
    thread thread1(threadProc);
    thread thread2(threadProc);
    thread thread3(threadProc);

    thread1.join();
    thread2.join();
    thread3.join();
    return 0;
}