/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 17, 2017
**
** Challenge: The colors red, blue, and yellow are known as the 
** primary colors because they cannot be made by mixing other colors.
** When you mix two primary colors, you get a secondary color, as 
** shown here:
**    Red and blue make purple
**    Red and yellow make orange.
**    Blue and Yellow make green.
** Write a program that prompts the user to enter the names of two
** primary colors to mix. If the user enters anything other than
** "red", "blue", or "yellow" the program should display an error 
** message. Otherwise the program
*********************************************************************/
#include <iostream>

int main()
{
  //Declare variables
  std::string colorOne,
              colorTwo;

  //Get user input
  std::cout << "Enter your first color (red, blue, or yellow): ";
  std::cin >> colorOne;
  std::cout << "Enter a second color, different than the first (red, blue, or yellow): ";
  std::cin >> colorTwo;

  //Input validation
  if (colorOne != "red" && colorOne != "blue" && colorOne != "yellow" && colorTwo != "red" && colorTwo != "blue" && colorTwo != "yellow")
  {
    std::cout << "Please run the program again with valid input." << std::endl;
    return 0;
  }
  else
    {
    //Determine resulting color
      if (colorOne == "red" || colorTwo == "red")
      {
        if (colorOne == "yellow" || colorTwo == "yellow")
        {
          std::cout << "These two colors mix to make orange." << std::endl;
        }
        if (colorOne == "blue" || colorTwo == "blue")
        {
          std::cout << "These two colors mix to make purple." << std::endl;
        }
      }

      if (colorOne == "yellow" || colorTwo == "yellow")
      {
        if (colorOne == "blue" || colorTwo == "blue")
        {
          std::cout << "These two colors mix to make green." << std::endl;
        }
      }
    }
}