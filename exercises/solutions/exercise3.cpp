#include <iostream>

using namespace std;

/**
 * exercise 3
 *
 * Problem: Ask the user to read in 5 numbers, and the print out the numbers
 * (one per line) in reverse order.
 *
 * Hint: Loops and arrays(!)
 */

int main()
{
  int a[5];

  // ask user to enter 5 numbers
  for(int i = 0; i < 5; i++)
  {
    cout << "Enter a number: ";
    cin >> a[i];
  }

  // print numbers in reverse order
  for(int i = 4; i >= 0; i--)
  {
    cout << a[i] << endl;
  }

  return 0;
}
