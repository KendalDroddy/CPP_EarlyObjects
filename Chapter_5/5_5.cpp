/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 21, 2017
**
** Challenge: Write a program that displays a table of speends in
** kilometers per hour with their values converted to miles per hour.
** The table should display the speeds from 40 kph through 120 kph,
** in incremements of 10 kph.
*********************************************************************/
#include <iostream>
#include <iomanip> 

int main() 
{
  //Define constant converse rate
  double const CONVERSION = 0.6214;


  //Display results
  std::cout << "\n KPH   MPH" << std::endl;
  std::cout << "--------------" << std::endl;
  for (int i = 40; i <= 120; i += 10) //Loop from 40 through 120
  {
    std::cout << " " << std::setw(3) << i << "   " << std::setw(5) << (CONVERSION * i) << "\n";
  }
}