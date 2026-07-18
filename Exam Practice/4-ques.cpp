#include<iostream>

using namespace std;

class Equal{
    public : 
     void Number(){
        double num1,num2;

        cout<<"Enter Number 1 : ";
        cin>>num1;

        cout<<"Enter Number 2 : ";
        cin>>num2;

        if(num1 == num2){
            cout<<"Number is Equal."<<endl;
        }
        else{
            cout<<"Number is not Equal."<<endl;
        }
     }
};

int main(){
    Equal e1;

    e1.Number();
    return 0;
}