/*  Variables Advanced Knowledge
      Declare Variable Without Value + Change It Later
      Declare Multiple Variables Without Value + Change It Later
      Declare Variables With Same Value
 */

#include <iostream>
using namespace std;

int main()
{
  cout << "\n**********\n";
  int a;
  a = 100;// 100
  cout << a;
  cout << "\n===========\n";

  int b, c, d;
  b = 10, c = 20, d = 30; //60 [10 + 20 + 30]  
  cout << b + c + d;
  cout << "\n===========\n";

  int e, f = 40, g;
  e = 20, g = 60; // 12
  cout << e+f+g;
  cout << "\n===========\n";

  int h, i, j;
  //h = 10, i = 10, j = 10;
  h = i = j = 10; //3
  cout << h+i+j;
  cout << "\n**********\n";

  return 0;
}
