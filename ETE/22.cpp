#include<iostream>

using namespace std;

class data{
    public :
    int date;
    int month;
    int year;

    data(int d,int m,int y){
        date = d;
        month = m;
        year = y;
    }

    void display(){
        cout<<date<<"/"<<month<<"/"<<year<<endl;
    }

    bool operator==(data d){
        return(date == d.date && month == d.month && year == d.year);
    }

    bool operator<(data d){
        if(year < d.year)return true;
        if(year == d.year && month < d.month)return true;
        if(year == d.year && month == d.month && date < d.date )return true;
        return false;
    }

    bool operator>(data d){
        if(year > d.year)return true;
        if(year == d.year && month > d.month)return  true;
        if(year == d.year && month == d.month && date > d.date)return true;
        return false;
    }
};

int main(){
    data d1(9,01,1993);
    data d2(12,06,2025);

    cout<<"Date 1 : ";
    d1.display();

    cout<<"Date 2 : ";
    d2.display();

    if(d1 == d2){
        cout<<"d1 is equal to d2";
    }
    else if(d1 > d2){
        cout<<"d1 is greater than d2 "<<endl;
    }
    else{
        cout<<"d2 is greater than d1"<<endl;
    }


    return 0;
}