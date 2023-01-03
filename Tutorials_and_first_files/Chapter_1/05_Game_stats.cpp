//
// Created by daniel on 03/01/23.
//

//Game Stats
#include <iostream>
using namespace std;

int main()
{
    int score;
    double distance;
    char playAgain;
    bool shieldsUp;

    score = 0;
    distance = 100.45;
    playAgain = 'y';
    shieldsUp = true;

    cout << "\nscore: " << score << endl;
    cout << "distance: " << distance << endl;
    cout << "playAgain: " << playAgain << endl;

    int fuel;
    cout << "\nHow much fuel? ";
    cin >> fuel;
    cout << "fuel: " << fuel << endl;

    return 0;
}