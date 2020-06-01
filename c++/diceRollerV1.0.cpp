//This program creates a function that will roll a multi-sided die.

#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>

using namespace std;

/*
The function will take a number of sides of the die, set rand() based on time
for randomness and return the outcome of the roll using modulus of the number
of sides (+1 for 0 offset) to determine the "roll". It will then return the
roll variable as an int.
*/
int diceRoll(int numSides)
{
  int roll = 0;
  srand((unsigned int)(time(NULL)));
  roll = rand() % numSides + 1;
  return roll;
}

int main()
{
  int numSides = 0;
  int outcome = 0;
  cout << "Please enter a number of sides on the dice: "
  cin >> numSides;
  cout << endl;
  outcome = diceRoll(numSides);
  cout << "The roll of the die: " << outcome;


  cin.ignore();
  cin.get();
  return 0;
}
