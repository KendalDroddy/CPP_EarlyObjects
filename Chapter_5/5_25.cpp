/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 10, 2017
**
** Description: Write a program that calculates the balance of a 
** savings account at the end of a three-month period. It should ask 
** the user for the starting balance and the annual interest rate. A 
** loop should then iterate once for every month in the period, 
** performing the following steps:
** 	A) Ask for total deposited that month and add to balance
**	B) Ask for total withdrawn that month and subtract from balance.
**  C) Calculate interest for month and add amount to balance.
** After the last iteration, display a report of the information.
*********************************************************************/
#include <iostream>
#include <iomanip>

int main()
{
  //Variables
  double startingBalance,
  			 monthlyBalance,
  			 monthlyWithdraw,
  			 totalBalance,
  			 totalDeposits,
  			 totalWithdraws,
  			 totalInterest,
  			 monthlyInterest,
         annualRate,
         monthlyRate;

  //Program header
  std::cout <<"\n----------------------------------------\n"
                "*      Savings Account Calculator      *\n"
                "----------------------------------------" << std::endl;

  //Get user input
  std::cout << "Enter your starting balance: $";
  std::cin >> startingBalance;
  totalBalance += startingBalance;
  std::cout << "Enter your yearly interest rate: ";
  std::cin >> annualRate;

  //Calculate monthly interest rate
  monthlyRate = (annualRate / 100) / 12;

  //Get user input for each month
  for (int i = 0; i < 3; ++i)
  {
  	//Get amount deposited this month - do not accept negative numbers
  	do
  	{
  		std::cout << "Amount deposited during month " << i + 1 << ": $";
  		std::cin >> monthlyBalance;
  	}while(monthlyBalance < 0);

  	//Add monthly balance to total balance
  	totalBalance += monthlyBalance;
  	totalDeposits += monthlyBalance;
  	double temp = totalBalance;

  	//Get amount withdrawn this month - do not accept negative numbers
  	//or an amount larger than total balance
  	do
  	{
  		std::cout << "Amount withdrawn during month " << i + 1 << ": $";
  		std::cin >> monthlyWithdraw;
  	}while(monthlyWithdraw < 0 || monthlyWithdraw > totalBalance);

  	//Deduct withdraw amount from total balance
  	totalBalance -= monthlyWithdraw;
  	totalWithdraws += monthlyWithdraw;

  	//Calculate interest for the month
  	monthlyInterest = ((temp + totalBalance) / 2) * monthlyRate;
  	totalBalance += monthlyInterest;
  	totalInterest += monthlyInterest;
  }

  //Report header
  std::cout <<"\n----------------------------------------\n"
                "*        Savings Account Report        *\n"
                "----------------------------------------" << std::endl;
  //Set output format
  std::cout << std::fixed << std::showpoint << std::setprecision(2);
  std::cout << "Starting balance: $" << startingBalance << std::endl;
  std::cout << "Total deposits  : $" << totalDeposits << std::endl;
  std::cout << "Total withdraws : $" << totalWithdraws << std::endl;
  std::cout << "Total interest  : $" << totalInterest << std::endl;
  std::cout << "Final balance   : $" << totalBalance << std::endl;
}