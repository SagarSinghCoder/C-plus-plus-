#include<iostream>

using namespace std;

class Reverse{
    public :
    int num;

    void input(){
        cout<<"Enter The Number : ";
        cin>>num;
    }

    void rev(){
        int n = num ,rev = 0;
        while(n > 0){
            rev = rev * 10 + n % 10;
            n /= 10;
        }
        cout<<"Reversed Number : "<<rev<<endl;
    }
};

int main(){
    Reverse r;
    r.input();
    r.rev();
    return 0;
}