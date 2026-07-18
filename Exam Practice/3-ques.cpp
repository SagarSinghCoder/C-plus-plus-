#include<iostream>

using namespace std;

class Calculator{
    public :

    void Cal(){
        double num1,num2;
        char op;

        cout<<"Enter Number 1 : ";
        cin>>num1;

        cout<<"Enter the operator : ";
        cin>>op;

        cout<<"Enter Number 2 : ";
        cin>>num2;

        switch(op){
            case '+':
            cout<<"Result : "<<num1 + num2<<endl;
            break;

            case '-':
            cout<<"Result : "<<num1 - num2<<endl;
            break;

            case '*':
            cout<<"Result : "<<num1 * num2<<endl;
            break;

            case '/':
            if(num2 != 0){
                cout<<"Result : "<<num1 / num2<<endl;
            }
            else{
                cout<<"Error"<<endl;
            }
            break;

            default :
            cout<<"Invalid Operator"<<endl;
            break;
        }
    }
};

int main(){
    Calculator c1;

    c1.Cal();
    
    return 0;
}