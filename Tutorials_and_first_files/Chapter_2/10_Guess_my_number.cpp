//
// Created by daniel on 04/01/23.
//

// Guess My Number
// The classic number guessing game
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    srand(static_cast<unsigned int>(time(0))); //seed random number generator with current dat and time, to avoid having the same number all the time
    int secretNumber = rand() % 100 + 1;
    int tries = 0;
    int guess;

    do
    {
        cout << "Enter a guess: ";
        cin >> guess;
        ++tries;
        if (guess > secretNumber)
        {
            cout << "Too high!\n\n ";
        }
        else if (guess < secretNumber)
        {
            cout << "Too low! \n\n";
        }
        else
        {
            cout << "That's it, you got it in " << tries << " guesses\n";
        }
    } while (guess != secretNumber);
    return 0;
}