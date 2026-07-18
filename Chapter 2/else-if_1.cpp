#include<iostream>

using namespace std;

//Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter.

int main(){
    int l;
    int b;
    int area;
    int parameter;

    cout<<"Enter The Lenght : ";
    cin>>l;

    cout<<"Enter Breadth : ";
    cin>>b;

    area = l * b;
    parameter = 2*(l + b);

    cout<<"Area of Rectangle is : "<<area;
    cout<<"\n";
    cout<<"Parameter Of Rectangle is : "<<parameter;
    cout<<"\n";
    
    if(area > parameter){
        cout<<"Area is greater than parameter";
    }
    else if(area < parameter){
        cout<<"Patrameter is greater than Area";
    }
    else{
        cout<<"Both are equal";
    }

    return 0;
}