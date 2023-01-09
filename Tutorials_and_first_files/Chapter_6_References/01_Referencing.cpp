//
// Created by daniel on 09/01/23.
//

// Referencing
// Demonstrates using references
#include <iostream>
using namespace std;
int main()
{
    int myScore = 1000;
    int& mikesScore = myScore;
    //create a reference
    // Sometimes references are written with an initial 'r' such as rmikesScore
    cout << "myScore is: " << myScore << "\n";
    cout << "mikesScore is: " << mikesScore << "\n\n";
    cout << "Adding 500 to myScore\n";
    myScore += 500;
    cout << "myScore is: " << myScore << "\n";
    cout << "mikesScore is: " << mikesScore << "\n\n";
    cout << "Adding 500 to mikesScore\n";
    mikesScore += 500;
    cout << "myScore is: " << myScore << "\n";
    cout << "mikesScore is: " << mikesScore << "\n\n";
    return 0;
}