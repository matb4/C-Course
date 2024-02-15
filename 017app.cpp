#include <iostream>
using namespace std;


int main()
{
  cout << "============================\n";
  cout << "==Calculate How Many Kilos==\n";
  cout << "============================\n";

  int kilos;
  cin >> kilos;

  int numbers_in_bytes = kilos * 1024;
  int numbers_in_bits = numbers_in_bytes * 8;

  cout << "Numbers In Bytes : " << numbers_in_bytes << " Bytes\n";
  cout << "Numbers In Bits  : " << numbers_in_bits << " Bits\n";
  return 0;
}
