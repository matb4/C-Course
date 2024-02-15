/*
  Escape Sequances Characters
     Special None Printing Characters
     Control Printing Behaviour
     Start With Back Slash "\"
     Can Be Inserted In Any Postion
   \n
   \\
   \"
   \'
   \t => Tab Equal 8 Spaces
   \b
   \a => Alert => Play Beep During Excuation
   \r => Carriage Return
 */

#include <iostream>
using namespace std;

int main()
{
  cout << "Line 1\n";
  cout << "Line 2\n";
  cout << "Line 3\\\n";
  cout << "Line \"4\"\n";
  cout << "Line 5\n"; // Same As Single Quote
  cout << "Line \t6\n";
  cout << "Line\b 7\n"; //Lin 7
  cout << "Line 8\a\n";
  cout << "Khaba\rElGhareb\n"; // ElGareb
  cout << "Line \n"; //This Is Line 
  return 0;
}
