#include<iostream>
#include<string>

using namespace std;

class Student{
      public:
      //opposite of constructor
      string name;
      double cgpa;

      Student(string name,double cgpa){
        this->name = name;
        this->cgpa = cgpa;
      }

      //destructor
      ~Student(){
        cout<<"Hi,I delete everything"<<endl;
      }

      void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"CGPA : "<<cgpa<<endl;
      }

};

int main(){
    Student s1("Sagar Singh",8.6);
    s1.getInfo();
    return 0;
}