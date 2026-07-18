#include<iostream>

using namespace std;

int main (){
    float p,r,t;
    float SI;

    cout<<"Enter Princeple : ";
    cin>>p;

    cout<<"Enter Rate : ";
    cin>>r;

    cout<<"Enter Time : ";
    cin>>t;

    SI = (p*r*t )/100;

    cout<<"Your Simple Interest Is : "<<SI;
    return 0;
}