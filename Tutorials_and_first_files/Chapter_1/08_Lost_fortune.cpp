//
// Created by daniel on 03/01/23.
//

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    const int GOLD_PIECES = 900;
    int adventurers, killed, survivors;
    string leader;

    // get information
    cout << "Enter your info " << endl;
    cout << "Enter a number: " << endl;
    cin >> adventurers;

    cout << "Enter another number, smaller than the first: " << endl;
    cin >> killed;
    survivors = adventurers - killed;

    cout << "Enter your name: " << endl;
    cin >> leader;

    cout << "\nA group of " << adventurers << " set out on a journey led by " << leader << ".\n";
    cout << "The survivors was: " << survivors << endl;

    return 0;
}
