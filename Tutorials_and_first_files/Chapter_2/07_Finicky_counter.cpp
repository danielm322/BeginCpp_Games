//
// Created by daniel on 04/01/23.
//

// Finicky Counter
// Demonstrates break and continue statements
#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    while (true)
    {
        count += 1;
        //end loop if count is greater than 10
        if (count > 10)
        {
            break;
        }
        //skip the number 5
        if (count == 5)
        {
            continue;
        }
        // The continue statement means jump back to the top of the loop
        cout << count << endl;
    }
    return 0;
}
