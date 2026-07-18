#include <iostream> 
using namespace std; 
class Employee { 
public: 
string name; 
int empID; 
string department; 
float salary; 

void inputDetails() { 
cout << "\nEnter Employee Name: "; 
cin.ignore();  
getline(cin, name); 
cout << "Enter Employee ID: "; 
cin >> empID; 
cin.ignore(); 
cout << "Enter Department: "; 
getline(cin, department); 
 
 
        cout << "Enter Salary: "; 
        cin >> salary; 
    } 
    
    void displayDetails() { 
        cout << "\n--- Employee Information ---" << endl; 
        cout << "Name: " << name << endl; 
        cout << "ID: " << empID << endl; 
        cout << "Department: " << department << endl; 
        cout << "Salary: " << salary << endl; 
    } 
}; 
 
int main() { 
    int num; 
    cout << "Enter number of employees: "; 
    cin >> num; 
    Employee* emp = new Employee[num]; 
    
    for (int i = 0; i < num; i++) { 
        cout << "\nEnter details for Employee " << i + 1 << ":" << endl; 
        emp[i].inputDetails(); 
    } 
   
    for (int i = 0; i < num; i++) { 
        emp[i].displayDetails(); 
    } 
    delete[] emp; 
    return 0; 
 
 
}