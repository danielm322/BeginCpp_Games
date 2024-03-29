//
// Created by daniel on 03/01/23.
// Game stats 3
// Demonstrates constants
//


# include <iostream>
using namespace std;

int main()
{
    const int ALIEN_POINTS = 150;
    int aliensKilled = 10;
    int score = aliensKilled * ALIEN_POINTS;
    cout << "score: " << score << endl;

    enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
    difficulty myDifficulty = EASY;

    enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50};
    shipCost myShipCost = BOMBER_COST;

    cout << "\nUpgrade to ship will cost: " << (CRUISER_COST - myShipCost) << " Resource points. \n";

    return 0;

}