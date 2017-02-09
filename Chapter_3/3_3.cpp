/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 8, 2017
**
** Description: Write a program that askes the user to enter their
** monthly costs for each of the following housing-related expenses:
** Rent, utilities, phone, and cable. The program should then display
** the total monthly cost of these expenses and the total annual cost
** of these expenses.
*********************************************************************/
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
  //Define variables
  double rent,
         phone,
         utilities,
         cable,
         monthlyCost,
         yearlyCost;

  //Get user input       
  cout << "Please provide your monthly cost for the following: " << endl;
  cout << "Rent: $";
  cin >> rent;
  cout << "Phone: $";
  cin >> phone;
  cout << "Utilities: $";
  cin >> utilities;
  cout << "Cable: $";
  cin >> cable;

  //Calculate and display montly cost
  monthlyCost = rent + phone + utilities + cable;
  cout << "Your monthly expenses total: $" << monthlyCost << endl;

  //Calculate and display yearly cost
  yearlyCost = monthlyCost * 12; 
  cout << "Your yearly expenses total: $" << yearlyCost << endl;

  return 0;
}