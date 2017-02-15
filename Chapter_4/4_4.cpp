/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 15, 2017
**
** Challenge: The area of a rectangle is the rectangle's length times
** its width. Write a program that asks for the length and width of 
** two rectangles. The program should then tell the user which rectangle
** has the greater area or if the areas are the same.
*********************************************************************/
#include <iostream>

int main()
{
  //Define variables
  int lengthOne,
      lengthTwo,
      widthOne,
      widthTwo,
      areaOne,
      areaTwo;

  //Get user input
  std::cout << "Enter the length for rectangle one: ";
  std::cin >> lengthOne;
  std::cout << "Enter the width for rectangle one: ";
  std::cin >> widthOne;
  std::cout << "Enter the length for rectangle two: ";
  std::cin >> lengthTwo;
  std::cout << "Enter the width for rectangle two: ";
  std::cin >> widthTwo;

  //Calculate area of rectangles
  areaOne = lengthOne * widthOne;
  areaTwo = lengthTwo * widthTwo;

  //Compare and display results
  if (areaOne > areaTwo)
  {
    std::cout << "Rectangle one is larger than rectangle two." << std::endl;
  }
  else if (areaOne < areaTwo)
  {
    std::cout << "Rectangle one is smaller than rectangle two." << std::endl;
  }
  else
  {
    std::cout << "The rectangles are equal in size." << std::endl;
  }

}