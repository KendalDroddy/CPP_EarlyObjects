/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 21, 2017
**
** Challenge: Write a program that uses a loop to display a table of
** the Celsius temperatures from 0 to 30 and their Fahrenheit
** equivalents.
*********************************************************************/
#include <iostream>
#include <iomanip> 

int main() 
{
  //Define constant converse rate
  double const CONVERSION = 1.8;


  //Display results
  std::cout << "\nCelsius   Fahrenheit" << std::endl;
  std::cout << "-----------------------" << std::endl;
  for (int i = 0; i <= 30; ++i)
  {
    std::cout << " " << std::setw(2) << i << "        " << (CONVERSION * i) + 32 << "\n";
  }
}