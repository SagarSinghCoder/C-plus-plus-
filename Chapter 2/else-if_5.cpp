#include<iostream>

using namespace std;

/*
Take input percentage of a student and print the grade according to marks :
1- 81 - 100 Very  Good
2- 61 - 80 Good
3- 41 - 60 Average
4- <=40 Fail.
*/

int main(){
    int n;

    cout<<"Enter Number : ";
    cin>>n;

    if(100 >= n && 81 <= n){
        cout<<"Very  Good";
    }
    else if(80 >= n && 61 <= n){
        cout<<"Good";
    }
    else if(60 >= n && 41 <= n){
        cout<<"Average";
    }
    else{
        cout<<"Fail";
    }
    
    return 0;
}