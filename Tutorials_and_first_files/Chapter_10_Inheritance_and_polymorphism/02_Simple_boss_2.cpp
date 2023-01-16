//
// Created by daniel on 16/01/23.
//

//Simple Boss 2.0
//Demonstrates access control under inheritance
// protected members are accessible only in their own class and certain derived classes, depending upon
// the access level  use din inheritance
// private members are only accessible in their own class, not directly accessible in a derived class

// Using public derivation means that public members in the base class become
//public members in the derived class, protected members in the base class
//become protected members in the derived class, and private members in the
//base class are inaccessible in the derived class.

#include <iostream>
using namespace std;

class Enemy
{
public:
    Enemy();
    void Attack() const;

protected:
    int m_Damage;
};

Enemy::Enemy():
        m_Damage(10)
{}

void Enemy::Attack() const
{
    cout << "Attack inflicts " << m_Damage << " damage points!\n";
}

class Boss : public Enemy
{
public:
    Boss();
    void SpecialAttack() const;

private:
    int m_DamageMultiplier;
};

Boss::Boss():
        m_DamageMultiplier(3)
{}

void Boss::SpecialAttack() const
{
    cout << "Special Attack inflicts " << (m_DamageMultiplier * m_Damage);
    cout << " damage points!\n";
}

int main()
{
    cout << "Creating an enemy.\n";
    Enemy enemy1;
    enemy1.Attack();

    cout << "\nCreating a boss.\n";
    Boss boss1;
    boss1.Attack();
    boss1.SpecialAttack();

    return 0;
}
