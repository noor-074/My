#include <iostream>

using namespace std;

int main() {
    const int SECRET = 47;
    const int MAX = 6;
    int guess, attempts_left = MAX;

    do {
        cout << "Guess the number (1-100): ";
        cin >> guess;
        attempts_left--;

        if (guess < 1 || guess > 100) {
            cout << "Out of range! " << attempts_left << " attempts left." << endl;
        } else if (guess > SECRET) {
            cout << "Too high! " << attempts_left << " attempts left." << endl;
        } else if (guess < SECRET) {
            cout << "Too low! " << attempts_left << " attempts left." << endl;
        }
    } while (guess != SECRET && attempts_left > 0);

    if (guess == SECRET) {
        int attempts_used = MAX - attempts_left;
        cout << "Correct! You got it in " << attempts_used << " attempts." << endl;
        cout << "Score: " << (MAX + 1 - attempts_used) * 10 << " points." << endl;
    } else {
        cout << "Out of attempts! The number was " << SECRET << endl;
    }

    return 0;
}