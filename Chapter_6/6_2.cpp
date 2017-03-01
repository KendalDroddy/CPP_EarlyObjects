/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 28, 2017
**
** Challenge: Write a function named celsius that accepts a Fahrenheit 
** temperature as an argument and returns the temperature converted to 
** Celsius. Demonstrate the function by calling it in a loop that 
** displays a tab le of the Fahrenheit temperatures O through 20 and 
** their Celsius equivalents.
*********************************************************************/
#include <iostream>
#include <iomanip>

//Celsius prototype
double celsius(double fahrenheit);

int main()
{
  //Program header
  std::cout <<"\n----------------------------------------\n"
                "*         Fahrenheit to Celsius        *\n"
                "----------------------------------------" << std::endl;

  for (int i = 0; i <= 20; ++i) //Display conversions for 0-20
  {
      std::cout << "Fahrenheit " << std::setw(2) << i << " converts to: " 
      << std::fixed << std::showpoint << std::setprecision(2) << std::setw(6) 
      << celsius(i) << " Celsius" << std::endl;
  }
}

//Celsius function definition
double celsius(double fahrenheit) 
{
    return  (5.0/9.0) * (fahrenheit - 32);
}