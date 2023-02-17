#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Stack 
{
  public:
    void Push(int element); //Add an item to the stack in the top position
    int Pop(); //Remove an item from the top of the stack and return its value
    int Top() const; //Return the top most item of a stack.
    bool isEmpty() const; //checks if stack is empty

    void Print(); 

  private:
    vector <int> Values; 

};
