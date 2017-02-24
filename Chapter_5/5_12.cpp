/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 23, 2017
**
** Challenge: Write a program that generates a random number between 
** 1 and 100 and asks the user to guess what the number is. If the 
** user's guess is higher than the random number, the program should 
** display "Too high. Try again." If the user's guess is lower than 
** the random number, the program should display "Too low. Try again." 
** The program should use a loop that repeats until the user correctly 
** guesses the random number. Then the program should display 
** a congratulatory message.
*********************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
  //Declare variable
  unsigned seed;
  int      value,
           guess;

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
    if (guess < value)
    {
      std::cout << "Too low. Try again." << std::endl;
    }
    else if(guess > value)
    {
      std::cout << "Too high. Try again." << std::endl;
    }
  }while(guess != value);

//Congratulation message
  std::cout <<"-----------------------------------------\n"
                "* Congrulations! You guessed my number! *\n"
                "-----------------------------------------" << std::endl;
}