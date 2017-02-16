/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 16, 2017
**
** Challenge: A bank charges $15 per month plus the following check
** fees for a commercial checking account:
**    $0.10 each for fewer than 20 checks
**    $0.08 each for 20-39 checks
**    $0.06 each for 40-59 checks
**    $0.04 each for 60 or more checks
** Write a program that asks for the number of checks written during
** the past month, then computes and displays the bank's fees.
*********************************************************************/
#include <iostream>
#include <iomanip>

int main()
{
  //Initialize constant
  int const MONTHLY_CHARGE = 15;

  //Define variables
  int numberChecks;
  double totalCost;

  //Get user input
  std::cout << "Enter the number of checks written this month: ";
  std::cin >> numberChecks;

  //Format output
  std::cout << std::fixed << std::showpoint << std::setprecision(2);

  //Get calculate total
  if (numberChecks >= 0)
  {
    if (numberChecks <= 19)
    {
      std::cout << "Total bank fees: $" << MONTHLY_CHARGE + (numberChecks * .10) << std::endl;
    }
    if (numberChecks >= 20 && numberChecks <= 39)
    {
      std::cout << "Total bank fees: $" << MONTHLY_CHARGE + (numberChecks * .08) << std::endl;
    }
    if (numberChecks >= 40 && numberChecks <= 59)
    {
      std::cout << "Total bank fees: $" << MONTHLY_CHARGE + (numberChecks * .06) << std::endl;
    }
    if (numberChecks >= 60)
    {
      std::cout << "Total bank fees: $" << MONTHLY_CHARGE + (numberChecks * .04) << std::endl;
    }
  }
  else
  {
    std::cout << "Please run the program again with valid input." << std::endl;
  }
}
