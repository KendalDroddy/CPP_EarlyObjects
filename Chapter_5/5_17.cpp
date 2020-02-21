/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 23, 2017
**
** Challenge: Write a program that will predict the size of a 
** population of organisms. The program should ask the user for the 
** starting number of organisms, their average daily population 
** increase (as a percentage of current population), and the number 
** of days they will multiply. A loop should display the size of the 
** population for each day.
*********************************************************************/
#include <iostream>
#include <iomanip>

int main()
{
  //Declare variables
  int    days;
  double rate,
         numberOrganisms;

  //Get starting number and validate
  do
  {
    std::cout << "Enter the starting number of organisms (no less than 2): ";
    std::cin >> numberOrganisms;
  }while(numberOrganisms < 2);

  //Get number of days and validate
  do
  {
    std::cout << "Enter the number of days they will multiply (no less than 1): ";
    std::cin >> days;
  }while(days < 1);

  //Get multiplication rate and validate
  do
  {
    std::cout << "Enter the average daily population increase (\%): ";
    std::cin >> rate; 
  }while(rate < 0);
  rate = (rate/100) + 1;
  std::cout << "Rate: " << rate << std::endl;

  //Table header
  std::cout << std::setw(10) << " " << "   Day  Population" << std::endl;
  std::cout << std::setw(10) << " " << "--------------------" << std::endl;

  //Populate table with year and worth data
  for (int i = 1; i <= days; i++)
  {
    std::cout << std::setw(15) << i << std::setw(10) << std::fixed << std::showpoint 
    << std::setprecision(2) << numberOrganisms << std::endl;
    numberOrganisms = numberOrganisms * rate;
  }
}