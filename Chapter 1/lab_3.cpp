#include<iostream>

using namespace std;

int main(){
    int a = 5;
    int b = 3;
    int c;
    
    cout<<"Before Swappong A : "<<a;
    cout<<"\n";
    cout<<"Before Swapping B : "<<b;
    cout<<"\n";

    c = a;
    a = b;
    b = c;

    cout<<"After Swappong A : "<<a;
    cout<<"\n";
    cout<<"After Swapping B : "<<b;

     return 0;
}