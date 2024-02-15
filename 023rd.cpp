/*
 Data Types
  Type Conversion
   Convert Data Of One Type To Another
 
  Implicit Conversion
   Conversion Is Done Automaticlly By The Compiler

  Explicit Conversion
   Conversion Is Done By The Programmer

  Data Loss
   When Larger Type Converted To Smaller Type

*/


#include<iostream>
using namespace std;

int main()
{
 cout <<"=========================\n";
 int a;
 double b = 20.5;
 a = b;	//Compiler Will Convert Double Value then assign
 cout <<a <<"\n"; //20
 cout <<sizeof(a)<<"\n"; //4 bytes
 cout <<"=========================\n";

 cout <<"=========================\n";
 char c ='C';
 int d = 20;
 cout <<int (c) <<"\n"; //67
 cout <<c + d<<"\n";  //87
 cout <<"=========================\n";

 cout <<"=========================\n";
 int e = 20;
 double f = 20.5; 
 cout << e + f<<"\n";
 cout <<sizeof (e+f)<<"\n";
 cout <<"=========================\n";

 cout <<"=========================\n";
 int g = 20;
 double h = 20.5; 
 cout << g + (int)h <<"\n";
 cout << g + int (h)<<"\n";
 cout <<sizeof (g + (int)h )<<"\n";
 cout <<sizeof (g + int (h))<<"\n";
 cout <<"=========================\n";

 return 0;
}
