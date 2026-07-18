#include<iostream>
#include<string>

using namespace std;

class BankAccount{
  private : 
  string accountHolderName;
  int  accountNumber;
  double balance;

  public :
  BankAccount(string name,int number,double intialBalance){
    accountHolderName = name;
    accountNumber = number;
    balance = intialBalance;
    cout<<"Account created : "<<accountHolderName<<"with balance Rs : "<<balance<<endl;
  }

  ~BankAccount(){
    cout<<"Account of "<<accountHolderName<<" is closed."<<endl;
  }

  void AccountInfo(){
       cout<<"Account Holder : "<<accountHolderName<<endl;
       cout<<"Account Number : "<<accountNumber<<endl;
       cout<<"Account Balance : "<<balance<<endl;
  }

  void deposit(double amount) { 
    balance += amount; 
    cout<<"Deposited $" << amount << ". New Balance: Rs." << balance << endl; 
  }

    void withdraw(double amount) { 
    if (amount > balance) { 
    cout << "Insufficient Balance!" << endl; 
     
     
            } else { 
                balance -= amount; 
                cout << "Withdrawn Rs. " << amount << ". New Balance: Rs. " << balance << endl; 
            } 
        }
};

int main(){
    BankAccount account1("Miss.Tannu",951753,250.0);

    account1.AccountInfo();
    account1.deposit(200.0); 
    account1.withdraw(100.0); 
    return 0;
}