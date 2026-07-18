#include<iostream>

using namespace std;

//Write a program to check gratest number between 3 numbers.

int main(){
    int a,b,c;

    cout<<"Enter Number A : ";
    cin>>a;

    cout<<"Enter Number B : ";
    cin>>b;

    cout<<"Enter Number C : ";
    cin>>c;

    if(a >= b && a >= c){
        cout<<"A is greatest";
    }
    else if(b >= a && b >= c){
        cout<<"B is greatest";
    }
    else{
        cout<<"C is greatest";
    }
    return 0;
}