#include<iostream>

using namespace std;

class MyClass{
    public :
    static int value;
};

int MyClass::value = 5;

int main(){

    cout<<"Before Changing the value : "<<MyClass::value<<endl;

    MyClass::value = 10;

    cout<<"After Changing the value : "<<MyClass::value<<endl;

    return 0;
}