#include<iostream>
#include<string>

using namespace std;

class Student{
    public :
    string name;
    int roll;
    float gpa;

    Student(string s,int r,float g){//Parameterized Constructor
        name = s;
        roll = r;
        gpa = g;
    }

    Student(){//Default Construtor

    }


Student(const Student &s) {//Copy Constructor
    name = s.name;
    roll = s.roll;
    gpa = s.gpa;
    cout << "Copy constructor called for " << name << endl;
}
};

int main(){
     Student s1("Sagar",01,9.17);

     Student s2("Tanisha",02,8.1);

     Student s3;
     s3.name = "rohit";
     s3.roll = 03;
     s3.gpa = 7.33;

     Student s4  = s1; //Deep Copy
     s4.name = "Faisal";

     Student s5(s1);//Copy Constructor
     
     cout<<s1.name<<endl<<s1.roll<<endl<<s1.gpa<<endl;
     cout<<s2.name<<endl<<s2.roll<<endl<<s2.gpa<<endl;
     cout<<s3.name<<endl<<s3.roll<<endl<<s3.gpa<<endl;
     cout<<s4.name<<endl<<s4.roll<<endl<<s4.gpa<<endl;
     cout<<s5.name<<endl<<s5.roll<<endl<<s5.gpa<<endl;
    return 0;
} 