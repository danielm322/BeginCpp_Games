//
// Created by daniel on 09/01/23.
//

// Swap
// Demonstrates passing references to alter argument variables
#include <iostream>
using namespace std;
void badSwap(int x, int y);
void goodSwap(int& x, int& y);
int main()
{
    int myScore = 150;
    int yourScore = 1000;
    cout << "Original values\n";
    cout << "myScore: " << myScore << "\n";
    cout << "yourScore: " << yourScore << "\n\n";
    cout << "Calling badSwap()\n";
    badSwap(myScore, yourScore);
    cout << "myScore: " << myScore << "\n";
    cout << "yourScore: " << yourScore << "\n\n";
    cout << "Calling goodSwap()\n";
    goodSwap(myScore, yourScore);
    cout << "myScore: " << myScore << "\n";
    cout << "yourScore: " << yourScore << "\n";
    return 0;
}
// In the next case, the arguments are passed by value, meaning the function gets a copy of the arguments,
// leaving the original values intact and inaccessible
void badSwap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}
// Now the arguments are passed by reference, ginving the function access to the arguments variables, not just their
// values
void goodSwap(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}