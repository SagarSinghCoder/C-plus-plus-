#include<iostream>
#include<string>

using namespace std;

class Crickter{
    public :
    string name;
    int runs;

    Crickter(string n,int r){
        name = n;
        runs = r;
    }

    void display(){
        cout<<name<<" "<<runs<<endl;
    }
};

int main(){
    Crickter c1("Virat",25000);
    Crickter c2("Rohit",18000);

    c1.display();
    return 0;
}