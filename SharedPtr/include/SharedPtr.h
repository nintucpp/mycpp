#include<iostream>
#include<string>
#include<memory>
#include<sstream>
using namespace std;
class SharedPtr{
    private:
    static int count;
    string name;
    public:
    SharedPtr(){
    ostringstream stringStream(ostringstream::ate);
    stringStream << "Object";
    stringStream << ++count;
    name = stringStream.str();
    cout<< "\n SharedPtr Default constructor -- "<< name << endl;
    }
    ~SharedPtr(){
        cout<<"SharedPtr destructor -- "<< name << endl;
    }
    SharedPtr(const SharedPtr &objectBeingCopied ){
        cout<< "\n SharedPtr copy constructor" << endl;
    }
 void sayHello(){
     cout << "Hello from SharedPtr "<< name << endl;
 }
};
int SharedPtr::count = 0;