/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 21, 2017
**
** Challenge: Write a program that asks the user for a positive 
** integer value and that uses a loop to validate the input. 
** The program should then use a second loop to compute the sum 
** of all the integers from 1 up to the number entered. For example, 
** if the user enters 50, the loop will find the sum of 1, 2, ... 50.
*********************************************************************/
#include <iostream>

int main()
{
  //Declare variable
  int value,
      sum;

  //Get user input and validate
  std::cout << "\nEnter a positive integer: ";
  std::cin >> value;

  while(value <= 0)
  {
    std::cout << "\nEnter a positive integer: ";
    std::cin >> value;
  }

  //Calculate sum
  for (int i = 1; i <= value; ++i)
  {
    sum += i;
  }

  //Display results
  std::cout << "The sum of numbers 1 through " << value << " is: " << sum << std::endl;

}
