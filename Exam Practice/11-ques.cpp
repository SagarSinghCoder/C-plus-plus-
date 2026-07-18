#include<iostream>

using namespace std;

class Member{
    public :

    static void MyProgram(){
        cout<<"Hello To Me";
    }
};

int main(){
    Member::MyProgram();
    return 0;
}