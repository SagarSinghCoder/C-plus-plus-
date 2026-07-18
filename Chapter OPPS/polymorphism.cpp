#include<iostream>
#include<string>

using namespace std;

class sagar{
    public:
   string name;

   sagar(){
    cout<<"Non-Parameterized ";
   }

   sagar(string name){
       this->name = name;
       cout<<"Parameterized";
   }
};

int main(){
    sagar s1();


    return 0;
}