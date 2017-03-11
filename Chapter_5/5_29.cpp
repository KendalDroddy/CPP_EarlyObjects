/*********************************************************************
** Author: Kendal Droddy
**
** Date: March 10, 2017
**
** Challenge: Modify program 5_25 so that it writes the report to
** a file.
*********************************************************************/
#include <iostream>
#include <iomanip>
#include <fstream>

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
  std::ofstream outputFile;

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

  //Open the output file
  outputFile.open("savingsReport.txt");

  //Report header
  outputFile <<"\n----------------------------------------\n"
                "*        Savings Account Report        *\n"
                "----------------------------------------" << std::endl;
  //Set output format
  outputFile << std::fixed << std::showpoint << std::setprecision(2);
  outputFile << "Starting balance: $" << startingBalance << std::endl;
  outputFile << "Total deposits  : $" << totalDeposits << std::endl;
  outputFile << "Total withdraws : $" << totalWithdraws << std::endl;
  outputFile << "Total interest  : $" << totalInterest << std::endl;
  outputFile << "Final balance   : $" << totalBalance << std::endl;

  //Closing output file
  outputFile.close();
}