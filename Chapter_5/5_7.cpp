/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 22, 2017
**
** Challenge: Write a program that creates a table showing the radius
** and area for a circle whose radius begins with 1 and continues 
** double until it is 8. 
*********************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
  //Define constant
  double const PI = 3.14; //millimeters

  std::cout <<"\n*****************************************\n"
                "** This program displays the area of a  *\n"
                "** circle as its radius doubles.        *\n"
                "*****************************************" << std::endl;

  //Display results using setw() to center the graph under the header
  std::cout << std::setw(10) << " " << "Radius  Area" << std::endl;
  std::cout << std::setw(10) << " " << "--------------" << std::endl;
  for (int i = 1; i <= 8; i*=2) //Loop from 1 through 25, doubling each iteration
  {
    std::cout << std::setw(10) << " " << std::setw(3) << i << "   " << std::fixed 
    << std::showpoint << std::setprecision(2) << std::setw(6) << PI * (std::pow(i, 2)) << "\n";
  }
}