/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 13, 2017
**
** Challenge: Write a program that asks the user for an angle, 
** entered in radians. The program should then display the sine, 
** cosine, and tangent of the angle. The output should be displayed
** in fixed-point notation, rounded to four decimal places. 
*********************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
  //Define variables
  double radians,
         sine,
         cosine,
         tangent;

  //Get user input
  std::cout << "Enter an angle in radians: ";
  std::cin >> radians;

  //Calculate results
  sine = std::sin(radians);
  cosine = std::cos(radians);
  tangent = std::tan(radians);

  //Display results
  std::cout << std::fixed << std::setprecision(4);
  std::cout << "Sine: " << sine << std::endl;
  std::cout << "Cosine: " << cosine << std::endl;
  std::cout << "Tangent: " << tangent << std::endl;
}