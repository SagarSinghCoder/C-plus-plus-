#include <iostream> 
using namespace std; 
class Arithmetic { 
public: 
static int num1; 
static int num2; 

static int add() { 
return num1 + num2; 
} 

static int multiply() { 
return num1 * num2; 
} 
}; 

int Arithmetic::num1 = 0; 
int Arithmetic::num2 = 0; 
 
 
int main() { 
    cout << "Enter first number: "; 
    cin >> Arithmetic::num1; 
    cout << "Enter second number: "; 
    cin >> Arithmetic::num2; 
    
 cout << "\nAddition: " << Arithmetic::add() << endl; 
    cout << "Multiplication: " << Arithmetic::multiply() << endl; 
    return 0; 
} 
 
