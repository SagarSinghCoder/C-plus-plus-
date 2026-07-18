#include <iostream> 
#include <string> 
using namespace std; 

class PalindromeChecker { 
public: 

bool isPalindrome(string str) { 
int start = 0; 
int end = str.length() - 1; 
while (start < end) { 
if (str[start] != str[end]) 
return false; 
start++; 
end--; 
} 
return true; 
} 
void checkPalindrome(string input) { 
if (isPalindrome(input)) 
cout << input << " is a palindrome." << endl;  
 
 
        else 
            cout << input << " is not a palindrome." << endl; 
    } 
}; 
 
int main() { 
    PalindromeChecker pc; 
    string word; 
    cout << "Enter a string: "; 
    cin >> word; 
    pc.checkPalindrome(word); 
    return 0; 
} 
 