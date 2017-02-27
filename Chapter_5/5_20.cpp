/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 26, 2017
**
** Challenge: Write a program that asks the user for two positive 
** integers between 2 and 10 to use for the length and width of a 
** rectangle. If the numbers are different, the larger of the two 
** numbers should be used for the length and the smaller for the 
** width. The program should then display a rectangle of this size 
** on the screen using the character 'X'. 
*********************************************************************/
#include <iostream>

int main()
{
  //Declare variables
  int length,
      width;

  //Get user input and validate
  do
  {
  std::cout << "Enter a number between 2 & 10: ";
  std::cin >> length;
  }while(length < 2 || length > 10);

  do
  {
  std::cout << "Enter another number between 2 & 10: ";
  std::cin >> width;
  }while(width < 2 || width > 10);

  //Ensure length is the larger of the two numbers
  if (length < width) 
  {
    int temp = length;
    length = width;
    width = temp;
  }

  //Use nested loops to print the appropriate row and column
  for (int i = 1; i <= length; i++)
  {
    for (int i = 1; i <= width; i++)
    {
      std::cout << 'X';
    }
    std::cout << "\n";
  }
}