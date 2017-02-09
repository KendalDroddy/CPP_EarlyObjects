/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 8, 2017
**
** Description: Many financial experts advise property owners to 
** insure their homes or buildings for at least 80 percent of the 
** amount it would cost to replace the structure. Write a program
** that asks the user to enter the replacement cost of a building
** and then displays the minimum amount of insurance that should be
** purchased for the property.
*********************************************************************/
#include <iostream>

int main()
{
  //Initialize variables
  double houseCost,
         insurance;

  //User input
  std::cout << "Please enter the cost to replace your building: $";
  std::cin >> houseCost;

  //Calculate and display results
  insurance = houseCost * .80;
  std::cout << "You should purchase the following amount of insurance: $" << insurance << std::endl;
}