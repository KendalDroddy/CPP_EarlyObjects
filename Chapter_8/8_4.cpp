/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 2, 2017
**
** Challenge: Write a program that lets a maker of chips and salsa 
** keep track of their sales for five different types of salsa they
** produce: mild, medium, sweet, hot, and zesty. It should use two
** parallel five-element arrays: an array of strings that holds the
** five salsa names and an array of integers that holds the number
** of jars sold during the past month for each salsa. The program
** should prompt the user to enter the number of jars sold for each
** type. Once this sales data has been entered, the program should
** produce a report that displays sales for each salsa type, total
** sales, and the name of the highest selling and lowest selling
** products.
*********************************************************************/
#include <iostream> 
#include <iomanip> 

int main()
{
  //Arrays and variables
  std::string salsaTypes[5] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"},
              highMonth,
              lowMonth;
  int         salsaSales[5],
              highest, 
              lowest,
              total;

  //Prompt user for amount sold per salsa type
  for (int i = 0; i < 5; ++i)
  {
    int sales;
    std::cout << "Enter number of " << salsaTypes[i] << " jars sold: ";
    std::cin >> sales;
    salsaSales[i] = sales;
  }

  //Display results
  std::cout << "\nSales Report" << std::endl;
  std::cout << "----------------" << std::endl;
  for (int i = 0; i < 5; ++i)
  {
    //Initialize highest and lowest trackers
    if (i == 0)
    {
      highest = salsaSales[i];
      lowest = salsaSales[i];
      highMonth = salsaTypes[i];
      lowMonth = salsaTypes[i];
    }

    std::cout << salsaTypes[i] << " Sold: " << salsaSales[i] <<std::endl;

    //Increment total sold tracker
    total += salsaSales[i];

    //Track highest and lowest
    if (salsaSales[i] > highest)
    {
      highest = salsaSales[i];
      highMonth = salsaTypes[i];
    }
    if (salsaSales[i] < lowest)
    {
      lowest = salsaSales[i];
      lowMonth = salsaTypes[i];
    }
  }
  //Display highest, lowest, and total
  std::cout << "\nMost sold: " << highMonth << std::endl;
  std::cout << "Least sold: " << lowMonth << std::endl;
  std::cout << "Total sold: " << total << std::endl;
}