#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
  
    BankAccount() {
        accountHolder = "Unknown";
        accountNumber = 0;
        balance = 0.0;
        cout << "Default constructor called.\n";
    }

    BankAccount(string name, int accNum, double bal) {
        accountHolder = name;
        accountNumber = accNum;
        balance = bal;
        cout << "Parameterized constructor called.\n";
    }

    ~BankAccount() {
        cout << "Destructor called for account: " << accountHolder << endl;
    }

    void displayDetails() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc1;
    cout << "-----------------------------\n";
    BankAccount acc2("Sagar", 123456, 1000.50); 
    cout << "\nAccount 1 Details:\n";
    acc1.displayDetails();

    cout << "\nAccount 2 Details:\n";
    acc2.displayDetails();

    return 0;
}
