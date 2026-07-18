#include<iostream>
#include<string>

using namespace std;

class Crickter{
    public :
    string name;
    int runs;

    Crickter(string name,int runs){
        this->name = name;
        this->runs = runs;
    }
};

int main(){
    int x = 6;
    cout<<x<<endl;

    int *ptr = &x;
    cout<<x<<endl;
    return 0;
}