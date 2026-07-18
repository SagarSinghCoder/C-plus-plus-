#include<iostream>

using namespace std;

class Animal{
    public :

    virtual void sound(){
        cout<<"Some animals make sound";
    }
};

class Dog : public Animal{
    public :
    void sound()override{
        cout<<"Dog Barks"<<endl;
    }
};

class Cat : public Animal{
    public :
    void sound()override{
        cout<<"Cat meow"<<endl;
    }
};

int main(){
    Animal* s;
    Dog d;
    Cat c;

    s=&d;
    s->sound();

    s=&c;
    s->sound();
    return 0;
}