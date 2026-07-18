#include<iostream>
#include<string>

using namespace std;

class student{
    public:
    string name;
    int ID;
    float grades;

    void InputDetails(){
        cout<<"Enter the name : ";
        cin>>name;
        cout<<"Enter the Id :";
        cin>>ID;
        cout<<"Enter the grades : ";
        cin>>grades;
    }

    void Display(){
        cout<<"Student Name is : "<<name<<endl;
        cout<<"Id : "<<ID<<endl;
        cout<<"Grades : "<<grades<<endl;
    }
};

int main(){
    student s;

    s.InputDetails();
    s.Display();
    
    return 0;
}