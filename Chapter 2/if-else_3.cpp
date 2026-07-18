#include<iostream>

using namespace std;
//Write a code for checking wheteher a number is 3 digit number or not.

int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    if(n>99 && n<1000){
        cout<<"It is a 3 digit number";
    }
    else{
        cout<<"not a 3 digit number";
    }
    return 0;
}