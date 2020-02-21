/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 7, 2017
**
** Challenge: The average July high temp is 85 degrees Fahrenheit in
** New York City, 88 F in Denver, and 106 F in Phoenix. Write a 
** program that calculates and reports what the new average high July
** temperature would be for each of these cities if temps rise by
** two percent.
*********************************************************************/
#include <iostream> 
using std::cout;
using std::endl;

int main()
{
  //Initialize and define variables
  int newYork = 85,
      denver = 88,
      phoenix = 106;
  double tempIncrease = 1.02; //Multiplier which will increase temp by 2 percent

  //Display results
  cout << "\n";
  cout << "2 percent increase to the average high July temp\n";
  cout << "------------------------------------------------\n";
  cout << "       New York City:  85 --> " << newYork * tempIncrease << endl;
  cout << "              Denver:  88 --> " << denver * tempIncrease << endl;
  cout << "             Phoenix: 106 --> " << phoenix * tempIncrease << endl;
  cout << "\n\n";
}