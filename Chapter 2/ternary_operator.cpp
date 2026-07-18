#include<iostream>

using namespace std;

//odd and even.

int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    (n % 2==0)?cout<<"Even" : cout<<"Odd";
    
    return 0;
}