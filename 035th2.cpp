#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "ENTER THREE NUMBERS: \n";
    cin >> num1 >> num2 >> num3;

    cout << (num1 > num2 && num1 > num3 ? to_string(num1) + " is the greatest.\n" : 
             (num2 > num1 && num2 > num3 ? to_string(num2) + " is the greatest.\n" : 
              to_string(num3) + " is the greatest.\n"));

    return 0;
}
