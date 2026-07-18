#include <iostream> 
using namespace std; 
     
class Rectangle { 
private: 
int length; 
int width; 
public: 
 
Rectangle() { 
length = 0; 
width = 0; 
cout << "Default constructor called. Length and Width set to 0." << endl; 
} 
 
    Rectangle(int l) { 
        length = l; 
        width = l; 
        cout << "Single parameter constructor called. Creating a square of size " << l << endl; 
    } 
 
    Rectangle(int l, int w) { 
        length = l; 
        width = w; 
        cout << "Two parameters constructor called. Length = " << l << ", Width = " << w << endl; 
    } 
  
    void displayArea() { 
        cout << "Area of rectangle: " << length * width << endl; 
    } 
}; 
 
int main() { 

    Rectangle rect1;          
    Rectangle rect2(5);        
    Rectangle rect3(4, 6);     
 
 
    rect1.displayArea(); 
    rect2.displayArea(); 
    rect3.displayArea(); 
 
    return 0; 
} 
