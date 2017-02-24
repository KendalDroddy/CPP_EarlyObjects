/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 23, 2017
**
** Challenge: Enhance Programming Challenge 5_12 so it keeps a count
** of the number of guesses the user makes.
*********************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
  //Declare variables
  unsigned seed;
  int      value,
           guess,
           count = 0; //Initialize count to 0

  //Use time function to get a seed value for srand
  seed = time(0);
  srand(seed);

  //Generate random value between 1 & 100
  value = rand() % 100 + 1;

  //Program header
  std::cout <<"\n----------------------------------------\n"
                "*    Guess The Number Between 1-100    *\n"
                "----------------------------------------" << std::endl;

  //Get user's guess and loop until guess == value
  do
  {
    std::cout << "Enter your guess: ";
    std::cin >> guess; //Get guess
    count++;           //Increment count
    if (guess < value)
    {
      std::cout << "Too low. Try again." << std::endl;
    }
    else if(guess > value)
    {
      std::cout << "Too high. Try again." << std::endl;
    }
  }while(guess != value);

  //Congratulation message with number of guesses it took
  std::cout <<  "-----------------------------------------\n"
                "* Congrulations! You guessed my number! *\n"
                "* Number of guesses: " << count << "                  *\n"
                "-----------------------------------------" << std::endl;
}