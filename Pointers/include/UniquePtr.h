#include<iostream>
#include<string>
#include<memory>
#include<sstream>
using namespace std;
class UniquePtr{
    private:
    static int count;
    string name;
    public:
    UniquePtr(){
        ostringstream stringStream(ostringstream::ate);
        stringStream <<"Object";
        stringStream << ++count;
        name = stringStream.str();
        cout<< "\n UniquePtr Default constructor ..." << name << endl;

    }
    ~UniquePtr()
    {
        cout <<"\n UniquePtr destructor == " << name << endl;
    }
    UniquePtr(const UniquePtr &objectBeingCopied ){
        cout<< "\n UniquePtr copy constructor " <<endl;
    }
    UniquePtr& operator = ( const UniquePtr &objectBeingAssigned ){
        cout << "\n UniquePtr assignment operator " << endl;
    }
    void sayHello() {
        cout << "\n Hello from UniquePtr" <<endl;
    }
};
int UniquePtr::count = 0;