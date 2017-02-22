/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 21, 2017
**
** Challenge: Assuming the Earth's oceans continue rising at about
** 3.1 millimeters per year, write a program that displays a table
** showing the total number of millimeters the oceans will have 
** risen each year for the next 25 years.
*********************************************************************/
#include <iostream>
#include <iomanip> 

int main()
{
  //Define constant
  double const YEARLY_RATE = 3.1; //millimeters

  std::cout <<"\n*****************************************\n"
                "** This program displays ocean rise (in *\n"
                "** millimeters) over the next 25 years. *\n"
                "*****************************************" << std::endl;

  //Display results
  std::cout << "\n Year  Rise" << std::endl;
  std::cout << "--------------" << std::endl;
  for (int i = 1; i <= 25; i++) //Loop from 1 through 25
  {
    std::cout << " " << std::setw(3) << i << "   " << std::fixed 
    << std::showpoint << std::setprecision(1) << std::setw(5) << (YEARLY_RATE * i) << "\n";
  }
}