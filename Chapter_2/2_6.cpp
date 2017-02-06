/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 6, 2017
**
** Challenge: A car with a 20 gallon gas tank averages 23.5 miles per
** gallon when driven in town and 28.9 miles per gallon when driven
** on the highway. Write a program that calculates and displays the 
** number of miles the car can travel on one tank of gas when driven
** in town and on the highway.
*********************************************************************/
#include <iostream>

int main()
{
  //Initialize and define variables
  int tankCapacity = 20;
  double cityMileage = 23.5,
         highwayMileage = 28.9,
         cityDistance = tankCapacity * cityMileage,
         highwayDistance = tankCapacity * highwayMileage;

  //Display results
  std::cout << "Distance your car can travel in the city: " << cityDistance << " miles \n";
  std::cout << "Distance your car can travel on the highway " << highwayDistance << " miles" << std::endl;
}