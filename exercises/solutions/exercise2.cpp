#include <iostream>

using namespace std;

/**
 * exercise 2
 *
 * Problem: Ask user to enter two integer values and print the result of adding
 * them together.
 */

int main()
{
  int a, b;
  // ask user to enter a integer 
  cout << "Enter a number: ";
  cin >> a;

  // ask user to enter another integer
  cout << "Enter another number: ";
  cin >> b;

  // print out result of addition of the two numbers
  cout << a+b << endl;

  return 0;
}
