/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 22, 2017
**
** Challenge: Running on a particular treadmill, you burn 3.9 
** calories per minute. Write a program that uses a loop to display 
** the number of calories burned after 5, 10, 15, 20, 25, and 30 
** minutes.
*********************************************************************/
#include <iostream> 
#include <iomanip>

int main()
{
  //Constant for calories burned per minute
  double const CAL_PER_MINUTE = 3.6; 

  //Program header
  std::cout <<"\n----------------------------------------\n"
                "* This table displays calories burned  *\n"
                "* per 5 minutes running on a treadmill *\n"
                "----------------------------------------" << std::endl;

  //Table header
  std::cout << std::setw(10) << " " << " Minutes  Calories" << std::endl;
  std::cout << std::setw(10) << " " << "------------------" << std::endl;
  
  //Populate table with minute and calories data
  for (int i = 5; i <= 30; i+=5)
  {
    std::cout << std::setw(15) << i << std::setw(11) << i * CAL_PER_MINUTE << std::endl;
  }
}