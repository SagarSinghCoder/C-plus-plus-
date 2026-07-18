#include<iostream>
#include<fstream>

using namespace std;

int main(){
      ofstream fout;//Write data

      fout.open("Tannu.txt");

      fout<<"Hello Tanisha";

      fout.close();

      ifstream fin;
      fin.open("Tannu.txt");

      string line;

      while(getline(fin,line)){
        cout<<line<<endl;
      }

      fin.close();
    return 0;
}