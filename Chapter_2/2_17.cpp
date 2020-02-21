/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 7, 2017
**
** Challenge: The Earth's ocean levels have risen an average of 1.8mm
** per year over the past century. Write a program that computes and
** displays the number of centimeters and number of inches the oceans
** rose during that time. 
*********************************************************************/
#include <iostream> 
using std::cout;
using std::endl;

int main()
{
  //Initialize and define variables
  double mmYear = 1.8,
         cmYear = mmYear * .1,
         inYear = cmYear * 0.3937;

  //Display results
  cout << "In the past century the earth's ocean levels have risen by: " << cmYear * 100 << " centimeters\n";
  cout << "In the past century the earth's ocean levels have risen by: " << inYear * 100 << " inches\n";
}