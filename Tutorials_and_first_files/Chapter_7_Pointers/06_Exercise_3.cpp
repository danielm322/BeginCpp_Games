//
// Created by daniel on 11/01/23.
//

#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int &b = a;
    int *c = &b;
    cout << &a << endl;
    cout << &b << endl;
    cout << &(*c) << endl;
    cout << c << endl;
    return 0;
}