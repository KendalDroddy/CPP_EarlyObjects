/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 6, 2017
**
** Challenge: A car holds 16 gallons of gasoline and can travel 312
** miles before refueling. Write a program that calculates the number
** of miles per gallon the car gets. Display the results on screen.
*********************************************************************/
#include <iostream>

int main()
{
  //Initialize and define variables
  double gallons = 16,
         miles = 312,
         milesPerGallon = miles/gallons;

  //Display results
  std::cout << "Miles per gallon: " << milesPerGallon << std::endl;
}