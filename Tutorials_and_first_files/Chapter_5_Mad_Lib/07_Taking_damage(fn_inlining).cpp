//
// Created by daniel on 06/01/23.
//

// Demonstrates function inlining
// Inlining tells the compiler to make a copy of the function everywhere it is called
// For small functions this can create a performance boost
#include <iostream>
int radiation(int health);

using namespace std;

int main()
{
    int health = 80;
    cout << "Your health is: " << health << endl;

    health = radiation(health);
    cout << "After exposure your health is: " << health << endl;

    health = radiation(health);
    cout << "After exposure your health is: " << health << endl;

    health = radiation(health);
    cout << "After exposure your health is: " << health << endl;

    return 0;
}
inline int radiation(int health)
{
    return health/2;
}