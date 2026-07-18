#include<iostream>

using namespace std;

class Diamond{
    public :

    void print(){
        int rows =5;

        int space,star,i;

        for(i = 1;i <= rows ;i++){
            for(space = 1;space <= rows - i;space++){
                cout<<" ";
            }
            for(star = 1;star <= 2*i-1;star++){
                cout<<"*";
            }
            cout<<endl;
        }

        for(i = rows - 1;i >= 1;i--){
            for(space = 1;space <= rows - i;space++){
                cout<<" ";
            }
            for(star = 1;star<= 2*i-1;star++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};

int main(){
    Diamond d;

    d.Print();

    return 0;
}

#include<iostream>

using namespace std;

class Diamond{
    public :

    void Print(){
        int rows = 5;
        int space,star,i;

        for(i = 1;i <= rows;i++){
            for(space = 1;space <= rows - i;space++){
                cout<<" ";
            }
            for(star = 1;star <= 2*i-1;star++){
                cout<<"*";
            }
            cout<<endl;
        }

        for(i = rows - 1;i >= 1;i--){
            for(space = 1;space <= rows - i;space++){
                cout<<" ";
            }
            for(star = 1;star <= 2*i-1;star++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};

int main(){
    Diamond d1;

    d1.Print();

    return 0;
}