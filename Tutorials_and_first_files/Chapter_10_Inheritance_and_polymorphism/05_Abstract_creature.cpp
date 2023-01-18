//
// Created by daniel on 18/01/23.
//

//Abstract Creature
//Demonstrates abstract classes
// A pure virtual function is one to which you don’t need to give a definition.
//When a class contains at least one pure virtual function, it’s an abstract class.
//Therefore, Creature is an abstract class. I can use it as the base class for other
//classes, but I can’t instantiate objects from it.
#include <iostream>
using namespace std;
class Creature                          //abstract class
{
public:
    Creature(int health = 100);
    virtual void Greet() const = 0;     //pure virtual member function
    virtual void DisplayHealth() const; // Not pure virtual member function (lacks the zero)
protected:
    int m_Health;
};

Creature::Creature(int health):
        m_Health(health)
{}

void Creature::DisplayHealth() const
{
    cout << "Health: " << m_Health << endl;
}

class Orc : public Creature
{
public:
    Orc(int health = 120);
    virtual void Greet() const;
};

Orc::Orc(int health):
        Creature(health)
{}

void Orc::Greet() const
{
    cout << "The orc grunts hello.\n";
}

int main()
{
    Creature* pCreature = new Orc();
    pCreature->Greet();
    pCreature->DisplayHealth();
    return 0;
}
//Even though I
//can’t instantiate an object from Creature , it’s perfectly fine to declare a
//pointer using the class. Like all base class pointers, a pointer to Creature can
//point to any object of a class derived from Creature , like Orc .