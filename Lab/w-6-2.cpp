#include <iostream> 
using namespace std; 
 
class Library { 
private: 
    string bookName; 
    int bookID; 
    string bookEdition; 
    string bookAuthor; 
static int totalBooks; 
public: 
void addBook() { 
cin.ignore(); 
cout << "\nEnter Complete Book Name: "; 
getline(cin, bookName); 
cout << "Enter Book ID: "; 
cin >> bookID; 
cin.ignore(); 
cout << "Enter Book Edition: "; 
getline(cin, bookEdition); 
cout << "Enter Book Author: "; 
getline(cin, bookAuthor); 
totalBooks++; 
} 
void displayBook() { 
cout << "\n--- Book Details ---" << endl; 
cout << "Book Name    : " << bookName << endl; 
cout << "Book ID      : " << bookID << endl; 
cout << "Book Edition : " << bookEdition << endl; 
cout << "Book Author  : " << bookAuthor << endl; 
} 
static void showTotalBooks() { 
cout << "\nTotal Books in Library: " << totalBooks << endl; 
} 
}; 

int Library::totalBooks = 0; 
int main() { 
int n; 
cout << "Enter the number of books to add: "; 
cin >> n; 
Library books[n]; 
for (int i = 0; i < n; ++i) { 
cout << "\nEntering details for Book " << i + 1 << ":" << endl; 
books[i].addBook(); 
} 
for (int i = 0; i < n; ++i) { 
books[i].displayBook(); 
} 
Library::showTotalBooks();  
return 0; 
}