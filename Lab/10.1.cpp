#include<iostream>

using namespace std;

class Complex{
    float real,imag;

    public : 
    void getData(){
        cout<<"Enter real and imaginary number";
        cin>>real>>imag;
    }
    void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    Complex operator+(Complex c){
           Complex temp;
           temp.real = real + c.real;
           temp.imag = imag + c.imag;
           return temp;
    }
};

int main(){
    Complex c1,c2,result;

    c1.getData();
    c2.getData();
    result = c1 + c2;

    cout<<"Sum = ";

    result.display();
    return 0;
}