/*
  Contorl Flow
    Ternary Operator

  Syntax
  (Condition) ? True : False;
*/

#include <iostream>
using namespace std;

int main()
{
  int age = 15;

  if (age >= 18)
  {
    cout << "Your Age Is Ok\n";
  }
  else
  {
    cout << "Your Age Is Not Ok\n";
  }

  cout << (age >= 18 ? "Age Is  Ok\n" : "Age Is Not Ok\n");

  string msg = age >= 18 ? "Age Is  Ok\n" : "Age Is Not Ok\n";

  cout << msg;
  
  return 0;
}