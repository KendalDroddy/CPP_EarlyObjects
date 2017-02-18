/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 18, 2017
**
** Challenge: Write a program that asks for the names of three runners
** and the time it took each of them to finish a race. The program
** should then display who came in first, second, and third place.
*********************************************************************/
#include <iostream>

int main()
{
	//Declare variables
	std::string runnerOne,
				runnerTwo,
				runnerThree;
	double timeOne,
		   timeTwo,
		   timeThree;

	//Get runner names
	std::cout << "Enter name of first runner: ";
	std::getline(std::cin, runnerOne);
	std::cout << "Enter name of second runner: ";
	std::getline(std::cin, runnerTwo);
	std::cout << "Enter name of third runner: ";
	std::getline(std::cin, runnerThree);

	//Get runner times with input validation after each
	std::cout << "Enter time for " << runnerOne << ": ";
	std::cin >> timeOne;
	if (timeOne < 0)
	{
		std::cout << "Run the program again with valid input." << std::endl;
		return 0;
	}
	std::cout << "Enter time for " << runnerTwo << ": ";
	std::cin >> timeTwo;
	if (timeTwo < 0)
	{
		std::cout << "Run the program again with valid input." << std::endl;
		return 0;
	}
	std::cout << "Enter time for " << runnerThree << ": ";
	std::cin >> timeThree;
	if (timeThree < 0)
	{
		std::cout << "Run the program again with valid input." << std::endl;
		return 0;
	}

	//Compare input and display results in ascending order
	if (timeOne < timeTwo && timeOne < timeThree)
	{
		std::cout << "1. " << runnerOne << ": " << timeOne << std::endl;
		if (timeTwo < timeThree)
		{
			std::cout << "2. " << runnerTwo << ": " << timeTwo << std::endl;
			std::cout << "3. " << runnerThree << ": " << timeThree << std::endl;
		}
		else
		{
			std::cout << "2. " << runnerThree << ": " << timeThree << std::endl;
			std::cout << "3. " << runnerTwo << ": " << timeTwo << std::endl;
		}
	}
	if (timeTwo < timeOne && timeTwo < timeThree)
	{
		std::cout << "1. " << runnerTwo << ": " << timeTwo << std::endl;
		if (timeOne < timeThree)
		{
			std::cout << "2. " << runnerOne << ": " << timeOne << std::endl;
			std::cout << "3. " << runnerThree << ": " << timeThree << std::endl;
		}
		else
		{
			std::cout << "2. " << runnerThree << ": " << timeThree << std::endl;
			std::cout << "3. " << runnerOne << ": " << timeOne << std::endl;
		}
	}
	if (timeThree < timeTwo && timeThree < timeOne)
	{
		std::cout << "1. " << runnerThree << ": " << timeThree << std::endl;
		if (timeTwo < timeOne)
		{
			std::cout << "2. " << runnerTwo << ": " << timeTwo << std::endl;
			std::cout << "3. " << runnerOne << ": " << timeOne << std::endl;
		}
		else
		{
			std::cout << "2. " << runnerOne << ": " << timeOne << std::endl;
			std::cout << "3. " << runnerTwo << ": " << timeTwo << std::endl;
		}
	}













}