#include<iostream>
#include<cstdlib>  // For rand() and srand()
#include<ctime>    // For time()

using namespace std;

int main() {
    int guess, number;
    srand(time(0)); // Seed for random number generation//current time pe value dekhata hai or hamesa change hota rahata hai
    number = rand() % 100 + 1; // Random number between 1 and 100//rand is use to looking rendom number

    cout << "Guess the number (between 1 and 100): ";

    while (true) {
        cin >> guess;

        if (guess < number) {
            cout << "Too low! Try again: ";
        } else if (guess > number) {
            cout << "Too high! Try again: ";
        } else {
            cout << " Congratulations! You guessed the correct number: " << number << endl;
            break;
        }
    }

    return 0;
}