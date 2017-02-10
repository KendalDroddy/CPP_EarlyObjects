/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 10, 2017
**
** Description: The Yukon Widget Company manufactures widgets that
** weight 12.5 pounds each. Write a program that calculates how many
** widgets are stacked on a pallet, based on the total weight of the
** pallet. The program should ask the user how much the pallet weighs
** by itself and with the widgets stacked on it. It should then
** calculate and display the number of widgets stacked on the pallet. 
*********************************************************************/
#include <iostream>

int main()
{
  //Define variables
  double widgetWeight = 12.5,
         palletWeight,
         totalWeight,
         numberWidgets;

  //Get user input
  std::cout << "Enter the weight of the pallet: ";
  std::cin >> palletWeight;
  std::cout << "Enter the total weight of the pallet plus widgets: ";
  std::cin >> totalWeight;

  //Calculate results
  numberWidgets = (totalWeight - palletWeight) / 12.5;

  //Display results
  std::cout << "Total number of widgets: " << numberWidgets << std::endl;
}