#include<iostream>
#include<string>

using namespace std;

class PalindromeChecker{
    public :

    void check(){
        string word,reversed;

        cout<<"Enter the word : ";
        cin>>word;

        for(int i = word.length()-1;i >= 0;i--){
            reversed = reversed + word[i];
        }

        if(word == reversed){
            cout<<"It is a palindrome";
        }else{
            cout<<"It is not a palindrome";
        }
    }
};

int main(){
    PalindromeChecker p;

    p.check();
    return 0;
}