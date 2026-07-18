#include <iostream> 
using namespace std;

class Vehicle { 
protected: 
 string brand;
 int year;
public: 
 
 void inputDetails() { 
 cout << "Enter vehicle brand: ";
 cin >> brand;
 cout << "Enter year of manufacture: ";
 cin >> year;
 } 

 void displayDetails() { 
 cout << "Brand: " << brand << endl;
 cout << "Year: " << year << endl;
 } 
};

class Car : public Vehicle { 
private: 
 int numberOfDoors;
public: 

 void inputCarDetails() { 
 inputDetails();
 cout << "Enter number of doors: ";
 cin >> numberOfDoors;
 } 

 void displayCarDetails() { 
 displayDetails();
 cout << "Number of doors: " << numberOfDoors << endl;
 } 
};

class Bike : public Vehicle { 
private: 
 string type; 
public: 

 void inputBikeDetails() { 
 inputDetails(); 
 cout << "Enter type of bike (e.g., Sports/Cruiser): ";
 cin >> type;
 } 

 void displayBikeDetails() { 
 displayDetails(); 
 cout << "Type of bike: " << type << endl;
 } 
};

int main() { 
 Car car;
 Bike bike;
 cout << "--- Enter Car Information ---" << endl;
 car.inputCarDetails();
 cout << "\n--- Enter Bike Information ---" << endl;
 bike.inputBikeDetails();
 cout << "\n--- Car Details ---" << endl;
 car.displayCarDetails();
 cout << "\n--- Bike Details ---" << endl;
 bike.displayBikeDetails();
 return 0;
}