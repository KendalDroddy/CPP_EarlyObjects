/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 16, 2017
**
** Challenge: An online book club awards points to its customers based
** on the number of books purchased each month as follows:
**        Books Purchased    Points Earned
**              0                   0
**              1                   5 
**              2                  15
**              3                  30
**          4 or more              50
** Write a program that asks the user to enter the number of books
** purchased this month and then displays the number of points awarded.
*********************************************************************/
#include <iostream>

int main()
{
  //Define variable
  int booksPurchased;

  //Get user input
  std::cout << "Enter the number of books purchased this month: ";
  std::cin >> booksPurchased;

  //Input validation
  if (booksPurchased >= 0)
  {
    //Display results based on input
    switch (booksPurchased)
    {
      case 0: std::cout << "You earned 0 points." << std::endl;
        break;
      case 1: std::cout << "You earned 5 points." << std::endl;
        break;
      case 2: std::cout << "You earned 15 points." << std::endl;
        break;
      case 3: std::cout << "You earned 30 points." << std::endl;
        break;
      default: std::cout << "You earned 50 points." << std::endl;
    }
  }
  else
  {
    std::cout << "Please run the program again with valid input." << std::endl;
  }

}