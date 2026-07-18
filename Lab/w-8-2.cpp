#include <iostream> 
#include <cmath> 
using namespace std;

class Shape { 
public: 
 virtual void area() =0; 
};

class Circle : public Shape { 
private: 
 float radius;
public: 
 Circle(float r) { 
 radius = r;
 } 
 void area() override { 
 float a = 3.14 * radius * radius;
 cout << "Area of Circle: " << a << endl;
 } 
};

class Square : public Shape { 
private: 
 float side;
public: 
 Square(float s) { 
 side = s;
 } 
 void area() override { 
 float a = side * side;
 cout << "Area of Square: " << a << endl;
 } 
};
int main() { 
 Shape* s;
 Circle c(5);
 Square sq(4);
 s = &c;
 s->area(); 
 s = &sq;
 s->area(); 
 return 0;
} 
