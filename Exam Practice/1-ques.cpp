#include<iostream>

using namespace std;

class Hello{
    public :

    void world(){
        cout<<"Hello World";
    }
};

int main(){
    Hello h1;

    h1.world();
    return 0;
}