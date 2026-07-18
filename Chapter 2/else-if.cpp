#include<iostream>

using namespace std;
//If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss or no profit no loss. Also determine how much profit he made or loss he incurred.

int main(){
    int sp;
    int cp;

    cout<<"Enter Your Selling Price : ";
    cin>>sp;

    cout<<"Enter Yout Cost Price : ";
    cin>>cp;

    if(sp > cp){
        cout<<"Profit"<<"\n";
        cout<<"Profit is : "<<sp - cp;
    }
    else if(sp < cp){
        cout<<"Loss"<<"\n";
        cout<<"Loss is  : "<<cp - sp;
    }
    else{
        cout<<"No Profit And No Loss";
    }


    return 0;
}