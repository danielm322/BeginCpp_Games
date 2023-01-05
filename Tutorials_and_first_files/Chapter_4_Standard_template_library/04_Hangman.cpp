//
// Created by daniel on 05/01/23.
//

// Hangman
// The classic game of hangman
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>

using namespace std;
int main()
{
    //setup
    const int MAX_WRONG = 8;            // Max incorrect guesses
    vector<string> words;               // collection of possible words to guess
    words.push_back("GUESS");
    words.push_back("HANGMAN");
    words.push_back("DIFFICULT");

    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(words.begin(), words.end());

    const string THE_WORD = words[0];
    int wrong = 0;                      // Number of incorrect guesses
    string soFar(THE_WORD.size(), '-');
    string used = "";
    cout << "Welcome to hangman\n";
    // Main loop
    while ((wrong < MAX_WRONG) && (soFar != THE_WORD))
    {
        cout << "You have " << (MAX_WRONG - wrong);
        cout << " incorrect guesses left.\n";
        cout << "You've used the following letters:\n" << used << endl;
        cout << "So far the word is:\n" << soFar << endl;

        char guess;
        cout << "\nEnter your guess: ";
        cin >> guess;
        guess = toupper(guess); // make uppercase
        while (used.find(guess) != string::npos)
        {
            cout << "You've already guessed " << guess << endl;
            cout << "Enter your guess: ";
            cin >> guess;
            guess = toupper(guess); // make uppercase
        }
        used += guess;
        if (THE_WORD.find(guess) != string::npos)
        {
            cout << "That's right! " << guess << " is in the word.\n";
            //update sofar
            for (int i = 0; i < THE_WORD.length(); ++i)
            {
                if (THE_WORD[i] == guess)
                {
                    soFar[i] = guess;
                }
            }
        }
        else
        {
            cout << "Sorry, " << guess << " isn't in the word.\n";
            ++wrong;
        }
    }
    //shut down
    if (wrong == MAX_WRONG)
    {
        cout << "\nYou’ve been hanged!";
    }
    else
    {
        cout << "\nYou guessed it!";
    }
    cout << "\nThe word was " << THE_WORD << endl;
    return 0;
}