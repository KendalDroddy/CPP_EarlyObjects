/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 15, 2017
**
** Challenge: Write a program that asks the user to enter an item's 
** wholesale cost and its markup percentage . It should then display 
** the item's retail price. The program should have a function named 
** calculateRetail that receives the wholesale cost and the markup 
** percentage as arguments and returns the retail price of the item.
*********************************************************************/
#include <iostream>

/*********************************************************************
** Function prototype
*********************************************************************/
double calculateRetail(double whole, double markup);

int main()
{
  //Variables
  double wholesale,
         percent,
         retail;

  //Get user input
  std::cout << "\nWholesale Markup Calculator\n";
  std::cout << "Enter the wholesale price: $";
  std::cin >> wholesale;
  std::cout << "Enter the markup percentage: ";
  std::cin >> percent;

  //Calculate retail price and display result
  retail = calculateRetail(wholesale, percent);
  std::cout << "Retail price: $" << retail << std::endl;
}

/*********************************************************************
** calculateRetail Function
*********************************************************************/
double calculateRetail(double whole, double markup)
{
  return whole * (1 + (markup/100));
}