#include<iostream>

using namespace std;

//Take 3 numbers input and tell if they can be the sides of a triangle.

int main(){
    int a,b,c;

    cout<<"Enter Number A : ";
    cin>>a;

    cout<<"Enter Number B : ";
    cin>>b;

    cout<<"Enter Number C : ";
    cin>>c;

    if((a+b)>c && (b+c)>a && (c+a)>b){
        cout<<"Valid Triangle";
    }    
    else{
        cout<<"Invalid Triangle";
    }

    return 0;
}