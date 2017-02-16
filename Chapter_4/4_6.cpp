/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 16, 2017
**
** Challenge: Create a change-counting game that asks the user to 
** enter what coins to use to make exactly one dollar. The program 
** should ask the user to enter the number of pennies, nickels, dimes, 
** and quarters. If the total value of the coins entered is equal to 
** one dollar, the program should congratulate the user for winning 
** the game. Otherwise, the program should display a message 
** indicating whether the amount entered was more or less than one 
** dollar. Use constant variables to hold the coin values.
*********************************************************************/
#include <iostream>

int main()
{
  //Initialize constants
  double const PENNY_VALUE   = .01;
  double const NICKEL_VALUE  = .05;
  double const DIME_VALUE    = .10;
  double const QUARTER_VALUE = .25;

  //Define variables
  int penny,
      nickel,
      dime,
      quarter;
  double total;

  //Get user input
  std::cout << "\nGuess how many of each coin it takes to make $1!\n";
  std::cout << "Enter the number of pennies: ";
  std::cin >> penny;
  std::cout << "Enter the number of nickels: ";
  std::cin >> nickel;
  std::cout << "Enter the number of dimes: ";
  std::cin >> dime;
  std::cout << "Enter the number of quarters: ";
  std::cin >> quarter;

  //Calculate total amount
  total = (penny * PENNY_VALUE) + (nickel * NICKEL_VALUE)
        + (dime * DIME_VALUE) + (quarter * QUARTER_VALUE);

  //Display results
  if (total == 1.00) 
  {
    std::cout << "Congratulations, you won!" << std::endl;
  }
  else
  {
    if (total < 1.00)
    {
      std::cout << "Try again, your total amount is $" << total;
      std::cout << " which is less than $1." << std::endl;
    }
    else
    {
      std::cout << "Try again, your total is $" << total;
      std::cout << " which is greater than $1." << std::endl;
    }
  }
}

