/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 6, 2017
**
** Challenge: In the United States land is often measured in square
** feet. In many other countries it is measured in meters. One acre
** of land is equivalent to 43,560 square feet. A square meter is
** equivalent to 10.7639 square feet. Write a program that computes
** and displays the number of square feet and the number of square
** meters in .5 acre of land.
*********************************************************************/
#include <iostream>

int main()
{
  //Initialize and define variables
  int acre = 43450;
  double sqMeter = 10.7639;

  //Display results
  std::cout << "Half an acre of land is equivalent to " << acre * .5 << " feet or " << acre/sqMeter;
  std::cout << " meters" << std::endl;
}