#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Initialize random seed
    srand(static_cast<unsigned int>(time(0)));

    // Generate random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have chosen a number between 1 and 100. Can you guess what it is?" << endl;

    // Loop until the player guesses correctly
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the correct number in " << attempts << " attempts!" << endl;
        }
    } while (guess != randomNumber);

    return 0;
}
