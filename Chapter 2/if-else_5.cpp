#include<iostream>

using namespace std;

//Write a program to check whether a number is divisible by 5 or 3.

int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    
    if(n % 5 == 0 || n % 3 == 0){
        cout<<"Number is divisible by  5 and 3";
    }
    else{
        cout<<"Not divisible by 5 and 3";
    }
    return 0;
}