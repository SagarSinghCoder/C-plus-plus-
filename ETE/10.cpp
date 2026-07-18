#include<iostream>
#include<string>

using namespace std;

class Employee{
       public:

       string name;
       int ID;
       string dept;
       float salary;

       void InputDetails(){
           cout<<"Enter Name : ";
           cin.ignore();
           getline(cin,name);

           cout<<"Enter ID : ";
           cin>>ID;

           cout<<"Enter department : ";
           cin.ignore();
           getline(cin,dept);

           cout<<"Enter salary : ";
           cin>>salary;
       }

       void display(){
        cout<<"\n ---Employee Details---\n";
        cout<<"Name : "<<name<<endl;
        cout<<"Id : "<<ID<<endl;
        cout<<"Department : "<<dept<<endl;
        cout<<"Salary : "<<salary<<endl;
       }
};

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    Employee* e = new Employee[num];

    for(int i =0;i< num;i++){
        cout<<"Enter Details Of Employee "<<i + 1<<endl;
        e[i].InputDetails();
    }
    for(int i = 0; i< num;i++){
        e[i].display();
    }
    return 0;
}