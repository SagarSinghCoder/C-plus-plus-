#include<iostream>

using namespace std;

int main(){
    int a = 5;
    int b = 3;
    
    cout<<"Before Swapping A = "<<a;
    cout<<"\n";
    cout<<"Before Swapping B = "<<b;
    cout<<"\n";

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"After Swapping A = "<<a;
    cout<<"\n";
    cout<<"After Swapping B = "<<b;



    return 0;
}