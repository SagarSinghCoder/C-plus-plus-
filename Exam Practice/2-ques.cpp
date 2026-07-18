#include<iostream>

using namespace std;

class Swapping{
    public :

    void Swap(){
        int a = 10;
        int b = 20;
        
        cout<<"Before Swapping A : "<<a<<endl;
        cout<<"Before Swapping B : "<<b<<endl;

        a = a + b;
        b = a - b;
        a = a - b;

        cout<<"After Swapping A : "<<a<<endl;
        cout<<"After Swapping B : "<<b<<endl;

    }
};

int main(){
    Swapping s1;

    s1.Swap();
    
}