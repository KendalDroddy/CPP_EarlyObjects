/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 16, 2017
**
** Challenge: Write a program that displays the following menu:
**   * Geometry Calculator
**      1. Calculate the Area of a Circle 
**      2. Calculate the Area of a Rectangle
**      3. Calculate the Area of a Triangle
**      4. Quit
** Enter your choice (1 - 4):
**  *If the user enters 1, the program should ask for the radius of the 
**   circle and then display its area. Use 3.14159 for pi.
**  *If the user enters 2, the program should ask for the length and
**   width of the rectangle, then display the rectangle's area.
**  *If the user enters 3, the program should ask for the length of
**   the triangle's base and its height, then display its area.
**  *If the user enters 4, the program should end.
*********************************************************************/
#include <iostream>

int main()
{ 
  //Initialize constant
  double const PI = 3.14159;

  //Define variables
  int    choice;
  double radius,
         length,
         width,
         height;
         
  //Display menu
  std::cout << "\n";
  std::cout << "Geometry Calculator\n";
  std::cout << "  1. Calculate the Area of a Circle" << std::endl;
  std::cout << "  2. Calculate the Area of a Rectangle" << std::endl;
  std::cout << "  3. Calculate the Area of a Triangle" << std::endl;
  std::cout << "  4. Quit \n" << std::endl;

  //Get user input
  std::cout << "Enter your choice (1 - 4): ";
  std::cin >> choice;

  //Input validation
  if (choice >= 1 && choice <= 4)
  {
    switch(choice)
    {
      case 1: std::cout << "Enter the radius: ";
              std::cin >> radius;
              std::cout << "The circle's area is: " << PI * (radius * radius) << std::endl;
              break;
      case 2: std::cout << "Enter the length: ";
              std::cin >> length;
              std::cout << "Enter the width: ";
              std::cin >> width;
              std::cout << "The rectangle's area is: " << length * width << std::endl;
              break;
      case 3: std::cout << "Enter the base length: ";
              std::cin >> length;
              std::cout << "Enter the height: ";
              std::cin >> height;
              std::cout << "The triangle's area is: " << .5 * (length * height) << std::endl;
              break;
      case 4: std::cout << "Exiting the program." << std::endl;
              break;
    }
  }
  else
  {
    std::cout << "Please run the program again with valid input (1 - 4)." << std::endl;
  }

}