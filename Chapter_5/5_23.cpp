/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 2, 2017
**
** Challenge: Write a program that uses nested loops to display the 
** triangle pattern shown below.
**        +
**        +++ 
**        +++++ 
** +++++++++++++ 
**        +++++ 
**        +++
**        +
*********************************************************************/
#include <iostream>

int main() 
{ 
  //Variable
  int crosses = 1; 
  
  //Display header
  std::cout << "\nThis program will make an arrow.\n"; 

  for (int i = 1; i <= 7; i++)
  {
    //Create tail
    if (i == 4)
    {
      std::cout << "++++++++";
    }
    else
    {
      std::cout <<"        ";
    }

    //Create the arrow
    for (int i = 1; i <= crosses; i++) //Crosses iteration
    {
      std::cout << "+";
    }

    if (i < 4) //Increment crosses for each row below 4
    {
      crosses += 2;
    }
    else //Decrement crosses for each row above 4
    {
      crosses -= 2;
    }
    
    //New line at end of each row
    std::cout << std::endl;
  }
}