/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 6, 2017
**
** Challenge: One acre of land is equivalent to 43,450 square feet.
** Write a program that calculates and displays the number of acres
** in a tract of land whose size is 869 X 360 feet.
*********************************************************************/
#include <iostream>

int main()
{
  int acre = 43450;
  double landTract = 869 * 360,
         acresTract = landTract / acre;

  //Display results
  std::cout << "Total acreage in an 869 ft X 360 ft tract: " << acresTract << std::endl;
}