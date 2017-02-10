/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 10, 2017
**
** Description: A theater only keeps 80 percent of the revenue earned
** from ticket sales. The other 20 percent goes to the distributor.
** Write a program that calculates a theater's gross and net box
** office revene for a night. The program should ask for the name of 
** the movie, and how many adult and child tickets were sold. (The 
** price of an adult ticket is $10 and a child's ticket is $6.) 
*********************************************************************/
#include <iostream>
#include <iomanip>
using std::endl;

int main()
{
  //Define variables
  int adultPrice = 10,
      childPrice = 6,
      adultSold,
      childSold;
  double grossIncome,
         netIncome,
         distributorPay; 
  std::string movieTitle;

  //Get user input
  std::cout << "Name of the movie: " << endl; 
  std::getline(std::cin, movieTitle);
  std::cout << "Adult tickets sold: " << endl;
  std::cin >> adultSold;
  std::cout << "Child tickets sold: " << endl;
  std::cin >> childSold;

  //Calculate results
  grossIncome = (adultSold * adultPrice) + (childSold * childPrice);
  netIncome = grossIncome * .80;
  distributorPay = grossIncome - netIncome;

  //Display results
  std::cout << "\n" << endl;
  std::cout << std::right << std::setw(29) << "Movie Title: " << movieTitle << endl;
  std::cout << std::right << std::setw(29) << "Adult Tickets Sold: " << adultSold << endl;
  std::cout << std::right << std::setw(29) << "Child Tickets Sold: " << childSold << endl;
  std::cout << std::right << std::setw(29) << "Gross Box Office Revenue: " << "$" << std::fixed << std::setprecision(2) << grossIncome << endl;
  std::cout << std::right << std::setw(29) << "Amount Paid to Distributor: " << "$" << distributorPay<< endl;
  std::cout << std::right << std::setw(29) << "Net Box Office Revenue: " << "$" << netIncome << endl;
  std::cout << "\n" << endl;

}