#include <iostream> 
#include <algorithm> 
#include <string> 
using namespace std; 

class StringArrayOperations { 
public: 
   
    void reverseString(string str) { 
        reverse(str.begin(), str.end()); 
        cout << "Reversed string: " << str << endl; 
    } 
 
    void sortArray(int arr[], int size) { 
        sort(arr, arr + size); 
        cout << "Sorted array: "; 
        for (int i = 0; i < size; i++) 
            cout << arr[i] << " "; 
        cout << endl; 
    } 
}; 
 
int main() { 
 
    StringArrayOperations sao; 
    
    string str; 
    cout << "Enter a string to reverse: "; 
    cin >> str; 
    sao.reverseString(str); 
 
    int arr[] = {9, 3, 7, 1, 5}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    sao.sortArray(arr, size); 
 
    return 0; 
}