/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 23, 2017
**
** Challenge: Write a program that allows the user to enter an annual 
** rate of inflation between 1 percent and 10 percent, and which then 
** displays a table showing how much $1,000 today will be worth each 
** year for the next 10 years.
*********************************************************************/
#include <iostream>
#include <iomanip>

int main()
{
  //Declare variable
  double inflation,
         yearlyWorth,
         totalWorth = 1000; //Initialize to $1000

  //Get user input and validate
  do
  {
  std::cout << "Enter an inflation rate between 1 and 10 (\%): ";
  std::cin >> inflation;
  }while(inflation < 1 || inflation > 10);

  //Program header
  std::cout <<"\n--------------------------------------------\n"
                "* This table displays the worth of $1000   *\n"
                "* over the next 10 years at " << std::setw(2) << inflation << "\% inflation. *\n"
                "--------------------------------------------" << std::endl;
  //Table header
  std::cout << std::setw(10) << " " << "   Year  Worth" << std::endl;
  std::cout << std::setw(10) << " " << "------------------" << std::endl;

  //Populate table with year and worth data
  for (int i = 1; i <= 10; i++)
  {
    yearlyWorth = 1/(inflation / 100 + 1) * totalWorth;
    std::cout << std::setw(15) << i << std::setw(4) << "$" << std::fixed << std::setprecision(2) << yearlyWorth << std::endl;
    totalWorth = yearlyWorth;
  }
}