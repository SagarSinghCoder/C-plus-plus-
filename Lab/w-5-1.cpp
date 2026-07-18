#include <iostream> 
using namespace std; 

class Student { 
public: 
string name; 
int id; 
float grade; 

void inputData() { 
cout << "Enter Student ID: "; 
cin >> id; 
cout << "Enter Student Grade: "; 
cin >> grade; 
cin.ignore();      
cout << "Enter Student Name (one word only): "; 
 
 
          getline(cin, name); 
    } 
 
    void displayData() { 
        cout << "\n--- Student Details ---" << endl; 
        cout << "Name: " << name << endl; 
        cout << "ID: " << id << endl; 
        cout << "Grade: " << grade << endl; 
    } 
}; 
 
int main() { 
    Student s1;
    s1.inputData();   
    s1.displayData(); 
    return 0; 
} 