/*
  Operators & Operands
  "Sympols To Operate On Data"

    Increment And Decrement Operators
  "For incrementing And Decrementing Values"

      Pre/Post Increment
      Pre/Post Decrement
*/

#include <iostream>
using namespace std;

int main()
{
 cout << "=====\n";
 int likes = 0;
 cout << likes++ << "\n";
 cout << likes << "\n";
 cout << "=====\n";
 int likes1 = 0;
 cout << likes1-- << "\n";
 cout << likes1 << "\n";
 cout << "=====\n";
 int views = 0;
 cout << ++views << "\n";
 cout << views << "\n";
 cout << "=====\n";
 int views1 = 0;
 cout << --views1 << "\n";
 cout << views1 << "\n";
 cout << "=====\n";
 return 0;
}