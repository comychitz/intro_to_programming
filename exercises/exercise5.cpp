#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/**
 * exercise 5
 *
 * Problem: Ask a user to guess a value between 1 and 10. If they guessed
 * correctly, print out the string "Wow, you're good!" and exit the program. If
 * they guessed incorrectly, print out "Sorry, try again." and prompt the user
 * to guess again. The program should continue running until the user has
 * guessed correctly.
 *
 * The genRandom() function has been written for you already. Use it to generate
 * a random number. Some comments have been written to guide you as well.
 */

/**
 * Generate a random number.
 * @return returns a random integer between 1 and 10
 */
int generateRandom()
{
  srand(time(NULL));
  return (rand()%10)+1; 
}


int main()
{

  return 0;
}

