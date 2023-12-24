/*
  Data Types

    RAM [R]andom [A]ccess [M]emory
      Computer Memory has Location

    Data Sizes
      Bit =>[Bi]nary Digi[t] => Smallest Unit In Storage Store0 Or 1 only
      Byte => A Group of 8 => Store Single Character
      Kilo Byte => 1024 Byte
      Mega Byte => 1024 Kilo
      Gega Byte => 1024 Mega
      Tera Byte => 1024 Gega

    Data Type With Size
      int => 2 Or 4 Bytes Will Cover Later Why
      float => 4 Bytes [18.5656565656]
      double => 8 Bytes [18.5656565656]
         Number Fraction Component
      chr => 1 Byte => "A", "x", "9"
      boolean => 1 Byte => true, false
    Double Vs Float
     
    The Story Behind Creating A Variable
      Declare A Variable
      Tell Computer That We Need To Reserve x Byte Of Memory Depend On Data Type
      Restrict Type Of Data To The Type We Choosed
    Declare Variable Without Type
    See Memory Address &

    Appllication To Create
      Create App Ask You To Type Number Of KiloBytes
      Write 3 Lines Contains
         [1] The Number Of KiloBytes That User Input
	 [2] The Number Of Bytes
	 [3] The Number Of Bits
 */

#include <iomanip>
#include <iostream>
using namespace std ;

int main()
{
  cout << setprecision (13);
  float fl = 10.1234567891;
  cout << fl << "\n";
  double dob = 10.1234567891;
  cout << dob << "\n";
  auto num = 10;
  cout << num << "\n";
  int nums = 100;
  cout << &nums <<"\n";
  return 0;
}

