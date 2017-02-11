/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 10, 2017
**
** Description: A retail company must file a monthly sales tax report
** listing the sales for the month and the amount of sales tax 
** collected. Write a program that asks for the month, the year, and 
** the total amount collected at the cash register (that is, sales 
** plus sales tax ). Assume the state sales tax is 4 percent and the 
** county sales tax is 2 percent. If the total amount collected is 
** known and the total sales tax is 6 percent, the amount of product 
** sales may be calculated as S = T/1.06 where S is the product sales
** and T is the total income (product sales plus sales tax).
*********************************************************************/
#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;

int main()
{
  //Define variables
  std::string month;
  int year;
  double totalCollected,
         salesTotal,
         countyTax,
         stateTax;

  //Get user input
  cout << "Enter the month for your sales tax report: ";
  cin >> month;
  cout << "Enter the year for your sales tax report: ";
  cin >> year;
  cout << "Enter the total amount collected for the period: $";
  cin >> totalCollected;

  //Calculate results
  salesTotal = totalCollected / 1.06;
  countyTax = salesTotal * .02;
  stateTax = salesTotal * .04;

  //Display results
  cout << "\n";
  cout << "Month: " << month << " " << year << endl;
  cout << "-------------------" << endl;
  cout << "Total Collected:  $ " << std::setw(8) << std::fixed << std::setprecision(2) << totalCollected << endl;
  cout << "Sales:            $ " << std::setw(8) << salesTotal << endl;
  cout << "County Sales Tax: $ " << std::setw(8) << countyTax << endl;
  cout << "State Sales Tax:  $ " << std::setw(8) << stateTax << endl;
  cout << "Total Sales Tax:  $ " << std::setw(8) << stateTax + countyTax << endl;
}
