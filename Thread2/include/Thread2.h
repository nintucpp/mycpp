#ifndef __THREAD2_H
#define __THREAD2_H
#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
#include "Account.h"
enum ThreadType {
    DEPOSITOR,
    WITHDRAWER
};
class Thread2 {
private:
    thread *pThread;
    Account *pAccount;
    static mutex locker;
    ThreadType threadType;
    bool stopped;
    void run();
public:
    Thread2( Account *pAccount, ThreadType typeOfThread);
    ~Thread2();
    void start();
    void stop();
    void join();
    void detach();
};
#endif