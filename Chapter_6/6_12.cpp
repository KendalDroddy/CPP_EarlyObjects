/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 21, 2017
**
** Challenge: Suppose you have a certain amount of money in a savings
** account and you want to calculate the amount you will have after
** a specific number of months. The formula is F = P * (1+i)^t, where:
**    P is the present value in the account.
**    F is the future value that you want in the account.
**    i is monthly interest rate.
**    t is number of months.
** Write a program with a function named futureValue that performs
** this calculation. 
*********************************************************************/
#include <iostream>
#include <cmath>

//Function prototype
double futureValue(double, double, int);

int main()
{
  //Variables
  double fValue,
         interestRate,
         months,
         pValue;

  //Get user input
  std::cout << "\nEnter your account's present value: $";
  std::cin >> pValue;
  std::cout << "Enter your current monthly interest rate: ";
  std::cin >> interestRate;
  std::cout << "Enter the number of months your will leave the money in the account: ";
  std::cin >> months;

  //Convert interestRate to decimal
  interestRate /= 100;

  //Pass values to futureValue function and display results
  fValue = futureValue(pValue, interestRate, months);
  std::cout << "\nIn " << months << " months you will have $" << fValue << "." << std::endl;
}

/*********************************************************************
**                        futureValue()
** Accepts future value, annual interest rate, and number of years as
** arguments. Calculates and returns the present value.
*********************************************************************/
double futureValue(double pValue, double intRate, int months)
{
  return pValue * std::pow((1 + intRate) , months);
}