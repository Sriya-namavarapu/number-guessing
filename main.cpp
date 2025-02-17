#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void playRockPaperScissors() {
    string choices[] = {"Rock", "Paper", "Scissors"};
    srand(time(0));
    
    char playerChoice;
    int computerChoice;
    
    cout << "Welcome to Rock, Paper, Scissors!" << endl;
    cout << "Enter R for Rock, P for Paper, or S for Scissors: ";
    cin >> playerChoice;
    
    playerChoice = toupper(playerChoice);
    computerChoice = rand() % 3;
    
    cout << "Computer chose: " << choices[computerChoice] << endl;
    
    if ((playerChoice == 'R' && computerChoice == 2) ||
        (playerChoice == 'P' && computerChoice == 0) ||
        (playerChoice == 'S' && computerChoice == 1)) {
        cout << "You win!" << endl;
    } else if ((playerChoice == 'R' && computerChoice == 0) ||
               (playerChoice == 'P' && computerChoice == 1) ||
               (playerChoice == 'S' && computerChoice == 2)) {
        cout << "It's a tie!" << endl;
    } else {
        cout << "You lose!" << endl;
    }
}

int main() {
    char choice;
    do {
        playRockPaperScissors();
        cout << "Do you want to play again? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    
    cout << "Thanks for playing!" << endl;
    return 0;
}


