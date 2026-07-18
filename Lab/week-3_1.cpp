// #include <iostream>
// using namespace std;

// class PatternPrinter {
// public:
//     void printPyramid(int rows) {
//         for (int i = 1; i <= rows; i++) {
//             // Print spaces
//             for (int j = 1; j <= rows - i; j++) {
//                 cout << " ";
//             }
//             // Print stars
//             for (int k = 1; k <= (2 * i - 1); k++) {
//                 cout << "*";
//             }
//             cout << endl;
//         }
//     }
// };

// int main() {
//     PatternPrinter p;
//     int rows;
//     cout << "Enter number of rows: ";
//     cin >> rows;
//     p.printPyramid(rows);
//     return 0;
// }
#include <iostream>
using namespace std;

class PatternPrinter {
public:
    void printDiamond(int rows) {
        // Upper part of the diamond
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= rows - i; j++) {
                cout << " ";
            }
            for (int k = 1; k <= (2 * i - 1); k++) {
                cout << "*";
            }
            cout << endl;
        }
        // Lower part of the diamond
        for (int i = rows - 1; i >= 1; i--) {
            for (int j = 1; j <= rows - i; j++) {
                cout << " ";
            }
            for (int k = 1; k <= (2 * i - 1); k++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main() {
    PatternPrinter p;
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    p.printDiamond(rows);
    return 0;
}
