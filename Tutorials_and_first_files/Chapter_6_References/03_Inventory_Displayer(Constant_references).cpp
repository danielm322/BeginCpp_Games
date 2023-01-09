//
// Created by daniel on 09/01/23.
// Passing by reference can improve efficiency because it avoids making a copy of the original variable,
// which can be important for a large amount of information
//

// Inventory Displayer
// Demonstrates constant references
#include <iostream>
#include <string>
#include <vector>
using namespace std;
//parameter vec is a constant reference to a vector of strings
void display(const vector<string>& inventory);
int main()
{
    vector<string> inventory;
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");
    display(inventory);
    return 0;
}
//parameter vec is a constant reference to a vector of strings
void display(const vector<string>& vec)
{
    cout << "Your items:\n";
    for (vector<string>::const_iterator iter = vec.begin();
         iter != vec.end(); ++iter)
    {
        cout << *iter << endl;
    }
}
// THis protects the original variable to be changed