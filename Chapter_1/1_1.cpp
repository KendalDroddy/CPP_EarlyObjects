/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 4, 2017
**
** Challenge: Write a program that calculates how much a student
** organization earns during its fund-raising candy sale. The program
** should prompt the user to enter the number of candy bars sold and
** the amount the organization earns for each bar sold. It should
** then calculate and display the total amount earned.
*********************************************************************/
#include <iostream>

int main()
{
	int candyBarsSold;
	float earningsPerBar,
		    totalEarnings;

	//Get bars sold
	std::cout << "How many candy bars did your organization sell? ";
	std::cin >> candyBarsSold;

	//Get earnings
	std::cout << "How much profit is made per candy bar? ";
	std::cin >> earningsPerBar;

	//Calcuate and display total earnings
	totalEarnings = candyBarsSold * earningsPerBar;
	std::cout << "Your organization earned a total of $" << totalEarnings << std::endl;
}