// #include<iostream>

// using namespace std;

// int main(){
// int a = 10;

// int b = 20;

// cout<<"Before Swapping A: "<<a;
// cout<<"\n";

// cout<<"Before Swapping B: "<<b;
// cout<<"\n";

// a = a + b;
// b = a - b;
// a = a - b;

// cout<<"After Swapping A: "<<a;
// cout<<"\n";

// cout<<"After Swapping B: "<<b;
// cout<<"\n";

//     return 0;
// }

#include<iostream>
#include<string>

using namespace std;

class Swapping{
    public :
    int a = 10;
    int b = 20;

    void Swap(){
         cout<<"Before Swapping A : "<<a<<endl;
         cout<<"Before Swapping B : "<<b<<endl;
    
        a = a + b;
        b = a - b;
        a = a - b;
         
        cout<<"After Swapping A : "<<a<<endl;
        cout<<"After Swapping B : "<<b<<endl;

    }
};

int main(){
    Swapping s1;

    s1.Swap();

    return 0;
}