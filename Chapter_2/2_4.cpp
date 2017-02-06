/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 6, 2017
**
** Challenge: Write a program that computes the tax and tip on a 
** restaurant bill for a patron with a $44.50 meal charge. The tax 
** should be 6.75 percent of the meal cost. The tip should be 15
** percent of the total after adding the tax. Display the meal cost,
** tax amount, tip amount, and total bill on the screen.
*********************************************************************/
#include <iostream>

int main()
{ 
  //Initialize and define variables
  double mealCharge = 44.50,
         salesTax = mealCharge * .0675,
         tipAmount = (mealCharge + salesTax) * .15,
         totalBill = mealCharge + salesTax + tipAmount;

  //Display totals
  std::cout << "Meal charge: $" << mealCharge << "\n";
  std::cout << "Sales tax: $" << salesTax << "\n";
  std::cout << "Tip amount: $" << tipAmount << "\n";
  std::cout << "Total bill: $" << totalBill << "\n";
}