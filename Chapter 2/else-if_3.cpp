#include<iostream>

using namespace std;

//Write a program to check minimum number between 3 numbers.

int main(){
    int a,b,c;

    cout<<"Enter Number A : ";
    cin>>a;

    cout<<"Enter Number B : ";
    cin>>b;

    cout<<"Enter Number C : ";
    cin>>c;

    if(a <= b && a <= c){
        cout<<"A is minimum";
    }
    else if(b <= a && b <= c){
        cout<<"B is minimum";
    }
    else{
        cout<<"C is minimum";
    }
    return 0;
}