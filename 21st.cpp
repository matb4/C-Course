/*
  Primitive Data Types

  - bool => Boolean
  --- Only Two Possible Values [true, false]
  --- Value Is Case Sensitive
  --- When We Use Boolean Values
  ------ Anything Has On/Off, Yes/No, True/False
  --- Test Boolean In Math
  --- Test > And <
  --- Test Data [100, 0, -100, ""]

  - void => Valueless
  --- Without Value
*/

#include <iostream>
using namespace std;

void without_value()
{
  // Nothing To Return
}

int main()
{
  bool is_open = true;
  cout << is_open + 10 << endl; // 11
  cout << true + true + false << endl; // 2
  bool test_one = 10 > 5; // 1
  bool test_two = 10 > 100; // 0
  cout << test_one << endl; // 1
  cout << test_two << endl;
  int num = 1;
  cout << sizeof(test_one) <<endl;
  cout << sizeof(num) <<endl;
  bool num_one = 100;
  bool num_two = -100;
  bool num_three = 0;
  cout << num_one <<endl;
  cout << num_two << endl;
  cout << num_three << endl;

  return 0;
}
