/*
  Operators & Operands
  "Symbols To Operate On Data"

  - Assignment Operators
  "For Assigning Operations"

  --- = Assign
  --- += Addition
  --- -= Subtraction
  --- *= Multiplication
  --- /= Division
  --- %= Modulo => Remainder After Division
*/

#include <iostream>
using namespace std;

int main()
{
  cout << "=========\n";
  cout << 4 % 2 << "\n"; //0
  cout << 6 % 2 << "\n"; //0
  cout << 8 % 2 << "\n"; //0
  cout << 11 % 2 << "\n"; //1
  cout << "=========\n";
  int a = 10;
  // a = a + 10;
  a += 10;
  cout << a << "\n";
  cout << "=========\n";
  int b = 20;
  // b = b - 10;
  b -= 10;
  cout << b << "\n";
  cout << "=========\n";
  int c = 5;
  // c = c * 10;
  c *= 10;
  cout << c << "\n";
  cout << "=========\n";
  return 0;
}