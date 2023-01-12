//
// Created by daniel on 12/01/23.
//

// Heap
// Demonstrates dynamically allocating memory
// The new operator allocates memory on the heap and returns its address
#include <iostream>
using namespace std;
int* intOnHeap();                   //returns an int on the heap
void leak1();                       //creates a memory leak
void leak2();                       //creates another memory leak

int main()
{
    int* pHeap = new int;
    *pHeap = 10;
    cout << "*pHeap: " << *pHeap << "\n\n";
    int* pHeap2 = intOnHeap();
    cout << "*pHeap2: " << *pHeap2 << "\n\n";
    cout << "Freeing memory pointed to by pHeap.\n\n";
    delete pHeap;
    cout << "Freeing memory pointed to by pHeap2.\n\n";
    delete pHeap2;
    //get rid of dangling pointers
    pHeap = 0;
    pHeap2 = 0;
    return 0;
}
// Unlike storage for local variables on the stack, memory allocated on the heap must be explicitly freed

int* intOnHeap()
{
    int* pTemp = new int(20);
    return pTemp;
}
// One advantage of creating memory on the heap is that it can persist after the function ends,
// allowing to create data in a function and returning a pointer or reference to it
void leak1()
{
    int* drip1 = new int(30);
}
// The previous function assigns memory and never uses it or deletes it, so memory is lost
// until the program ends

void leak2()
{
    int* drip2 = new int(50);
    drip2 = new int(100);
    delete drip2;
}
