# Number_Guessing_Game


This C++ code is a simple number guessing game.

1. Includes and Namespaces
#include <iostream>: This library is used for input and output, like displaying messages (cout) and getting user input (cin).
#include <cstdlib>: Provides utility functions, in this case, rand() for generating random numbers and srand() for seeding the random number generator.
#include <ctime>: Used to access the current time to seed the random number generator with time(0) to ensure different random numbers are generated in each run.
2. Seeding the Random Number Generator
cpp
Copy code
srand(static_cast<unsigned int>(time(0)));
srand(static_cast<unsigned int>(time(0))): Seeds the random number generator with the current time. time(0) returns the current time, which is then cast to an unsigned integer and used to ensure different random numbers are produced on different executions of the program.
3. Random Number Generation
cpp
Copy code
int randomNumber = rand() % 100 + 1;
rand() % 100 + 1: Generates a random number between 1 and 100. rand() % 100 gives a number between 0 and 99, and adding 1 shifts the range to 1-100.
4. User Guess and Attempts
int guess: Stores the player's guess.
int attempts = 0: Keeps track of how many guesses the player has made.
5. Game Loop
cpp
Copy code
do {
    // Get the guess from the user
    cin >> guess;
    attempts++;
    
    // Give feedback based on the guess
    if (guess > randomNumber) {
        cout << "Too high! Try again." << endl;
    } else if (guess < randomNumber) {
        cout << "Too low! Try again." << endl;
    } else {
        cout << "Congratulations! You've guessed the correct number in " << attempts << " attempts!" << endl;
    }
} while (guess != randomNumber);
The program repeatedly prompts the user to guess the number.
It checks if the guess is too high, too low, or correct:
If the guess is too high, it tells the player to try a lower number.
If the guess is too low, it tells the player to guess a higher number.
If the guess is correct, it congratulates the player and tells them how many attempts they made.
6. Loop Termination
The loop runs until the player guesses the correct number (guess != randomNumber).
7. Program Output
The game begins with a welcome message and instructions.
After each guess, feedback is provided about whether the guess is too high or too low.
Once the correct number is guessed, the game congratulates the player and exits.
