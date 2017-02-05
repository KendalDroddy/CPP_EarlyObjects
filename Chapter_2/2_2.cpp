/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 4, 2017
**
** Challenge: The East Coast sales division of a company generates 58
** percent of total sales. Based on that percentage, write a program
** that will predict how much the East Coast division will generate
** if the company has $8.6 million in sales this year. Display the
** result on the screen.
*********************************************************************/
#include <iostream>

int main()
{
  double percentTotalSales = .58,
         eastCoastSales;
  int companyTotal = 8600000;

  //Calculate and display East Coast division revenue
  eastCoastSales = companyTotal * percentTotalSales;
  std::cout << "The East Coast sales division generated $" << eastCoastSales << std::endl;
}