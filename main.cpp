#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed for random number generation
    srand(static_cast<unsigned int>(time(0)));

    int lower = 1, upper = 100;
    int targetNumber = rand() % (upper - lower + 1) + lower; // Random number between 1 and 100
    int userGuess;
    int maxAttempts = 10; // Limit number of attempts
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "You have " << maxAttempts << " attempts to guess the number between " << lower << " and " << upper << "." << endl;

    while (attempts < maxAttempts) {
        cout << "Attempt " << attempts + 1 << " of " << maxAttempts << ". Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > targetNumber) {
            cout << "Too high! Try again." << endl;
        } else if (userGuess < targetNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the correct number " << targetNumber << " in " << attempts << " attempts." << endl;
            break; // Exit the loop once the correct number is guessed
        }
        
        if (attempts == maxAttempts) {
            cout << "Sorry, you've used all your attempts. The correct number was " << targetNumber << "." << endl;
        }
    }

    return 0;
}
