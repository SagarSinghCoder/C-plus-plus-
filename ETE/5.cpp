#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    int guess,number;
    
    srand(time(0));
    number = rand() %100 +1;

    cout<<"Guess the number between (1 to 100) : ";
    
    while(true){
        cin>>guess;
        if(guess > number){
            cout<<"Too High!,Try Again ";
        }
        else if(guess < number){
            cout<<"Too Low!,Try Again ";
        }
        else{
            cout<<"Congratulations! you guessed the number right "<<number<<endl;
        }
    }
    return 0;
}