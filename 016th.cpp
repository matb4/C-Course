/*
  Data Types
   What Is Data?
   Data Explanation In Real Life
     Integer => 5000, 10, -100,
     String  => "ElZero Web School", "Osama ElZero","100A",
     Boolean => true, false
     Float   => 18.5, 1900.50
     Array   => [Osama, Ahmad, Sayed, Mahmoud]
   Why We Choose Data?
     Size
     Operation

  What Is Operand?
    The Part Of An Instruction Representing The Data Manipulated 
 */

#include <iostream>
using namespace std;


int main()
{
  int num = 10;
  string name = "Osama";
  bool status = true;

  int num_one = 100;
  int num_two = 20;

  cout << sizeof (num) <<"\n";
  cout << sizeof (name) <<"\n";
  cout << sizeof (status) <<"\n";

  cout << num_one / num_two; // 100/20
  //cout << num_one / name; // error
 
  return 0;

}
