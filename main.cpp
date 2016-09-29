#include <iostream>

using namespace std;

int main() {

    // seed
    srand(static_cast<unsigned int>(time(0)));

    int max_tries = 3;
    int current_tries = 0;
    int answer = rand();
    int guess;

    while (current_tries < max_tries) {
        cout << "\nGuess the number: ";
        cin >> guess;

        if (guess == answer) {
            cout << "\n\nCongratulations, you guessed correctly!";
            break;
        } else if (guess < answer) {
            cout << "\nNope! Too low!\n\n";
        } else if (guess > answer) {
            cout << "\nNope! Too high!\n\n";
        }

        current_tries++;
    }

    if (current_tries == 3) {
        cout << "Game over!";
    }

    return 0;
}