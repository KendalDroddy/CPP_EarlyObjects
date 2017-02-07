/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 7, 2017
**
** Challenge: During the past decade ocean levels have been rising
** faster than in the past, an average of approximately 3.1mm per yr.
** Write a program that computes how much ocean levels are expected
** to rise during the next 15 years if they continue rising at this
** rate. Display the answer in both centimeters and inches.
*********************************************************************/
#include <iostream> 
using std::cout;
using std::endl;

int main()
{
  //Initialize and define variables
  double mmYear = 3.1,
         cmYear = mmYear * .1,
         inYear = cmYear * 0.3937;

  //Display results
  cout << "Over the next 15 years ocean levels will rise: " << cmYear * 15 << " centimeters\n";
  cout << "Over the next 15 years ocean levels will rise: " << inYear * 15 << " inches\n";
}