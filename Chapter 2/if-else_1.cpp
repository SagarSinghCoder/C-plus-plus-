#include<iostream>

using namespace std;

int main(){
    int n;

    cout<<"Enter Your Number : ";
    cin>>n;

    if(n % 5==0){
        cout<<"Number Is Divisible By 5 ";
    }
    else{
        cout<<"Number is not Divisible by 5 ";
    }
    return 0;
}