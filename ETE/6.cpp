#include<iostream>

using namespace std;

class Factorial{
    public:
    int fact(int n){
        if(n == 0){
            return 1;
        }else {
            return n * fact(n - 1);
        }
    }
    void display(int number){
        cout<<"Factorial of "<<number<<" is :"<<fact(number)<<endl;
    }
};

int main(){
    Factorial f;
    
    int number;
    cout<<"Enter Number : ";
    cin>>number;

    f.display(number);
}