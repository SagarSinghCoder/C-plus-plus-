#include<iostream>

using namespace std;

class Data{
    private :
    int date,month,year;

    public :

    friend istream& operator>>(istream& in,Data& d);
    friend ostream& operator<<(ostream& out,Data& d);

};

    istream& operator>>(istream& in,Data& d){
        cout<<"Enter Date : ";
        in>>d.date;

        cout<<"Enter Month : ";
        in>>d.month;

        cout<<"Enter Year : ";
        in>>d.year;
    }

    ostream& operator<<(ostream& out,Data& d){
        out<<d.date<<"/"<<d.month<<"/"<<d.year<<endl;
        
    }


int main(){
    Data d;

    cin>>d;
    cout<<"Date is : "<<d<<endl;
    return 0;
}