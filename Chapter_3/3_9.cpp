/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 9, 2017
**
** Description: Write a program that prompts the users to enter the
** number of days they plan to spend on their next vacation. Then
** compute and report how long that is in hours, minutes, and seconds.
*********************************************************************/
#include <iostream>

int main()
{
  //Initialize variables
  int days,
      hours,
      minutes, 
      seconds;

  //Get user input
  std::cout << "Enter the number of days you will spend on vacation: ";
  std::cin >> days;

  //Calculate and return results
  hours = days * 24;
  minutes = hours * 60;
  seconds = minutes * 60;

  std::cout << "Your vacation of " << days << " days is equivalent to: " << std::endl;
  std::cout << hours << " hours or " << minutes << " minutes or " << seconds << " seconds." << std::endl;

}