#include "DynamicArray.h"
using namespace std;
int main() {
    DynamicArray<int> intArray;
    intArray.appendValue(100);
    intArray.appendValue(200);
    intArray.appendValue(300);
    intArray.initialize();
    std::cout<<"\n Int DyanmicArray Values are ..."<< std::endl;
    while(intArray.hasNextValue())
    cout<<intArray.getValue() <<"\t";
    cout<<endl;
    DynamicArray<char> charArray;
    charArray.appendValue('H');
    charArray.appendValue('A');
    charArray.appendValue('P');
    charArray.appendValue('P');
    charArray.appendValue('Y');
    charArray.initialize();
    std::cout<<"\n Int DyanmicArray Values are of char ..."<< std::endl;
    while(charArray.hasNextValue())
    cout<<charArray.getValue() <<"\t";
    cout<<endl;

    DynamicArray<bool> boolArray;
    boolArray.appendValue( true );
    boolArray.appendValue( false );
    boolArray.appendValue( true );
    boolArray.appendValue( false );
    boolArray.appendValue( true );
    boolArray.appendValue( true );
    boolArray.appendValue( false );
    boolArray.appendValue( true );

boolArray.initialize();
cout<<"\n Bool DynamicArray values are ...."<< endl;
while(boolArray.hasNextValue() )
cout<< boolArray.getValue();
cout<<endl;


}