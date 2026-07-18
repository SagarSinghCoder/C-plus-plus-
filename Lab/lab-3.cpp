#include <iostream>
using namespace std;
class Calculator {
public :
void performOperations() {
 double num1, num2;
char op; 
cout << "Enter first number: ";
cin >> num1;  
cout << "Enter an operator (+, -, *, /): ";
 cin >> op;
cout << "Enter second number: "; 
cin >> num2;
 switch(op) {
case '+': cout << "Result: " << num1 + num2 << endl; break; 
case '-': cout << "Result: " << num1 - num2 << endl; break; 
case '*': cout << "Result: " << num1 * num2 << endl; break; 
case '/':
if(num2 != 0) 
cout << "Result: " << num1 / num2 << endl;
 else
 cout << "Error! Division by zero." << endl;
 break;
 default: cout << "Invalid operator!" << endl;
 }
if (num1 == num2)
 cout << "Both numbers are equal." << endl;
 else
 cout << "Numbers are not equal." << endl;
}
};
int main(){
Calculator calc;
calc.performOperations();
return 0;
}
