#include<iostream>

using namespace std;

class Hello{
    public:

    void printf(){
        cout<<"Hello  World !";
    }
};

int main(){
    Hello h1;

    h1.printf();
    return 0;
}