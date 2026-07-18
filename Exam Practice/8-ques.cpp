#include<iostream>

using namespace std;

class Factorial{
    public :

    void fact(){
        int n,fact = 1;
        cout<<"Enter Number : ";
        cin>>n;

        for(int i = 1;i <= n;i++){
            fact = fact * i;
        }

        cout<<"Factorial Of the "<<n<<" is : "<<fact<<endl;
    }
};

int main(){
    Factorial f1;

    f1.fact();
    return 0;
}