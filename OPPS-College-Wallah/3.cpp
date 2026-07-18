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
    Crickter c1("Virat",25000);
    Crickter c2("Rohit",18000);

    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2.name<<" "<<c2.runs<<endl;
    return 0;
}