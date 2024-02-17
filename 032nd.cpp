/*
  Contorl Flow
    Nested If Conditions
*/

#include <iostream>
using namespace std;

int main()
{
 int age =25;
 int points = 1500;

 if (age >= 18)
 {
    cout << "Welcome Your Age Is Ok\n";
    if (points >= 1000)
    {
       cout << "Your Vip\n";
    }
 }
 return 0;
}