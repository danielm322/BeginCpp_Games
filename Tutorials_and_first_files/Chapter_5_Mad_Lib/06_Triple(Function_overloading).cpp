//
// Created by daniel on 06/01/23.
//

// Triple
// Demonstrates function overloading
// THe parameter list has to be different, however the return value might be the same
// The opposite is nomt true, the return value can be different but the parameter list cannot be the same
#include <iostream>
#include <string>
using namespace std;
int triple(int number);
string triple(string text);
int main()
{
    cout << "Tripling 5: " << triple(5) << "\n\n";
    cout << "Tripling ’gamer’: " << triple("gamer") << endl;
    return 0;
}
int triple(int number)
{
    return (number * 3);
}
string triple(string text)
{
    return (text + text + text);
}