#include<iostream>
#include<string>

using namespace std;

class Bank{
    private:
    string AccountHolder;
    int AccountNumber;
    float balance;

    public:
    
    Bank(){
        AccountHolder = "Unknown";
        AccountNumber = 0;
        balance = 0.0;
        cout<<"Default Constructor is called"<<endl;
    }

    Bank(string name,int number,float bal){
        AccountHolder = name;
        AccountNumber = number;
        balance = bal;
        cout<<"Parameterized Constructor called"<<endl;
    }

    Bank(const Bank &obj) {
        AccountHolder = obj.AccountHolder;
        AccountNumber = obj.AccountNumber;
        balance = obj.balance;
        cout << "Copy Constructor called " << endl;
    }


    ~Bank(){
        cout<<"Destructor Called "<<AccountHolder<<endl;
    }

    void display(){
        cout<<"Account Holder Name : "<<AccountHolder<<endl;
        cout<<"Account Number : "<<AccountNumber<<endl;
        cout<<"Balance is : "<<balance<<endl;
    }
};

int main(){
    Bank acc1;

    Bank acc2("Sagar",01,10000);
    cout<<"Account Details 1 : "<<endl;
    acc1.display();

    cout<<"Account Details 2 : "<<endl;
    acc2.display();

    Bank acc3 = acc2;
    cout << "\nAccount Details 3 : " << endl;
    acc3.display();

    return 0;
}