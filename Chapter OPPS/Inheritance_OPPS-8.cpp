#include<iostream>
#include<string>

using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(){
        cout<<"Parent Constructor"<<endl;
    }

    ~Person(){
        cout<<"Parent Destructor"<<endl;
    }
    // Person(string name,int age){
    //     this->name = name;
    //     this->age = age;
    // }

    // void getInfo(){
    //     cout<<"Name : "<<name<<endl;
    //     cout<<"Age : "<<age<<endl;
    // }
};

class Student : public Person{
      public:
      int rollno;

      Student(string name,int age,int rollno){
        cout<<"Child Constructor"<<endl;
        this->name = name;
        this->age = age;
        this->rollno = rollno;
      }

      void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Roll-No : "<<rollno<<endl;
    }

    ~Student(){
        cout<<"Child Destructor"<<endl;
    }
};

int main(){
     Student s1("Sagar Singh",20,101);

     s1.getInfo();

    return 0;
}