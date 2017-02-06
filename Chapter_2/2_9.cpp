/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 6, 2017
**
** Challenge: An electronics company makes circuit boards that cost
** $14.95 apiece to produce. Write a program to determine how much 
** the company should sell them for if it wants to make a 35 percent
** profit. Display results on the screen.
*********************************************************************/
#include <iostream>

int main()
{
  //Initialize and define variables
  double boardCost = 14.95,
         profit = boardCost * .35,
         salePrice = boardCost + profit;

  //Display results
  std::cout << "To maintain 35\% profit, circuit boards should be sold for: $" << salePrice << std::endl;
}