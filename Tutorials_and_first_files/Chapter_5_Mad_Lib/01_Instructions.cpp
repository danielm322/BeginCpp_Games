//
// Created by daniel on 06/01/23.
//

// Instructions
// Demonstrates writing new functions
#include <iostream>
using namespace std;
// function prototype (declaration)
// We need to always declare the function if we haven't defined it yet
void instructions();
int main()
{
    instructions();
    return 0;
}
// function definition
// Could have avoided the delcaration by defining this function before the main (before the call to the function)
void instructions()
{
    cout << "Welcome to the most fun you’ve ever had with text!\n\n";
    cout << "Here’s how to play the game...\n";
}