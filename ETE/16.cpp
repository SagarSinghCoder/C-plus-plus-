#include<iostream>

using namespace std;

class Shape{
    public :
    virtual void area()=0;
};

class Circle : public Shape{
    private:
    float radius;
    public :
    Circle(float r){
        radius = r;
    }

    void area()override{
        float a = 3.14 * radius * radius;
        cout<<"Area of circle is : "<<a<<endl;
    }
};

class Square : public Shape{
    private :
    int side;
    public :
    Square(int s){
        side = s;
    }

    void area()override{
        int a = side * side;
        cout<<"Area of square is : "<<a<<endl;
    }
};

int main(){
    Shape*s;
    Circle c(5);
    Square sq(6);

    s = &c;
    s -> area();

    s=&sq;
    s->area();
    return 0;
}

