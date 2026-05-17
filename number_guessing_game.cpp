#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {

    int randomNumber, userGuess;
    int attempts = 0;
    char playAgain;

    cout << "===== NUMBER GUESSING GAME =====\n";

    do {

        srand(time(0));
        randomNumber = rand() % 100 + 1;

        attempts = 0;

        cout << "\nI have selected a number between 1 and 100.";
        cout << "\nTry to guess it!\n";

        do {

            cout << "\nEnter your guess: ";
            cin >> userGuess;

            attempts++;

            if(userGuess > randomNumber) {
                cout << "It's Higher";
            }
            else if(userGuess < randomNumber) {
                cout << "It's Lower";
            }
            else {
                cout << "\nCorrect!";
                cout << "\nYou guessed the number in "
                     << attempts << " attempts.\n";
            }

        } while(userGuess != randomNumber);

        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;

    } while(playAgain == 'y' || playAgain == 'Y');

    cout << "\nThank You for Playing\n";

    return 0;
}