/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 16, 2017
**
** Challenge: Write a function that accepts as arguments the number 
** of shares, the purchase price per share, the purchase commission 
** paid, the sale price per share, and the sale commission paid. The 
** function should return the profit (or loss) from the sale of stock.
** Demonstrate the function in a program that asks the user to enter 
** the necessary data and displays the amount of the profit or loss.
*********************************************************************/
#include <iostream>
#include <iomanip>

//Function prototype
double stockCalculator(int, double, double, double, double);

int main()
{
  //Variables
  int numberShares;
  double purchPrice,
         pCom,
         salePrice,
         sCom,
         profitLoss;
  //Program header
  std::cout <<"\n----------------------------------------\n"
                "*      Stock Profit/Loss Calculator    *\n"
                "----------------------------------------" << std::endl;
  //Get user input
  std::cout << "Enter number of shares: ";
  std::cin >> numberShares;
  std::cout << "Enter purchase price per share: $";
  std::cin >> purchPrice;
  std::cout << "Enter purchase commission paid: $";
  std::cin >> pCom;
  std::cout << "Enter sale price per share: $";
  std::cin >> salePrice;
  std::cout << "Enter sale commission paid: $";
  std::cin >> sCom;

  //Calculate and display results
  profitLoss = stockCalculator(numberShares, purchPrice, pCom, salePrice, sCom);
  std::cout << std::fixed << std::showpoint << std::setprecision(2);
  std::cout << "Your profit/loss totals: $" << profitLoss << std::endl;
}

/*********************************************************************
** stockCalculator()
*********************************************************************/
double stockCalculator(int numShares, double purchPS, double pCom, 
                       double salePS, double sCom)
{
  return ((numShares * salePS)-sCom)-((numShares * purchPS) + pCom);
}