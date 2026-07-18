#include<iostream>

using namespace std;

//Write a program to create a calculator that performs basic arithmetic operations (add, subtract, multiply and divide) using switch case. The calculator should input two numbers and an operator from user.

int main(){
    int num1,num2;
    char op;

    cout<<"Enter Number 1 : ";
    cin>>num1;

    cout<<"Operator : ";
    cin>>op;

    cout<<"Enter Number 2 : ";
    cin>>num2;

    switch(op){
        case '+':
            cout<<num1 + num2<<"\n";
            break;

        case '-':
            cout<<num1 - num2<<"\n";
            break;

        case '*':
            cout<<num1 * num2<<"\n";
            break;
        
        case '/':
            cout<<num1 / num2<<"\n";
            break;

        default:
            cout<<"Invalid Operator";
    }

    return 0;
}