/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 12, 2017
**
** Challenge: Assuming there are no deposits other than the original 
** investment, the balance in a savings account after one year may 
** be calculated as Amount = Principal * ( 1 + Rate/T)^T
**    • where Principa l is the balance in the account
**    • Rate is the annual interest rate,
**    • T is the number of times the interest is compounded during a 
**      year (e.g., T is 4 if the interest is compounded quarterly).
** Write a program that asks for the principal, the interest rate, 
** and the number of times the interest is compounded, then reports
** the results including the final balance to the user
*********************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
  //Define variables
  double principal,
         rate,
         interest,
         finalBalance,
         T; //How many times interest is compounded

  //Get user input
  std::cout << "Enter your principal amount: ";
  std::cin >> principal;
  std::cout << "Enter the interest rate: ";
  std::cin >> rate;
  std::cout << "Enter the number of times your interest will compound: ";
  std::cin >> T;

  //Calculate results
  finalBalance = principal * std::pow((1 + ((rate / 100) / T)), T);
  interest = finalBalance - principal;
  

  std::cout << "Interest Rate:      " << std::setw(8) << rate << "\%" << std::endl;
  std::cout << "Times Compounded:   " << std::setw(8) << T << std::endl;
  std::cout << std::fixed << std::showpoint << std::setprecision(2);
  std::cout << "Principal:          " << "$" << std::setw(8) << principal << std::endl;
  std::cout << "Interest:           " << "$" << std::setw(8) << interest << std::endl;
  std::cout << "Final Balance:      " << "$" << std::setw(8) << finalBalance << std::endl;
}