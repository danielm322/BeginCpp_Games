//
// Created by daniel on 04/01/23.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username;
    string password;
    bool success;

    cout << "\tGame Designer's Network\n";
    do {
        cout << "Username: ";
        cin >> username;

        cout << "Password: ";
        cin >> password;

        if (username == "S.Meier" && password == "civilization")
        {
            cout << "Hey, Sid.";
            success = true;
        }
        else if (username == "guest" || password == "guest")
        {
            cout << "Welcome, guest." << endl;
            success = true;
        }
        else
        {
            cout << "Your login failed.\n";
            success = false;
        }
    } while (!success);
    return 0;
}