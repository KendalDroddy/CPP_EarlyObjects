/*****************************************************************************
** Author: Kendal Droddy
**
** Date: February 16, 2017
**
** Challenge: Write a program that asks the user to enter a number of seconds.
**  • There are 86400 seconds in a day. If the number of seconds entered by 
**    the user is greater than or equal to 86400, the program should display 
**    the number of days in that many seconds.
**  • There are 3600 seconds in an hour. If the number of seconds entered by 
**    the user is less than 86400 but is greater than or equal to 3600, the 
**    program should display the number of hours in that many seconds.
**  • There are 60 seconds in a minute. If the number of seconds entered by 
**    the user is less than 3600 but is greater than or equal to 60, the 
**    program should display the number of minutes in that many seconds .
*****************************************************************************/
#include <iostream>

int main()
{
  //Define variables
  int seconds,
      minutes,
      hours,
      days;

  //Get user input
  std::cout << "Enter a number of seconds greater or equal to 60: ";
  std::cin >> seconds;

  //Calculate and display results
  if (seconds >= 86400)
  {
    days = seconds / 86400;
    std::cout << "Number of complete days in " << seconds << " seconds: " << days << std::endl;
  }
  else if (seconds < 86400 && seconds >= 3600)
  {
    hours = seconds / 3600;
    std::cout << "Number of complete hours in " << seconds << " seconds: " << hours << std::endl;
  }
  else if (seconds < 3600 && seconds >= 60)
  {
    std::cout << "Number of complete minutes in " << seconds << " seconds: " << minutes << std::endl;
  }
  else
  {
    std::cout << "Please run the program again using valid input." << std::endl;
  }
}