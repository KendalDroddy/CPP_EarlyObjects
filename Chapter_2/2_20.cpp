/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 7, 2017
**
** Challenge: A particular brand of paint covers 340 square feet per
** gallon. Write a program to determine and report approximately how
** many gallons of paint will be needed to paint two coats on a 
** wooden fence that is 6 feet high and 100 feet long.
*********************************************************************/
#include <iostream>
using std::cout;
using std::endl;

int main()
{
  //Initialize and define variables
  double gallon = 340;
  int surfaceArea = 6 * 100;

  //Display results
  cout << "Gallons of paint needed for two coats: " << (2 * surfaceArea) / gallon << " gallons\n";
}