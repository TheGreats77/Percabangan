#include <iostream>
#include <cstdlib>  // untuk rand() dan srand()
#include <ctime>    // untuk time()
#include <windows.h>

using namespace std;


int main() {

    while(true)
    {
    srand(time(NULL)); // seed random berdasarkan waktu
    int diceRoll = rand() % 6 + 1; // hasil acak 1–6
    int guess;

    cout << "=== Dice Game ===" << endl;
    cout << "Guess a number between 1 and 6: ";
    cin >> guess;

    if (guess == diceRoll) {
        cout << "Correct! yeee" << endl;
        Beep (1000, 300);
    } else {
        cout << "Sorry, the correct number was " << diceRoll << "." << endl;
        Beep (300, 500);
    }

    system("pause");
    }
    return 0;

}
