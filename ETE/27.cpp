#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream source("e:/file_handling/source.txt");
    ofstream dest("e:/file_handling/destination.txt");

    string line;

    if(source.is_open()&&dest.is_open()){
        while(getline(source,line)){
            dest<<line<<endl;
        }
        source.close();
        dest.close();
        cout<<"File copied Succesfully";
    }else{
        cout<<"Error in opening the file to copy";
    }
    return 0;
}