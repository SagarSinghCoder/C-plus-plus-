#include<iostream>

using namespace std;

class Complex{
    public :
    
    int img,real;

    void data(){
       cout<<"Enter the number imganinary and real ";
       cin>>real>>img;
    }

    void display(){
        cout<<real<<"+"<<img<<"i";
    }

    Complex operator+(Complex c){
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;

        return temp;
    }
};

int main(){
    Complex c1,c2,result;

    c1.data();
    c2.data();

    result = c1 + c2;

    cout<<"Sum : ";

    result.display();
    return 0;
}