/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 4, 2017
**
** Challenge: Write a program that calculates how much a garden center
** spent to make a flower garden display. The program should prompt
** the user to enter the cost of the soil, the flower seeds, and the
** fence. It should then calculate and display the total amount spent.
*********************************************************************/
#include <iostream>

int main()
{
	double soilCost,
		   seedCost,
		   fenceCost,
		   totalCost;

	//Get soil cost
	std::cout << "How much did you spend on soil? ";
	std:: cin >> soilCost;

	//Get seed cost
	std::cout << "How much did you spend on seeds? ";
	std::cin >> seedCost;

	//Get fence cost
	std::cout << "How much did you spend on fencing? ";
	std::cin >> fenceCost;

	//Calculate and display total cost
	totalCost = soilCost + seedCost + fenceCost;
	std::cout << "Your cost for the garden center totals $" << totalCost << std::endl;
}