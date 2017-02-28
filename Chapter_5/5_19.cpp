/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 27, 2017
**
** Challenge: Write a program that calculates the occupancy rate of 
** the 120 suites (20 per floor) located on the top six floors of a 
** 15-story luxury hotel. These are floors 10-12 and 14-16 because, 
** like many hotels , there is no 13th floor. Solve the problem by 
** using a single loop that iterates once for each floor between 10 
** and 16 and, on each iteration, asks the user to input the number 
** of suites occupied on that floor. Use a nested loop to validate 
** that the value entered is between O and 20. After all the 
** iterations, the program should display how many suites the hotel 
** has, how many of them are occupied, and what percentage of them 
** are occupied.
*********************************************************************/
#include <iostream>

int main()
{
  //Declare variables
  int const MAX_SUITES = 120;

  int suitesOnFloor,
      occupiedSuites = 0;
  double percentOccupied;

  //Loop through each floor
  for (int i = 10; i <=16; i++)
  {
    if (i == 13) //13th floor does not exist so skip it
    {
      continue;
    }

    do //Validate that there are 0 - 20 suites per floor
    {
      std::cout << "Enter the number of suites on floor " << i << ": ";
      std::cin >> suitesOnFloor;
    }while(suitesOnFloor < 0 || suitesOnFloor > 20); 

    occupiedSuites = occupiedSuites + suitesOnFloor; //Add suites per floor to total
  }
  //Set percentage and cast to double
  percentOccupied = (static_cast<double>(occupiedSuites) / MAX_SUITES) * 100;

  //Display results
  std::cout << "\nTotal suites in the hotel: " << MAX_SUITES << std::endl
            << "Total suites occupied in hotel: " << occupiedSuites << std::endl
            << "Percentage of suites occupied: "  << percentOccupied << "\%" << std::endl;
}