/*
  Control Flow
  - If Condition Trainings

  4 Training Apps
  - Even / Odd Checker
  - Find Greatest Number
  - User Rank Checker
  - Simple Calculator
*/

#include <iostream>
using namespace std;

int main()
{
  int num;
  cin >> num;

  if (num % 2 == 0)
  {
    "Even\n";
  }
  else
  {
     cout << "Odd\n";
  }

  int num1, num2, num3;
  cin >> num1 >> num2 >> num3;

  if (num1 > num2 && num1 > num3)
  {
	 cout << num1 << " is the greates\n";
  }
  if (num2 > num3 && num2 > num1)
  {
	  cout << num2 << " Is the greatest \n";
  }
  else
  {
	  cout << num3 << " is the greatest\n";
  }
  return 0;
}
