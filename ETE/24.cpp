#include<iostream>
#include<fstream>

using namespace std;

int main(){
    const char* filePath = "e.\\example.txt";

    ofstream file(filePath);

    if(file.is_open()){
       file<<"This is a Demo file";
       cout<<"File is succesfully created"<<filePath<<endl;
       file.close();
    }
    else{
        cout<<"Error in file creating";
    }
    return 0;
}