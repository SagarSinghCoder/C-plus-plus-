#include<iostream>
#include<string>

using namespace std;

class Teacher{
    private:
    double salary;

    public :
      Teacher(){
        cout<<"Hi This is a construtor"<<endl;
        department = "Compter Science";
      }
    //properties
      string name;
      string department;
      string subject;

      //methods
      void changeDept(string newDept){
        department = newDept;
      }

      void setSalary(double sal){
        salary = sal;
      }

      double getSalary(){
        return salary;
      }
};

int main(){
    Teacher t1;
   t1.name = "Sagar Singh";
 //  t1.department = "Computer";
   t1.subject = "C++";
   t1.setSalary (25000);

   cout<<t1.name<<endl;
   cout<<t1.getSalary()<<endl;
   cout<<t1.department;

   return 0;
}