/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 19, 2017
**
** Challenge: The month of February normally has 28 days. But if it
** is a leap year, February has 29 days. Write a program that asks
** the users to enter a year. The program should then display the
** numbers of days in February that year. Use the following criteria
** to identify leap years.
**    1. Determine whether the year is divisible by 100. If it is,
**       it is only a leap year if it is also divisible by 400.
**    2. If the year is not divisible by 100, then it is a leap year
**       if and only if it is divisible by 4.
*********************************************************************/
#include <iostream>

int main()
{
  //Declare variable
  int year;

  //Get user input
  std::cout << "Enter a year: ";
  std::cin >> year;

  //Calculate and display results
  if (year % 100 == 0)
  {
    if (year % 400 == 0)
    {
      std::cout << "The year " << year << " is a leap year." << std::endl;
    }
    else
    {
      std::cout << "The year " << year << " is not a leap year." << std::endl;
    }
  }
  else if (year % 4 == 0)
  {
    std::cout << "The year " << year << " is a leap year." << std::endl;
  }
  else
  {
    std::cout << "The year " << year << " is not a leap year." << std::endl;
  }
}