/*
  Contorl Flow
    If Condition Introduction

  Symtax
  if (Condition Is True)
  {
    // Do Somthing
  }
*/

#include <iostream>
using namespace std;

int main()
{
 int age = 15 ;
 int points = 450;
 int rank =4;

 if (age >= 18)
 {
  cout << "Welcome Your Age Is Ok\n";
 }
 else if (points >= 500)
 {
  cout << "Welcome Your Points Is Ok\n";
 }
 else if (rank > 4)
 {
  cout << "Welcome Your Age Is Ok\n";
 }
 else
 {
  cout << "Sorry\n";
 }
 return 0;
}