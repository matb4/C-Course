/*
  Control Flow
  - Nested Ternary Operator
  - Alternate Syntax For If Condition

  Syntax
  (Condition Is True) ? True : False;
*/

#include <iostream>
using namespace std;

int main()
{
 int age =15;
 int points = 450;

 if (age >= 18)
 {
    cout << "Ok Because Of Age\n";
 }
 else 
 {
    if (points >= 500)
    {
        cout << "Ok Because of Points\n";
    }
    else
    {
        cout << "No Age Or Points\n";
    }
 }

 cout << (age >= 18 ? "Ok A\n" :(points >= 500 ? "Ok P\n" : "No A Or P\n"));

 if (age >= 18)
    cout << "Ok\n";
 else 
    cout << "Not OK\n";
 return 0;
}