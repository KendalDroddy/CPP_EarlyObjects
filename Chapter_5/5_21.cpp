/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 26, 2017
**
** Challenge: Write a program that uses nested loops to display the 
*** diamond pattern shown below.
**    +
**   +++ 
**  +++++ 
** +++++++ 
**  +++++ 
**   +++
**    +
*********************************************************************/
#include <iostream> 
#include <iomanip> 
using namespace std; 

int main() 
{ 
  int crosses = 1,
      spaces = 3; 
  
  //Display header
  cout << "This program will make a diamond.\n"; 

  for (int i = 1; i <= 7; i++)
  {
    for (int i = 1; i <= spaces; i++) //Spaces iteration
    {
      std::cout << " ";
    }
    for (int i = 1; i <= crosses; i++) //Crosses iteration
    {
      std::cout << "+";
    }
    if (i < 4) 
    {
      crosses += 2;
      spaces--;
    }
    else //Reverse the arithmetic in rows 4 - 7
    {
      crosses -= 2;
      spaces++;
    }
    
    std::cout << std::endl;
  }
}