/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 4, 2017
**
** Challenge: Write a program that calculates how much a Little 
** League baseball team spent last year to purchase new baseballs.
** The program should prompt the user to enter the number of 
** baseballs purchased and the cost of each baseball. It should then
** calculate and display the total amount spent to purchase them.
*********************************************************************/
#include <iostream>

int main()
{
	int baseballsPurchased;
	double costPerBall,
		   totalCost;

	//Get baseballs purchased
	std::cout << "How many baseballs did your team purchaes? ";
	std::cin >> baseballsPurchased;

	//Get cost per ball
	std::cout << "How much did each baseball cost? ";
	std::cin >> totalCost;

	//Calcuate and display total earnings
	totalCost = baseballsPurchased * totalCost;
	std::cout << "Your cost for new baseballs totals $" << totalCost << std::endl;
}