/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 10, 2017
**
** Description: Write a program that converts Celsius temp to 
** Fahrenheit temp. The formula is F = (9/5)C + 32. The program
** should prompt the user to input a Celsius temp and should display
** the corresponding Fahrenheit temp.
*********************************************************************/
#include <iostream>

int main()
{
  //Define variables
  const double CONVERSION_RATIO = 1.8; 
  double celsius,
         fahrenheit;

  //Get user input
  std::cout << "Please enter a Celsius temperature: ";
  std::cin >> celsius;

  //Calculate and print results
  fahrenheit = (CONVERSION_RATIO * celsius) + 32;
  std::cout << "The equivalent Fahrenheit temperature is: " << fahrenheit << std::endl;

}