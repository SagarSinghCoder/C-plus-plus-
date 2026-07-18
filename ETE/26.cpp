#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;

int main(){
    ifstream file("e:\\example.txt");

    string word;
    int wordCount = 0;

    if(file.is_open()){
        while(file >> word){
            wordCount ++;
        }
        file.close();
        cout<<"Total Number of Words are : "<<wordCount<<endl;
    }else{
        cout<<"Error in opening the file ";
    }
    return 0;
}