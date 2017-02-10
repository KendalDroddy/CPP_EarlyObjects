/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 10, 2017
**
** Description: Write a program that will convert U.S. dollar amounts
** to Japanese yen and to euros, storing the conversion factors in 
** the constant variables YEN_PER_DOLLAR and EUROS_PER_DOLLAR.
*********************************************************************/
#include <iostream>

int main()
{
  //Define constants
  const double YEN_PER_DOLLAR = 113.31;
  const double EUROS_PER_DOLLAR = 0.94;
  
  //Define variables
  int dollars;

  //Get user input
  std::cout << "Enter the amount of dollars you would like to convert: ";
  std::cin >> dollars;

  //Calculate and display results
  std::cout << "$" << dollars << " is equal to: ";
  std::cout << dollars * YEN_PER_DOLLAR << " yen or " << dollars * EUROS_PER_DOLLAR;
  std::cout << " euros" << std::endl;

}