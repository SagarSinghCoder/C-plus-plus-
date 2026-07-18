#include<iostream>

using namespace std;

class Payment{
    public :
    virtual void paid(float amount) = 0;
};

class CreditCard : public Payment{
    public :
    void paid(float amount){
        cout<<"Amount Paid from Credit Card is : "<<amount<<endl;
    }
};

class PayPal : public Payment{
    public :
    void paid(float amount){
        cout<<"Amount Paid from PayPal is : "<<amount<<endl;
    }
};

int main(){
    Payment* pay;
    CreditCard c;
    PayPal p;

    pay = &c;
    pay -> paid(355);

    pay = &p;
    pay -> paid(655);
    return 0;
}