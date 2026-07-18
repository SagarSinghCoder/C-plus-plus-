#include <iostream>
#include <string>
using namespace std;

class PalindromeChecker {
public:
    void check() {
        string word, reversed;

        cout << "Enter a word: ";
        cin >> word;

        for (int i = word.length() - 1; i >= 0; i--) {
            reversed += word[i];
        }

        if (word == reversed) {
            cout << "It's a palindrome!" << endl;
        } else {
            cout << "Not a palindrome." << endl;
        }
    }
};

int main() {
    PalindromeChecker pc;
    pc.check();
    return 0;
}
