/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 15, 2017
**
** Challenge: The date June 10, 1960, is special because when we write 
** it in the following format, the month times the day equals the year.
**          * 6/10/60
** Write a program that asks the user to enter a month (in numeric 
** form), a day, and a two -digit year. The program should then 
** determine whether the month times the day is equal to the year. If 
** so, it should display a message saying the date is magic. 
** Otherwise, it should display a message saying the date is not magic.
*********************************************************************/
#include <iostream>

int main()
{
  //Define variables
  int day,
      month,
      year;

  //Get and validate month
  std::cout << "Please enter a month between 1 and 12: ";
  std::cin >> month;

  if (month < 1 || month > 12)
  {
    std::cout << "Please run the program again and enter a valid number." << std::endl;
    return 0;
  }

  //Get and validate day
  std::cout << "Please enter a day of the month between 1 and 31: ";
  std::cin >> day;

  if (day < 1 || day > 31)
  {
    std::cout << "Please run the program again and enter a valid number." << std::endl;
    return 0;
  }

  //Get and validate year
  std::cout << "Please enter a year between 00 and 99: ";
  std::cin >> year;

  if (year < 00 || year > 99)
  {
    std::cout << "Please run the program again and enter a valid number." << std::endl;
    return 0;
  }

  //Calculate and display results
  if (month + day == year)  
  {
    std::cout << "\n";
    std::cout << month << "/" << day << "/" << year << " is a magic date!" << std::endl;
    std::cout << "\n";
  }
  else
  {
    std::cout << "\n";
    std::cout << month << "/" << day << "/" << year << " is not a magic date!" << std::endl;
    std::cout << "\n";
  }

}