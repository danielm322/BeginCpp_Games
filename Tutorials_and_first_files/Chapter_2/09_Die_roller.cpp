//
// Created by daniel on 04/01/23.
//

// Die roller
// Demonstrates generating random numbers

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0))); //seed random number generator with current dat and time, to avoid having the same number all the time
    int randomNumber = rand(); //generate the random number
    // The rand function generates integer numbers from 0 to at least 32767
    int die = (randomNumber % 6) + 1; //get a number btw 1 and 6
    cout << "You rolled a " << die << endl;
    return 0;
};