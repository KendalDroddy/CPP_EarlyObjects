/*********************************************************************
** Author: Kendal Droddy
**
** Date: February 23, 2017
**
** Challenge: Write a program with a loop that lets the user enter a 
** series of integers, followed by -99 to signal the end of the 
** series. After all the numbers have been entered, the program 
** should display the largest and smallest numbers entered .
*********************************************************************/
#include <iostream>

int main()
{
  //Declare variables
 	int value,
 			maxInteger,
 			minInteger;

 	//Get user input
 	std::cout << "\nEnter a series of integers followed by\n";
 	std::cout << "-99 when you're done. This program will\n";
 	std::cout << "return the largest and smallest value entered.\n" << std::endl;

 	//Get input to initialize min and max values
 	std::cout << "Enter an integer: ";
 	std::cin >> value;
 	maxInteger = value;
 	minInteger = value;

 	//User input loop
 	while(value != -99)
 	{
 		std::cout << "Enter an integer: ";
 		std::cin >> value;
 		if (value < minInteger)
 		{
 			minInteger = value;	
 		}
 		if (value > maxInteger)
 		{
 			maxInteger = value;
 		}
 	}

 	//Display results
 	std::cout << "Max value: " << maxInteger << std::endl;
 	std::cout << "Min value: " << minInteger << std::endl;
}