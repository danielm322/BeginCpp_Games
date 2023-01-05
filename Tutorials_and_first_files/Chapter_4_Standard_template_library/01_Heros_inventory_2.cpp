//
// Created by daniel on 05/01/23.
//

// Demonstrates vectors
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> inventory;
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");

    cout << "You have " << inventory.size() << " items.\n";
    cout << "Your items:\n";
    for (unsigned int i = 0; i < inventory.size(); ++i)
    {
        cout << inventory[i] << endl;
    }
    cout << "You trade your sword for a battle axe.";
    inventory[0] = "battle axe";
    cout << "\nYour items:\n";
    for (unsigned int i = 0; i < inventory.size(); ++i)
    {
        cout << inventory[i] << endl;
    }
    cout << "The item named: " << inventory[0] << " has ";
    cout << inventory[0].size() << " letters in it.\n";

    cout << "Your shield is destroyed";
    inventory.pop_back();
    cout << "\nYour items:\n";
    for (unsigned int i = 0; i < inventory.size(); ++i)
    {
        cout << inventory[i] << endl;
    }
    cout << "You were robbed ";
    inventory.clear();
    if (inventory.empty())
    {
        cout << "You have nothing.\n";
    }
    else
    {
        cout << "You have at least one item.\n";
    }
    return 0;
}