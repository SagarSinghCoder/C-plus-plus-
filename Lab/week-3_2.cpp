#include <iostream>
using namespace std;

class NumberGuessingGame {
public:
    void playGame() {
        int number, guess;
        cout << "Enter a number for the player to guess: ";
        cin >> number;
        system("cls"); 
        
        cout << "Guess the number: ";
        while (true) {
            cin >> guess;
            if (guess > number) cout << "Too high! Try again: ";
            else if (guess < number) cout << "Too low! Try again: ";
            else { 
                cout << "Congratulations! You guessed it!" << endl;
                break;
            }
        }
    }
};

int main() {
    NumberGuessingGame game;
    game.playGame();
    return 0;
}
