#include<iostream>
#include<string>

using namespace std;

class Employee{
    public :

    string name;
    int ID;
    string department;
    double salary;

    void InputDetails(){
        cout<<"----Employee----"<<endl;
        
        cout<<"Enter Employee Name : ";
        cin.ignore();
        getline(cin,name);

        cout<<"Enter ID : ";
        cin>>ID;

        cout<<"Enter Department : ";
        cin.ignore();
        getline(cin,department);

        cout<<"Enter Salary : ";
        cin>>salary;
    }

    void DisplayDetails(){
        cout<<"----Employee Details ----"<<endl;
        cout<<"Employee Name : "<<name<<endl;
        cout<<"Employee ID : "<<ID<<endl;
        cout<<"Employee Depatment : "<<department<<endl;
        cout<<"Employee Salary : "<<salary<<endl;
    }
};

int main(){
    int num;

    cout<<"Enter Number : ";
    cin>>num;

Employee *emp = new Employee[num];

for(int  i = 0; i < num ;i++){
    cout<<"Enter Employee Details : "<<i + 1<<endl;
    emp[i].InputDetails();
}

for(int i =0;i<num;i++){
    emp[i].DisplayDetails();
}

cout<<"Employee who have salary graeter than 60000 ";
for(int i =0 ;i <num;i++){
    if(emp[i].salary > 60000){
        emp[i].DisplayDetails();
    }
}
delete[] emp;
    
    return 0;
}