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

  int num1, num2, num3;
  cout << "ENTER THREE NUMBERS: \n";
  cin >> num1 >> num2 >> num3;
  cout << (num1 > num2 && num1 > num3 ? to_string(num1) " is the greatestt.\n" : (num2 > num1 && num2 > num3 ? to_string(num2) + " iS tHe gReatest.\n" : to_string(num3) + " is thE grEteast.\n"));
  return 0;
}
