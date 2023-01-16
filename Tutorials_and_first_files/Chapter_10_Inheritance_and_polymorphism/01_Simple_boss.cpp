//
// Created by daniel on 16/01/23.
//

//Simple Boss
//Demonstrates inheritance
// Constructors, destructors, copy constructors and overloaded assignment operators are not inherited by
// derived classes, you would need to write them in the derived class
// However, base class constructors are called when a new instance if an inherited class is created or destroyed

#include <iostream>
using namespace std;

class Enemy
{
public:
    int m_Damage;

    Enemy();
    void Attack() const;
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
    int m_DamageMultiplier;

    Boss();
    void SpecialAttack() const;

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
