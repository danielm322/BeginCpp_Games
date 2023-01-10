//
// Created by daniel on 10/01/23.
//
/* A pointer is a variable that can contain a memory address
 * They are often used to access the contents of other variables
 */

// Pointing
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int* pAPointer;                             // declare a pointer
    int* pScore = 0;                           // declare and initialize a pointer
    // Pointers have a type, so they can only point to their type
    // When you declare a pointer, you can put whitespace on either side of the
    //asterisk. So int* pAPointer; , int *pAPointer; , and int * pAPointer; all
    //declare a pointer named pAPointer
    int score = 1000;
    pScore = &score;                            // assign pointer pScore address of variable score
    // Here, the & is the address of operator, not reference operator
    cout << "Assigning &score to pScore\n";
    cout << "&score is: " << &score << "\n";    // address of score variable
    cout << "pScore is: " << pScore << "\n";    // address stored in pointer
    cout << "score is: " << score << "\n";
    cout << "*pScore is: " << *pScore << "\n\n";// value pointed to by pointer

    cout << "Adding 500 to score\n";
    score += 500;
    cout << "score is: " << score << "\n";
    cout << "*pScore is: " << *pScore << "\n\n";

    cout << "Adding 500 to *pScore\n";
    *pScore += 500;
    cout << "score is: " << score << "\n";
    cout << "*pScore is: " << *pScore << "\n\n";

    cout << "Assigning &newScore to pScore\n";
    int newScore = 5000;
    pScore = &newScore;
    cout << "&newScore is: " << &newScore << "\n";
    cout << "pScore is: " << pScore << "\n";
    cout << "newScore is: " << newScore << "\n";
    cout << "*pScore is: " << *pScore << "\n\n";

    cout << "Assigning &str to pStr\n";
    string str = "score";
    string* pStr = &str;                // Pointer to string object

    cout << "str is: " << str << "\n";
    cout << "*pStr is: " << *pStr << "\n";
    cout << "(*pStr).size() is: " << (*pStr).size() << "\n";
    cout << "pStr->size() is: " << pStr->size() << "\n\n";

    return 0;
}