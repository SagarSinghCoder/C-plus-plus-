#include<iostream>

using namespace std;

class Arthemetic{
    public:

    static int num1;
    static int num2;

    static int add(){
        return num1 + num2;
    }

    static int multiply(){
        return num1 * num2;
    }
};

int Arthemetic::num1=0;
int Arthemetic::num2=0;

int main(){
    cout<<"Enter Number 1 : ";
    cin>>Arthemetic::num1;

    cout<<"Enter Number 2 : ";
    cin>>Arthemetic::num2;

    cout<<"Addition : "<<Arthemetic::add()<<endl;
    cout<<"Multiplication : "<<Arthemetic::multiply()<<endl;

    return 0;
}