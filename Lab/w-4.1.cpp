#include <iostream> 
using namespace std; 

class FactorialCalculator { 
public: 


int factorial(int n) { 
if (n == 0 || n == 1) 
return 1; 
return n * factorial(n - 1); 
} 
void displayFactorial(int number) { 
cout << "Factorial of " << number << " is: " << factorial(number) << endl; 
} 
};
int main() { 
FactorialCalculator fc; 
int num; 
cout << "Enter a number: "; 
cin >> num; 
fc.displayFactorial(num); 
return 0; 
} 
 
 
 