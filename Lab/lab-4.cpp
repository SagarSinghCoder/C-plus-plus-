#include<iostream>

using namespace std;

class Number{
    public:
    void equalNum(){
        int num1,num2;

        cout<<"Enter Number 1 : ";
        cin>>num1;

        cout<<"Enter Number 2 : ";
        cin>>num2;

        if(num1 == num2){
            cout<<"Num 1 and Num2 are equal.";
        }
        else{
            cout<<"Num1 and Num2 are not equal.";
        }
    }
};

int main(){
    Number num;

    num.equalNum();
    return 0;
}