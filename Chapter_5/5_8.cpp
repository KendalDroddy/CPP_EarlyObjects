/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 22, 2017
**
** Challenge: Write a program that calculates how much a person earns 
** in a month if the salary is one penny the first day, two pennies 
** the second day, four pennies the third day, and so on with the 
** daily pay doubling each day the employee works. The program should 
** ask the user for the number of days the employee worked during 
** the month, validate that it is between 1 and 31, and then display 
** a table showing how much the salary was for each day worked, as 
** well as the total pay earned for the month. The output should be 
** displayed in dollars with two decimal points, not in pennies. 
*********************************************************************/
#include <iostream>
#include <iomanip>

int main()
{
  //Declare variable
  int days;
  double total,
         penny = .01;

  //Get and validate user input
  do
  {
    std::cout << "Enter days worked this month: ";
    std::cin >> days;
  }while(days < 1 || days > 31); 

  //Generate and display results
  std::cout  << "\n " << "Day     Daily Pay          Total" << std::endl;
  std::cout  << " " << "-----------------------------------" << std::endl;

  for (int i = 1; i <= days; ++i)
  {
    total += penny; //Increase total

    //Display two decimal places
    std::cout << std::fixed << std::showpoint << std::setprecision(2); 
    std::cout << std::setw(3) << i << std::setw(5) << "$" << std::setw(11) << penny 
    << std::setw(6) << "$" << std::setw(11) << total << std::endl;

    penny *= 2; //Increment penny
  }
}