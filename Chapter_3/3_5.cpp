/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 8, 2017
**
** Description: Write a program to find a baseball player's batting
** average. The program should ask the user to enter the number of
** times the player was at bat and the number of hits earned. It 
** should then display the batting average to four decimal places.
*********************************************************************/
#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::cin;

int main()
{
  //Initialize variables
  int    atBat, 
         hits;
  double battingAverage;

  //Accept user input
  cout << "Please enter how many times you were at bat." << endl;
  cin >> atBat;
  cout << "How many hits did you earn?" << endl;
  cin >> hits;

  //Calculate batting average
  battingAverage = (double) hits / atBat;

  //Print result to four decimal places
  cout << "Your batting average is: " << std::setprecision(4) << std::fixed << battingAverage << endl;

  return 0;
}

