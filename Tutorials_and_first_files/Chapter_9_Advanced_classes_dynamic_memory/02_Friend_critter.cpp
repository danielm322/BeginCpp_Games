//
// Created by daniel on 12/01/23.
//

// Demonstrates friend functions and operator overloading
#include <iostream>
#include <string>
using namespace std;

class Critter
{
    // Make following global functions friends of the Critter class
    friend void Peek(const Critter& aCritter);
    friend ostream& operator<<(ostream& os, const Critter& aCritter);
public:
    Critter(const string& name = "");
private:
    string m_Name;
};

Critter::Critter(const string &name):
    m_Name(name)
{}

void Peek(const Critter& aCritter);
ostream& operator<<(ostream& os, const Critter& aCritter);

int main()
{
    Critter crit("Poochie");
    cout << "Calling Peek() to access crit's private data member m_Name:\n";
    Peek(crit);

    cout << "\nSending crit object to cout with the << operator:\n";
    cout << crit;

    return 0;
}

// Global friend function that can access all of a Critter's object members
void Peek(const Critter& aCritter)
{
    cout << aCritter.m_Name << endl;
}

// Global friend function that can access all of Critter's object's members
// Overloads the << operator so you can send a Critter object to cout
ostream& operator<<(ostream& os, const Critter& aCritter)
{
    os << "Critter Object - ";
    os << "m_Name: " << aCritter.m_Name << endl;
    return os;
}
