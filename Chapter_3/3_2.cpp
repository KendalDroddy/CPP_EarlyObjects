/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 8, 2017
**
** Description: There are three seating categories at a stadium. For
** a softball game, Class A seats cost $15, Class B seats cost $12,
** and Class C seats cost $9. Write a program that asks how many 
** tickets for each class of seats were sold, then displays the amount
** of income generated from ticket sales. Format your dollar amount
** in a fixed-point notation with two decimal points and make sure
** the decimal point is always displayed.
*********************************************************************/
#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::cin;

const int A_TICKETS = 15;
const int B_TICKETS = 12;
const int C_TICKETS = 9;

int main()
{
  //Initialize variables
  int quantityA, quantityB, quantityC;
  double totalCost;

  //Accept user input
  cout << "How many class A tickets were purchased?" << endl;
  cin >> quantityA;
  cout << "How many class B tickets were purchased?" << endl;
  cin >> quantityB;
  cout << "How many class C tickets were purchased?" << endl;
  cin >> quantityC;

  //Calculate total cost
  totalCost = ((double) (quantityA * A_TICKETS) + (quantityB * B_TICKETS) + (quantityC * C_TICKETS));

  //Print result
  cout << "Your total cost is: " << std::setprecision(2) << std::fixed << totalCost << endl;

  return 0;
}