/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 21, 2017
**
** Challenge: Write a program that uses a loop to display the 
** characters for each ASCII code 32 through 127. Display 16 
** characters on each line with one space between characters.
*********************************************************************/
#include <iostream>

int main()
{
  //Declare variable
  char output;

  //Using a loop, print chars for ASCII code 32 through 127
  for (int i = 32; i <= 127; ++i)
  {
    if (i % 16 == 0 && i > 32)
    {
      std::cout << "\n";
    }
    output = i;
    std::cout << output << " ";
  }  
  std::cout << std::endl;
}