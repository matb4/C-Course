/*
  "Calculate Your Age Application"
 */

#include <iostream>
using namespace std;

int main()
{
  cout << "==================================\n";
  cout << "==Calculate Your Age Application==\n";
  cout << "==================================\n";

  int age;
  cin >> age;

  int age_in_months = age * 12;
  int age_in_weeks = age_in_months * 48;
  int age_in_days = age_in_weeks * 365;
  int age_in_hours = age_in_days * 24;
  int age_in_minutes = age_in_hours * 60;
  int age_in_secondes = age_in_minutes * 60;

  cout << "Age In Months : " << age_in_months << " Month\n";
  cout << "Age In Weeks  : " << age_in_weeks << " Week\n";
  cout << "Age In Days   : " << age_in_days << " Day\n";
  cout << "Age In Hours  : " << age_in_hours << " Hour\n";
  cout << "Age In Minuts : " << age_in_minutes << " Minut\n";
  cout << "Age In Second : " << age_in_secondes << " Second\n";
 
  return 0;
}
