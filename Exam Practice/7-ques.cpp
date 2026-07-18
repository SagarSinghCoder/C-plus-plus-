#include<iostream>

using namespace std;

class Factorial{
    public :
     
    int fact(int n){
        if(n == 0 || n == 1){
            return 1;
        }
        return n * fact(n - 1);
    }

    void number(){
        int n;
        cout<<"Enter Number : ";
        cin>>n;

        cout<<"Factorial of the "<<n<<" is : "<<fact(n)<<endl;
    }
};

int main(){
    Factorial f1;

    f1.number();

    return 0;
}