/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 21, 2017
**
** Challenge: Given the formula P = F/(1+r)^n, the terms are:
**    P is the present value, or amount you need to deposit today.
**    F is the future value that you want in the account.
**    r is annual interest rate.
**    n is number of years the money will sit in the account.
** Write a program with a function named presentValue that performs
** this calculation. 
*********************************************************************/
#include <iostream>
#include <cmath>

//Function prototype
double presentValue(double, double, int);

int main()
{
  //Variables
  double futureValue,
         interestRate,
         years,
         pValue;

  //Get user input
  std::cout << "\nEnter your desired future value: $";
  std::cin >> futureValue;
  std::cout << "Enter your current interest rate: ";
  std::cin >> interestRate;
  std::cout << "Enter the number of years your will leave the money in the account: ";
  std::cin >> years;

  //Convert interestRate to decimal
  interestRate /= 100;

  //Pass values to presentValue function and display results
  pValue = presentValue(futureValue, interestRate, years);
  std::cout << "\nIn order to have $" << futureValue << " in " << years << "\n"
            << "years you need to deposit $" << pValue << " today." << std::endl;
}

/*********************************************************************
**                        presentValue()
** Accepts future value, annual interest rate, and number of years as
** arguments. Calculates and returns the present value.
*********************************************************************/
double presentValue(double fValue, double intRate, int years)
{
  return fValue/std::pow((1 + intRate) , years);
}