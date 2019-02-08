#include<iostream>
#include<deque>
#include<algorithm>
#include<iterator>
#include<bitset>
using namespace std;
template< class T>
class DynamicArray{
    private:
    deque< T > dynamicArray;
    typename deque<T>::iterator pos;
    public:
    DynamicArray(){ initialize();}
    ~DynamicArray() {}
    void initialize()
    {
        pos = dynamicArray.begin();
    }
    void appendValue(T element){
        dynamicArray.push_back(element);
    }
    bool hasNextValue(){
        return(pos != dynamicArray.end());
    }
    T getValue() {
        return *pos++;
    }

    
};
template<>
class DynamicArray<bool>{
private:
deque< bitset <8> *>dynamicArray;
bitset<8> oneByte;
typename deque<bitset<8> *>::iterator pos;
int bitSetIndex;
int getDequeIndex() {
    return (bitSetIndex) ?(bitSetIndex/8): 0;
}
public:
DynamicArray(){
    bitSetIndex = 0;
    initialize();
}
~DynamicArray() { }
void initialize() {
    pos = dynamicArray.begin();
    bitSetIndex = 0;
}
void appendValue(bool value ){
    int dequeIndex = getDequeIndex();
    bitset<8> *pBit = NULL;
    if(( dynamicArray.size() == 0 ) || ( dequeIndex >= ( dynamicArray.size())))
    {
        pBit = new bitset<8>();
        pBit->reset();
        dynamicArray.push_back(pBit);
    }
    if( !dynamicArray.empty())
    pBit = dynamicArray.at(dequeIndex);
    pBit->set( bitSetIndex % 8,value);
    ++bitSetIndex;
}
bool hasNextValue() {
    return (bitSetIndex < (( dynamicArray.size() * 8 )));

}
bool getValue()
{
    int dequeIndex = getDequeIndex();
    bitset<8> *pBit = dynamicArray.at(dequeIndex);
    int index = bitSetIndex % 8;
    ++bitSetIndex;
    return(*pBit)[index] ? true : false;
}

};