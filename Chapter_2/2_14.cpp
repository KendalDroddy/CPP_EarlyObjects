/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 7, 2017
**
** Challenge: The star player of a high school basketball team is 74
** inches tall. Write a program to compute and display the height in 
** feet/inches form.
*********************************************************************/
#include <iostream>
using std::cout;
using std::endl;

int main()
{
  //Initialize and define variables
  int playerHeight = 74,
      playerFeet = playerHeight / 12,
      playerInches = playerHeight % 12;

  //Display results
  cout << "The basketball players height is: " << playerFeet << "\' "; 
  cout << playerInches << "\"" << endl;
}