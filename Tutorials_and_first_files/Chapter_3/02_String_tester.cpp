//
// Created by daniel on 04/01/23.
//

// Demonstrates string objects
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word1 = "Game";
    string word2("Over");
    string word3(3, '!');

    string phrase = word1 + " " + word2 + word3;
    cout << "The phrase is: " << phrase << "\n\n";
    // size() is equivalent to function length() applied to strings
    cout << "The phrase has " << phrase.size() << " characters in it.\n\n";
    cout << "The character at position 0 is: " << phrase[0] << "\n\n";
    cout << "The sequence 'Over' begins at location ";
    cout << phrase.find("Over") << endl;

    if (phrase.find("eggplant") == string::npos)
    {
        cout << "eggplant is not in the phrase\n\n";
    }
    phrase.erase(4,5); // The arguments specify the beginning of position and length of the string
    cout << "The phrase is now: " << phrase << endl;
    phrase.erase(4); //This removes all characters after the indicated position
    cout << "The phrase is now: " << phrase << endl;
    phrase.erase(); // THis erases all characters in the string
    cout << "The phrase is now: " << phrase << endl;
    if (phrase.empty())
    {
        cout << "\nThe phrase is no more.\n";
    }
    return 0;
}