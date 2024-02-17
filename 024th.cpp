/*
  Operators & Operands
  "Sympols To Operate On Data"

    Arithmetic Operators
    "For Mathematical Operations"

       +=> Addition
       -=> Subtraction
       *=> Multiplication
       /=> Division
       %=> Module => Remainder After Division

    What Is Operand?
     The Part Of an Instruction Representing The Data Manipu;ated by The Operator
*/

#include <iostream>
using namespace std;

int main()
{
  cout << 10 + 10 << "\n";
  cout << sizeof (10 + 10) << "\n"; //4
  cout << 10.5 + 9.5 << "\n";
  cout << sizeof (10.5 + 9.5) << "\n"; //8
  cout << 10.5f + 9.5f << "\n";
  cout << sizeof (10.5f + 9.5f) << "\n"; //4
  cout << int(10.5 + 9.5) << "\n";
  cout << "======================\n";
  cout << sizeof (10.5 + 9.5) << "\n"; //8
  cout << sizeof (int(10.5 + 9.5)) << "\n"; //4
  cout << "======================\n";
  cout << 100 - 50 << "\n";
  cout << 100 - -50 << "\n";
  cout << "======================\n";
  cout << 20 / 5 << "\n";
  cout << 12 / 5 << "\n";
  cout << 12.f / 5 << "\n";
  cout << "======================\n";
  cout << 20 % 5 << "\n"; //0
  cout << 21 % 5 << "\n"; //1
  cout << 24 % 5 << "\n"; //4
  //cout << 24.5 % 5 << "\n"; //error
 return 0;
}