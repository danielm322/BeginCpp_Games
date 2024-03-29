//
// Created by daniel on 09/01/23.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
// returns a references to a string
string& refToElement(vector<string>& inventory, int i);

int main()
{
    vector<string> inventory;
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");

    // Displays string that the returned reference refers to
    cout << "Sending the returned reference to cout:\n";
    cout << refToElement(inventory, 0) << "\n\n";
    // Assigns one reference to another -- inexpensive assignment
    cout << "Assigning the returned reference to another reference.\n";
    string& rStr = refToElement(inventory, 1);
    cout << "Sending the new reference to cout:\n";
    cout << rStr << "\n\n";

    // Copies a string object -- expensive  assignment. This creates a copy to be stored in the new variable
    cout << "Assigning the returned reference to a string object.\n";
    string str = refToElement(inventory, 2);
    cout << "Sending the new string object to cout:\n";
    cout << str << "\n\n";

    //Altering the string object through a returned reference
    cout << "Altering an object through a returned reference.\n";
    rStr = "Healing potion";
    cout << "Sending the new altered object to cout:\n";
    cout << inventory[1] << endl;

    return 0;
}

// Returns a reference to a string
string& refToElement(vector<string>& vec, int i)
{
    return vec[i];
}
// Notice there is nothing in the return statement that specifies it returning a reference, as it is
// already done in the return type declaration
// Be careful to never return a reference to a local variable