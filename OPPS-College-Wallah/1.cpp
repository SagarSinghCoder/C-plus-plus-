#include<iostream>
#include<string>

using namespace std;

class Student{
    public :
   string name;
   int roll;
   float cgpa;
};

int main(){
    Student s1;
    s1.name = "Sagar";
    s1.roll = 01;
    s1.cgpa = 9.17;

    cout<<"Student Details : "<<s1.name<<endl<<s1.roll<<endl<<s1.cgpa<<endl;
 
    Student s2;
    s2.name = "Tanisha";
    s2.roll = 02;
    s2.cgpa = 8.5;

    cout<<"Student Details : "<<s2.name<<endl<<s2.roll<<endl<<s2.cgpa<<endl;

    return 0;
}