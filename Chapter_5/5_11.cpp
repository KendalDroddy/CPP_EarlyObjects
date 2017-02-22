/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 22, 2017
**
** Challenge: A country club, which currently charges $3,000 per year 
**for membership, has announced it will increase its membership fee by 
** 3 percent each year for the next five years. Write a program that 
** uses a loop to display the projected rates for the next five years.
*********************************************************************/
#include <iostream> 
#include <iomanip>

int main()
{
  //Constant used for yearly increase
  double const INCREASE = 1.03;

  //Variable to track total fee
  double total = 3000;

  //Program header
  std::cout <<"\n----------------------------------------\n"
                "* This table displays a country club's *\n"
                "* yearly fee for the next five years.  *\n"
                "----------------------------------------" << std::endl;
  //Table header
  std::cout << std::setw(10) << " " << " Year      Fee" << std::endl;
  std::cout << std::setw(10) << " " << "------------------" << std::endl;

  //Format output
  std::cout << std::fixed << std::showpoint << std::setprecision(2);

  //Populate table with month and fee data
  for (int i = 1; i <= 5; i++)
  {
    total *= INCREASE;
    std::cout << std::setw(13) << i << std::setw(6) << "$" << total << std::endl;
  }
}