/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 11, 2017
**
** Challenge: Madison County collects property taxes on the assessed 
** value of property, which is 60 percent of its actual value. For 
** example, if a house is valued at $158,000, its assessed value is 
** $94,800. This is the amount the homeowner pays tax on. At last 
** year's tax rate of $2.64 for each $100 of assessed value, the 
** annual property tax for this house would be $2502.72. Write a 
** program that asks the user to input the actual value of a piece of
** property and the current tax rate for each $100 of assessed value. 
** The program should then calculate and report how much annual 
** property tax the homeowner will be charged for this property
*********************************************************************/
#include <iostream>

int main()
{
  //Define constant
  double const TAX_RATE = 2.64; //Per $100 of assessed value

  //Define variables
  double actualValue,
         assessedValue,
         propertyTax;
         
  //Get user input
  std::cout << "Enter the actual value of your home: $";
  std::cin >> actualValue;

  //Calculate results
  assessedValue = actualValue * .60;
  propertyTax = (assessedValue / 100) * TAX_RATE;

  //Display results
  std::cout << "Annual property tax: $" << propertyTax << std::endl;
  
}