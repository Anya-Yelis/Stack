#include <iostream>
#include <vector>
#include "Stack.h"
using namespace std;

bool Stack:: isEmpty() const
{
  return Values.empty();
}

void Stack:: Push(int value)
{
  Values.push_back(value);
}

int Stack:: Pop()
{
  int last = Values.back();
  Values.pop_back();
  return last; 
}

int Stack:: Top() const
{
  return Values.back();
}


void Stack:: Print()
{
  for (int i= 0; i < Values.size(); i++)
    {
      cout<< Values[i]<< " ";
    }
}
