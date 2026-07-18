#include<iostream>

using namespace std;

class MyClass{
    public:

    MyClass(){
        cout<<"Contructor Called"<<endl;
    }

    ~MyClass(){
        cout<<"Destructor Called";
    }
};

int main(){
    MyClass obj;
    return 0;
}