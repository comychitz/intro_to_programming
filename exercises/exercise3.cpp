#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/**
 * exercise 3
 *
 * Problem: Ask a user to enter a value between 1 and 10. Compare the entered
 * value with a randomly generated number. If the user guessed correctly print 
 * the string "Wow, you're good!". If they guessed incorrectly, print "Sorry,
 * please try again".
 *
 * The genRandom() function has been written for you already. Use it to generate
 * a random number. Some comments have been written to guide you as well.
 */

/**
 * Generate a random number.
 * @return returns a random integer between 1 and 10
 */
int genRandom()
{
  srand(time(NULL));
  return (rand()%10)+1; 
}


int main()
{
  // first, generate a random number

  // ask the user to enter a value

  // compare the user's guess with the random number and print the
  // appropriate response.


  return 0;
}

