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

      //copy constructor
      Teacher(Teacher &orgobj){  //pass by reference
         cout<<"I am copy constructor"<<endl;
         this->name = orgobj.name;
         this->department = orgobj.department;
         this->subject = orgobj.subject;
         this->salary = orgobj.salary;
      }

};

int main(){
    Teacher t1("Sagar Singh","Compuetr Science","C++",25000);
    
    t1.getInfo();  

    Teacher t2(t1);//custom copy constructor - invoke
    t2.getInfo();

    return 0;
}