#include<iostream>
#include<string>

using namespace std;

class Teacher{
      private :
      double salary;

      public:
      string name;
      string department;
      string subject; 

      //non-parameterized
      Teacher(){
        department = "Computer Science";
      }

      //parameterized
      Teacher(string n, string d,string s,double sal){
        this->name = n;
        department = d;
        subject = s;
        salary = sal;

      }

      void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Department : "<<department<<endl;
        cout<<"Subject : "<<subject<<endl;
        cout<<"Salary is : "<<salary<<endl;
      }
};

int main(){
    Teacher t1("Sagar Singh","Compuetr Science","C++",25000);
    
    t1.getInfo();  
    return 0;
}