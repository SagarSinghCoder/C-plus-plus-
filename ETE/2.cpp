#include<iostream>

using namespace std;

class Swaping{
    public :

    void swap(){
        int a = 10;
        int b = 20;

        cout<<"Before Swaping A :"<<a<<endl;
        cout<<"Before Swaping B :"<<b<<endl;

        a = a + b;
        b = a - b;
        a = a - b;

        cout<<"After Swaping A :"<<a<<endl;
        cout<<"After Swaping B :"<<b;

    }
};

int main(){
    Swaping s;

    s.swap();

    return 0;
}