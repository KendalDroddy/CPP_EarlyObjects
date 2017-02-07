/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 7, 2017
**
** Challenge: A particular employee earns $39,000 annually. Write a 
** program that determines and displays what the amount of his gross
** pay will be for each pay period if he is paid twice a month (24 
** checks per year) and if he is paid bi-weekly.
*********************************************************************/
#include <iostream> 
using std::cout;
using std::endl;

int main()
{
  //Initialize and define variables
  int annualPay = 39000,
      twiceMonthly = annualPay/24,
      biweekly = annualPay/26;

  //Display results
  cout << "If paid twice monthly, each check will total $" << twiceMonthly << endl;
  cout << "If paid biweekly, each check will total $" << biweekly << endl;

}
