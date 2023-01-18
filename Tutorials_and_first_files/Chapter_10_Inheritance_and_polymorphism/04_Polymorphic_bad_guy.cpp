//
// Created by daniel on 18/01/23.
//

// Polymorphic guy
// Demonstrates calling member functions dynamically

#include <iostream>
using namespace std;

class Enemy
{
public:
    Enemy(int damage = 10);
    virtual ~Enemy();
    void virtual Attack() const;

protected:
    int* m_pDamage;
};

Enemy::Enemy(int damage)
{
    m_pDamage =  new int(damage);
}

Enemy::~Enemy()
{
    cout << "In enemy destructor, deleting m_pDamage\n";
    delete m_pDamage;
    m_pDamage = 0;
}

void Enemy::Attack() const
{
    cout << "An enemy attacks and inflicts " << *m_pDamage << " damage points\n";
}

class Boss : public Enemy
{
public:
    Boss(int multiplier = 3);
    virtual ~Boss();
    void virtual Attack() const;

protected:
    int* m_pMultiplier;
};

Boss::Boss(int multiplier)
{
    m_pMultiplier = new int(multiplier);
}

Boss::~Boss()
{
    cout << "In boss destructor deleting m_pMultiplier\n";
    delete m_pMultiplier;
    m_pMultiplier = 0;
}

void Boss::Attack() const
{
    cout << "A boss attacks and inflicts " << (*m_pDamage) * (*m_pMultiplier) << " damage points\n";
}
//Virtual functions produce polymorphic behavior through references as
//well as through pointers.

int main()
{
    cout << "Calling Attack() on Boss object through pointer to enemy:\n";
    Enemy* pBadGuy = new Boss();
    pBadGuy -> Attack();

    cout << "Deleting pointer to enemy:\n";
    delete pBadGuy;
    pBadGuy = 0;

    return 0;
}