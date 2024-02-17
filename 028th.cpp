/*
  Operators & Operands
  "Sympols To Operate On Data"
    
    Logical Opertors
  "For Logic Between Values"

      && And
      || Or
      ! Not
*/

#include <iostream>
using namespace std;

int main()
{
 cout << "*****\n";
 int age = 20;
 int point = 800;
 cout << (age >= 18 && point >= 500) << "\n";
 cout << "*****\n";
 int age1 = 16;
 int point1 = 800;
 cout << (age1 >= 18 && point1 >= 500) << "\n";
 cout << "*****\n";
 int age2 = 16;
 int point2 = 800;
 cout << (age2 >= 18 || point2 >= 500) << "\n";
 cout << "*****\n";
 int age3 = 16;
 int point3 = 450;
 cout << (age3 >= 18 || point3 >= 500) << "\n";
 cout << (10 == 100 || 150 == 100 || 100 == 100) << "\n";
 cout << "*****\n";
 cout << !(10 == 100) << "\n";
 cout << (10 == 100) << "\n";
 cout << !(10 == 100) << "\n";
 cout << (100 != 100) << "\n";
 cout << "*****\n";
 return 0;
}