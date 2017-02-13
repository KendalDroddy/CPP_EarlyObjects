/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 13, 2017
**
** Challenge: Joe's Pizza Palace needs a program to calculate the 
** number of slices a pizza of any size can be divided into. The 
** program should perform the following steps:
**    A) Ask the user for the diameter of the pizza in inches.
**    B) Divide the diameter by 2 to get the radius.
**    C) Calculate the number of slices that may be taken from a 
**       pizza of that size if each slice has an area of 14.125 
**       square inches. 
**       D) Display a message telling the number of slices.
** The number of square inches in the total pizza can be calculated 
** with this formula: Area= 3.14r2 where variable r is the radius of 
** the pizza. In your program make PI a named constant with the value
** 3.14. Display the number of slices as a whole number.
*********************************************************************/
#include <iostream>
#include <cmath>

int main()
{
  //Define variables
  double const PI = 3.14;
  double diameter,
         radius,
         area,
         sliceArea = 14.25; //Inches
  int    slices;

  //Get user input
  std::cout << "Enter the pizza diameter in inches: ";
  std::cin >> diameter;

  //Calculate results
  radius = diameter / 2;
  area = PI * std::pow(radius, 2);
  slices = (int) area / 14.25;

  //Display results
  std::cout << "Number of total slices: " << slices << std::endl;

}