#include <iostream> 
using namespace std; 

class Add { 
public: 

virtual void sum(int a, int b) { 
cout << "Base class sum: " << a + b << endl; 
} 
}; 
 
class AddDerived : public Add { 
public: 

void sum(int a, int b) override { 
cout << "Derived class sum: " << a + b << endl; 
} 
}; 
int main() { 
Add* ptr;  
AddDerived obj; 
ptr = &obj; 
ptr->sum(10, 20); 
return 0;
}