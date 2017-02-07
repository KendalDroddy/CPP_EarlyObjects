/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 7, 2017
**
** Challenge: Kathryn bought 750 shares of stock at a price of $35.00
** per share. A year later she sold them for just $31.15 per share.
** Write a program that calculates and displays the following:
**    * The total amount paid for the stock
**    * The total amount received from selling the stock
**    * The total amount of money she lost
*********************************************************************/
#include <iostream>
using std::cout;
using std::endl;

int main()
{
  //Initialize and define variables
  int shareAmount = 750;
  double purchasePrice = 35.00,
         sellPrice = 31.15;

  //Display results
  cout << "Total amount paid for shares: " << shareAmount * purchasePrice << endl;
  cout << "Total amount from selling shares: " << shareAmount * sellPrice << endl;
  cout << "Total amount lost: " << (shareAmount * purchasePrice) - (shareAmount * sellPrice) << endl;
}