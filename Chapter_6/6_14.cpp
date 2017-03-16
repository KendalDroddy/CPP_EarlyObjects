/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 15, 2017
**
** Challenge: se the function that you wrote for Programming Challenge 
** 13 (Stock Profit) in a program that calculates the total profit or 
** loss from the sale of multiple stocks. The program should ask the 
** user for the number of stock sales, and the necessary data for 
** each stock sale. It should accumulate the profit or loss for each 
** stock sale and then display the total.
*********************************************************************/
#include <iostream>
#include <iomanip>

//Function prototype
double stockCalculator(int, double, double, double, double);

int main()
{
  //Variables
  int numberShares,
      transactions;
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
  std::cout << "Enter number of transactions you want to calculate: ";
  std::cin >> transactions;

  for(int i = 1; i <= transactions; i++)
  {
    std::cout << "\nTransaction " << i << "\n" << std::endl;
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
    profitLoss += stockCalculator(numberShares, purchPrice, pCom, salePrice, sCom);
  }
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