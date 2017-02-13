/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 13, 2017
**
** Challenge: Last month Joe purchased 100 shares of stock for $45.50 
** per share and paid his stock broker a commission that amounted to 
** 2 percent of the total amount he paid for the stock. 
** T wo months later Joe sold the stock for $47.92 per share and paid 
** his stock broker another commission that amounted to 2 percent of 
** the total amount he received for the stock.Write a program that 
** displays the following information:
**    • The amount of money Joe paid for the stock.
**    • The amount of commission Joe paid his broker when he bought 
**      the stock.
**    • The amount that Joe sold the stock for.
**    • The amount of commission Joe paid his broker when he sold the 
**      stock.
**    • The amount of profit or loss that Joe had after selling his 
**      stock and paying both broker commissions.
*********************************************************************/
#include <iostream>
#include <iomanip>

int main()
{
  //Define and initialize variables
  double stockPurchase = 45.50 * 100,
         stockSell = 47.92 * 100,
         purchaseCommission = stockPurchase * .02,
         sellCommission = stockSell * .02,
         profitLoss = (stockSell + sellCommission) - (stockPurchase + purchaseCommission); 

  //Display results
  std::cout << std::fixed << std::setprecision(2) << "\n";
  std::cout << "Purchase amount:     $" << std::setw(6) << stockPurchase << std::endl;
  std::cout << "Purchase commission: $" << std::setw(7) << purchaseCommission << std::endl;
  std::cout << "Sell amount:         $" << std::setw(6) << stockSell << std::endl;
  std::cout << "Sell commission:     $" << std::setw(7) << sellCommission << std::endl;
  std::cout << "Profit/Loss:         $" << std::setw(7) << profitLoss << std::endl;
  std::cout << "\n";
}