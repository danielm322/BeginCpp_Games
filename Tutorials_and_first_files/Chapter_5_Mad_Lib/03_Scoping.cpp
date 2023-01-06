//
// Created by daniel on 06/01/23.
//

// Demonstrates scopes
#include <iostream>
using namespace std;
void func();
int main()
{
    int var = 5;        // local variable in main
    cout << "In main() the var is: " << var << "\n\n";
    func();

    cout << "Back in main() the var is: " << var << "\n\n";
    // EVery time you open curly braces, you create a new scope
    {
        cout << "In main() in a new scope the var is: " << var << "\n\n";
        cout << "Creating new var in scope.\n";
        int var = 10;           // variable in new scope, hides other variable
        cout << "In main() in a new scope the var is: " << var << "\n\n";
    }
    cout << "At end of main() var created in new scope no longer exists.\n";
    cout << "At end of main() the var is: " << var << "\n\n";
    return 0;
}

void func()
{
    int var = -5;       //local variable in func
    cout << "In func() var is: " << var << "\n\n";
}