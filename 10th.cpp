/*
  Variables Naming Rules & Best Peactices

    Naming Rules
      Must Be Unique
      Case Sensitive
      Cannot Start With Numbers
      Nums Or Letters Or Underscore
      No White Space Or Special Characters
      Reserved Keywords "Class, Public"

    Best Practices
      Related Names
      Writing Style
*/

#include <iostream>
using namespace std;

int main()
{
  int price = 100; // Declare A New Variable
      price = 200; // Update The Value
  int Price = 400;
  cout << price;
  cout << "\n=====+=====\n";
  int num = 10;
  cout << num;
  cout << "\n=====+=====\n";
  int _numbers = 100;
  cout << _numbers;
  cout << "\n=====+=====\n";
  int publics = 1000;
  cout << "\n=====+=====\n";
  int OSAMA = 500; // Bad Style
  cout << OSAMA;
  cout << "\n=====+=====\n";
  int x = 600;
  cout << x; //Bad naming not related to the program
  cout << "\n=====+=====\n";
  return 0;
}
