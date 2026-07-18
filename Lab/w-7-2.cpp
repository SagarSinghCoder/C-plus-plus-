#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    Student() {
        name = "Unknown";
        age = 0;
        cout << "Default Constructor Called\n";
    }

    Student(string n) {
        name = n;
        age = 0;
        cout << "Single Parameter Constructor Called\n";
    }

    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Two Parameter Constructor Called\n";
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;
    Student s2("Sagar");          
    Student s3("Tannu", 20);    
    s1.display();
    s2.display();
    s3.display();

    return 0;
}
