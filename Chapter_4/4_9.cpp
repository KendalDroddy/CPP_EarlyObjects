/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 16, 2017
**
** Challenge: A software company sells a package that retails for $199.
** Quantity discounts are given according to the following table:
**           Quantity           Discount
**            10-19                20%
**            20-49                30% 
**            50-99                40%
**          100 or more            50%
** Write a program that asks for the number of units purchased and
** computes the total cost of the purchase.
*********************************************************************/
#include <iostream>
#include <iomanip>

int main()
{
  //Initialize constant
  int const RETAIL = 199;

  //Define variables
  int    quantityPurchased;
  double discount,
         totalPrice;

  //Get user input
  std::cout << "Enter the number of units you would like to purchase: ";
  std::cin >> quantityPurchased;

  //Set output style
  std::cout << std::fixed << std::showpoint << std::setprecision(2);

  //Calculate results based on quantity purchased
  if (quantityPurchased > 0)
  {
    if (quantityPurchased >= 1 && quantityPurchased <= 9)
    {
      totalPrice = quantityPurchased * RETAIL;
      std::cout << "Total purchase price for " << quantityPurchased << " units: $" << totalPrice << std::endl;
    }
    if (quantityPurchased >= 10 && quantityPurchased <= 19)
    {
      totalPrice = quantityPurchased * (RETAIL - RETAIL * .20);
      std::cout << "Total purchase price for " << quantityPurchased << " units: $" << totalPrice << std::endl;
    }
    if (quantityPurchased >= 20 && quantityPurchased <= 49)
    {
      totalPrice = quantityPurchased * (RETAIL - RETAIL * .30);
      std::cout << "Total purchase price for " << quantityPurchased << " units: $" << totalPrice << std::endl;
    }
    if (quantityPurchased >= 50 && quantityPurchased <= 99)
    {
      totalPrice = quantityPurchased * (RETAIL - RETAIL * .40);
      std::cout << "Total purchase price for " << quantityPurchased << " units: $" << totalPrice << std::endl;
    }
    if (quantityPurchased >= 100)
    {
      totalPrice = quantityPurchased * (RETAIL - RETAIL * .50);
      std::cout << "Total purchase price for " << quantityPurchased << " units: $" << totalPrice << std::endl;
    }
  }
  else
  {
    std::cout << "Please run the program again with valid input." << std::endl;
  }

}