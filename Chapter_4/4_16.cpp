/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 19, 2017
**
** Challenge: Write a program that calculates a person's BMI using
** the following formula: BMI = weight x 703/height^2
** where weight is measured in pounds and height is measured in 
** inches. The program should display a message indicating whether
** the person has optimal weight, is underweigth, or is overweight.
** A BMI between 18.5 & 25 is optimal. Underweight is a BMI under
** 18.5 and overweight is a BMI over 25.
*********************************************************************/
#include <iostream>
#include <cmath>

int main()
{
  //Declare variables
  double weight,
         height,
         bodyIndex;

  //Get user input
  std::cout << "Enter your weight in pounds: ";
  std::cin >> weight;
  std::cout << "Enter your height in inches: ";
  std::cin >> height;

  //Calculate BMI
  bodyIndex = weight * (703 / std::pow(height, 2));

  //Display results
  if (bodyIndex < 18.5)
  {
    std::cout << "A body mass index of " << bodyIndex << " is classified as underweight." << std::endl;
  }
  else if (bodyIndex > 25)
  {
    std::cout << "A body mass index of " << bodyIndex << " is classified as overweight." << std::endl;
  }
  else
    std::cout << "A body mass index of " << bodyIndex << " is classified as optimal." << std::endl;
}