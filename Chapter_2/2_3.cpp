/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 6, 2017
**
** Challenge: Write a program that computes the sales tax on a $95 
** purchase. Assume the state sales tax is 6.5 percent and the county
** sales tax is 2 percent. Display the purchase price, state tax,
** county tax, and total amounts on the screen.
*********************************************************************/
#include <iostream>

int main()
{
  int purchase = 95,
      totalPurchase;
  double countyTax = purchase * .02,
         stateTax = purchase * .065,
         totalPrice = purchase + countyTax + stateTax;

  //Display totals
  std::cout << "Purchase price: $" << purchase << "\n";
  std::cout << "State tax: $" << stateTax << "\n";
  std::cout << "County tax: $" << countyTax << "\n";
  std::cout << "Total purchase price: $" << totalPrice << std::endl;

}

