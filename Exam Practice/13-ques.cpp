#include<iostream>

using namespace std;

class MyClass{
    public :

    MyClass(){
        cout<<"Constructor Called"<<endl;
    }

    MyClass(const MyClass &obj){
        cout<<"Copy Constructor Called"<<endl;
    }

    ~MyClass(){
        cout<<"Destructor Called"<<endl;
    }
};

int main(){
    MyClass obj1;

    MyClass obj2 = obj1;

    return 0;
}