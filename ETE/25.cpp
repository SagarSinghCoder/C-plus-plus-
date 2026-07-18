#include<iostream>
#include<fstream>

using namespace std;

int main(){
    const char* filePath = "e:\\example.txt";

    ofstream file(filePath,ios::app);

    if(file.is_open()){
        file<<"This file is appended";
        file.close();
        cout<<"File is Appended"<<filePath<<endl;
    }
    else {
        cout<<"Error in opening the file";
    }
    return 0;
}