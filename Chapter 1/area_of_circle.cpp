#include<iostream>

using namespace std;

int main(){
    float pi = 3.14;
    float r;
    float area;

    cout<<"Enter Your Radius : ";
    cin>>r;

    area = pi * r *r;

    cout<<"Area of circle is : "<<area;

    return 0;
}