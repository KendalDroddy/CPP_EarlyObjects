/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 12, 2017
**
** Challenge: The monthly payment on a loan may be calculated by the 
** following formula: Payment = (Rate * (1 + Rate)^N)/(1+Rate)^N-1
**    • Rate is the monthly interest rate, which is the annual 
        interest rate divided by 12. (A 12 percent annual interest 
        would be 1 percent monthly interest.)
**    • N is the number of payments • L is the amount of the loan.
** Write a program that asks for these values and displays a report
** to the user.
*********************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

int main()
{
  //Define variables
  double loanAmount,
         annualRate,
         numberPayments,
         monthlyPayment,
         monthlyRate,
         amountPaidBack,
         interestPaid;

  //Get user input
  cout << "Enter your loan amount: $";
  cin >> loanAmount;
  cout << "Enter your interest rate: ";
  cin >> annualRate;
  cout << "Enter your number of payments: ";
  cin >> numberPayments;

  //Calculate results
  monthlyRate = annualRate / 12;
  monthlyPayment = (((monthlyRate / 100) * std::pow(1 + (monthlyRate / 100), numberPayments)) / 
                   (std::pow(1 + (monthlyRate / 100), numberPayments) - 1)) * loanAmount;
  amountPaidBack = monthlyPayment * numberPayments;
  interestPaid = amountPaidBack - loanAmount;
  //Display results
  cout << std::fixed << std::showpoint << std::setprecision(2);
  cout << "Loan Amount:            $" << std::setw(8) << loanAmount << endl;
  cout << "Monthly Interest Rate:   " << std::setw(7) << monthlyRate << "\%" << endl;
  cout << "Number of Payments:      " << std::setw(8) << numberPayments << endl;
  cout << "Monthly Payment:        $" << std::setw(8) << monthlyPayment << endl;
  cout << "Amount Paid Back:       $" << std::setw(8) << amountPaidBack << endl;
  cout << "Interest Paid:          $" << std::setw(8) << interestPaid << endl;

}