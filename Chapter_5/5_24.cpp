/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 28, 2017
**
** Challenge: Write a program that asks the user to enter today's 
** sales rounded to the nearest $100 for each of three stores. The 
** program should then produce a bar graph displaying each store's 
** sales. Create each bar in the graph by displaying a row of 
** asterisks. Each asterisk should represent $100 of sales.
*********************************************************************/
#include <iostream>

int main()
{
  //Variables
  double salesOne,
         salesTwo,
         salesThree;

  //Get user input
  std::cout << "Round answers to nearest 100." << std::endl;
  std::cout << "Enter sales total for store one: ";
  std::cin >> salesOne;
  std::cout << "Enter sales total for store two: ";
  std::cin >> salesTwo;
  std::cout << "Enter sales total for store three: ";
  std::cin >> salesThree;

  //Produce bar graph header
  std::cout << "     DAILY SALES" << std::endl
            << "   (each * == $100)" << std::endl;

  //Use loops to display bar for each store
  std::cout << "Store 1: ";
  for (int i = 0; i < salesOne / 100; ++i)
  {
    std::cout << "*";
  }
  std::cout << "\nStore 2: ";
  for (int i = 0; i < salesTwo / 100; ++i)
  {
    std::cout << "*";
  }
  std::cout << "\nStore 3: ";
  for (int i = 0; i < salesThree / 100; ++i)
  {
    std::cout << "*";
  }
  std::cout << std::endl;
}