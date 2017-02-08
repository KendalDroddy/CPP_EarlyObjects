/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 7, 2017
**
** Challenge: Write a program that calculates a car's gas mileage.
** This program should ask the user to enter the number of gallons of
** gas the car can hold and the number of miles it can be driven on 
** a full tank. It should then calculate and display the number of 
** miles per gallon the car gets.
*********************************************************************/
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
  //Initialize variables
  int gallons, 
      miles;
  double mpg;

  //User input
  cout << "How many gallons of gas can your car hold? " << endl;
  cin >> gallons;
  cout << "How many miles can be driven on a full tank?" << endl;
  cin >> miles;

  //Calculate miles per gallon; 
  mpg = (double) miles/gallons;
  
  //Display results
  cout << "Your car gets " << mpg << " miles per gallon." << endl;

  return 0;
}