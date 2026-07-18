#include<iostream>

using namespace std;

class Factorial{
    public :
    int fact(int n){
        if(n==0||n==1){
            return 1;
        }
        return n * fact(n-1);
    }

    void displayFact(int number){
        cout<<"Factorial of "<<number<<" is : "<<fact(number)<<endl;
    }
};

int main(){
    Factorial f1;

    int n;
    cout<<"Enter Number :";
    cin>>n;

    f1.displayFact(n);
    return 0;
}
