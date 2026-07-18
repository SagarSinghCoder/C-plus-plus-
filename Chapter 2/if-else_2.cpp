#include<iostream>

using namespace std;

//How to print a Absolute Value Of A number.

int main(){
    int n;

    cout<<"Enter Number : ";
    cin>>n;

    if(n >= 0){
        cout<<n;
    }
    else{
        cout<<-n;
    }

    //if i want to change the value of n into its absolute value.

    // if(n < 0) n = -n;
    // cout<<n;
    return 0;
}