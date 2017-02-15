/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 15, 2017
**
** Challenge: Write a program that asks the user to enter two numbers. 
** The program should use the conditional operator to determine which 
** number is the smaller and which is the larger.
*********************************************************************/
#include <iostream>

int main()
{
  //Define variables
  int numOne,
      numTwo;

  //Get user input
  std::cout << "Please enter your first number: ";
  std::cin >> numOne;
  std::cout << "Please enter your second number: ";
  std::cin >> numTwo;

  //Output results
  if (numOne > numTwo)
  {
    std::cout << numOne << " is greater than " << numTwo << std::endl;
  }
  else if (numOne < numTwo)
  {
    std::cout << numOne << " is less than " << numTwo << std::endl;
  }
  else
  {
    std::cout << "The two numbers are equal." << std::endl;
  }
}