#include <iostream>
#include <vector>
#include "Stack.h"
using namespace std;

int main()
{
  Stack X; 

  if(X.isEmpty()==1)
  {
    cout<< "\nStack is empty\n";
  } 
  else
  {
   cout<< "\nStack is not empty"; 
  }
  
 // 5 6 23
  X.Push(5);
  X.Push(6);
  X.Push(23);

  cout<< "\n"<< X.Pop()<< endl; // 5 6 , 23 removed

  cout<< "\n"<< X.Top()<< endl; // 5 6 , 6 is the top
  
  cout<< "\n"<< X.Pop()<< endl; // 5, 6 is removed

if(X.isEmpty()==1)
  {
    cout<< "\nStack is empty\n";
  } 
  else
  {
   cout<< "\nStack is not empty\n"; // 5 , false not empty
  }

  X.Push(12);  // 5 12

  X.Print(); 
  
  return 0; 
}

