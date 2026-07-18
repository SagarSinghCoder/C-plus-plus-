#include<iostream>

using namespace std;

class Division{
    public :
    void showMessage(){
        cout<<"Error! Division by zero";
    }
};

int main(){
    float a,b;

    cout<<"Enter Numerator : ";
    cin>>a;
    cout<<"Enter Denominator :";
    cin>>b;

    try{
        if(b==0){
            throw Division();
        }
        float result = a/b;
        cout<<"Result : "<<result<<endl;
    }
    catch(Division d){
        d.showMessage();
    }
    return 0;
}
