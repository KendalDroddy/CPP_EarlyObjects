/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 10, 2017
**
** Challenge: Madison County provides a $5000 homeowner exemption for 
** senior citizens. For example, if their house is valued at $158,000 
** its assessed value would be $94,800, as explained above. However 
** they would only pay tax on $89,800 . At last year's tax rate of 
** $2.64 for each $100 of assessed value, their property tax would be 
** $2370.72. In addition to the tax break, senior citizens are 
** allowed to pay their property tax in four equal payments. The 
** quarterly payment due on this property would be $592.68. Write a 
** program that asks the user to input the actual value of a piece of 
** property and the current tax rate for each $100 of assessed value. 
** The program should then calculate and report how much annual 
** property tax a senior homeowner will be charged for this property 
** and what their quarterly tax bill will be.
*********************************************************************/
#include <iostream>

int main()
{
  //Define variables
  double actualValue,
         assessedValue,
         propertyTax,
         taxRate;
         
  //Get user input
  std::cout << "Enter the actual value of your home: $";
  std::cin >> actualValue;
  std::cout << "Enter the current tax rate: $";
  std::cin >> taxRate;

  //Calculate results
  assessedValue = (actualValue * .60) - 5000; //Subtract 5000 for senior discout
  propertyTax = (assessedValue / 100) * taxRate;

  //Display results
  std::cout << "Annual property tax: $" << propertyTax << std::endl;
  std::cout << "Your quarterly payments equals: $" << propertyTax / 4 << std::endl;
  
}
