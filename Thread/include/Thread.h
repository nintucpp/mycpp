#include<thread>
#include<iostream>
using namespace std;
void threadProc()
{
    for(int count =0;count < 3; ++count) 
    {
        cout<< "Message => "<< count << " Neelendra from "  << this_thread::get_id() <<endl;
    }
}
