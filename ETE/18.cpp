#include<iostream>

using namespace std;

class Add{
    public :
    virtual void sum(int a,int b){
        cout<<"Sum of two number is : "<<a+b<<endl;
    }
};

class AddDerived : public Add{
    public :

    void sum(int a,int b) override{
        cout<<"Sum of two number is : "<<a + b<<endl;
    }
};

int main(){
    Add* a;
    AddDerived ad;

    a = &ad;
    a->sum(10,30);
    return 0;
}