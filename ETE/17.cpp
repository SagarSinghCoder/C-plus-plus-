#include<iostream>
#include<string>

using namespace std;

class Vehicle{
    private : 
    string brand;
    int year;

    public :
    void inputDetails(){
        cout<<"Enter Brand Name : ";
        cin>>brand;

        cout<<"Enter year : ";
        cin>>year;
    }

    void displayDetails(){
        cout<<"Brand Name is : "<<brand<<endl;
        cout<<"Year is : "<<year<<endl;
    }
};

class Car : public Vehicle{
    private :
    int  doors;
    public:

    void InputDetails(){
        inputDetails();
        cout<<"Enter Number of Doors : ";
        cin>>doors;
    }

    void DisplayDetails(){
        displayDetails();
        cout<<"Number of Doors is : "<<doors<<endl;
    }
};

class Bike : public Vehicle{
    private :
    string type;

    public :
    void  InputDetails(){
        inputDetails();
        cout<<"Enter Type of Bike : ";
        cin>>type;
    }

    void DisplayDetails(){
        displayDetails();
        cout<<"Type of Bike is : "<<type<<endl;
    }
};

int main(){
    Car car;
    Bike bike;

    cout<<"Input Car Details"<<endl;
    car.InputDetails();
    cout<<"Display Car Details"<<endl;
    car.DisplayDetails();

    cout<<endl;

    cout<<"Input Car Details"<<endl;
    bike.InputDetails();
    cout<<"Display Car Details"<<endl;
    bike.DisplayDetails();
    return 0;
}