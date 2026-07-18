#include<iostream>
#include<string>

using namespace std;

class Account{
    private:
    double balance;
    string password;

    public:
    string accountId;
    string username;

    void bal(double balance1){
        balance = balance1;
    }

    double showBal(){
        return balance;
    }
};
int main(){
    Account a1;

    a1.accountId = "Sagar Singh";
    a1.bal(250000);

    cout<<a1.accountId<<"\n";
    cout<<a1.showBal();

    return 0;
}