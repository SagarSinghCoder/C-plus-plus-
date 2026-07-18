#include<iostream>
#include<string>

using namespace std;

class Library{
    private : 
    string bookname;
    int BookID;
    string Edition;
    string bookAuthor;

    static int totalbooks;

    public : 

    void addbook(){
         cin.ignore();
         cout<<"Enter the Book Name : ";
         getline(cin,bookname);

         cout<<"Enter Book Id : ";
         cin>>BookID;

         cout<<"Enter Book Edition : ";
         getline(cin,Edition);

         cout<<"Enter Book Author Name : ";
         getline(cin,bookAuthor);

         totalbooks++;
    }

    void display(){
        cout<<"Book Name : "<<bookname<<endl;
        cout<<"Book ID : "<<BookID<<endl;
        cout<<"Book Edition : "<<Edition<<endl;
        cout<<"Book Author : "<<bookAuthor<<endl;
    }

    static void showTotalBooks(){
        cout<<"Library has total books : "<<totalbooks<<endl;
    }

};

int Library::totalbooks = 0 ;

int main(){
int n;
cout<<"Enter the number : ";
cin>>n;

Library books[n];

for(int i =0;i < n;++i){
    cout<<"Enter Details of Book : "<<i + 1<<endl;
    books[i].addbook();
}
for(int i =0;i < n;++i){
    books[i].display();
}

Library::showTotalBooks();
    return 0;
}