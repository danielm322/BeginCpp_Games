//
// Created by daniel on 11/01/23.
//

//Constructor Critter
//Demonstrates constructors

#include <iostream>

using namespace std;

class Critter
{
public:
    int m_Hunger;

    Critter(int hunger = 0);       // constructor prototype
    void Greet();
};

Critter::Critter(int hunger)       // constructor definition
{
    cout << "A new critter has been born!" << endl;
    m_Hunger = hunger;
}
// Notice the constructor does not have return type, and is named the same as the class

void Critter::Greet()
{
    cout << "Hi. I'm a critter. My hunger level is " << m_Hunger << ".\n\n";
}

int main()
{
    Critter crit(7);
    crit.Greet();

    return 0;
}
