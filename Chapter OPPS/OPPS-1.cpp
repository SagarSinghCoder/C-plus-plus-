#include<iostream>
#include<string>

using namespace std;

class Teacher{
    private:
    double salary;

    public :
    //properties
      string name;
      string dept;
      string subject;

      //methods
      void changeDept(string newDept){
        dept = newDept;
      }

      void setSalary(double sal){
        salary = sal;
      }

      double getSalary(){
        return salary;
      }

};

class Student{
    private :
    string name;
    int rollno;
    int age;
};

int main(){
     Teacher t1;
    t1.name = "Sagar Singh";
    t1.dept = "Computer";
    t1.subject = "C++";
    t1.setSalary (25000);

    cout<<t1.name<<endl;
    cout<<t1.getSalary();

    return 0;
}