#include<iostream>
#include<string>

using namespace std;

class Student{
    private:
    string name;
    int age;

    public:

    Student(){
        name = "Unknown";
        age = 0;
        cout<<"Deafult Constructor Called"<<endl;
    }

    Student(string n){
        name = n;
        age = 0;
        cout<<"One Parameterized Constructor Called"<<endl;
    }
    

    Student(string n,int a){
        name = n;
        age = a;
        cout<<"Two Parameterized Constructor Called"<<endl;
    }

    ~Student(){
        cout<<"Destructor Called for "<<name<<endl;
    }

    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};

int main(){
    Student s1;

    Student s2("Sagar");

    Student s3("Tannu",20);

    s1.display();
    s2.display();
    s3.display();
}