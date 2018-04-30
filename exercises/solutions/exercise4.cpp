#include <iostream>

using namespace std;

/**
 * exercise 4
 *
 * Problem: Print the 2-dimensional array contents, one integer per line,
 * starting from upper left corner and ending in the bottom right corner. Print
 * in order of left to right, then up and down.
 *
 * Hint: You're going to need nested loops.
 */


int main()
{
  int a[5][5] = {1,9,4,3,5,
                 2,3,6,6,7,
                 8,0,1,3,2,
                 5,5,7,3,1,
                 8,9,3,4,2};

  for(int i = 0; i < 5; i++)
  {
    for(int j = 0; j < 5; j++)
    {
      cout << a[i][j] << endl;
    }
  }

  return 0;
}
