#include <iostream> 
using namespace std; 

class Student { 
string name; 
int roll; 


public: 
friend istream& operator >> (istream &in, Student &s); 
friend ostream& operator << (ostream &out, Student &s); 
}; 

istream& operator >> (istream &in, Student &s) {
in >> s.name; 
cout << "Enter roll: "; 
in >> s.roll; 
return in; 
} 

ostream& operator << (ostream &out, Student &s) { 
out << "Name: " << s.name << "\nRoll: " << s.roll << endl; 
return out; 
} 

int main() { 
Student s; 
cin >> s; 
cout << "\nStudent Details:\n"; 
cout << s; 
return 0; 
}