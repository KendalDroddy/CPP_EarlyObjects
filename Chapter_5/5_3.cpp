/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 21, 2017
**
** Challenge: Write a program that asks the user for the speed of a 
** vehicle (in miles per hour) and how many hours it has traveled. 
** It should then use a loop to display the total distance traveled 
** at the end of each hour of that time period.
*********************************************************************/
#include <iostream>

int main()
{
  //Declare variable
  int speed,
      hours;

  //Get user input
  std::cout << "Enter the speed of a vehicle (miles per hour): ";
  std::cin >> speed;
  std::cout << "Enter number of hours this vehicle has traveled: ";
  std::cin >> hours;

  //Display results
  std::cout << "\nHour     Miles Traveled" << std::endl;
  std::cout << "-----------------------" << std::endl;

  for (int i = 1; i <= hours; ++i)
  {
    std::cout << " " << i << "            " << speed * i << "  " << std::endl;
  }

}