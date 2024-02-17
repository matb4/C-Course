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
  cout << (num % 2 == 0 ? "Even\n" : "Odd\n");
  return 0;
}