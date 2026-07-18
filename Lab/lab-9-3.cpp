#include <iostream> 
using namespace std; 

class Payment { 
public: 

virtual void pay(float amount) = 0; 
}; 

class CreditCard : public Payment { 
public: 
void pay(float amount) override { 
cout << "Paid $" << amount << " using Credit Card." << endl; 
} 
}; 

class PayPal : public Payment { 
public: 
void pay(float amount) override { 
cout << "Paid $" << amount << " using PayPal." << endl; 
} 
}; 
int main() { 
Payment* payment; 
CreditCard card; 
PayPal paypal; 
payment = &card; 
payment->pay(150.75);
payment = &paypal; 
payment->pay(89.50); 
return 0; 
} 